"""原生（C++）计算引擎的 Python 封装：接口模仿 rg_growth.Simulation、rg_timeline.Timeline，
让 rg_goal.Runner、rg_optimize 少改就能换引擎。设计见 docs/C++引擎设计（20261031）.md。

一个进程只能有一份原生游戏（静态区是全局的）；「按目标找 build」的 worker 本来就是一进程一份。
游戏对象是 rgcore.Ref 代理：读写属性、调用方法都直接进 C++；同一对象始终是同一个代理。
"""
import os
import random
import sys
from collections.abc import MutableMapping
from pathlib import Path

HERE = Path(__file__).resolve().parent
TICK = 1 / 30


def _import_core():
    # 开发时在 build/native；打包后和计算模块放在一起
    dirs = [HERE, HERE.parent / 'build' / 'native']
    if os.environ.get('RGA_CORE_DIR'):            # 例如计时版 build/native/prof
        dirs.insert(0, Path(os.environ['RGA_CORE_DIR']))
    for d in dirs:
        if any(d.glob('rgcore*.pyd')) or any(d.glob('rgcore*.so')):
            if str(d) not in sys.path:
                sys.path.insert(0, str(d))
            break
    import rgcore
    return rgcore


rgcore = None


def available():
    try:
        _load()
        return True
    except ImportError:
        return False


def _load():
    global rgcore
    if rgcore is None:
        rgcore = _import_core()
    return rgcore


class Clock(MutableMapping):
    """ns['_snapshot_clock'] 的替身：读写原生引擎的时钟"""
    KEYS = ('timestamp', 'timer_ms')

    def __getitem__(self, k):
        ts, ms = rgcore.clock()
        if k == 'timestamp':
            return ts
        if k == 'timer_ms':
            return ms
        raise KeyError(k)

    def __setitem__(self, k, v):
        if k == 'timestamp':
            rgcore.clock(float(v), None)
        elif k == 'timer_ms':
            rgcore.clock(None, float(v))
        else:
            raise KeyError(k)

    def __delitem__(self, k):
        pass

    def __iter__(self):
        return iter(self.KEYS)

    def __len__(self):
        return 2

    def clear(self):
        pass


class Namespace(dict):
    """ns 的替身：ns['类的 Python 名'] 得到类代理"""

    def __init__(self):
        super().__init__()
        self['_snapshot_clock'] = Clock()

    def __missing__(self, k):
        c = rgcore.cls(k)
        if c is None:
            raise KeyError(k)
        self[k] = c
        return c

    def get(self, k, default=None):
        try:
            return self[k]
        except KeyError:
            return default


class StateSnapshot:
    """原生快照：整块复制对象字段、静态区、随机数和时钟（对象身份不变）"""

    def __init__(self, *_):
        rgcore.snapshot()

    def restore(self):
        rgcore.restore()


