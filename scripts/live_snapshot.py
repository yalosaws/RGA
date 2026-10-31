"""将已校验的实时字段应用于独立转写对象；失败时调用者必须丢弃此模拟实例。"""
import inspect
import math
import json
from pathlib import Path

from as2py import mangle, mangle_attr
import as_runtime as R


class LiveSnapshot:
    COLLECTIONS = {'buildings': 'S__25__3c_', 'upgrades': 'S__2d__21_4',
                   'spells': 'S_0_21_A', 'trophies': 'S_0Q'}

    def __init__(self, sim, snapshot, layouts=None, calculation_classes=None):
        self.sim = sim
        self.snapshot = snapshot
        if layouts is None:
            folder = Path(__file__).resolve().parent
            assets = folder if (folder/'live-layout.json').exists() else folder.parent/'build/calculation'
            layout = json.loads((assets/'live-layout.json').read_text(encoding='utf-8'))
            layouts = layout['classes']
            if calculation_classes is None:
                index = json.loads((assets/'index.json').read_text(encoding='utf-8'))
                calculation_classes = {entry['cls'].strip('§') for entry in index['entries']}
        self.layouts = layouts
        self.reverse = {mangle('§'+name+'§'): name for name in layouts}
        self.definitions = {}
        if snapshot.get('schema') != 1 or snapshot.get('skipped') or not snapshot.get('copy_consistent') or snapshot.get('cold_pages') != 0:
            raise ValueError('实时计算字段不完整，拒绝合并旧存档')
        if snapshot.get('swf_sha256') != sim.ns['_source_provenance']['swf_sha256']:
            raise ValueError('实时快照与计算代码来源不一致')
        self.refs = {('game',): sim.g}
        from live_state import StateCapture
        relevant = set(calculation_classes or ()) | set(StateCapture.STATIC_CLASSES)
        for records in snapshot['objects'].values():
            for record in records:
                name = record['$type']
                while name in layouts and name not in relevant:
                    relevant.add(name)
                    name = layouts[name]['base']
        required = {name for name in relevant if name in layouts and any(
            not field['constant'] and field['name'] != 'id' for field in layouts[name]['static'])}
        if set(snapshot['classes']) != required:
            raise ValueError('实时计算类清单不完整')
        for name in snapshot['classes']:
            # 混淆名即使字面是标识符也先经过 mangle；查不到才按 PlayFab 等原名找。
            cls = sim.ns.get(mangle('§' + name + '§'))
            if cls is None and name.isidentifier():
                cls = sim.ns.get(name)
            if cls is None or cls is R.Stub:
                raise ValueError('计算模块缺少实时类：' + name)
            self.refs[('class', name)] = cls
        for key, attr in self.COLLECTIONS.items():
            objects = getattr(sim.G, attr)
            records = snapshot['objects'][key]
            if len(objects) != len(records):
                raise ValueError('实时对象注册数量变化：' + key)
            for ordinal, (obj, record) in enumerate(zip(objects, records)):
                if type(obj).__name__ != mangle('§' + record['$type'] + '§'):
                    raise ValueError('实时对象类型变化：%s/%d' % (key, ordinal))
                if obj.S_6_21_Z != record['fields'].get('6!Z'):
                    raise ValueError('实时对象存档 ID 或顺序变化：%s/%d' % (key, ordinal))
                self.refs[(key, ordinal)] = obj

    def value(self, encoded, previous=None):
        if isinstance(encoded, list):
            values = [self.value(item, previous[i] if isinstance(previous, list) and i < len(previous) else None)
                      for i, item in enumerate(encoded)]
            if isinstance(previous, list):
                previous[:] = values
                return previous
            return R.Arr(values)
        if not isinstance(encoded, dict):
            return encoded
        if '$number' in encoded:
            return {'nan': math.nan, 'inf': math.inf, '-inf': -math.inf}[encoded['$number']]
        if '$undefined' in encoded:
            return R.UNDEFINED
        if '$ref' in encoded:
            return self.refs[tuple(encoded['$ref'])]
        if '$object' in encoded:
            result = previous if isinstance(previous, dict) else R.Obj()
            old = dict(result)
            result.clear()
            result.update({key: self.value(value, old.get(key)) for key, value in encoded['$object'].items()})
            return result
        if '$secure' in encoded:
            if previous is None or type(previous).__name__ != mangle('§' + encoded['$secure'] + '§'):
                raise ValueError('受校验数值对象类型与计算模块不符')
            setattr(previous, mangle('§8!+§'), encoded['value'])
            return previous
        if '$type' in encoded:
            if previous is None or type(previous).__name__ != mangle('§' + encoded['$type'] + '§'):
                raise ValueError('计算数据对象类型与快照不符：' + encoded['$type'])
            self.fields(previous, encoded['fields'])
            return previous
        raise ValueError('未识别的实时快照值')

    def fields(self, obj, fields):
        name = self.reverse.get(obj.__name__ if isinstance(obj,type) else type(obj).__name__)
        if name is None and isinstance(obj,type):
            name = obj.__name__
        if name not in self.layouts:
            raise ValueError('实时字段所属类未确认')
        cache_key = name, isinstance(obj,type)
        if cache_key not in self.definitions:
            definitions = []
            current = name
            while current in self.layouts:
                definitions = self.layouts[current]['static' if isinstance(obj,type) else 'instance'] + definitions
                if isinstance(obj,type):
                    break
                current = self.layouts[current]['base']
            if obj is self.sim.g:
                definitions = self.layouts['8G']['instance']
            required = {field['name'] for field in definitions if field['storage'] in (0,4,5,6,7) or
                        field['type'] in ('4l','3F','=!L',';m','7! ','Array') or field['type'].startswith('Vector.<')}
            self.definitions[cache_key] = required, {field['name']:field for field in definitions}
        required, definition_map = self.definitions[cache_key]
        if not required <= set(fields):
            raise ValueError('实时字段缺失：%s.%s' % (name, ','.join(sorted(required-set(fields)))))
        for name, encoded in fields.items():
            if name not in definition_map:
                raise ValueError('实时字段不在客户端声明中：' + name)
            field = definition_map[name]
            attr = mangle('§' + name + '§') if field['obfuscated'] else mangle_attr(name)
            # 保留原名的 id 等与带 § 的混淆名采用不同的转写规则。
            try:
                if not isinstance(obj, type) and R._idef_lookup(obj, attr)[0]:
                    pass
                else:
                    inspect.getattr_static(obj, attr)
            except AttributeError:
                attr = mangle('§' + name + '§')
                try:
                    if not isinstance(obj, type) and R._idef_lookup(obj, attr)[0]:
                        pass
                    else:
                        inspect.getattr_static(obj, attr)
                except AttributeError as error:
                    raise ValueError('实时字段在转写对象中不存在：%s.%s' % (getattr(obj, '__name__', type(obj).__name__), name)) from error
            previous = getattr(obj, attr)
            setattr(obj, attr, self.value(encoded, previous))

    def apply(self):
        timer = self.snapshot.get('frame_timer_ms')
        if type(timer) not in (int, float) or not math.isfinite(timer) or timer < 0:
            raise ValueError('缺少客户端帧时钟，拒绝使用零时钟试算')
        self.sim.ns['_snapshot_clock'].update(timestamp=self.snapshot['observed_at'], timer_ms=timer)
        for name, fields in self.snapshot['classes'].items():
            self.fields(self.refs[('class', name)], fields)
        for key, records in self.snapshot['objects'].items():
            for ordinal, record in enumerate(records):
                self.fields(self.refs[(key, ordinal)], record['fields'])
        self.fields(self.sim.g, self.snapshot['game'])
        self.sim.ns['_snapshot_context'].update(timestamp=self.snapshot['observed_at'],
            source='live_frame', season=int(self.sim.ns['PlayFab'].season), season_source='live',
            event_cache_source='not_replayed')
