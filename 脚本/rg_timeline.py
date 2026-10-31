"""连续增长模拟：按客户端时间循环一帧一帧推进独立内存存档。

python -X utf8 -I 脚本/rg_timeline.py build/calculation/game.py --save <存档> --seconds 120

推进方式照搬 Game.onEnterFrame：每 1/30 秒调用一次 advanceTicks(1)。
游戏里逐 tick、整秒、法术、自动施法、助手和自动点击、缓存每 150 次调用失效
都在 advanceTicks 里，这里不改写；只把界面对象换成什么都不做的空对象。
玩家这边只模拟游戏自己的两个「全部购买」按钮（升级、建筑），按固定间隔按下。
不向正在运行的游戏输入，也不写回存档。
"""
import argparse
import functools
import json
import math
import sys
import time
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))

import rg_growth
import rg_sim

TICK = 1 / 30
CACHE_PERIOD = 150     # advanceTicks 每调用 150 次清一次缓存


class Headless:
    """代替 UI 实例：游戏逻辑里调用的界面方法（提示、浮动文字、刷新面板）全部不做事。"""
    def __getattr__(self, name):
        return _noop


def _noop(*args, **kwargs):
    return None


# BuyAll.buyAll（升级「全部购买」按钮）的逻辑，照转写结果原样保留；
# 只去掉最后刷新面板和弹提示的界面调用。在游戏模块的命名空间里执行。
_BUY_ALL_UPGRADES = '''
def _buy_all_upgrades():
    A__loc3_ = slot_string('BuyAll')
    A__loc7_ = 0
    A__loc4_ = 0
    bought = []
    A__loc5_ = toint(S_8G.S__3e__21_K)
    S_8G.S__3e__21_K = S__3f_v.S__23__21_S
    try:
        A__loc6_ = 0
        while cmp_lt(A__loc6_, alen(S_8G.S__2d__21_4)):
            A__loc8_ = idx_get(S_8G.S__2d__21_4, A__loc6_)
            if (not T(((((not T(A__loc8_.S__3c__21_7)) and ((((((((((eq(A__loc8_.id, S__40__22_J.id) or eq(A__loc8_.id, S_7_22_9.id)) or eq(A__loc8_.id, S__3f__22_J.id)) or eq(A__loc8_.id, S__5b__22_J.id)) or eq(A__loc8_.id, S__5d__22_L.id)) or eq(A__loc8_.id, S_5_22__2d_.id)) or eq(A__loc8_.id, S__20__21_2.id)) or eq(A__loc8_.id, S_5_26_.id)) or A__loc8_.S_7_22_0) or eq(A__loc8_.S__3f__21__3d_, 'RubyUpgrade')))) and (not eq(idx_get(S_8G.S_4P, 29), 1)))))):
                if (not T((((A__loc8_.S__3c__21_7 or (not T(A__loc8_.S_3e))) or eq(A__loc8_.S__2c__21_B, (-(1))))))):
                    if (not T((((not eq(A__loc8_.S__40_1, '')) and eq(A__loc8_.S__40_1, A__loc3_))))):
                        if (not T(S_8G.S__3e__21_a.S_6M(A__loc8_, True))):
                            A__loc3_ = slot_string(A__loc8_.S__40_1)
                        else:
                            A__loc7_ += 1
                            bought.append(A__loc8_)
            A__loc6_ = toint(add(A__loc6_, 1))
        if (not eq(S_8G.S__2d__21__5e_, (-(1)))):
            A__loc6_ = 0
            while cmp_lt(A__loc6_, alen(S_8G.S__2d__21_4)):
                A__loc2_ = idx_get(S_8G.S__2d__21_4, A__loc6_)
                if T(((is_(A__loc2_, S__3b_E) and (not eq(A__loc2_.S__2d__21__5e_, (-(1))))) and eq(idx_get(S_8G.S_4P, 21), 1))):
                    if (not T(((((eq(A__loc2_.S__2d__21__5e_, 10) or eq(A__loc2_.S__2d__21__5e_, 9))) and (not T(S__26_c.S__27__21__5f_())))))):
                        if T(S_8G.S__3e__21_a.S__3b_T(A__loc2_, True, True)):
                            A__loc4_ = A__loc4_ + S_8G.S__3e__21_a.S__60__40_
                A__loc6_ = toint(add(A__loc6_, 1))
    finally:
        S_8G.S__3e__21_K = A__loc5_
    S_8G.S__3e__21_a.S__20_R()
    return bought, A__loc4_
'''


