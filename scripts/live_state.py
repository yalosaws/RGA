"""按已绑定字节码布局采集计算输入；不执行目标进程代码。"""
import json
import math
from pathlib import Path
import struct
import time

from avm2_memory import Avm2Reader, UnstableRead


class CachedMemory:
    """每次采样独立的页缓存；仅保存在内存中，避免重复读取同一对象。"""
    def __init__(self, memory):
        self.memory = memory
        self.pointer_size = memory.pointer_size
        self.pages = {}
        self.used_pages = set()
        self.prefetched = set()  # 两次 guard 之间实际复制到的页

    def modules(self):
        return self.memory.modules()

    def prefetch(self, pages):
        pages = sorted(pages)
        index = 0
        while index < len(pages):
            end = index + 1
            while end < len(pages) and pages[end] == pages[end-1] + 4096 and end-index < 16:
                end += 1
            data = self.memory.read(pages[index], (end-index)*4096)
            if len(data) == (end-index)*4096:
                for offset, page in enumerate(pages[index:end]):
                    self.pages[page] = data[offset*4096:(offset+1)*4096]
                    self.prefetched.add(page)
            else:
                # 整段读不全时逐页补读，仍在 guard 窗口内；读不到的页留给 cold_pages 判定。
                for page in pages[index:end]:
                    data = self.memory.read(page, 4096)
                    if len(data) == 4096:
                        self.pages[page] = data
                        self.prefetched.add(page)
            index = end

    def read(self, address, size):
        cancellation = getattr(self.memory, 'cancel', None)
        if cancellation is not None and cancellation.is_set():
            raise InterruptedError('实时读取已停止')
        result = bytearray()
        while size:
            page = address & ~4095
            self.used_pages.add(page)
            if page not in self.pages:
                self.pages[page] = self.memory.read(page, 4096)
            data = self.pages[page]
            offset = address - page
            take = min(size, 4096 - offset)
            if len(data) < offset + take:
                return b''
            result.extend(data[offset:offset + take])
            address += take
            size -= take
        return bytes(result)


