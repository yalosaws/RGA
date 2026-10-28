"""限定当前已核对 SWF 的实时只读验证；每次启动重新定位，不沿用旧绝对地址。

python -X utf8 脚本/read_game_live.py <游戏 PID> --samples 10
只输出金币、魔力、建筑数量和法术状态，不生成内存转储，不写回游戏。
"""
import argparse
import hashlib
import json
import math
from pathlib import Path
import re
import struct
import time

from avm2_memory import Avm2Reader, UnstableRead
from game_memory_probe import GameMemory

ROOT = Path(__file__).resolve().parents[1]
_HASHES = {}


def file_sha256(path):
    """SWF、AIR DLL 只在游戏更新时变化；按路径、大小、修改时间缓存摘要，重连时不再整文件重读。"""
    path = Path(path)
    info = path.stat()
    key = str(path), info.st_size, info.st_mtime_ns
    if key not in _HASHES:
        _HASHES[key] = hashlib.sha256(path.read_bytes()).hexdigest()
    return _HASHES[key]


class LiveProbe:
    def __init__(self, memory, expected_swf_hash=None, expected_air_hash=None):
        self.memory = memory
        self.reader = Avm2Reader(memory)
        if expected_swf_hash is None:
            manifest = json.loads((ROOT / 'build/rg_installed_game.py.manifest.json').read_text(encoding='utf-8'))
            expected_swf_hash = manifest.get('swf_sha256')
            profile = json.loads((ROOT / '资料/只读内存布局（当前安装版）.json').read_text(encoding='utf-8'))
            expected_air_hash = profile['air_sha256']
        swf = Path(memory.image).with_suffix('.swf')
        self.swf_hash = file_sha256(swf)
        if self.swf_hash != expected_swf_hash:
            raise ValueError('正在运行版本的 SWF 与已核对代码不符，停止解析')
        self.air_hash = None
        if expected_air_hash is not None:
            self.air_hash = file_sha256(self.reader.air['path'])
            if self.air_hash != expected_air_hash:
                raise ValueError('AIR 运行时与已验证布局不符，停止解析')
        start = time.perf_counter()
        self.root, self.mana = self.locate()
        self.locate_ms = (time.perf_counter() - start) * 1000

    def locate(self):
        pattern = re.compile(rb'\x32\x00\x00\x00[\x00-\x32]\x00\x00\x00\x0a\x00\x00\x00[\x00-\x0a]\x00\x00\x00')
        candidates = []
        hits = self.memory.scan_regex(pattern, maximum=2000)
        if len(hits) >= 2000:
            raise UnstableRead('魔力字段候选过多，未完整筛选，停止定位')
        for hit in hits:
            mana = hit - 20
            try:
                value = self.reader.secure_number(mana, (50, 10))
                if value >= 0:
                    candidates.append(mana)
            except ValueError:
                pass
        if not candidates:
            raise UnstableRead('尚未找到通过对象类型和数值校验的魔力字段')
        refs, _ = self.memory.scan({str(candidate): struct.pack('<I', candidate) for candidate in candidates}, maximum=80)
        roots = set()
        for candidate in candidates:
            for ref in refs[str(candidate)]:
                for root in self.reader.enclosing_objects(ref, {'8G$'}):
                    address = root['address']
                    try:
                        if root['field_offset'] != 0x108:
                            continue
                        self.reader.secure_number(self.reader.pointer(address + 0xe0), (100, 100))
                        self.reader.object_vector(self.reader.pointer(address + 0x9c), 'Vector.<`!;>')
                        self.reader.object_vector(self.reader.pointer(address + 0x98), 'Vector.<84>')
                        roots.add((address, candidate))
                    except ValueError:
                        continue
        if len(roots) != 1:
            raise UnstableRead('主游戏对象未唯一定位，候选数量：%d' % len(roots))
        return roots.pop()

    def sample(self):
        started = time.perf_counter()
        r = self.reader
        r.identify(self.root, {'8G$'})
        if r.pointer(self.root + 0x108) != self.mana:
            raise UnstableRead('主对象的魔力引用已变化，需要重新定位')
        gold = r.secure_number(r.pointer(self.root + 0xe0), (100, 100))
        mana = r.secure_number(self.mana, (50, 10))
        buildings, spells = [], []
        for obj in r.object_vector(r.pointer(self.root + 0x9c), 'Vector.<`!;>'):
            if not r.is_subclass(obj, '`!;'):
                raise UnstableRead('建筑对象没有匹配客户端基类')
            sid = r.pointer(obj + 20)
            quantity = r.secure_number(r.pointer(obj + 100), (25, 1), expected_type='=!L')
            if not 0 <= quantity <= 0xffffffff or quantity != int(quantity):
                raise UnstableRead('建筑数量超出客户端类型范围')
            buildings.append(dict(sid=sid, name=r.string(r.pointer(obj + 44)), quantity=int(quantity)))
        if len(buildings) != 25 or len({row['sid'] for row in buildings}) != 25:
            raise UnstableRead('建筑清单数量或存档 ID 不完整')
        for obj in r.object_vector(r.pointer(self.root + 0x98), 'Vector.<84>'):
            if not r.is_subclass(obj, '84'):
                raise UnstableRead('法术对象没有匹配客户端基类')
            # 布尔和计时字段在同一块小结构中读取；跨字段不是暂停游戏的原子快照。
            fields = r.words(obj + 16, 5)
            if fields[2] not in (0, 1):
                raise UnstableRead('法术激活字段不是布尔值')
            duration_ticks = struct.unpack('<d', r.read(obj + 144, 8))[0]
            if not math.isfinite(duration_ticks) or duration_ticks < 0:
                raise UnstableRead('法术持续时间无效')
            active, ticks = bool(fields[2]), fields[4]
            spells.append(dict(sid=fields[1], name=r.string(r.pointer(obj + 80)), active=active,
                elapsed_ticks=ticks, duration_ticks=duration_ticks,
                remaining_seconds=max(0, (duration_ticks - ticks) / 30) if active else 0))
        if len(spells) != 32 or len({row['sid'] for row in spells}) != 32:
            raise UnstableRead('法术清单数量或存档 ID 不完整')
        return dict(pid=self.memory.pid, observed_at=time.time(), source='游戏进程只读',
                    consistency='数值字段分别校验；未暂停游戏，不保证所有字段属于同一个 tick',
                    gold=gold, mana=mana, buildings=buildings, spells=spells,
                    read_ms=(time.perf_counter() - started) * 1000)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('pid', type=int)
    parser.add_argument('--samples', type=int, default=10)
    parser.add_argument('--interval', type=float, default=.1)
    parser.add_argument('--output', default=str(ROOT / 'build/live-read-validation.json'))
    args = parser.parse_args()
    if not 1 <= args.samples <= 1000 or not .02 <= args.interval <= 5:
        parser.error('采样次数必须为 1～1000，间隔为 0.02～5 秒')
    with GameMemory(args.pid) as memory:
        probe = LiveProbe(memory)
        print(json.dumps(dict(located=True, locate_ms=probe.locate_ms, root=hex(probe.root)), ensure_ascii=False), flush=True)
        samples = []
        for index in range(args.samples):
            value = probe.sample()
            samples.append(value)
            print(json.dumps(dict(sample=index + 1, gold=value['gold'], mana=value['mana'], read_ms=value['read_ms'],
                buildings=[row for row in value['buildings'] if row['quantity']],
                active_spells=[row for row in value['spells'] if row['active']]), ensure_ascii=False), flush=True)
            if index < args.samples - 1:
                time.sleep(args.interval)
        report = dict(pid=memory.pid, swf_sha256=probe.swf_hash, access='QUERY_INFORMATION|VM_READ',
                      locate_ms=probe.locate_ms, root=hex(probe.root), samples=samples)
        Path(args.output).write_text(json.dumps(report, ensure_ascii=False, indent=2), encoding='utf-8')


if __name__ == '__main__':
    main()