@functools.lru_cache(maxsize=4)
def _save_tick_tail(game_py, method):
    """从转写源码截出 advanceTicks 在自动存档之后的部分（回魔、自动施法、法术计时、产出……）。

    游戏在 tick 中间存档：整秒处理（含 save）之后，这一 tick 剩下的部分才执行。
    从存档开始模拟时先补跑这一段，才和不中断的游戏对齐。截取位置是整秒处理后
    第一次读最大魔力；找不到或不唯一就报错，不用手写代码代替。
    """
    lines = Path(game_py).read_text(encoding='utf-8').splitlines()
    head = '    def %s(self, param1=_UNSET):' % method
    starts = [i for i, line in enumerate(lines) if line == head]
    if len(starts) != 1:
        raise ValueError('计算模块里找不到唯一的 advanceTicks')
    body = []
    for line in lines[starts[0] + 1:]:
        if line.strip() and not line.startswith('        '):
            break
        body.append(line)
    anchor = '        A__loc8_ = to_number(S__23__21__21_.S_2_21__26_())'   # Formulas.getMaxMana()
    hits = [i for i, line in enumerate(body) if line == anchor]
    if len(hits) != 2:
        raise ValueError('advanceTicks 的结构和预期不同，无法对齐存档时刻')
    tail = [line[4:] if line.strip() else line for line in body[hits[0]:]]
    return 'def _save_tick_tail(self, param1, A__loc12_):\n' + '\n'.join(tail) + '\n'


def spell_timers(sim):
    """{法术存档 ID: (是否生效, 已过帧数, 结束帧)}——载入后读取，供 restore_spell_ends 用。"""
    return {s.S_6_21_Z: (bool(s.S_23), s.S__27__21_X, s.S_0n) for s in sim.G.S_0_21_A}


def restore_spell_ends(sim, timestamp, history, timers_of):
    """把生效中法术的结束帧改回施放时定下的值。

    存档不存结束帧：载入时游戏按「现在的」持续时间重算（Game.load：§0n§ = duration），
    而运行中的游戏用的是施放那一刻的持续时间。持续时间随升级、时间变长，所以从存档
    开始模拟时，已经生效的法术会比真实游戏晚结束、晚重放（实测 1～2 秒）。
    这里找施放之后 31 秒内的那份存档（history：[(存档时间, 键)]），用它载入时算出的持续时间
    ——离施放最多 30 秒，通常和施放时相同；找不到就不改。
    timers_of(键) 返回那份存档的 spell_timers()。返回每个生效法术的处理结果。
    """
    out = []
    for spell in sim.G.S_0_21_A:
        if not spell.S_23:
            continue
        cast_at = timestamp - spell.S__27__21_X / 30
        row = dict(name=spell.S_1i, loaded_end=spell.S_0n, end=spell.S_0n, source=None)
        for ts, key in history:
            # 只用施放后的第一份自动存档（30 秒内）；更晚的存档算出的持续时间同样不是施放时的
            if ts < cast_at - 1 or ts > cast_at + 31 or ts >= timestamp - 0.5:
                continue
            active, elapsed, end = timers_of(key).get(spell.S_6_21_Z, (False, 0, 0))
            # 同一次施放：那份存档里也在生效，推算出的施放时刻相差不到 1 秒
            if not active or abs(ts - elapsed / 30 - cast_at) > 1:
                continue
            spell.S_0n = spell.S_4_22_I = end
            row.update(end=end, source=ts)
            break
        out.append(row)
    return out


