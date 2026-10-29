"""构筑辅助的进程桥；计算进程不持有窗口，也不写游戏存档。"""
import hashlib
import json
import os
from pathlib import Path
import queue
import subprocess
import sys
import threading

ROOT = Path(__file__).resolve().parents[1]


class EngineClient:
    def __init__(self):
        self._lock = threading.Lock()
        self._process = None

    def close(self):
        process, self._process = self._process, None
        if process is not None:
            if process.poll() is None:
                process.terminate()
            try:
                process.wait(timeout=3)
            except subprocess.TimeoutExpired:
                process.kill()
                process.wait(timeout=3)
            for stream in (process.stdin, process.stdout):
                if stream:
                    stream.close()

    def request(self, request):
        with self._lock:
            try:
                if self._process is None or self._process.poll() is not None:
                    self.close()
                    command = [sys.executable]
                    if not getattr(sys, 'frozen', False):
                        command += ['-X', 'utf8', str(ROOT / '应用' / 'rg_app.py')]
                    command += ['--build-worker']
                    self._process = subprocess.Popen(command, stdin=subprocess.PIPE, stdout=subprocess.PIPE,
                        stderr=subprocess.DEVNULL, text=True, encoding='utf-8',
                        creationflags=getattr(subprocess, 'CREATE_NO_WINDOW', 0))
                    self._responses = queue.Queue()
                    responses = self._responses
                    stream = self._process.stdout

                    def read():
                        try:
                            for line in stream:
                                responses.put(json.loads(line))
                        except Exception:
                            pass
                        finally:
                            responses.put(None)
                    threading.Thread(target=read, daemon=True).start()
                self._process.stdin.write(json.dumps(request, ensure_ascii=False, allow_nan=False) + '\n')
                self._process.stdin.flush()
                result = self._responses.get(timeout=60)
                if result is None:
                    raise RuntimeError('计算进程已退出，请重新读取存档')
                return result
            except Exception as error:
                self.close()
                return {'ok': False, 'error': '计算未完成：' + (str(error) or '任务超时，请重试')}


# 只给已确认单位的公式加 %；专属公式不猜单位。
EFFECTS = {
    'getProductionMultiplier': ('建筑产出', '%'), 'getBuildingMultiplier': ('建筑产出', '%'),
    'getBaseProductionBonus': ('建筑基础产出', ''),
    'getAssistantsNumMultiplier': ('助手数量', '%'), 'getAssistantsNumBonus': ('助手数量', ''),
    'getAssistantsMultiplier': ('助手效率', '%'), 'getClickMultiplier': ('点击收益', '%'),
    'getManaRegenMultiplier': ('回魔', '%'), 'getManaRegenBonus': ('回魔', ''),
    'getMaxManaMultiplier': ('最大魔力', '%'), 'getMaxManaBonus': ('最大魔力', ''),
    'getExchangeMultiplier': ('皇家贸易令', '%'), 'getExchangeBonus': ('皇家贸易令加成', ''),
    'getSpellDurationMultiplier': ('法术时长', '%'), 'getSpellDurationBonus': ('法术时长', ''),
    'getSpellCostMultiplier': ('法术消耗', '%'), 'getSpellCostBonus': ('法术消耗', ''),
    'getFCCChanceMultiplier': ('阵营币获取', '%'), 'getFCCChanceBonus': ('阵营币获取', ''),
    'getOfflineMultiplier': ('离线产出', '%'), 'getGemMultiplier': ('宝石加成', '%'),
    'getGemBonus': ('宝石加成', ''), 'getSpecificBonus': ('专属公式（原始值）', ''),
    'getSpecificBonus2': ('专属公式 2（原始值）', ''),
}
RELATED = {
    'getResourcePerTick': '建筑产出', 'getProductionPerTick': '建筑产出',
    'getResourcePerClick': '点击收益', 'getResourcePerClickReal': '点击收益',
    'getAssistantsNumReal': '助手数量', 'getAssistantsMultiplierReal': '助手效率',
    'getManaPerTickReal': '回魔', 'getMaxManaReal': '最大魔力',
    'getExchangeBonus': '皇家贸易令', 'getExchangeMultiplier': '皇家贸易令',
    'getSpellDuration': '法术时长', 'getSpellCost': '法术消耗',
    'getFactionCoinChance': '阵营币获取', 'getOfflineBonus': '离线产出',
    'applyBuildingBonuses': '建筑产出', 'getGemMultiplier': '宝石加成',
}