class StateCapture:
    STATIC_CLASSES = ('8G', '#!!', '&c', 'PlayFab', 'TimeServer', "'!o", '+"0')
    COLLECTIONS = {'buildings': (0x9c, 'Vector.<`!;>'), 'upgrades': (0xa0, 'Vector.<`6>'),
                   'spells': (0x98, 'Vector.<84>'), 'trophies': (0xa4, 'Vector.<#!`>')}

    def __init__(self, probe, layouts, calculation_classes=None):
        self.probe = probe
        self.layouts = layouts
        self.known_pages = set()
        self.field_cache = {}
        self.classes = {'8G': probe.root}
        r = probe.reader
        relevant = set(calculation_classes or ()) | set(self.STATIC_CLASSES)
        relevant.update(self.rbase_classes())
        wanted = {name + '$': name for name in relevant if name in layouts and any(
            not field['constant'] and field['name'] != 'id' for field in layouts[name]['static'])}
        wanted['Starling$'] = 'Starling'
        self.clock_class = None
        hits, _ = probe.memory.scan({'class': probe.memory.read(probe.root, 4)}, maximum=15000)
        for address in hits['class']:
            try:
                name = r.type_name(address)
            except (ValueError, UnicodeError):
                continue
            if name in wanted:
                real = wanted[name]
                if real == 'Starling':
                    if self.clock_class is not None and self.clock_class != address:
                        raise UnstableRead('帧时钟类未唯一定位')
                    self.clock_class = address
                    continue
                if real in self.classes and self.classes[real] != address:
                    raise UnstableRead('计算类未唯一定位：' + real)
                self.classes[real] = address
        if not set(self.STATIC_CLASSES) <= set(self.classes):
            raise UnstableRead('缺少计算上下文类：' + ','.join(set(self.STATIC_CLASSES) - set(self.classes)))
        if self.clock_class is None:
            raise UnstableRead('未找到客户端帧时钟')
        missing = set(wanted.values()) - set(self.classes) - {'Starling'}
        if missing:
            raise UnstableRead('部分计算缓存类未定位：' + ','.join(sorted(missing)))

    def frame_clock(self, reader):
        field = next(f for f in self.layouts['Starling']['static'] if f['name'] == 'sCurrent')
        instance = reader.pointer(self.clock_class + field['offset'])
        reader.identify(instance, {'Starling'})
        offset = next(f['offset'] for f in self.layouts['Starling']['instance'] if f['name'] == 'mLastFrameTimestamp')
        value = struct.unpack('<d', reader.read(instance+offset, 8))[0]
        if not math.isfinite(value) or not 0 <= value < 2**31:
            raise UnstableRead('客户端帧时钟无效')
        return value

    def rbase_classes(self):
        names = set()
        r = self.probe.reader
        for offset, kind in self.COLLECTIONS.values():
            for address in r.object_vector(r.pointer(self.probe.root + offset), kind, maximum=8192):
                name = r.type_name(address)
                while name in self.layouts and name not in names:
                    names.add(name)
                    name = self.layouts[name]['base']
        return names

    def fields(self, name):
        if name in self.field_cache:
            return self.field_cache[name]
        original = name
        result = []
        seen = set()
        while name != 'Object':
            if name not in self.layouts or name in seen:
                raise UnstableRead('类继承布局未确认：' + name)
            seen.add(name)
            definition = self.layouts[name]
            if 'instance' not in definition:
                raise UnstableRead('实例布局未确认：' + name)
            result = definition['instance'] + result
            name = definition['base']
        self.field_cache[original] = result
        return result

    def guard(self):
        r = self.probe.reader
        root = self.probe.root
        r.identify(root, {'8G$'})
        instance_offset = next(field['offset'] for field in self.layouts['8G']['static'] if field['name'] == '>!a')
        instance = r.pointer(root + instance_offset)
        counters = [field['offset'] for field in self.layouts['8G']['instance'] if field['name'] in ('#!6', '#"L')]
        return (instance, r.read(root, self.layouts['8G']['static_end']),
                r.secure_number(r.pointer(root+0xe0), (100,100)),
                r.secure_number(r.pointer(root+0x108), (50,10)),
                tuple(r.pointer(instance+offset) for offset in counters), self.frame_clock(r))

    def stable_capture(self, maximum=12):
        previous = None
        for attempt in range(maximum):
            result = self.capture()
            if result['copy_consistent'] and result['cold_pages'] == 0:
                if not result['skipped']:
                    result['attempts'] = attempt+1
                    return result
                # 同一帧内一致、却连续两次跳过同样的字段：是解析不支持，不是游戏在变，重试无用。
                skipped = sorted((row['owner'], row['field'], row['reason']) for row in result['skipped'])
                if skipped == previous:
                    owner, field, reason = skipped[0]
                    raise UnstableRead('有计算字段无法解析（%s.%s：%s，共 %d 项）' % (owner, field, reason, len(skipped)))
                previous = skipped
        raise UnstableRead('游戏状态正在连续变化，未取得完整计算快照，请重试')

    @staticmethod
    def number(value):
        if not math.isfinite(value):
            return {'$number': 'nan' if math.isnan(value) else 'inf' if value > 0 else '-inf'}
        return value

    def atom(self, value, depth):
        if value == 4:
            return None
        if value == 0:
            return {'$undefined': True}
        if value & 7 == 5:
            if value not in (5, 13):
                raise UnstableRead('布尔 Atom 不符')
            return value == 13
        if value & 7 in (6, 7):
            number = struct.unpack('<d', self.r.read(value & ~7, 8))[0] if value & 7 == 7 else self.r.atom_number(value)
            return self.number(number)
        if value & 7 == 2:
            return self.r.string(value & ~7, limit=4096)
        if value & 7 == 1:
            return self.object(value & ~7, depth + 1)
        raise UnstableRead('尚未解析的 Atom 类型')

    def vector(self, address, name, depth):
        before = self.r.words(address, 10)
        length = before[9] if name in ('Vector.<Number>', 'Vector.<int>', 'Vector.<uint>') else before[8]
        if length > 131072:
            raise UnstableRead('计算向量长度超限')
        if length == 0:
            return []
        if name in ('Vector.<Number>', 'Vector.<int>', 'Vector.<uint>'):
            fmt, width = ('d', 8) if name == 'Vector.<Number>' else ('i', 4) if name == 'Vector.<int>' else ('I', 4)
            data_offset = 8 if width == 8 else 4
            size = data_offset + length * width
            data = b''.join(self.r.read(before[7]+offset, min(65536, size-offset)) for offset in range(0,size,65536))
            capacity = struct.unpack_from('<I', data)[0]
            if capacity < length or capacity > 262144:
                raise UnstableRead('数值向量容器无效')
            return [self.number(value) for value in struct.unpack_from('<%d%s' % (length, fmt), data, data_offset)]
        data = self.r.words(before[7], length + 2)
        if not self.r.is_air_pointer(data[0]) or data[1] < length:
            raise UnstableRead('对象向量容器无效')
        return [self.atom(value, depth + 1) for value in data[2:]]

    def object(self, address, depth=0):
        if address == 0:
            return None
        if depth > 8:
            raise UnstableRead('计算对象引用过深')
        if address in self.refs:
            return {'$ref': self.refs[address]}
        name = self.r.type_name(address)
        if name in ('4l', '3F', '=!L'):
            return {'$secure': name, 'value': self.r.secure_number(address, expected_type=name)}
        if name == 'Array':
            # ArrayObject: InlineHashtable(8), AtomList(data,length), denseStart/used/length.
            words = self.r.words(address, 10)
            pointer, length, start, used, total = words[5:10]
            if start != 0 or length != total or used != total or total > 8192:
                raise UnstableRead('暂不解析稀疏数组')
            if total == 0:
                return []
            try:
                data = self.r.words(pointer, total + 2)
            except ValueError as error:
                raise UnstableRead('数组缓冲区读取失败（长度 %d，指针标记 %d）' % (total, pointer & 7)) from error
            if not self.r.is_air_pointer(data[0]) or data[1] < total:
                raise UnstableRead('数组容器不符')
            return [self.atom(atom, depth + 1) for atom in data[2:]]
        if name.startswith('Vector.<'):
            return self.vector(address, name, depth)
        if name == 'Object':
            header = self.r.words(address, 6)
            log = header[5] >> 27
            if header[4] & ~7 == 0:
                return {'$object': {}}
            if not 2 <= log <= 15:
                raise UnstableRead('动态计算对象容量超限')
            atoms = self.r.words((header[4] & ~7) + 4, 1 << (log - 1))
            values = {}
            for i in range(0, len(atoms), 2):
                key, value = atoms[i:i+2]
                if key in (0, 1):
                    continue
                key &= ~1
                if key & 7 != 2:
                    raise UnstableRead('动态计算对象出现非字符串键')
                values[self.r.string(key & ~7, limit=512)] = self.atom(value, depth + 1)
            return {'$object': values}
        if name not in (';m', '7! '):
            raise UnstableRead('此类引用不属于计算数据白名单：' + name)
        if name not in self.layouts or name in ('Object', 'Dictionary', 'Function') or 'instance' not in self.layouts[name]:
            raise UnstableRead('计算对象类型尚未支持：' + name)
        fields = self.read_fields(address, self.fields(name), depth + 1)
        return {'$type': name, 'fields': fields}

    def read_fields(self, address, fields, depth=0):
        result = {}
        for field in fields:
            kind, offset = field['type'], field['offset']
            try:
                storage = field['storage']
                if storage in (4, 5, 6):
                    value = self.r.pointer(address + offset)
                    if storage == 4:
                        value = struct.unpack('<i', struct.pack('<I', value))[0]
                    if storage == 6:
                        if value not in (0, 1):
                            raise UnstableRead('布尔槽无效')
                        value = bool(value)
                elif storage == 7:
                    value = self.number(struct.unpack('<d', self.r.read(address + offset, 8))[0])
                elif kind == 'String':
                    # 名称与描述由同一客户端源码初始化，不覆盖计算命名。
                    continue
                elif storage == 0:
                    value = self.atom(self.r.pointer(address + offset), depth + 1)
                else:
                    if kind not in ('4l', '3F', '=!L', ';m', '7! ', 'Array') and not kind.startswith('Vector.<'):
                        pointer = self.r.pointer(address + offset)
                        if pointer in self.refs:
                            result[field['name']] = {'$ref': self.refs[pointer]}
                        continue
                    value = self.object(self.r.pointer(address + offset), depth + 1)
                result[field['name']] = value
            except (ValueError, UnicodeError) as error:
                self.unsupported.add((kind, str(error)))
                try:
                    owner = self.r.type_name(address)
                except (ValueError, UnicodeError):
                    owner = hex(address)
                self.skipped.append({'owner': owner, 'field': field['name'], 'type': kind, 'reason': str(error)})
        return result

    def capture(self):
        started = time.perf_counter()
        cached = CachedMemory(self.probe.memory)
        copied_at = time.time()
        before = self.guard()
        copied_start = time.perf_counter()
        cached.prefetch(self.known_pages)
        copy_ms = (time.perf_counter()-copied_start)*1000
        after = self.guard()
        self.r = Avm2Reader(cached)
        self.r.traits_name_offset = self.probe.reader.traits_name_offset
        frame_seconds = self.frame_clock(self.r)
        self.refs, self.skipped, self.unsupported = {}, [], set()
        lists = {}
        for key, (offset, kind) in self.COLLECTIONS.items():
            addresses = self.r.object_vector(self.r.pointer(self.probe.root + offset), kind, maximum=8192)
            lists[key] = addresses
            for ordinal, address in enumerate(addresses):
                self.refs[address] = [key, ordinal]
        for name, address in self.classes.items():
            self.refs[address] = ['class', name]
        instance_field = next(field for field in self.layouts['8G']['static'] if field['name'] == '>!a')
        game_instance = self.r.pointer(self.probe.root + instance_field['offset'])
        self.refs[game_instance] = ['game']
        classes = {name: self.read_fields(address, self.layouts[name]['static']) for name, address in self.classes.items()}
        objects = {}
        for key, addresses in lists.items():
            objects[key] = []
            for address in addresses:
                name = self.r.type_name(address)
                objects[key].append({'$type': name, 'fields': self.read_fields(address, self.fields(name))})
        instance = self.read_fields(game_instance, self.layouts['8G']['instance'])
        # 只有两次 guard 之间复制到的页才算同一帧；窗口外补读的页一律算冷页。
        cold_pages = len(cached.used_pages - cached.prefetched)
        self.known_pages = set(cached.used_pages)
        return dict(schema=1, pid=self.probe.memory.pid, observed_at=copied_at, swf_sha256=self.probe.swf_hash,
                    frame_timer_ms=frame_seconds*1000,
                    classes=classes, objects=objects, game=instance, skipped=self.skipped,
                    read_ms=(time.perf_counter()-started)*1000, copy_ms=copy_ms, pages=len(cached.pages),
                    copy_consistent=before==after and frame_seconds==before[-1], cold_pages=cold_pages)