class Timeline:
    def __init__(self, sim, *, buy_interval=10.0, buy_upgrades=True, buy_buildings=True,
                 building_mode='max', clicks_per_second=0.0):
        if buy_interval is not None and buy_interval <= 0:
            raise ValueError('购买间隔必须大于 0 秒')
        if not 0 <= clicks_per_second <= 30:
            raise ValueError('手动点击每秒 0～30 次（游戏每秒最多算 30 次手动点击）')
        if building_mode not in ('max', 'save'):
            raise ValueError('建筑购买数量只能是 max（买最大）或 save（存档里的设置）')
        self.sim, self.ns, self.G, self.g = sim, sim.ns, sim.G, sim.g
        self.clock = self.ns.get('_snapshot_clock')
        if not self.clock or self.clock.get('timestamp') is None:
            raise ValueError('连续模拟需要存档时间')
        self.buy_interval = buy_interval
        self.buy_upgrades, self.buy_buildings = buy_upgrades, buy_buildings
        self.building_mode, self.clicks_per_second = building_mode, clicks_per_second
        self.ticks = 0
        self.ui = Headless()
        # 实例字段 §8!O§ 和静态 UI.§>!a§ 都是界面实例。
        self.g.S_8_21_O = self.ui
        self.ns['S__20_g'].S__3e__21_a = self.ui
        self.advance_ticks = getattr(self.g, sim.game_names['advanceTicks'])
        self.click = getattr(self.g, sim.game_names['onTreasureClick'])
        exec(_BUY_ALL_UPGRADES, self.ns)
        self._buy_all_upgrades = self.ns.pop('_buy_all_upgrades')
        self.events = []

    def finish_save_tick(self):
        """存档是在 tick 中间写的：先跑完那一 tick 存档之后的部分（这一 tick 是整秒，会自动施法）。

        只用于游戏自动存档；实时快照不在 tick 中间，不要调用。
        """
        exec(_save_tick_tail(str(self.sim.game_py), self.sim.game_names['advanceTicks']), self.ns)
        tail = self.ns.pop('_save_tick_tail')
        tail(self.g, 1, 1)

    # ---- 时间 ----
    @property
    def seconds(self):
        return self.ticks * TICK

    def tick(self):
        # 游戏用 new Date() 判断时间型效果，用 getTimer() 计帧；两者一起前进。
        self.clock['timestamp'] += TICK
        self.clock['timer_ms'] += 1000 * TICK
        self.advance_ticks(1)
        self.ticks += 1

    # ---- 玩家动作 ----
    def press_buy_all(self):
        out = {}
        if self.buy_upgrades:
            bought, exchanges = self._buy_all_upgrades()
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
        """BuildingPanel.buyAll：金币按可见建筑平分，每栋按购买数量设置买。"""
        visible = [b for b in self.G.S__25__3c_ if b.S__2d_6]   # Building.visible
        if not visible:
            return {}
        budget = getattr(self.G, self.sim.game_names['resource']) / len(visible)
        mode_attr = 'S__5b__21_M'
        old = getattr(self.G, mode_attr)
        if self.building_mode == 'max':
            setattr(self.G, mode_attr, self.ns['S_2_21_C'].S__23__21_S)
        got = {}
        buy = getattr(self.g, self.sim.game_names['buyBuilding'])
        try:
            for b in visible:
                before = b.S__21_a
                buy(b, False, False, False, budget)
                if b.S__21_a != before:
                    got[b.S_1i] = b.S__21_a - before
        finally:
            setattr(self.G, mode_attr, old)
        return got

    def manual_clicks(self):
        # 一秒一次批量点击（param4=true），和游戏批量点击同一入口；精灵幸运按批判定一次。
        if self.clicks_per_second > 0:
            self.click(-1, -1, self.clicks_per_second, True, False)

    # ---- 读数 ----
    def spells_active(self):
        return sorted(s.S_1i for s in self.G.S_0_21_A if s.S_23)

    def sample(self):
        # 读带缓存的数值（和游戏底栏一样），不额外清缓存，避免改变推进顺序。
        snap = self.sim.snapshot(refresh=False, cached=True)
        stats = self.G.S_5_21_V
        snap.update(t=round(self.seconds, 4),
                    # 本局累计产出金币（统计 0）和现在重生能拿的宝石（Formulas.getGemsReset）
                    coins_produced=stats[0],
                    gems_reset=self.sim.core_call('getGemsReset'),
                    buildings={b.S_1i: b.S__21_a for b in self.G.S__25__3c_ if b.S__21_a},
                    spells=self.spells_active(),
                    upgrades_owned=sum(1 for u in self.G.S__2d__21_4 if u.S__3c__21_7))
        return snap

    # ---- 分段推进：begin 定好时长，step 每次算一段，界面据此显示进度、随时停 ----
    def begin(self, seconds, *, sample_every=10.0, stop_coins=None):
        if not 0 < seconds <= 24 * 3600:
            raise ValueError('模拟时长必须在 0～24 小时之间')
        if sample_every <= 0:
            raise ValueError('采样间隔必须大于 0 秒')
        self.total = round(seconds * 30)
        self.sample_ticks = max(1, round(sample_every * 30))
        self.buy_ticks = None if self.buy_interval is None else max(1, round(self.buy_interval * 30))
        self.stop_coins = stop_coins
        self.start_tick = self.ticks
        self.samples = [self.sample()]
        self.prev_spells = set(self.samples[0]['spells'])
        self.wall = 0.0
        self.stopped = None
        self.done = False

    def step(self, wall_budget=None):
        """推进到结束或用完 wall_budget 秒（只在整秒处检查），返回这一段新增的采样数。"""
        started = time.perf_counter()
        before = len(self.samples)
        while not self.done:
            self.tick()
            n = self.ticks - self.start_tick
            t = round(self.seconds, 4)
            if n % 30 == 0:
                self.manual_clicks()
            if self.buy_ticks and n % self.buy_ticks == 0:
                got = self.press_buy_all()
                if got:
                    self.events.append(dict(t=t, kind='buy', **got))
            spells = set(self.spells_active())
            if spells != self.prev_spells:
                for name in sorted(spells - self.prev_spells):
                    self.events.append(dict(t=t, kind='spell_on', name=name))
                for name in sorted(self.prev_spells - spells):
                    self.events.append(dict(t=t, kind='spell_off', name=name))
                self.prev_spells = spells
            if n % self.sample_ticks == 0 or n == self.total:
                self.samples.append(self.sample())
                if self.stop_coins is not None and self.samples[-1]['coins'] >= self.stop_coins:
                    self.stopped = 'coins'
                    self.done = True
            if n >= self.total:
                self.done = True
            if wall_budget is not None and n % 30 == 0 and time.perf_counter() - started >= wall_budget:
                break
        self.wall += time.perf_counter() - started
        return len(self.samples) - before

    @property
    def progress(self):
        return min(1.0, (self.ticks - self.start_tick) / self.total)

    def result(self):
        first, last = self.samples[0], self.samples[-1]
        span = last['t'] - first['t']
        hours = span / 3600
        ratio = last['total'] / first['total'] if first['total'] else None
        return dict(
            seconds=span, ticks=self.ticks - self.start_tick, done=self.done, stopped=self.stopped,
            wall_seconds=self.wall,
            settings=dict(buy_interval=self.buy_interval, buy_upgrades=self.buy_upgrades,
                          buy_buildings=self.buy_buildings, building_mode=self.building_mode,
                          clicks_per_second=self.clicks_per_second),
            start=first, end=last,
            growth=dict(
                production_ratio=ratio,
                production_doubling_seconds=(span * math.log(2) / math.log(ratio)
                                             if ratio and ratio > 1 and span else None),
                coins_produced=last['coins_produced'] - first['coins_produced'],
                gems_gained=last['gems_reset'] - first['gems_reset'],
                gems_per_hour=(last['gems_reset'] - first['gems_reset']) / hours if hours else None),
            samples=self.samples, events=self.events)

    def run(self, seconds, *, sample_every=10.0, progress=None, stop_coins=None):
        self.begin(seconds, sample_every=sample_every, stop_coins=stop_coins)
        while not self.done:
            self.step(wall_budget=2.0)
            if progress:
                progress(self.progress, self.samples[-1])
        return self.result()


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('game_py')
    ap.add_argument('--save', default=rg_sim.SOL)
    ap.add_argument('--seconds', type=float, default=60)
    ap.add_argument('--sample', type=float, default=10)
    ap.add_argument('--buy-interval', type=float, default=10, help='每隔几秒按一次「全部购买」，0 表示不买')
    ap.add_argument('--no-upgrades', action='store_true')
    ap.add_argument('--no-buildings', action='store_true')
    ap.add_argument('--building-mode', default='max', choices=['max', 'save'])
    ap.add_argument('--clicks', type=float, default=0, help='每秒手动点击次数')
    ap.add_argument('--seed', type=int, default=0, help='随机数种子（游戏里的随机事件用；同一种子结果逐位相同）')
    ap.add_argument('--output')
    args = ap.parse_args()
    import random
    random.seed(args.seed)
    sim = rg_growth.Simulation(args.game_py, args.save)
    tl = Timeline(sim, buy_interval=args.buy_interval or None, buy_upgrades=not args.no_upgrades,
                  buy_buildings=not args.no_buildings, building_mode=args.building_mode,
                  clicks_per_second=args.clicks)
    result = tl.run(args.seconds, sample_every=args.sample,
                    progress=lambda f, s: print('%5.1f%%  t=%-7g 总产出 %s  金币 %s  法力 %.0f' % (
                        100 * f, s['t'], rg_sim.fmt(s['total']), rg_sim.fmt(s['coins']), s['mana']), file=sys.stderr))
    text = json.dumps(result, ensure_ascii=False, indent=1, allow_nan=False, default=str)
    if args.output:
        Path(args.output).write_text(text, encoding='utf-8')
    else:
        print(text)


if __name__ == '__main__':
    main()
