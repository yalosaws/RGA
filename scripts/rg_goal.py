"""按目标自动找 build：从存档退位重开，在独立的游戏副本里试跑候选 build，挑最快达到目标的。

python -X utf8 -I scripts/rg_goal.py build/calculation/game.py --goal assistants --target 40000 --spell "Fairy Chanting"

一次试跑（Runner.run）：
  载入存档 → 退位（游戏自己的 softReset）→ 按顺序买立场、阵营、显赫阵营、血统（都是游戏里的升级）
  → 重新买自动施法类升级、恢复退位前的自动施法设置 → 按顺序买研究（游戏自己判断能不能买）
  → 每隔几秒按一次「全部购买」（rg_timeline 搬来的按钮逻辑）→ 达到目标或到时间上限就停。
  推进方式和连续模拟相同：每 1/30 秒调用一次 advanceTicks(1)。

搜索（Search）：
  第一轮：所有 阵营 × 血统（研究先用退位前那局的），并行试跑。
  第二轮：显赫阵营变体。
  第三轮：对前几名改研究——在试跑的几个时间点上，逐项「把已买的一项换成同分支另一项」
  （只切换拥有标记后重算目标数值，不推进时间），挑出每个分支最好的替换，整局重跑确认，
  更快才保留，反复几轮。
不写存档，不向正在运行的游戏输入。佣兵阵营暂不搜索（佣兵模板的组合另算）。
"""
import argparse
import json
import math
import os
from pathlib import Path
import queue
import random
import subprocess
import sys
import threading
import time

sys.path.insert(0, str(Path(__file__).resolve().parent))

import rg_growth
import rg_native
import rg_sim
import rg_timeline
from simulation_state import StateSnapshot


def use_native():
    """用不用原生（C++）引擎：RGA_NATIVE=0 强制用 Python 版，=1 强制原生；默认有原生模块就用"""
    flag = os.environ.get('RGA_NATIVE')
    if flag == '0':
        return False
    if flag == '1':
        return True
    return rg_native.available()


def game_class(obj):
    """对象的游戏类（Python 版是 type(obj)；原生代理没有对应的 Python 类型，用 constructor）"""
    core = rg_native.rgcore
    return obj.constructor if core is not None and isinstance(obj, core.Ref) else type(obj)

# 选择类升级的存档编号（客户端类名 → 存档 ID，2026-10-30 从 4.3.14 客户端导出；存档 ID 跨版本不变）
ALIGNMENTS = {'good': 224, 'evil': 178, 'neutral': 388}           # AlignmentGood / Evil / TrueNeutral
FACTIONS = {                                                        # *Faction01：「贸易条约」，选定阵营
    'Fairy': (197, 'good'), 'Elven': (169, 'good'), 'Angel': (40, 'good'),
    'Goblin': (216, 'evil'), 'Undead': (398, 'evil'), 'Demon': (104, 'evil'),
    'Titan': (382, 'neutral'), 'Druid': (137, 'neutral'), 'Faceless': (184, 'neutral'),
}
MERC_PICK = 229                                                     # Mercenary First Contract：选佣兵
PRESTIGE = {'Dwarven': 152, 'Drow': 122, 'Dragon': 600}            # changeActiveFaction 的显赫阵营
LATE_PRESTIGE = {'Dragon'}       # 选阵营之后再选的显赫阵营（没有「地下世界的秘密」时要等研究买完）
BLOODLINES = {
    'Fairy': 194, 'Elven': 164, 'Angel': 39, 'Goblin': 212, 'Undead': 396, 'Demon': 103,
    'Titan': 380, 'Druid': 136, 'Faceless': 183, 'Dwarven': 150, 'Drow': 120, 'Dragon': 598,
}
# Autocast、Improved/Masterful/Contingency/Planned/Priority/Efficient/Tiered/Colorful/Reverse Autocasting
AUTOCAST_UPGRADES = (12, 25, 29, 18, 34, 35, 476, 582, 584, 1002)

GOALS = {
    'assistants': '助手',
    'max_mana': '魔上限',
    'mana_regen': '每秒回魔',
    'production': '总产出（每秒）',
    'gems': '现在重生可得宝石',
}

TICK = rg_timeline.TICK
SLOW_GOALS = ('production', 'gems')
CUTOFF_RATIO = 0.1     # 同一时刻不到当前最好的 1/10 就提前停
CUTOFF_AFTER = 0.2     # 跑过时间上限的 20% 才开始比


def _curve_at(curve, t):
    """曲线在 t 秒时的值（取不晚于 t 的最后一个点）。"""
    value = None
    for ct, cv in curve:
        if ct > t:
            break
        value = cv
    return value
WORKERS = 6 if use_native() else 3   # 同时试跑的进程数（低优先级）。Python 版时开 12 个卡死过电脑，定为 3；原生引擎每个进程轻得多，2026-10-31 用户同意放宽到 6
PICK_WAIT = 120        # 选择类升级等这么多秒还买不起，就当这个组合不可行
RESEARCH_WAIT = 30     # 选完阵营后，研究在这么多秒内买不上的就跳过（记在结果里）


def research_table(path=None):
    path = Path(path) if path else Path(__file__).resolve().parents[1] / 'docs' / '客户端研究对照.json'
    rows = json.loads(path.read_text(encoding='utf-8'))
    return {row['id']: row['code'] for row in rows}


