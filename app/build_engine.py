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
                        command += ['-X', 'utf8', str(ROOT / 'app' / 'rg_app.py')]
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
            raise ValueError('缺少计算模块，请先运行 scripts/prepare_engine.py')
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
        self.timeline = None
        self.live_snapshot = None

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
        self.live_snapshot = live
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

    # ---- 连续模拟：在单独的一份游戏副本上分段推进，每段几秒，界面轮询进度。
    # 和查询、即时试算用的副本互不影响；结束或中止后直接丢掉。
    def timeline_start(self, request):
        import math
        import importlib
        self.require(request)
        self.timeline_end()
        options = request.get('options')
        if not isinstance(options, dict):
            raise ValueError('模拟设置格式错误')

        def number(name, low, high, default):
            value = options.get(name, default)
            if isinstance(value, bool) or not isinstance(value, (int, float)) or not math.isfinite(value) or not low <= value <= high:
                raise ValueError('模拟设置超出范围：' + name)
            return value
        seconds = number('seconds', 1, 24 * 3600, 300)
        sample = number('sample', 1, 3600, max(5, seconds / 60))
        interval = number('buy_interval', 0, 3600, 10)
        clicks = number('clicks', 0, 30, 0)
        mode = options.get('building_mode', 'max')
        if mode not in ('max', 'save'):
            raise ValueError('建筑购买数量设置无效')
        Timeline = importlib.import_module('rg_timeline').Timeline
        sim = self.new_sim()
        if self.live_snapshot is not None:
            from live_snapshot import LiveSnapshot
            LiveSnapshot(sim, self.live_snapshot).apply()
            sim.preserve_live_caches = True
        try:
            timeline = Timeline(sim, buy_interval=interval or None,
                                buy_upgrades=bool(options.get('buy_upgrades', True)),
                                buy_buildings=bool(options.get('buy_buildings', True)),
                                building_mode=mode, clicks_per_second=clicks)
            spell_ends = []
            if self.live_snapshot is None:
                # 存档不存法术结束帧，按施放后的那份存档还原（实时快照直接读到了游戏里的结束帧）
                spell_ends = self._restore_spell_ends(sim, request.get('history'))
                # 自动存档写在 tick 中间，先补完那一 tick，和不中断的游戏对齐（实时快照不在 tick 中间）
                timeline.finish_save_tick()
            timeline.begin(seconds, sample_every=sample)
        except Exception:
            self.timeline_end()
            raise
        self.timeline, self.timeline_sent, self.timeline_revision = timeline, (0, 0), self.revision
        return dict(self.timeline_step(dict(revision=self.revision, budget=1)), spell_ends=spell_ends)

    def _restore_spell_ends(self, sim, history):
        import importlib
        import math
        import random
        timeline_module = importlib.import_module('rg_timeline')
        if history is None:
            history = []
        if not isinstance(history, list) or len(history) > 200:
            raise ValueError('存档记录格式错误')
        saves, entries = {}, []
        for item in history:
            if not isinstance(item, dict):
                raise ValueError('存档记录格式错误')
            save, ts = item.get('save'), item.get('timestamp')
            if not isinstance(save, str) or len(save) > 2_000_000 or isinstance(ts, bool) \
                    or not isinstance(ts, (int, float)) or not math.isfinite(ts):
                raise ValueError('存档记录格式错误')
            key = hashlib.sha256((save + '\n' + str(ts)).encode()).hexdigest()
            saves[key] = (save, ts)
            entries.append((ts, key))
        entries.sort()
        cache = self.__dict__.setdefault('spell_timer_cache', {})

        def timers_of(key):
            if key not in cache:
                save, ts = saves[key]
                # 载入旧存档不能动模拟用的随机数，否则结果取决于缓存命中与否
                state = random.getstate()
                try:
                    old = self.Simulation(self.assets / 'game.py', encoded_save=save, timestamp=ts)
                finally:
                    random.setstate(state)
                if len(cache) >= 200:
                    cache.pop(next(iter(cache)))
                cache[key] = timeline_module.spell_timers(old)
            return cache[key]
        rows = timeline_module.restore_spell_ends(sim, self.timestamp, entries, timers_of)
        return [dict(name=self.translate(row['name']), corrected=row['source'] is not None,
                     loaded_end=row['loaded_end'], end=row['end'], source=row['source']) for row in rows]

    def timeline_require(self, request):
        if self.timeline is None or request.get('revision') != self.timeline_revision:
            raise ValueError('没有进行中的模拟')

    def timeline_step(self, request):
        self.timeline_require(request)
        timeline = self.timeline
        if timeline is None:
            raise ValueError('没有进行中的模拟')
        budget = request.get('budget', 5)
        if isinstance(budget, bool) or not isinstance(budget, (int, float)) or not 0 < budget <= 20:
            budget = 5
        try:
            timeline.step(wall_budget=budget)
        except Exception:
            self.timeline_end()
            raise
        return self._timeline_payload(final=timeline.done)

    def timeline_stop(self, request):
        self.timeline_require(request)
        return self._timeline_payload(final=True)

    def _timeline_payload(self, final):
        timeline = self.timeline
        samples_sent, events_sent = self.timeline_sent
        names = lambda d: {self.translate(k): v for k, v in d.items()}
        samples = []
        for row in timeline.samples[samples_sent:]:
            row = dict(row, buildings=names(row['buildings']), spells=[self.translate(x) for x in row['spells']])
            samples.append(row)
        events = []
        for event in timeline.events[events_sent:]:
            event = dict(event)
            if 'name' in event:
                event['name'] = self.translate(event['name'])
            if 'upgrades' in event:
                event['upgrades'] = [self.translate(x) for x in event['upgrades']]
            if 'buildings' in event:
                event['buildings'] = names(event['buildings'])
            events.append(event)
        self.timeline_sent = len(timeline.samples), len(timeline.events)
        out = dict(revision=self.timeline_revision, progress=timeline.progress, done=final,
                   seconds=timeline.seconds - timeline.samples[0]['t'], wall_seconds=timeline.wall,
                   samples=samples, events=events)
        if final:
            result = timeline.result()
            out.update(growth=result['growth'], settings=result['settings'], stopped=result['stopped'],
                       finished=timeline.done)
            self.timeline_end()
        return out

    def timeline_end(self):
        """丢掉模拟用的游戏副本。"""
        self.timeline = None

    # ---- 按目标找 build：另起几个试跑进程，在后台线程里搜索，界面轮询 goal_status。
    def goal_start(self, request):
        """按目标求最优 build（rg_optimize）：另起 3 个低优先级进程，在后台线程里协调，界面轮询 goal_status。"""
        import importlib
        import math
        self.require(request)
        if self.live_snapshot is not None:
            raise ValueError('按目标找 build 要从存档退位重开，请先点「使用存档计算」')
        self.goal_stop(dict(request, quiet=True))
        rg_goal = importlib.import_module('rg_goal')
        rg_optimize = importlib.import_module('rg_optimize')
        options = request.get('options')
        if not isinstance(options, dict):
            raise ValueError('搜索设置格式错误')
        goal = options.get('goal')
        if goal not in rg_goal.GOALS:
            raise ValueError('未知目标')
        mode = options.get('mode', 'reach')
        if mode not in ('reach', 'max'):
            raise ValueError('未知搜索方式')
        limit = options.get('limit', 300)
        target = options.get('target') if mode == 'reach' else None
        for value, low, high in ((limit, 10, 3600),) + (((target, 0, 1e300),) if mode == 'reach' else ()):
            if isinstance(value, bool) or not isinstance(value, (int, float)) or not math.isfinite(value) or not low < value <= high:
                raise ValueError('搜索设置超出范围')
        spell = options.get('spell') or None
        if spell is not None and (not isinstance(spell, str) or spell not in {s.S_1i for s in self.sim.G.S_0_21_A}):
            raise ValueError('未知法术')
        init = dict(game_py=str(self.assets / 'game.py'), save=self.save, timestamp=self.timestamp,
                    research_json=str(self.assets / 'research.json'), graph=str(self.assets / 'depgraph.json'))
        self.goal = rg_optimize.Optimize(_worker_command('--opt-worker'), init, goal=goal, T=float(limit),
                                         target=float(target) if target is not None else None, spell=spell,
                                         workers=rg_goal.WORKERS)
        self.goal_revision = self.revision
        self.goal_options = dict(goal=goal, mode=mode, target=target, limit=limit, spell=spell, workers=rg_goal.WORKERS)
        return self.goal_status(dict(revision=self.revision))

    def goal_status(self, request):
        search = getattr(self, 'goal', None)
        if search is None:
            raise ValueError('没有进行中的搜索')
        status = search.status()
        if not hasattr(self, 'research_names'):
            rows = json.loads((self.assets / 'research.json').read_text(encoding='utf-8'))
            self.research_names = {row['code']: self.translate(row['name']) for row in rows}
        out = rg_optimize_module().ui_status(status, request, self.translate, self.research_names, self.goal_options, self.goal_revision)
        if status['finished']:
            self.goal = None
        return out

    def goal_stop(self, request):
        search = getattr(self, 'goal', None)
        if search is None:
            if request.get('quiet'):
                return {}
            raise ValueError('没有进行中的搜索')
        search.stop()
        if request.get('quiet'):
            self.goal = None
            return {}
        return self.goal_status(request)