class Engine:
    def __init__(self):
        import collections
        import re
        import importlib
        self.re = re
        frozen = getattr(sys, 'frozen', False)
        assets = Path(sys._MEIPASS) / 'calculation' if frozen else ROOT / 'build' / 'calculation'
        self.assets = assets
        if not (assets / 'game.py').is_file():
            raise ValueError('缺少计算模块，请先运行 脚本/prepare_engine.py')
        if str(assets) not in sys.path:
            sys.path.insert(0, str(assets))
        self.rg_sim = importlib.import_module('rg_sim')
        self.Simulation = importlib.import_module('rg_growth').Simulation
        self.StateSnapshot = importlib.import_module('simulation_state').StateSnapshot
        self.rg_sim._real2obf.cache_clear()
        self.rg_sim.MEMBER_NAMES = assets / 'member-names.json'
        self.index = json.loads((assets / 'index.json').read_text(encoding='utf-8'))
        actual = hashlib.sha256((assets / 'game.py').read_bytes()).hexdigest()
        if actual != self.index['module_sha256']:
            raise ValueError('计算模块和已核对的方法索引不一致，请重新生成计算资料')
        self.translations = json.loads((assets / 'translations.json').read_text(encoding='utf-8'))
        self.description_templates = []
        for english, chinese in self.translations.items():
            if '%' not in english or len(english) < 24:
                continue
            parts = re.split(r'(%\d+)', english.split('\x00')[0].replace('\\n', '\n'))
            arguments = [part[1:] for part in parts if re.fullmatch(r'%\d+', part)]
            pattern = ''.join('(.+?)' if re.fullmatch(r'%\d+', part) else re.escape(part) for part in parts)
            self.description_templates.append((re.compile(pattern), arguments, chinese.split('\x00')[0].replace('\\n', '\n')))
        self.research = {str(row['id']): row['code'] for row in json.loads((assets / 'research.json').read_text(encoding='utf-8'))}
        self.methods = collections.defaultdict(list)
        self.related = collections.defaultdict(set)
        self.class_names = {}
        for entry in self.index['entries']:
            self.methods[entry['py_class']].append(entry)
            self.class_names[entry['cls']] = entry['py_class']
        for entry in self.index['entries']:
            if entry['cls'] in ('§#!!§', '§&c§') and entry['real'] in RELATED:
                for ref in re.findall('§[^§]+§', entry.get('body') or ''):
                    if ref in self.class_names:
                        self.related[self.class_names[ref]].add(RELATED[entry['real']])
        self.member_maps = {}
        # getDescription 等不属于计算核对索引，也从完整成员表补齐。
        from as2py import mangle
        members = json.loads((assets / 'member-names.json').read_text(encoding='utf-8'))
        for key, real in members.items():
            cls, member = key.split('\t')
            self.member_maps.setdefault(mangle(cls), {})[real] = mangle(member if member == real else '§' + member + '§')
        self.sim = None
        self.revision = None

    def translate(self, text, *args):
        text = str(text)
        if not text:
            return text
        text = self.translations.get(text, text).split('\x00')[0].replace('\\n', '\n')
        for number, value in enumerate(args):
            text = text.replace('%' + str(number), str(value))
        return text

    def new_sim(self):
        import random
        random.seed(self.revision)
        sim = self.Simulation(self.assets / 'game.py', encoded_save=self.save, timestamp=self.timestamp)
        return sim

    def translated_description(self, text):
        """只翻译计算完成后的文本；不替换游戏内部按名称查找对象时用的语言函数。"""
        lines = []
        for line in text.split('\n'):
            if not line.strip():
                lines.append(line)
                continue
            if line in self.translations:
                lines.append(self.translate(line))
                continue
            for pattern, arguments, chinese in self.description_templates:
                match = pattern.fullmatch(line)
                if match:
                    values = {}
                    for argument, value in zip(arguments, match.groups()):
                        if self.re.search('[A-Za-z]', value):
                            value = ''.join(self.translate(piece.strip()) if piece.strip() else piece
                                for piece in self.re.split('([，,])', value))
                        values[argument] = value
                    chinese = self.re.sub(r'%(\d+)', lambda found: values.get(found[1], found[0]), chinese)
                    line = chinese
                    break
            lines.append(line)
        return '\n'.join(lines)

    def attribute(self, obj, real):
        import inspect
        for cls in type(obj).__mro__:
            attr = self.member_maps.get(cls.__name__, {}).get(real)
            if attr:
                inspect.getattr_static(obj, attr)
                return getattr(obj, attr)
        raise ValueError('没有可用的' + real)

    def effect_entries(self, obj):
        entries, seen = [], set()
        for cls in type(obj).__mro__:
            for entry in self.methods.get(cls.__name__, []):
                if entry['real'] in EFFECTS and entry['real'] not in seen:
                    entries.append(entry)
                    seen.add(entry['real'])
        return entries

    def load(self, request):
        import math
        save, timestamp = request.get('save'), request.get('timestamp')
        if not isinstance(save, str) or len(save) > 2_000_000:
            self.sim = None
            raise ValueError('存档数据无效')
        if isinstance(timestamp, bool) or not isinstance(timestamp, (int, float)) or not math.isfinite(timestamp) or timestamp <= 0:
            self.sim = None
            raise ValueError('缺少有效的存档时间')
        live = request.get('live_snapshot')
        if live is not None and not isinstance(live, dict):
            self.sim = None
            raise ValueError('实时计算快照格式错误')
        digest = hashlib.sha256((save + '\n' + str(timestamp)).encode())
        if live is not None:
            digest.update(json.dumps(live, sort_keys=True, ensure_ascii=False, allow_nan=False).encode('utf-8'))
        revision = digest.hexdigest()
        if self.sim is not None and revision == self.revision:
            return self._loaded_payload
        # 失败时不保留上一份存档的可操作状态。
        reuse = self.sim if live is not None and getattr(self, 'live_mode', False) and save == self.save else None
        if reuse is not None:
            self.checkpoint.restore()
        self.sim = None
        self.save, self.timestamp, self.revision = save, timestamp, revision
        sim = reuse or self.new_sim()
        self.live_mode = live is not None
        if live is not None:
            from live_snapshot import LiveSnapshot
            LiveSnapshot(sim, live).apply()
            if int(sim.ns['PlayFab'].season) != 0:
                raise ValueError('当前活动的服务器缓存尚未接入，暂不使用实时快照试算')
        sim.preserve_live_caches = live is not None
        baseline = sim.snapshot(refresh=live is None, cached=True)
        checkpoint = self.StateSnapshot(sim.ns, sim.g)
        catalog, objects = [], {}
        for kind, collection in [('upgrade', sim.G.S__2d__21_4), ('building', sim.G.S__25__3c_), ('spell', sim.G.S_0_21_A)]:
            for ordinal, obj in enumerate(collection):
                sid, name = str(obj.S_6_21_Z), str(obj.S_1i)
                # 活动商店、红玉按钮等不进入普通升级存档表，SID 都为 0。
                # 它们仍可查阅，但不以这个重复的 ID 执行购买。
                action_allowed = not (kind == 'upgrade' and sid == '0')
                key = kind + ':' + sid if action_allowed else kind + ':session:' + str(ordinal)
                if key in objects:
                    raise ValueError('发现重复存档 ID：' + key)
                objects[key] = obj
                code = self.research.get(sid, '') if kind == 'upgrade' else ''
                cls = type(obj).__name__
                methods = self.effect_entries(obj)
                # 只使用具体升级的直接引用。研究/升级基类也会因数量统计
                # 出现在产出函数里，不能据此把每项研究都归到产出/离线组。
                labels = set(self.related.get(cls, ()))
                labels.update(EFFECTS[entry['real']][0] for entry in methods if not entry['real'].startswith('getSpecific'))
                if not labels:
                    labels.add('其他 / 待核对')
                owned = bool(obj.S__3c__21_7) if kind == 'upgrade' else None
                try:
                    visible = bool(self.attribute(obj, 'visible'))
                except Exception:
                    visible = None
                spell = None
                if kind == 'spell':
                    # 法术页的剩余时间：载入存档时游戏给生效中的法术定好结束帧（§0n§ = duration），
                    # §'!X§ 是施放后已过的帧数（存档里的 t），每秒 30 帧
                    try:
                        full = float(self.attribute(obj, 'duration'))
                    except Exception:
                        full = None
                    spell = dict(active=bool(obj.S_23), elapsed=int(obj.S__27__21_X),
                                 end=float(obj.S_0n) if obj.S_23 else None, duration=full)
                catalog.append(dict(key=key, kind=kind, sid=sid, name=name, zh=self.translate(name),
                    code=code, labels=sorted(labels), owned=owned, visible=visible,
                    action_allowed=action_allowed,
                    quantity=obj.S__21_a if kind == 'building' else None, spell=spell))
        # 只有完整载入成功，后续请求才可使用这份状态。
        self.sim, self.catalog, self.objects = sim, catalog, objects
        self.baseline, self.checkpoint = baseline, checkpoint
        self.comparisons = {}
        self.descriptions = {}
        self.checkpoint.restore()
        self.catalog_map = {item['key']: item for item in catalog}
        self._loaded_payload = dict(revision=revision, timestamp=timestamp, snapshot=baseline, catalog=catalog,
            scope='当前存档的即时数值；不补算离线进度。活动沿用存档记录，在线服务器状态未重放。',
            source='当前安装客户端（按 SWF 核对）', source_hash=self.index['module_sha256'][:12])
        if live is not None:
            self._loaded_payload.update(source='游戏实时快照',
                scope='采用游戏帧时钟、实时研究/升级/统计与客户端缓存；每次试算前重新读取，动作仅在独立副本中执行。',
                live=dict(pid=live['pid'], read_ms=live['read_ms'],copy_ms=live['copy_ms'],
                          classes=len(live['classes']), objects={key:len(rows) for key,rows in live['objects'].items()}))
        return self._loaded_payload

    def load_live(self, request):
        if not isinstance(request.get('live_snapshot'), dict):
            self.sim = None
            raise ValueError('缺少实时计算快照')
        loaded = self.load(request)
        action = request.get('action')
        if action is None:
            return loaded
        if not isinstance(action, dict):
            raise ValueError('实时试算操作格式错误')
        comparison = self.compare(dict(action, revision=self.revision))
        return dict(**loaded, comparison=comparison)

    def require(self, request):
        if self.sim is None or request.get('revision') != self.revision:
            raise ValueError('存档已经更新，请等待当前存档计算完成后重试')

    def describe(self, request):
        self.require(request)
        keys = request.get('keys', [])
        if not isinstance(keys, list) or len(keys) > 40:
            raise ValueError('一次最多查询 40 项')
        for key in keys:
            if not isinstance(key, str) or key not in self.objects:
                raise ValueError('没有找到该条目')
        missing = [key for key in keys if key not in self.descriptions]
        if missing:
            with self.checkpoint.transaction():
                for key in missing:
                    self.descriptions[key] = self._describe_item(key)
        return dict(revision=self.revision, items=[self.descriptions[key] for key in keys])

    def _describe_item(self, key):
        obj = self.objects[key]
        effects = []
        for entry in self.effect_entries(obj):
            label, unit = EFFECTS[entry['real']]
            rec = dict(label=label, unit=unit, method=entry['real'], formula=entry.get('body'), value=None)
            if any(param.get('default') is None for param in entry['params']):
                rec['note'] = '需要指定建筑、法术等上下文'
            else:
                try:
                    target = self.sim.ns[entry['py_class']] if entry['static'] else obj
                    value = getattr(target, entry['py_member'])()
                    import math
                    if type(value) not in (int, float) or not math.isfinite(value):
                        raise ValueError('返回值不是有限数值')
                    rec['value'] = value
                except Exception as error:
                    rec['note'] = '待核对：' + str(error)[:160]
            effects.append(rec)
        try:
            desc = self.attribute(obj, 'getDescription')()
            if not isinstance(desc, str):
                desc = ''
            import html
            desc = html.unescape(self.re.sub('<[^>]*>', '', desc.replace('<br>', '\n')))
            desc = self.translated_description(desc)
        except Exception:
            desc = ''
        return dict(key=key, effects=effects, description=desc,
            note='' if effects else '加成在汇总逻辑中处理，暂不单独显示公式值；可按游戏条件试算购买。')

    def compare(self, request):
        self.require(request)
        key = request.get('key')
        if key not in self.catalog_map:
            raise ValueError('请选择有效的试算条目')
        item = self.catalog_map[key]
        if not item['action_allowed']:
            raise ValueError('这项内容没有唯一的升级存档 ID，目前仅支持查询')
        count = request.get('count', 1) if item['kind'] == 'building' else 1
        if type(count) is not int or not 1 <= count <= 10000:
            raise ValueError('建筑数量必须是 1～10000 的整数')
        cache_key = key, count
        if cache_key in self.comparisons:
            from copy import deepcopy
            return deepcopy(self.comparisons[cache_key])
        # 保留客户端对象及已计算缓存，只回滚状态；不反复编译/初始化整个游戏。
        with self.checkpoint.transaction():
            result = self.sim.compare(item['kind'], item['sid'], count, before=self.baseline, use_cache=True)
        action = result['action']
        success = bool(action.get('purchased') or action.get('cast'))
        reason = ''
        if not success:
            if action.get('owned_before'):
                reason = '当前存档已拥有这项升级，不能重复购买。'
            elif item['visible'] is False:
                reason = '当前存档尚未显示或解锁该条目。'
            else:
                reason = '客户端未执行该动作：请核对资源、前置条件或法术状态。'
        result.update(revision=self.revision, key=key, success=success, reason=reason)
        if len(self.comparisons) >= 128:
            self.comparisons.pop(next(iter(self.comparisons)))
        from copy import deepcopy
        self.comparisons[cache_key] = deepcopy(result)
        return result