class Runner:
    """一份游戏副本；每次试跑前恢复到「刚载入存档」的状态。"""

    def __init__(self, game_py, *, save_path=None, encoded_save=None, timestamp=None, research_json=None, seed=0,
                 native=None):
        random.seed(seed)
        kwargs = {}
        if encoded_save is not None:
            kwargs.update(encoded_save=encoded_save, timestamp=timestamp)
        self.native = use_native() if native is None else native
        if self.native:
            self.sim = sim = rg_native.NativeSim(game_py, save_path or rg_sim.SOL, **kwargs)
        else:
            self.sim = sim = rg_growth.Simulation(game_py, save_path or rg_sim.SOL, **kwargs)
        self.G, self.ns = sim.G, sim.ns
        self.codes = research_table(research_json)
        self.ups = {u.S_6_21_Z: u for u in self.G.S__2d__21_4}
        self.research = {sid: self.ups[sid] for sid in self.codes if sid in self.ups}
        self.by_code = {code: sid for sid, code in self.codes.items()}
        # 世系：LineageUpgradeBase.§6!p§ 是对应血统的运行时 id（要有这个血统才能选）
        self.lineages = {name: u for name, sid in BLOODLINES.items() for u in self.G.S__2d__21_4
                         if sid in self.ups and getattr(u, 'S_6_21_p', None) == self.ups[sid].id
                         and hasattr(u, 'S_0_21_N') and u.S_1i.endswith('Lineage')}
        self.lineage_popup = self.ns['S__26_f']
        # Timeline 换掉界面对象，基准状态里也是换好的
        self.tl = (rg_native.NativeTimeline if self.native else rg_timeline.Timeline)(sim, buy_interval=2)
        # 退位前的研究、选择和自动施法设置，作为默认 build
        G = self.G
        self.current = dict(
            research=[self.codes[sid] for sid, u in self.research.items() if u.S__3c__21_7],
            alignment=next((k for k, v in ALIGNMENTS.items() if self.ups[v].S__3c__21_7), None),
            faction=next((k for k, (v, _) in FACTIONS.items() if self.ups[v].S__3c__21_7), None),
            prestige=next((k for k, v in PRESTIGE.items() if self.ups[v].S__3c__21_7), None),
            bloodline=next((k for k, v in BLOODLINES.items() if self.ups[v].S__3c__21_7), None),
        )
        self.autocast = {s.S_6_21_Z: (s.S_3A, s.S__23__21_B, s.S_5_21_H, s.S_8_23_, s.S_6_21_A) for s in G.S_0_21_A}
        # 有「地下世界的秘密」时选了显赫阵营还能买研究，龙族就不必等研究买完
        self.underworld = next((u for u in G.S__2d__21_4 if u.S_1i == 'Secrets of the Underworld'), None)
        self.clock = dict(self.ns['_snapshot_clock'])
        self.random_state = sim.rng_state() if self.native else random.getstate()
        self.step = 1
        # 自动存档（把整份存档转成文本）占一次试跑约四分之一的时间，模拟里用不到，换成什么都不做。
        # 存档只写出数据，不改游戏状态（Game.save）；连续模拟要拿它和真实存档对照，所以只在这里关掉。
        if self.native:
            sim.disable_save()
        else:
            setattr(sim.g, sim.game_names['save'], lambda *args, **kwargs: True)
        # 试买没买成时不清缓存（Simulation.buy_upgrade 默认每次都清），买成了由 _buy 清
        sim.preserve_live_caches = True
        self.base = (rg_native.StateSnapshot if self.native else StateSnapshot)(self.ns, sim.g)

    def _buy(self, sid):
        if self.sim.buy_upgrade(sid)['owned_after']:
            self.sim.refresh()
            return True
        return False

    # ---- 状态 ----
    def reset(self):
        # 状态换了：Planner 记的「拥有标记」副本作废
        self.gen = getattr(self, 'gen', 0) + 1
        self.base.restore()
        self.ns['_snapshot_clock'].clear()
        self.ns['_snapshot_clock'].update(self.clock)
        if self.native:
            self.sim.set_rng_state(self.random_state)
        else:
            random.setstate(self.random_state)
        self.tl.ticks = 0
        self.tl.events = []

    def metric(self, goal):
        sim = self.sim
        if goal == 'assistants':
            return sim.core_call('getAssistantsNum')
        if goal == 'max_mana':
            return sim.core_call('getMaxMana')
        if goal == 'mana_regen':
            return 30 * sim.core_call('getManaPerTick')
        if goal == 'production':
            return rg_sim.production(self.ns, cached=True)['total']
        if goal == 'gems':
            return sim.core_call('getGemsReset')
        raise ValueError('未知目标：' + str(goal))

    def spell(self, name):
        return self.sim.find(self.G.S_0_21_A, name)

    # ---- 一次试跑 ----
    def run(self, build, goal, target, limit, *, spell=None, buy_interval=2.0, sample_every=10.0,
            probes=(), probe_fn=None, step=None, cutoff=None, coarse=None):
        """返回 dict(ok, reached, time, value, curve, skipped, ...)。

        build：alignment / faction / prestige / bloodline（名字，可为 None）、research（代号列表，按顺序买）。
        spell：要求这个法术可用（例如仙灵吟唱只能在仙灵或带它的佣兵局用）。
        probes：在这些秒数调用 probe_fn(self, t)（研究优化用；调用前后不推进时间）。
        cutoff：当前最好那次的曲线 [(秒, 数值)]；同一时刻数值不到它的 CUTOFF_RATIO 就提前停（搜索用）。
        coarse：粗跑（近似，只用原生引擎）。开局选完、研究佣兵都买好以后，每 coarse 秒只调用一次
        advanceTicks(30·coarse)：产出、回魔、助手点击按游戏公式一次积分，每秒逻辑、自动施法、
        「全部购买」都变成每 coarse 秒一次（见 _coarse_advance）。
        """
        self.reset()
        self.n_runs = getattr(self, 'n_runs', 0) + 1
        G, sim, tl = self.G, self.sim, self.tl
        sim.game_call('softReset')
        sim.refresh()
        faction = build.get('faction')
        alignment = build.get('alignment') or (FACTIONS[faction][1] if faction else None)
        # (存档 ID, 是否必须马上可选)。显赫阵营要等本阵营「联盟」买下才出现，并且必须在买研究之前选
        # （DwarvenFaction01.visible：研究数为 0，除非有 Secrets of the Underworld），所以排在最后、研究之前。
        picks = []
        if alignment:
            picks.append((ALIGNMENTS[alignment], True))
        if faction == 'Mercenary':
            picks.append((MERC_PICK, True))
        elif faction:
            picks.append((FACTIONS[faction][0], True))
        if build.get('bloodline'):
            picks.append((BLOODLINES[build['bloodline']], False))
        # 龙族显赫不要求研究数为 0（DragonFaction01.visible），但选了以后没有 Secrets of the Underworld
        # 就买不了研究（Game.buyUpgrade），所以等研究买完再选；矮人、卓尔要在买研究之前选
        late_prestige = None
        if build.get('prestige') in LATE_PRESTIGE:
            late_prestige = PRESTIGE[build['prestige']]
        elif build.get('prestige'):
            picks.append((PRESTIGE[build['prestige']], False))
        # 世系：选了血统就选同阵营的世系（第一次选不花钱，等级永久；不能和所选阵营相同、要 400 次皇家贸易令）
        lineage = self.lineages.get(build.get('bloodline')) if build.get('lineage', True) else None
        late_since = None
        research =[self.by_code[c] for c in build.get('research', []) if c in self.by_code]
        pending_research = list(research)
        merc_codes = self.merc_codes() if build.get('merc') else {}
        # 和 MercenaryTemplateLoad.loadTemplate 一样：先放龙族（只能放每组第 4 格），再放其他
        pending_merc = sorted((c for c in build.get('merc', []) if c in merc_codes),
                              key=lambda c: merc_codes[c].S__2d__21__5e_ != 12)
        pending_autocast = [sid for sid in AUTOCAST_UPGRADES if sid in self.ups]
        target_spell = self.spell(spell) if spell else None
        out = dict(build=build, goal=goal, target=target, limit=limit, ok=True, reached=False,
                   time=None, value=None, curve=[], picks={}, skipped=[], note=None)
        pick_since = 0.0
        picks_done_at = None
        buys_after_picks = 0
        spell_checked = False
        buy_ticks = max(1, round(buy_interval * 30))
        sample_ticks = max(30, round(sample_every * 30))
        probes = sorted(probes)
        step = self.step if step is None else step
        if not 1 <= step <= 10:
            raise ValueError('每次推进 1～10 个 tick（游戏一帧最多补 10 个）')
        total = round(limit * 30)
        n = 0
        clock = self.ns['_snapshot_clock']
        settled = False
        if coarse is None and os.environ.get('RGA_COARSE'):      # 实验用：整局跑全换成粗跑
            coarse = int(os.environ['RGA_COARSE'])
        if coarse and not self.native:
            coarse = None
        while n < total:
            # 一次推进 step 个 tick：游戏卡顿时 onEnterFrame 也这样一次补多个（最多 10 个）
            if coarse and settled:
                m = min(total, (n // 30 + int(coarse)) * 30)
                lim = self._coarse_limit()
                if lim is not None:
                    m = min(m, n + max(30, lim))
                if probes:
                    m = min(m, max(n + 1, math.ceil(probes[0] * 30 - 1e-9)))
                self._coarse_advance(m - n)
                prev, n = n, m
            elif self.native:
                # 原生引擎：一口气推进到下一个要处理的时刻（下一次「全部购买」或下一整秒），结果和逐次推进相同
                m = n
                while True:
                    last = m
                    m = min(m + step, total)
                    if m == total or m // buy_ticks != last // buy_ticks or m // 30 != last // 30:
                        break
                tl.advance(m - n, step)
                prev, n = last, m
            else:
                k = min(step, total - n)
                clock['timestamp'] += k * TICK
                clock['timer_ms'] += 1000 * k * TICK
                tl.advance_ticks(k)
                tl.ticks += k
                prev, n = n, n + k
            t = n * TICK
            if n // buy_ticks != prev // buy_ticks:
                tl.press_buy_all()
                if picks_done_at is not None:
                    buys_after_picks += 1
            if n // 30 == prev // 30:
                continue
            # ---- 每秒：选择、研究、自动施法、目标 ----
            while picks:
                sid, immediate = picks[0]
                u = self.ups[sid]
                if u.S__3c__21_7 or self._buy(sid):
                    out['picks'][u.S_1i] = round(t, 1)
                    picks.pop(0)
                    pick_since = t
                    continue
                if immediate and not u.S__2d_6:
                    out.update(ok=False, note='不能选：' + u.S_1i)
                    return out
                if t - pick_since > PICK_WAIT:
                    out.update(ok=False, note=('%d 秒内没能选上：' % PICK_WAIT) + u.S_1i)
                    return out
                break
            if lineage is not None and self.ups[BLOODLINES[build['bloodline']]].S__3c__21_7:
                # LineageUpgradePopup 打开时才允许选满级的世系；Game.buyUpgrade 对世系不查可见性
                self.lineage_popup.S__3b__21_N = True
                try:
                    if self.sim.game_call('buyUpgrade', lineage, True):
                        self.sim.refresh()
                finally:
                    self.lineage_popup.S__3b__21_N = False
                if self.ns['S__23__21__21_'].S_3_22_ == lineage.S__2d__21__5e_:
                    out['lineage'] = build['bloodline']
                    out['picks'][lineage.S_1i] = round(t, 1)
                    lineage = None
                # 没选上（这一局该阵营的皇家贸易令还不到 400 次等）就下一秒再试
            # 显赫阵营也能解锁法术（例如龙息），必须等结构选齐再判断。
            if target_spell is not None and not spell_checked and not picks and late_prestige is None:
                spell_checked = True
                if not target_spell.S__2d_6:
                    out.update(ok=False, note='这个组合用不了' + target_spell.S_1i)
                    return out
            if not picks:
                if picks_done_at is None:
                    picks_done_at = t
                if pending_autocast:
                    pending_autocast = [sid for sid in pending_autocast
                                        if not (self.ups[sid].S__3c__21_7 or self._buy(sid))]
                # 自动施法等选完阵营后按过一次「全部购买」（升级 + 建筑）再打开，和玩家的顺序一样。
                # 退位后法术阶层归零、施放时按当时的条件定阶层；建筑太少时放出的是 0 阶，
                # 设了「放到 1 阶」（Tiered Autocasting）的法术就一直在放又一直想重放，整轮自动施法停在它那里，
                # 后面的大平衡、金牌的收税都轮不到（收税给的阵营币是买龙族协定的主要来源）
                if buys_after_picks:
                    self._restore_autocast(spell)     # 每秒：阶层升级买到了就恢复「放到第几阶」
                if pending_merc:
                    # 一直试到时间上限：佣兵升级花各阵营的阵营币，要攒够才买得起
                    # 按模板顺序优先：前面的还在攒某种阵营币时，后面要花同一种币的先等着，
                    # 免得便宜的次要升级把币花掉、重要的一直攒不够
                    still, waiting = [], set()
                    for c in pending_merc:
                        coins = self._merc_coins(merc_codes[c])
                        if coins & waiting:
                            still.append(c)
                        elif self._place_merc(merc_codes[c]):
                            out.setdefault('merc_times', {})[c] = round(t, 1)
                        else:
                            still.append(c)
                            waiting |= coins
                    pending_merc = still
                # 研究要游戏「显示研究」后才能买（Utilities.hasResearchReady：研究所、本阵营独特建筑，
                # 佣兵 / 中立 / 有显赫阵营时还要对应的 Secrets 升级）；买的函数本身不查这个，所以这里查
                if out.get('research_ready') is None and self.ns['S__26_c'].S_9X():
                    out['research_ready'] = round(t, 1)
                # 显赫阵营：有「地下世界的秘密」就一买得起就选（升华 A1500 等研究要先有龙族才能买）
                if late_prestige is not None and (not pending_research or
                                                  (self.underworld is not None and self.underworld.S__3c__21_7)):
                    u = self.ups[late_prestige]
                    late_since = t if late_since is None else late_since
                    if u.S__3c__21_7 or self._buy(late_prestige):
                        out['picks'][u.S_1i] = round(t, 1)
                        late_prestige = None
                    elif t - late_since > PICK_WAIT:
                        out.update(ok=False, note=('%d 秒内没能选上：' % PICK_WAIT) + u.S_1i)
                        return out
                # 研究：和 Game.buyUpgrade 一样，看得见或已经解锁就能买（升华这类解锁了但列表里不显示的也算）
                if pending_research and out.get('research_ready') is not None:
                    pending_research = [sid for sid in pending_research
                                        if not (self.research[sid].S__3c__21_7 or self._buy(sid))]
                    if pending_research and t - out['research_ready'] > RESEARCH_WAIT:
                        out['skipped'] = [self.codes[sid] for sid in pending_research]
                        pending_research = []
                if late_prestige is not None and not pending_research:
                    u = self.ups[late_prestige]
                    late_since = t if late_since is None else late_since
                    if u.S__3c__21_7 or self._buy(late_prestige):
                        out['picks'][u.S_1i] = round(t, 1)
                        late_prestige = None
                    elif t - late_since > PICK_WAIT:
                        out.update(ok=False, note=('%d 秒内没能选上：' % PICK_WAIT) + u.S_1i)
                        return out
            # 粗跑：选完、按过「全部购买」、研究佣兵和显赫阵营都处理完（买到或放弃）以后才开始
            if coarse and not settled:
                settled = (not picks and buys_after_picks > 0 and not pending_merc and not pending_research
                           and late_prestige is None)
                if settled:
                    out['coarse_from'] = round(t, 1)
            while probes and t >= probes[0]:
                probe_fn(self, probes.pop(0))
            # 产出、宝石要重算全部建筑，每 5 秒查一次；助手、魔力类每秒查
            if picks_done_at is not None and (goal not in SLOW_GOALS or n // 150 != prev // 150):
                value = self.metric(goal)
                if n // sample_ticks != prev // sample_ticks:
                    out['curve'].append((round(t, 1), value))
                    bar = _curve_at(cutoff, t) if cutoff else None
                    if bar and t >= CUTOFF_AFTER * limit and value < CUTOFF_RATIO * bar:
                        out.update(value=value, note='落后太多，第 %d 秒提前停' % t, stopped_at=round(t, 1))
                        break
                if value >= target:
                    out.update(reached=True, time=round(t, 1), value=value)
                    break
        if out['value'] is None:
            out['value'] = self.metric(goal) if picks_done_at is not None else 0
        if late_prestige is not None and not out.get('reached') and not out.get('stopped_at'):
            # 到时间上限都没选上显赫阵营：这套组合在这个时间内不成立（以前会照样按带显赫阵营的结果显示）
            out.update(ok=False, note=out.get('note') or '到时间上限没能选上：' + self.ups[late_prestige].S_1i)
        if pending_research and out.get('research_ready') is None:   # 到最后研究都没显示出来（如 R75 前的佣兵）
            out['skipped'] = out.get('skipped', []) + [self.codes[sid] for sid in pending_research]
        out['research'] = [self.codes[sid] for sid in research if self.research[sid].S__3c__21_7]
        if pending_merc:
            out['skipped_merc'] = pending_merc
        out['curve'].append((round(n * TICK, 1), out['value']))
        return out

    def merc_codes(self):
        """佣兵模板代号 → 升级对象（MercenaryTemplateLoad.initializeElement 的编号方式）。"""
        if not hasattr(self, '_merc_codes'):
            from as2py import mangle
            a, b, num = mangle('§<`§'), mangle('§!!n§'), mangle('§["-§')
            prefix = ["FR", "EL", "AN", "GB", "UD", "DM", "TT", "DD", "FC", "DN", "DW", "MC", "DG", "AR", "DJ", "MK"]
            codes, last, k = {}, -1, 0
            for u in self.G.S__2d__21_4:
                if (getattr(u, a, False) or getattr(u, b, False)) and u.S__2d__21__5e_ != 11 and getattr(u, num, 0) > 0:
                    if last != u.S__2d__21__5e_:
                        last, k = u.S__2d__21__5e_, 0
                    k += 1
                    codes[prefix[u.S__2d__21__5e_] + str(k)] = u
            self._merc_codes = codes
            self._merc_num = num
            # 佣兵格子：Mercenary Upgrade 1～16，存档 ID 100000 + 格子号
            self._merc_slots = sorted((u for u in self.G.S__2d__21_4 if 100001 <= u.S_6_21_Z <= 100016),
                                      key=lambda u: u.S_6_21_Z)
        return self._merc_codes

    def _merc_coins(self, u):
        """这个升级要花哪几种阵营币（MercenaryUpgrade.getMercenaryFactionPrice 不为 0 的）。"""
        cache = self.__dict__.setdefault('_coin_cache', {})
        if u.S_6_21_Z not in cache:
            cls = game_class(self._merc_slots[0])
            old = cls.S__2b__21_Q
            cls.S__2b__21_Q = 4
            try:
                cache[u.S_6_21_Z] = {coin for coin in range(16) if cls.S_6e(u, coin) > 0}
            finally:
                cls.S__2b__21_Q = old
        return cache[u.S_6_21_Z]

    def _place_merc(self, u):
        """按 MercenaryTemplateLoad.loadTemplate 的规则给一个升级找格子并买下；成功返回 True。"""
        if u.S__3c__21_7:
            return True
        n = getattr(u, self._merc_num)
        dragon = u.S__2d__21__5e_ == 12
        for slot in self._merc_slots:
            tier = slot.S_6_21_Z - 100000
            if tier > 12 or not slot.S__2d_6 or slot.S__3c__21_7:
                continue
            if dragon and tier % 4 != 0:
                continue
            if not ((1 <= tier <= 4 and 1 <= n <= 3) or (5 <= tier <= 8 and 4 <= n <= 6)
                    or (9 <= tier <= 12 and 7 <= n <= 9)):
                continue
            cls = game_class(slot)
            cls.S_9_21__5b_ = (tier + 3) // 4      # MercenaryUpgrade.§9![§
            cls.S__2b__21_Q = tier                 # MercenaryUpgrade.§+!Q§
            if self.sim.game_call('buyMercUpgrade', u):
                slot.S__3c__21_7 = True
                self.sim.refresh()
                return True
            return False
        return False

    def _coarse_limit(self):
        """粗跑一大步最多走多少 tick（整秒）才不跨过会改变结果的时刻；没有限制返回 None。

        - 生效中的法术结束：结束后的那一秒自动施法会重放，步子跨过去就少放了（向上取整到秒）；
        - 有持续时间的法术在等魔力：攒够它的花费时就会放（向下取整到秒，至少 1 秒）。
        瞬发法术（收税等）每秒都放、把魔力花掉，由 _coarse_repeat 按秒数补，不限制步子。"""
        from as2py import mangle
        G = self.G
        spells = self.__dict__.get('_coarse_spells')
        if spells is None:
            spells = self._coarse_spells = list(G.S_0_21_A)
            self._coarse_tick = mangle("§'!X§")
        lim = None
        mana, cap = None, None
        for s in spells:
            if s.S_23:
                rem = s.S_0n - getattr(s, self._coarse_tick)
                rem = max(30, -(-rem // 30) * 30)
                lim = rem if lim is None else min(lim, rem)
            elif s.S_3A and s.S__2d_6 and s.S__3e_ > 0:
                if cap is None:
                    mana, cap = getattr(G, self.sim.game_names['mana']), self.sim.core_call('getMaxMana')
                cost = s.S_9_21_U
                if cost <= cap:
                    regen = self.sim.core_call('getManaPerTick')
                    t = 0 if mana >= cost else (int((cost - mana) / regen) // 30 * 30 if regen > 0 else None)
                    if t is not None:
                        lim = t if lim is None else min(lim, t)
        return lim

    def _coarse_repeat(self, n):
        """粗跑一大步里，advanceTicks 只在第一秒自动施法一次；剩下 n 秒的「补魔力 + 自动施法」用增量补：
        先真做一秒（魔力按一秒的回魔补、封顶，再自动施法），记下金币、统计、待分配阵营币、各法术施放次数
        的变化，再按剩下的 n − 1 秒乘上去。这一秒放出了有持续时间的法术（状态变了）就不补，
        这时 _coarse_limit 下一步只走 1 秒。"""
        from as2py import mangle
        G, sim, U = self.G, self.sim, self.ns['S__26_c']
        gn = sim.game_names
        spells = self._coarse_spells
        pend = mangle('§3!<§')
        res = gn['resource']
        counters = ('S_2_2d_', 'S_5_21_L', 'S__23_y')
        stats = G.S_5_21_V

        def snap():
            return (getattr(G, res), list(stats), getattr(U, pend),
                    [tuple(getattr(s, c) for c in counters) for s in spells])
        active0 = [bool(s.S_23) for s in spells]
        x0 = snap()
        mana = getattr(G, gn['mana'])
        cap, regen = sim.core_call('getMaxMana'), sim.core_call('getManaPerTick')
        add = min(max(0.0, cap - mana), regen * 30)
        if add > 0:
            stats[16] += add
            stats[145] = max(stats[16], stats[145])
            setattr(G, gn['mana'], mana + add)
        getattr(sim.g, gn['autocast'])()
        if [bool(s.S_23) for s in spells] != active0 or n <= 1:
            return
        x1 = snap()
        m = n - 1
        setattr(G, res, x1[0] + (x1[0] - x0[0]) * m)
        for i, (a, b) in enumerate(zip(x0[1], x1[1])):
            if b != a:
                stats[i] = b + (b - a) * m
        stats[145] = max(stats[16], stats[145])
        if x1[2] != x0[2]:
            setattr(U, pend, x1[2] + (x1[2] - x0[2]) * m)
        for s, c0, c1 in zip(spells, x0[3], x1[3]):
            for c, a, b in zip(counters, c0, c1):
                if b != a:
                    setattr(s, c, b + (b - a) * m)

    def _coarse_advance(self, k):
        """一次 advanceTicks(k)，再补上游戏里「每调用一次只走一步」的地方，使它近似等于 k 次 advanceTicks(1)。

        advanceTicks 自己就按 k 处理：魔力按 k 倍加并封顶，产出乘 k，助手点击按秒数乘，法术逐 tick 走。
        要补的（Game.advanceTicks、GiftOfTheKings.specialUpdate）：
        - Formulas 的三个按 tick 倒数的计时（充能、泰坦契印冻结闪电、法术工艺幸运）只减 1；
        - 自动点击（精灵等）和国王的赠礼每满 30 tick 才点一次，一次调用最多点一次；
        - 产出缓存每 150 次调用才清，这里每次都清（游戏是每 5 秒清一次）。
        另外大平衡生效时每 15 tick 重算一次各建筑的分配（GrandBalance.setVars，同时清产出缓存），
        这是逐 tick 的主要开销；粗跑时让它在这一大步的最后一个 tick 只算一次，之后恢复原来的相位。"""
        from as2py import mangle
        g, F, U = self.sim.g, self.ns['S__23__21__21_'], self.ns['S__26_c']
        names = self.__dict__.get('_coarse_names')
        if names is None:
            gn = self.sim.game_names
            names = self._coarse_names = dict(
                timers=[mangle(x) for x in ('§&!N§', '§,"B§', '§@!W§')], ac=mangle('§#"L§'),
                power=rg_sim._real2obf('§&c§')['getAutoClickPower'], auto=gn['autoClick'],
                inv=(gn['invalidateCache'], gn['invalidateSpellCache']),
                kings=next((u for u in self.G.S__2d__21_4 if u.S_1i == 'Gift of the Kings'), None),
                kc=mangle('§=!%§'),
                gb=next((s for s in self.G.S_0_21_A if s.S_1i == 'Grand Balance'), None), gbc=mangle('§+!<§'))
        gb = names['gb'] if names['gb'] is not None and names['gb'].S_23 else None
        if gb is not None:
            gb0 = getattr(gb, names['gbc'])
            setattr(gb, names['gbc'], 15 - k)
        timers = [getattr(F, a) for a in names['timers']]
        ac0 = getattr(g, names['ac'])
        kings = names['kings'] if names['kings'] is not None and names['kings'].S__3c__21_7 else None
        kc0 = getattr(kings, names['kc']) if kings is not None else 0
        for m in names['inv']:
            getattr(g, m)()
        self.tl.advance(k, k)
        if gb is not None:
            setattr(gb, names['gbc'], (gb0 + k) % 15)
        for a, x0 in zip(names['timers'], timers):
            if x0 > 0:
                setattr(F, a, max(0, x0 - k))
        total = ac0 + k
        if total >= 30:
            extra = total // 30 - 1
            setattr(g, names['ac'], total % 30)
            if extra > 0:
                power = getattr(U, names['power'])(False)
                if power > 0:
                    getattr(g, names['auto'])(power * extra)
        if kings is not None:
            total = kc0 + k
            if total >= 30:
                extra = total // 30 - 1
                setattr(kings, names['kc'], total % 30)
                if extra > 0 and self.G.S_4P[14] == 0:
                    getattr(g, names['auto'])(extra, False)
        if k >= 60:
            self._coarse_repeat(k // 30 - 1)

    def _restore_autocast(self, spell):
        """退位会清掉自动施法设置；恢复成退位前的样子，目标法术另外打开。"""
        for s in self.G.S_0_21_A:
            cfg = self.autocast.get(s.S_6_21_Z)
            if cfg and cfg[0]:
                if not s.S_3A:
                    s.S_3A, s.S__23__21_B, s.S_5_21_H, s.S_8_23_, s.S_6_21_A = cfg
                # 「放到第几阶」（Tiered Autocasting）只在这一阶的阶层升级已经买到时才设。退位清掉了阶层升级
                # （「宝石研磨机 2」要 8 种阵营币各 50 亿），没买到时放出的是低阶、还被当成「要重放」，
                # Game.useSpell 对在放且到了最高阶的法术返回 false，整轮自动施法就停在它那里，金牌的收税放不出来
                target = cfg[4]
                if target >= 0 and self.sim.core_call('getMaxSpellTier', s.id) < target:
                    target = -1
                s.S_6_21_A = target
            if spell and s.S_1i == spell:
                s.S_3A = True

    # ---- 研究替换的打分 ----
    def research_moves(self, goal, exclude=()):
        """在当前状态下逐项试「换一项研究」，返回 [(增益比, 去掉, 换上)]，只切换拥有标记、不推进时间。"""
        sim = self.sim
        sim.refresh()
        base = self.metric(goal)
        if not base > 0:
            return []
        owned = [sid for sid, u in self.research.items() if u.S__3c__21_7]
        moves = []
        branches = {}
        for sid, u in self.research.items():
            branches.setdefault(u.S__21_G, []).append(sid)

        def usable(u):
            # 和研究模板导入时的跳过条件一致：看得见、能买、不是叉号 / 问号 / 感叹号
            return (not u.S__3c__21_7 and u.S__2b__21_a and u.S_9_21__25_
                    and not u.S_9_21__3f_() and not u.S__3e_I() and not u.S__2b__60_())

        def score(remove, add):
            if remove is not None:
                self.research[remove].S__3c__21_7 = False
            ok = usable(self.research[add])
            if ok:
                self.research[add].S__3c__21_7 = True
                sim.refresh()
                value = self.metric(goal)
                self.research[add].S__3c__21_7 = False
            if remove is not None:
                self.research[remove].S__3c__21_7 = True
            return value / base if ok and value > 0 else None

        for branch, members in branches.items():
            mine = [sid for sid in owned if self.research[sid].S__21_G == branch]
            others = [sid for sid in members if not self.research[sid].S__3c__21_7 and sid not in exclude]
            for add in others:
                ratio = score(None, add)      # 分支还有空格时直接加
                if ratio is not None:
                    moves.append((ratio, None, add))
                for remove in mine:
                    ratio = score(remove, add)
                    if ratio is not None:
                        moves.append((ratio, remove, add))
        sim.refresh()
        return moves


def greedy_research(runner, goal, max_steps=80, exclude=()):
    """在当前状态下贪心配研究：每次做增益最大的一步（有空格就加，满了就换），直到不再变好。

    只切换拥有标记，做完恢复原样；返回配好的研究代号（按加入顺序）和每一步。
    """
    owned0 = {sid for sid, u in runner.research.items() if u.S__3c__21_7}
    steps = []
    try:
        for _ in range(max_steps):
            moves = runner.research_moves(goal, exclude)
            if not moves:
                break
            ratio, remove, add = max(moves, key=lambda m: m[0])
            if ratio <= 1 + 1e-9:
                break
            if remove is not None:
                runner.research[remove].S__3c__21_7 = False
            runner.research[add].S__3c__21_7 = True
            steps.append(dict(remove=runner.codes[remove] if remove else None, add=runner.codes[add], gain=ratio))
        chosen = [sid for sid, u in runner.research.items() if u.S__3c__21_7]
    finally:
        for sid, u in runner.research.items():
            u.S__3c__21_7 = sid in owned0
        runner.sim.refresh()
    # 保留原来的顺序，新加的排在后面
    order = [sid for sid in owned0 if sid in chosen] + [sid for sid in chosen if sid not in owned0]
    return [runner.codes[sid] for sid in order], steps


def better_than(a, b):
    if not a.get('ok'):
        return False
    if not b.get('ok'):
        return True
    return rank_key(a) < rank_key(b)


def improve_research(runner, build, goal, target, limit, *, spell=None, rounds=3, log=None):
    """第三轮：在试跑的几个时间点上贪心配研究，每个时间点得到一套，整局重跑，更快才保留。

    研究的效果很多和时间有关（本局时长、施法次数……），所以在一局的不同阶段各配一次，
    用整局重跑的结果裁定，不直接相信打分。
    """
    best = runner.run(build, goal, target, limit, spell=spell)
    if not best['ok']:
        return best
    history = [dict(round=0, time=best['time'], value=best['value'], research=best['research'])]
    tried = {tuple(sorted(best['research']))}
    for r in range(1, rounds + 1):
        horizon = best['time'] if best['reached'] else limit
        probes = sorted({round(max(5.0, horizon * f), 1) for f in (0.3, 0.7, 1.0)})
        sets = []

        def probe(rn, t):
            sets.append((t, *greedy_research(rn, goal)))
        # 打分用的这一局跑到最后一个打分点为止（不在达到目标时停）
        trial = runner.run(best['build'], goal, float('inf'), max(probes) + 1, spell=spell,
                           probes=probes, probe_fn=probe)
        if not trial['ok']:
            break
        improved = False
        for t, research, steps in sets:
            key = tuple(sorted(research))
            if not steps or key in tried:
                continue
            tried.add(key)
            result = runner.run(dict(best['build'], research=research), goal, target, limit, spell=spell)
            kept = better_than(result, best)
            history.append(dict(round=r, probe=t, steps=steps, time=result['time'], value=result['value'], kept=kept))
            if log:
                log(r, t, steps, result, kept)
            if kept:
                best, improved = result, True
        if not improved:
            break
    best['history'] = history
    return best


# ---------------------------------------------------------------- 并行
def exit_with_parent():
    """子进程一整局要算好几分钟，期间不读输入，看不到父进程已经关掉；另开线程等父进程结束，结束就立即退出。"""
    pid = int(os.environ.get('RGA_PARENT_PID') or 0)
    if not pid or os.name != 'nt':
        return
    import ctypes
    kernel32 = ctypes.windll.kernel32
    handle = kernel32.OpenProcess(0x00100000, False, pid)      # SYNCHRONIZE
    if not handle:
        os._exit(0)                                            # 父进程已经不在了

    def wait():
        kernel32.WaitForSingleObject(handle, 0xFFFFFFFF)
        os._exit(0)
    threading.Thread(target=wait, daemon=True).start()


def worker_main(source=None, sink=None):
    """子进程：一行一个 JSON 请求。init 载入存档，run / improve 试跑。"""
    exit_with_parent()
    source = source or sys.stdin.buffer
    sink = sink or sys.stdout.buffer
    runner = None
    for raw in source:
        try:
            req = json.loads(raw.decode('utf-8'))
            op = req.get('op')
            if op == 'init':
                runner = Runner(req['game_py'], save_path=req.get('save_path'), encoded_save=req.get('save'),
                                timestamp=req.get('timestamp'), research_json=req.get('research_json'))
                result = dict(current=runner.current)
            elif op == 'run':
                result = runner.run(req['build'], req['goal'], req['target'], req['limit'], spell=req.get('spell'),
                                    cutoff=req.get('cutoff'))
            elif op == 'improve':
                result = improve_research(runner, req['build'], req['goal'], req['target'], req['limit'],
                                          spell=req.get('spell'), rounds=req.get('rounds', 3))
            else:
                raise ValueError('未知请求')
            reply = dict(ok=True, result=result)
        except Exception as error:
            reply = dict(ok=False, error='%s: %s' % (type(error).__name__, error))
        sink.write(json.dumps(reply, ensure_ascii=False, default=float).encode('utf-8') + b'\n')
        sink.flush()


class Pool:
    def __init__(self, command, size, init):
        self.procs = []
        self.running = {}
        self.free = queue.Queue()
        self.results = queue.Queue()
        # 低于正常优先级：游戏和其他程序先用 CPU，搜索只用剩下的
        flags = getattr(subprocess, 'CREATE_NO_WINDOW', 0) | getattr(subprocess, 'BELOW_NORMAL_PRIORITY_CLASS', 0)
        # 子进程盯着这个进程，这边退出（程序关掉）它就跟着退出；打包版里子进程的直接父进程是它自己的启动器，所以另外传
        env = dict(os.environ, RGA_PARENT_PID=str(os.getpid()))
        for _ in range(size):
            p = subprocess.Popen(command, stdin=subprocess.PIPE, stdout=subprocess.PIPE,
                                 stderr=subprocess.DEVNULL, creationflags=flags, env=env)
            self.procs.append(p)
        threads = [threading.Thread(target=self._init, args=(p, init), daemon=True) for p in self.procs]
        for th in threads:
            th.start()
        for th in threads:
            th.join()
        self.current = None
        for p in self.procs:
            if getattr(p, 'init_reply', None) and p.init_reply.get('ok'):
                self.current = p.init_reply['result']['current']
                self.free.put(p)
        if self.current is None:
            raise RuntimeError('计算子进程启动失败：' + str(getattr(self.procs[0], 'init_reply', None)))

    @staticmethod
    def _call(p, req):
        p.stdin.write(json.dumps(req, ensure_ascii=False).encode('utf-8') + b'\n')
        p.stdin.flush()
        line = p.stdout.readline()
        if not line:
            raise RuntimeError('计算子进程已退出')
        return json.loads(line)

    def _init(self, p, init):
        try:
            p.init_reply = self._call(p, dict(init, op='init'))
        except Exception as error:
            p.init_reply = dict(ok=False, error=str(error))

    def submit(self, tag, req):
        def work():
            p = self.free.get()
            self.running[tag] = time.time()          # 界面显示每个进程正在算什么
            r = req() if callable(req) else req      # 拿到进程时再生成请求，用上最新的最好曲线
            try:
                reply = self._call(p, r)
            except Exception as error:
                reply = dict(ok=False, error=str(error))
            self.running.pop(tag, None)
            self.free.put(p)
            self.results.put((tag, reply))
        threading.Thread(target=work, daemon=True).start()

    def close(self):
        for p in self.procs:
            try:
                p.stdin.close()
                p.terminate()
            except Exception:
                pass


def rank_key(r):
    """达到目标的按用时；没达到的按最后的数值（越大越好）。"""
    if not r.get('ok'):
        return (2, 0)
    value = -math.log10(max(r['value'] or 0, 1e-300))
    if r['reached']:
        return (0, r['time'], value)       # 同样快的，到达时数值高的在前
    return (1, value, 0)


class Search:
    """三轮搜索，在后台线程里跑；status() 给界面轮询。"""

    def __init__(self, command, init, *, goal, target, limit, spell=None, workers=8, top=3, rounds=3,
                 factions=None, bloodlines=None, prestige=True):
        if goal not in GOALS:
            raise ValueError('未知目标')
        self.goal, self.target, self.limit, self.spell = goal, target, limit, spell
        self.top, self.rounds = top, rounds
        self.factions = factions or list(FACTIONS)
        self.bloodlines = bloodlines or list(BLOODLINES)
        self.prestige = prestige
        self.stage, self.done_n, self.total_n = '启动计算进程', 0, 0
        self.results, self.best, self.error, self.finished, self.cancelled = [], [], None, False, False
        self.started = time.time()
        self.thread = threading.Thread(target=self._main, args=(command, init, workers), daemon=True)
        self.thread.start()

    def _req(self, build, op='run', limit=None):
        req = dict(op=op, build=build, goal=self.goal, target=self.target, limit=limit or self.limit,
                   spell=self.spell, rounds=self.rounds)
        if op == 'run' and self.best and not self.best[0].get('reached'):
            req['cutoff'] = self.best[0]['curve']      # 都还没达到时，落后太多的提前停
        return req

    def _batch(self, stage, builds, op='run', limit=None):
        self.stage, self.done_n, self.total_n = stage, 0, len(builds)
        for i, b in enumerate(builds):
            self.pool.submit(i, lambda b=b: self._req(b, op, limit))
        out = [None] * len(builds)
        while self.done_n < len(builds):
            if self.cancelled:
                raise RuntimeError('已停止')
            try:
                tag, reply = self.pool.results.get(timeout=0.5)
            except queue.Empty:
                continue
            r = reply['result'] if reply.get('ok') else dict(ok=False, note=reply.get('error'), build=builds[tag])
            r['stage'] = stage
            out[tag] = r
            self.results.append(r)
            self.done_n += 1
            self.best = sorted((x for x in self.results if x.get('ok')), key=rank_key)[:10]
        return out

    def _main(self, command, init, workers):
        try:
            self.pool = Pool(command, workers, init)
            current = self.pool.current
            research = current['research']
            # 第一轮：阵营 × 血统粗筛（研究用退位前那局的，时间上限缩短）
            short = min(self.limit, 120)
            builds = [dict(faction=f, bloodline=b, prestige=current['prestige'], research=research)
                      for f in self.factions for b in self.bloodlines]
            first = self._batch('粗筛阵营和血统', builds, limit=short)
            good = sorted((r for r in first if r.get('ok')), key=rank_key)
            if not good:
                raise RuntimeError('没有可行的组合：' + '; '.join(sorted({r.get('note') or '' for r in first}))[:300])
            # 第二轮：前几名各自配研究（不同阵营能买的研究不同）
            heads, seen = [], set()
            for r in good:
                if r['build']['faction'] not in seen or len(heads) < 2:
                    seen.add(r['build']['faction'])
                    heads.append(r['build'])
                if len(heads) >= self.top:
                    break
            improved = [r for r in self._batch('给前几名配研究', heads, op='improve') if r.get('ok')]
            if not improved:
                raise RuntimeError('配研究失败')
            # 第三轮：用配好的研究试同阵营的其他血统和显赫阵营
            lead = sorted(improved, key=rank_key)[0]['build']
            variants = [dict(lead, bloodline=b, prestige=p)
                        for b in self.bloodlines
                        for p in ([None] + list(PRESTIGE) if self.prestige else [lead.get('prestige')])
                        if (b, p) != (lead['bloodline'], lead.get('prestige'))]
            self._batch('试血统和显赫阵营', variants)
            # 第四轮：最好的几个再配一次研究
            heads, seen = [], set()
            for r in sorted((x for x in self.results if x.get('ok') and x['stage'] != '粗筛阵营和血统'), key=rank_key):
                key = (r['build']['faction'], r['build']['bloodline'], r['build'].get('prestige'))
                if key not in seen:
                    seen.add(key)
                    heads.append(r['build'])
                if len(heads) >= self.top:
                    break
            self._batch('最后再配一次研究', heads, op='improve')
            self.stage = '完成'
        except Exception as error:
            self.error = str(error)
        finally:
            self.finished = True
            if hasattr(self, 'pool'):
                self.pool.close()

    def stop(self):
        self.cancelled = True

    def status(self):
        return dict(stage=self.stage, done=self.done_n, total=self.total_n, finished=self.finished,
                    error=self.error, elapsed=time.time() - self.started,
                    best=self.best, tried=len(self.results))


def template(build):
    """build → 游戏「导入模板」用的研究串，和立场 / 阵营 / 血统的说明。"""
    return ','.join(build.get('research', []))


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('game_py', nargs='?')
    ap.add_argument('--worker', action='store_true', help='子进程模式（内部用）')
    ap.add_argument('--save', default=rg_sim.SOL)
    ap.add_argument('--goal', choices=list(GOALS), default='assistants')
    ap.add_argument('--target', type=float, required=False)
    ap.add_argument('--limit', type=float, default=600, help='每次试跑最长游戏秒数')
    ap.add_argument('--spell', help='要求可用的法术（英文名）')
    ap.add_argument('--workers', type=int, default=WORKERS)
    ap.add_argument('--top', type=int, default=3)
    ap.add_argument('--rounds', type=int, default=3)
    ap.add_argument('--factions', help='只试这些阵营，逗号分隔')
    ap.add_argument('--bloodlines', help='只试这些血统，逗号分隔')
    ap.add_argument('--no-prestige', action='store_true')
    ap.add_argument('--output')
    args = ap.parse_args()
    if args.worker:
        worker_main()
        return
    command = [sys.executable, '-X', 'utf8', str(Path(__file__).resolve()), '--worker']
    init = dict(game_py=str(Path(args.game_py).resolve()), save_path=args.save)
    search = Search(command, init, goal=args.goal, target=args.target, limit=args.limit, spell=args.spell,
                    workers=args.workers, top=args.top, rounds=args.rounds,
                    factions=args.factions.split(',') if args.factions else None,
                    bloodlines=args.bloodlines.split(',') if args.bloodlines else None,
                    prestige=not args.no_prestige)
    last = None
    while not search.finished:
        time.sleep(1)
        st = search.status()
        line = '%s %d/%d  已试 %d' % (st['stage'], st['done'], st['total'], st['tried'])
        if st['best']:
            b = st['best'][0]
            line += '  最好：%s/%s/%s %s' % (b['build']['faction'], b['build']['bloodline'], b['build'].get('prestige'),
                                          ('%.1f 秒' % b['time']) if b['reached'] else ('%.4g' % b['value']))
        if line != last:
            print(line, file=sys.stderr, flush=True)
            last = line
    st = search.status()
    text = json.dumps(st, ensure_ascii=False, indent=1, default=float)
    if args.output:
        Path(args.output).write_text(text, encoding='utf-8')
    if st['error']:
        print('出错：' + st['error'], file=sys.stderr)
    for r in st['best'][:5]:
        b = r['build']
        print('%s %s血统 显赫=%s  %s  研究：%s' % (b['faction'], b['bloodline'], b.get('prestige'),
              ('%.1f 秒达到' % r['time']) if r['reached'] else ('最后 %.4g' % r['value']), template(r)))


if __name__ == '__main__':
    main()