def rg_optimize_module():
    import importlib
    return importlib.import_module('rg_optimize')


def _calculation_assets():
    assets = Path(sys._MEIPASS) / 'calculation' if getattr(sys, 'frozen', False) else ROOT / 'build' / 'calculation'
    if str(assets) not in sys.path:
        sys.path.insert(0, str(assets))
    return assets


def _worker_command(flag):
    command = [sys.executable]
    if not getattr(sys, 'frozen', False):
        command += ['-X', 'utf8', str(ROOT / 'app' / 'rg_app.py')]
    return command + [flag]


def opt_worker_main():
    """按目标求最优 build 的子进程（rg_optimize）。"""
    assets = _calculation_assets()
    import rg_sim
    rg_sim._real2obf.cache_clear()
    rg_sim.MEMBER_NAMES = assets / 'member-names.json'
    import rg_optimize
    source, sink = _std_pipes()
    rg_optimize.worker_main(source, sink)


def goal_worker_main():
    """按目标找 build 的试跑子进程：每个进程一份游戏副本，按行收发 JSON。"""
    assets = _calculation_assets()
    import rg_sim
    rg_sim._real2obf.cache_clear()
    rg_sim.MEMBER_NAMES = assets / 'member-names.json'
    import rg_goal
    source, sink = _std_pipes()
    rg_goal.worker_main(source, sink)


def _std_pipes():
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
    return source, sink


def worker_main():
    source, sink = _std_pipes()
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
            if op not in ('load', 'load_live', 'describe', 'compare', 'timeline_start', 'timeline_step', 'timeline_stop',
                          'goal_start', 'goal_status', 'goal_stop'):
                raise ValueError('未知计算请求')
            result = dict(ok=True, **getattr(engine, op)(request))
            json.dumps(result, allow_nan=False)  # 非有限值明确报错，不能在界面悄悄变成 0。
        except Exception as error:
            result = dict(ok=False, error=str(error))
        sink.write(json.dumps(result, ensure_ascii=False, allow_nan=False).encode('utf-8') + b'\n')
        sink.flush()