def worker_main():
    # 收发都按 UTF-8 字节读写，不经过 Python 文本流：打包版子进程的标准流默认是系统编码（中文 Windows 为 GBK），
    # 遇到零宽字符之类会崩，改编码设置在打包版里也不可靠
    if getattr(sys, 'frozen', False) and sys.stdin is None:
        # --windowed 的 PyInstaller 子进程没有 Python 标准流；仍使用父进程
        # Popen 明确传入的匿名管道，不打开终端窗口。
        import ctypes
        import msvcrt
        kernel = ctypes.WinDLL('kernel32', use_last_error=True)
        kernel.GetStdHandle.argtypes = [ctypes.c_ulong]
        kernel.GetStdHandle.restype = ctypes.c_void_p
        pipes = []
        for identifier, flags, mode in [(-10, os.O_RDONLY, 'rb'), (-11, os.O_WRONLY, 'wb')]:
            handle = kernel.GetStdHandle(identifier & 0xffffffff)
            pipes.append(os.fdopen(msvcrt.open_osfhandle(handle, flags | os.O_BINARY), mode))
        source, sink = pipes
        sys.stderr = open(os.devnull, 'w', encoding='utf-8')
    else:
        source, sink = sys.stdin.buffer, sys.stdout.buffer
    engine = engine_error = None
    for raw in source:
        try:
            request = json.loads(raw.decode('utf-8'))
            if not isinstance(request, dict):
                raise ValueError('请求格式错误')
            if engine is None:
                if engine_error is not None:
                    # 资源缺失或不一致时不必每个请求重建；重新准备资源后计算进程会被重启。
                    raise engine_error
                try:
                    engine = Engine()
                except Exception as error:
                    engine_error = error
                    raise
            op = request.get('op')
            if op not in ('load', 'load_live', 'describe', 'compare'):
                raise ValueError('未知计算请求')
            result = dict(ok=True, **getattr(engine, op)(request))
            json.dumps(result, allow_nan=False)  # 非有限值明确报错，不能在界面悄悄变成 0。
        except Exception as error:
            result = dict(ok=False, error=str(error))
        sink.write(json.dumps(result, ensure_ascii=False, allow_nan=False).encode('utf-8') + b'\n')
        sink.flush()