def main():
    import argparse
    from game_memory_probe import GameMemory
    from read_game_live import LiveProbe
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('pid', type=int)
    parser.add_argument('--output', type=Path, default=Path('build/live-state-candidate.json'))
    parser.add_argument('--samples', type=int, default=1)
    args = parser.parse_args()
    layouts = json.loads(Path('build/live-layout-candidates.json').read_text(encoding='utf-8'))
    index = json.loads(Path('docs/客户端计算方法索引（实际安装版）.json').read_text(encoding='utf-8'))
    with GameMemory(args.pid) as memory:
        capture = StateCapture(LiveProbe(memory), layouts, {entry['cls'].strip('§') for entry in index['entries']})
        for _ in range(args.samples):
            report = capture.stable_capture()
            print(json.dumps(dict(read_ms=report['read_ms'],copy_ms=report['copy_ms'],cold_pages=report['cold_pages'],skipped=len(report['skipped']))))
        args.output.write_text(json.dumps(report, ensure_ascii=False, indent=2), encoding='utf-8')
        print(json.dumps(dict(read_ms=report['read_ms'], pages=report['pages'], classes=len(report['classes']),
                             counts={key:len(rows) for key,rows in report['objects'].items()}, skipped=len(report['skipped']),
                             reasons=sorted(capture.unsupported)), ensure_ascii=False))


if __name__ == '__main__':
    main()