class NativeSim:
    """同 rg_growth.Simulation 的接口"""
    native = True

    def __init__(self, game_py=None, sol_path=None, *, encoded_save=None, timestamp=None, season=None,
                 event_cache=None, **_):
        import rg_sim
        _load()
        if encoded_save is None:
            sol_path = sol_path or rg_sim.SOL
            encoded_save = rg_sim.save_text(sol_path)
            if timestamp is None:
                timestamp = Path(sol_path).stat().st_mtime
        if timestamp is None:
            raise ValueError('试算导出存档时必须提供存档时间')
        self.preserve_live_caches = False
        self.game_py = game_py
        # 原生引擎的随机数从 Python random 的当前状态开始（Runner 先 random.seed 再建游戏）
        rgcore.rng_set(random.getstate())
        self.static_init_errors = rgcore.boot(encoded_save.strip(), float(timestamp), season=season,
                                              event_cache=event_cache)
        self.ns = Namespace()
        self.G = self.ns['S_8G']
        self.g = rgcore.game()
        self.core = self.ns['S__23__21__21_']
        self.core_names = rg_sim._real2obf()
        self.game_names = rg_sim._real2obf('§8G§')
        self.harness = self.ns['RgaHarness']

    # ---- 同 Simulation ----
    def game_call(self, name, *args):
        return getattr(self.g, self.game_names[name])(*args)

    def core_call(self, name, *args):
        return getattr(self.core, self.core_names[name])(*args)

    def refresh(self):
        self.game_call('invalidateAllCache')

    def find(self, collection, name_or_sid):
        # 和 Simulation.find 同样的匹配（名字或存档 ID），按集合建一次索引（名字和存档 ID 是定值）
        index = self.__dict__.setdefault('_find_index', {}).get(id(collection))
        if index is None:
            index = {}
            for x in collection:
                for key in (('n', x.S_1i), ('s', str(x.S_6_21_Z))):
                    index.setdefault(key, []).append(x)
            self._find_index[id(collection)] = index
            self.__dict__.setdefault('_find_keep', []).append(collection)   # 保证 id 不被复用
        candidates = list({id(x): x for x in index.get(('n', name_or_sid), []) +
                           index.get(('s', str(name_or_sid)), [])}.values())
        if len(candidates) != 1:
            raise ValueError('名称/存档 ID 需要唯一匹配：%r（找到 %d 项）' % (name_or_sid, len(candidates)))
        return candidates[0]

    def buy_upgrade(self, name_or_sid):
        u = self.find(self.G.S__2d__21_4, name_or_sid)
        owned_before = bool(u.S__3c__21_7)
        purchased = False if owned_before else bool(self.game_call('buyUpgrade', u, True))
        if not self.preserve_live_caches:
            self.refresh()
        return dict(action='upgrade', name=u.S_1i, purchased=purchased,
                    owned_before=owned_before, owned_after=bool(u.S__3c__21_7))

    # ---- 原生专用 ----
    def disable_save(self):
        """Runner：自动存档换成什么都不做（返回 true）"""
        rgcore.hook('no_save', True)

    def rng_state(self):
        return rgcore.rng_get()

    def set_rng_state(self, st):
        rgcore.rng_set(st)


class NativeTimeline:
    """rg_timeline.Timeline 里 Runner 用到的部分：界面替身、推进、「全部购买」"""

    def __init__(self, sim, *, buy_interval=10.0, buy_upgrades=True, buy_buildings=True, building_mode='max',
                 clicks_per_second=0.0):
        self.sim, self.ns, self.G, self.g = sim, sim.ns, sim.G, sim.g
        self.buy_interval = buy_interval
        self.buy_upgrades, self.buy_buildings = buy_upgrades, buy_buildings
        self.building_mode, self.clicks_per_second = building_mode, clicks_per_second
        self.ticks = 0
        self.events = []
        ui = rgcore.headless()
        self.g.S_8_21_O = ui
        self.ns['S__20_g'].S__3e__21_a = ui
        self.advance_ticks = getattr(self.g, sim.game_names['advanceTicks'])
        self.click = getattr(self.g, sim.game_names['onTreasureClick'])

    def advance(self, n, step=1):
        """推进 n 个 tick（时钟一起走），每次 advanceTicks(step)"""
        rgcore.ticks(n, step)
        self.ticks += n

    def press_buy_all(self):
        out = {}
        if self.buy_upgrades:
            bought, exchanges = self.sim.harness.buyAllUpgrades()
            bought = list(bought)
            if bought:
                out['upgrades'] = [u.S_1i for u in bought]
            if exchanges:
                out['exchanges'] = exchanges
        if self.buy_buildings:
            got = self.buy_all_buildings()
            if got:
                out['buildings'] = got
        return out

    def buy_all_buildings(self):
        got = self.sim.harness.buyAllBuildings(self.building_mode == 'max')
        return {k: got[k] for k in got}

    def manual_clicks(self):
        if self.clicks_per_second > 0:
            self.click(-1, -1, self.clicks_per_second, True, False)

    def spells_active(self):
        return sorted(s.S_1i for s in self.G.S_0_21_A if s.S_23)
