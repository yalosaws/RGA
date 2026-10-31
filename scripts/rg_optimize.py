"""按游戏逻辑求让目标（魔上限、助手数、回魔……）最高 / 最快达到的 build。

python -X utf8 -I scripts/rg_optimize.py build/calculation/game.py --goal max_mana --at 300
python -X utf8 -I scripts/rg_optimize.py build/calculation/game.py --goal max_mana --target 4e6 --at 600

整体（说明见 docs/按目标找build（20261030）.md）：
1. 依赖图（rg_depgraph.py 生成）：目标 ← 来源 ← 来源读的输入（当场算的中间量 / 一局里攒的驱动）。
   只有和目标相连的研究、佣兵升级才进「精确比较」；其余只用来填空格。
2. 每个结构（立场 + 阵营 + 显赫阵营 + 血统）用自己的状态：先按这个阵营整局跑，在它自己跑出来的
   状态上求解，再整局跑、再求，直到方案不变（闭环）。数值一律以整局跑为准。
3. 在一个状态上求精确最优（solve_static）：相关项先全部放上、去掉不起作用的；受限的组（研究分支格数、
   佣兵每组 4 格 / 龙族 1 个、阵营币预算）在组内穷举全部合法子集（其他组固定、用游戏公式重算），
   各组轮流到不再变化，两个都受限的组再联合穷举；剩下的空格按「驱动」价值填。
4. 结构之间：先在各阵营自己的状态上估算所有血统 / 显赫阵营，按估算从高到低做闭环验证；
   估算 × 实测偏差系数仍低于已验证最好值的跳过（结果里写明跳过了几个、系数多少）。

规则来源（客户端 4.3.14）：
- 佣兵能拿各阵营编号 1～12 的升级（MercenaryTemplateLoad），代号 = 阵营前缀 + 序号；格子 1～4 / 5～8 / 9～12
  放编号 1～3 / 4～6 / 7～9，每组 4 个；龙族只能放每组第 4 格并要能买（purchasable）。
  价格（MercenaryUpgrade.getMercenaryFactionPrice）：普通阵营 = 组号³ × 格位^2.5 × 1000 个该阵营的币；
  泰坦 / 德鲁伊 / 无面者花另外两个阵营的币；龙族花矮人和卓尔的币 1e4 × 100^格位。
- 显赫阵营：矮人限善良、卓尔限邪恶、龙族限中立；不能是佣兵；要在买研究之前选。
- 研究能不能买、每个分支几格由游戏判断（ResearchUpgrade.purchasable / Formulas.getResearchCap）。
"""
import argparse
import itertools
import json
import math
import os
from pathlib import Path
import queue
import random
import sys
import threading
import time

sys.path.insert(0, str(Path(__file__).resolve().parent))

import rg_goal
from as2py import mangle

PREFIX = ["FR", "EL", "AN", "GB", "UD", "DM", "TT", "DD", "FC", "DN", "DW", "MC", "DG", "AR", "DJ", "MK"]
NAME_INDEX = {'Fairy': 0, 'Elven': 1, 'Angel': 2, 'Goblin': 3, 'Undead': 4, 'Demon': 5, 'Titan': 6, 'Druid': 7,
              'Faceless': 8, 'Dwarven': 9, 'Drow': 10, 'Mercenary': 11, 'Dragon': 12}
ALIGN_INDEX = {'good': 1, 'evil': 2, 'neutral': 3}
PRESTIGE_ALIGN = {'Dwarven': 'good', 'Drow': 'evil', 'Dragon': 'neutral'}
MERC, DRAGON = 11, 12
A_MERC = mangle('§<`§')       # 能被佣兵拿
A_MERC2 = mangle('§!!n§')
A_NUM = mangle('§["-§')       # 阵营内编号 1～12
GOAL_TARGET = {'max_mana': 'max_mana', 'assistants': 'assistants', 'mana_regen': 'mana_regen',
               'production': 'production', 'gems': 'production'}
RATE_FN = {'production': 'S_5D', 'mana_regen': 'S_57', 'fc': 'S_0F'}   # 核心计算类上的速率函数
EPS = 1e-9
SAFETY = 1.2          # 剪枝余量：估算 × 本阵营实测系数 × 1.2 仍够不上已验证最好的才跳过
MAX_SUBSETS = 20000     # 单组穷举上限（超过就分块，结果里注明）


def default_graph_path():
    for p in (Path(__file__).resolve().parent / 'depgraph.json',
              Path(__file__).resolve().parents[1] / 'docs/依赖图（客户端4.3.14）.json'):
        if p.is_file():
            return p
    raise FileNotFoundError('缺少依赖图，请先运行 scripts/rg_depgraph.py')


class Graph:
    def __init__(self, path=None):
        self.data = json.loads(Path(path or default_graph_path()).read_text(encoding='utf-8'))

    def relevant(self, goal, depth=2):
        """{存档 ID: 路径说明}：直接来源，以及经当场中间量（如助手数）连到目标的来源。"""
        out = {}

        def walk(target, path, d):
            for row in self.data.get(target, []):
                sid = row.get('sid')
                if sid and sid not in out:
                    out[sid] = path
                if d > 0:
                    for inter in row['intermediates']:
                        if inter != target:
                            walk(inter, '经' + rg_goal.GOALS.get(inter, inter), d - 1)
        walk(GOAL_TARGET[goal], '直接', depth)
        return out

    def driver_rows(self, goal):
        """{驱动: [依赖它的来源存档 ID]}（只看直接来源）。"""
        out = {}
        for row in self.data.get(GOAL_TARGET[goal], []):
            for d in row['drivers']:
                if row.get('sid'):
                    out.setdefault(d, []).append(row['sid'])
        return out


class Planner:
    """在 runner 当前的游戏状态上设定 build、重算目标值（只改拥有标记和阵营变量，不推进时间）。"""

    def __init__(self, runner, goal, graph):
        self.r, self.goal, self.graph = runner, goal, graph
        G = self.G = runner.G
        self.sim, self.core = runner.sim, runner.sim.core
        ups = list(G.S__2d__21_4)
        self.codes = runner.merc_codes()
        self.slots = runner._merc_slots
        self.picks = [u for u in ups if 0 <= getattr(u, 'S__2d__21__5e_', -1) < 16
                      and any(w in u.S_1i for w in ('Trade Treaty', 'Friendship Pact', 'Alliance', 'Union', 'Contract'))]
        self.aligns = [runner.ups[sid] for sid in rg_goal.ALIGNMENTS.values()]
        self.bloods = {name: runner.ups[sid] for name, sid in rg_goal.BLOODLINES.items()}
        self.research = runner.research
        objs = list(self.codes.values()) + self.picks + self.aligns + list(self.bloods.values()) + list(self.research.values())
        self.objects = {id(u): u for u in objs}
        # 升级的阵营编号、名字、佣兵组号都是定值，读一次
        self._fac = {id(u): u.S__2d__21__5e_ for u in objs}
        self._names = {id(u): u.S_1i for u in objs}
        self._group = {c: (getattr(u, A_NUM) + 2) // 3 for c, u in self.codes.items()}
        # set_structure 用：(id, 对象, 阵营编号, 名字)，按阵营分好的佣兵升级
        self._picks_info = [(id(u), u, u.S__2d__21__5e_, u.S_1i) for u in self.picks]
        self._codes_by_fac = {}
        for u in self.codes.values():
            self._codes_by_fac.setdefault(self._fac[id(u)], []).append(u)
        self.relevant = graph.relevant(goal)
        self.formulas = runner.ns['S__23__21__21_']     # Formulas.§3"§：这一局选的世系（阵营编号，-1 = 没选）
        self.saved = None
        # 拥有标记的副本（为真的那些）：值没变就不写，游戏状态和逐个写完全相同；runner 换了状态就重新读
        self._on, self._gen = set(), None
        # 佣兵价格只取决于升级本身和格子号（MercenaryUpgrade.getMercenaryFactionPrice），算一次记下
        self._price_cache = {}

    def _sync(self):
        gen = getattr(self.r, 'gen', 0)
        if self._gen != gen:
            self._on = {k for k, u in self.objects.items() if u.S__3c__21_7}
            self._gen = gen

    def _own(self, u, v):
        k = id(u)
        on = self._on
        if v:
            if k not in on:
                u.S__3c__21_7 = True
                on.add(k)
        elif k in on:
            u.S__3c__21_7 = False
            on.discard(k)

    def _clear_all(self):
        objects = self.objects
        for k in self._on:
            objects[k].S__3c__21_7 = False
        self._on.clear()

    # ---- 设定 / 还原 ----
    def save(self):
        G = self.G
        flags = {k: u.S__3c__21_7 for k, u in self.objects.items()}
        self._on, self._gen = {k for k, v in flags.items() if v}, getattr(self.r, 'gen', 0)
        self.saved = (flags, G.S__2c__21_Y, G.S__2d__21__5e_, G.S__23_3, self.formulas.S_3_22_)

    def restore(self):
        flags, a, f, p, lin = self.saved
        self._sync()
        for k, u in self.objects.items():
            self._own(u, flags[k])
        self.G.S__2c__21_Y, self.G.S__2d__21__5e_, self.G.S__23_3 = a, f, p
        self.formulas.S_3_22_ = lin
        self.sim.refresh()

    def set_structure(self, plan):
        G = self.G
        self._sync()
        own_ = self._own
        self._clear_all()
        align = plan['alignment']
        G.S__2c__21_Y = ALIGN_INDEX[align]
        own_(self.r.ups[rg_goal.ALIGNMENTS[align]], True)
        f = NAME_INDEX[plan['faction']]
        G.S__2d__21__5e_ = f
        G.S__23_3 = NAME_INDEX[plan['prestige']] if plan.get('prestige') else -1
        # 显赫阵营的友好协定、联盟也会被「全部购买」买下（看得见才买）；龙族的「龙裔」等要它们才出现
        prestige_f = G.S__23_3
        on = self._on
        has_prestige = bool(plan.get('prestige'))
        for k, u, uf, name in self._picks_info:
            if uf == f or (has_prestige and uf == prestige_f):
                own_(u, True)
        for k, u, uf, name in self._picks_info:
            if k in on and ('Union' in name or uf == prestige_f and 'Trade Treaty' not in name) and not u.S__2d_6:
                own_(u, False)
        if plan.get('bloodline'):
            own_(self.bloods[plan['bloodline']], True)
        # 世系跟着血统走（整局跑里能选就选）；不能和所选阵营、显赫阵营相同（LineageUpgradeBase.purchasable）
        lin = self.r.lineages.get(plan.get('bloodline'))
        self.formulas.S_3_22_ = (lin.S__2d__21__5e_ if lin is not None and plan.get('lineage', True)
                                 and lin.S__2d__21__5e_ not in (f, G.S__23_3) else -1)
        owners = {f} if f != MERC else set()
        if plan.get('prestige'):
            owners.add(NAME_INDEX[plan['prestige']])
        # 和按 codes 顺序筛选的结果、顺序相同（同一阵营内保持 codes 顺序；阵营之间按 codes 里先出现的）
        own = [u for u in self.codes.values() if self._fac[id(u)] in owners] if len(owners) > 1 else             list(self._codes_by_fac.get(next(iter(owners)), [])) if owners else []
        for u in own:
            own_(u, True)
        changed = True         # 「全部购买」只会买看得见的；去掉一个可能让别的也看不见，到不再变为止
        while changed:
            changed = False
            for u in own:
                if id(u) in on and not u.S__2d_6:
                    own_(u, False)
                    changed = True
        for code in plan.get('merc', []):
            own_(self.codes[code], True)
        for code in plan.get('research', []):
            sid = self.r.by_code.get(code)
            if sid in self.research:
                own_(self.research[sid], True)

    def value(self, plan=None):
        if plan is not None:
            self.set_structure(plan)
        self.sim.refresh()
        return self.r.metric(self.goal)

    def rates(self):
        return {k: getattr(self.core, fn)() for k, fn in RATE_FN.items()}

    # ---- 规则 ----
    def research_ok(self, u):
        """在当前结构下（还没买研究时）这项研究能不能买：和研究模板导入时的判断一致。"""
        return (u.S__2b__21_a and u.S_9_21__25_ and not u.S_9_21__3f_() and not u.S__3e_I() and not u.S__2b__60_())

    def caps(self):
        return {b: int(self.core.S_0U(b)) for b in range(6)}

    @staticmethod
    def group(u):
        return (getattr(u, A_NUM) + 2) // 3          # 编号 1～3 → 1，4～6 → 2，7～9 → 3

    def merc_ok(self, code):
        u = self.codes[code]
        n = getattr(u, A_NUM)
        if not 1 <= n <= 9 or u.S__2d__21__5e_ >= 13:
            return False
        if u.S__2d__21__5e_ == DRAGON and not u.S_9_21__25_:
            return False                              # buyMercUpgrade：龙族要能买（Secret Dragon Tamer 等）
        return True

    def merc_prices(self, picks):
        """按 Runner 放格子的顺序（龙族先占每组第 4 格，其他按顺序占 1、2、3……）算每种阵营币的总价。"""
        cls = rg_goal.game_class(self.slots[0])
        cache = self._price_cache
        total = [0.0] * 16
        last = None
        for g in (1, 2, 3):
            items = [c for c in picks if self._group[c] == g]
            dragons = [c for c in items if self._fac[id(self.codes[c])] == DRAGON]
            others = [c for c in items if c not in dragons]
            placed = [(c, 4) for c in dragons] + list(zip(others, [s for s in (1, 2, 3, 4) if not (dragons and s == 4)]))
            for c, s in placed:
                last = (g - 1) * 4 + s                  # MercenaryUpgrade.§+!Q§：格子号
                prices = cache.get((c, last))
                if prices is None:
                    cls.S__2b__21_Q = last
                    prices = cache[(c, last)] = [round(cls.S_6e(self.codes[c], coin)) for coin in range(16)]
                for coin in range(16):
                    total[coin] += prices[coin]
        if last is not None:
            cls.S__2b__21_Q = last                      # 和逐个算时一样：§+!Q§ 留在最后一个格子号
        return total

    def merc_budget(self, owned_picks):
        """到这个状态为止能用的各阵营币：现在剩的 + 这一局已经花在佣兵升级上的。"""
        stock = list(self.G.S_6_21_R)
        spent = self.merc_prices(owned_picks) if owned_picks else [0] * 16
        return [s + p for s, p in zip(stock, spent)]

    # ---- 解释 ----
    def contributions(self, plan):
        full = self.value(plan)
        out = []
        items = [('血统', plan.get('bloodline'))] if plan.get('bloodline') else []
        if plan.get('bloodline') and self.formulas.S_3_22_ != -1:
            items.append(('世系', plan['bloodline']))
        items += [('显赫阵营', plan.get('prestige'))] if plan.get('prestige') else []
        items += [('佣兵', c) for c in plan.get('merc', [])] + [('研究', c) for c in plan.get('research', [])]
        for kind, item in items:
            p = dict(plan)
            if kind == '血统':
                p['bloodline'] = None
            elif kind == '世系':
                p['lineage'] = False
            elif kind == '显赫阵营':
                p['prestige'] = None
            elif kind == '佣兵':
                p['merc'] = [x for x in plan['merc'] if x != item]
            else:
                p['research'] = [x for x in plan['research'] if x != item]
            v = self.value(p)
            sid = (self.codes[item].S_6_21_Z if kind == '佣兵' else self.r.by_code.get(item) if kind == '研究' else None)
            out.append(dict(kind=kind, item=item, ratio=full / v if v > 0 else None,
                            path=self.relevant.get(sid, '驱动 / 填空格') if sid else '结构'))
        self.value(plan)
        return sorted(out, key=lambda x: -(x['ratio'] or 0))


# ---------------------------------------------------------------- 单个状态上的精确求解
def solve_static(pl, struct, *, banned_merc=(), banned_research=(), owned_merc=(), fill=True, log=None):
    """在 pl 当前的游戏状态上，给定结构，求研究和佣兵升级的最优选择。返回 (plan, info)。"""
    info = dict(binding=[], evals=0, truncated=[])
    pl.set_structure(dict(struct, research=[], merc=[]))
    caps = pl.caps()
    merc = struct['faction'] == 'Mercenary'
    # 候选：和目标相连、在这个结构里能买
    research_c = [pl.r.codes[sid] for sid, u in pl.research.items()
                  if sid in pl.relevant and pl.r.codes[sid] not in banned_research and pl.research_ok(u)]
    merc_c = [c for c, u in pl.codes.items() if merc and u.S_6_21_Z in pl.relevant and c not in banned_merc and pl.merc_ok(c)]
    budget = pl.merc_budget(list(owned_merc)) if merc else None

    def f(research, mercs):
        info['evals'] += 1
        return pl.value(dict(struct, research=list(research), merc=list(mercs)))

    def affordable(mercs):
        if not merc:
            return True
        price = pl.merc_prices(mercs)
        return all(p <= b + 0.5 for p, b in zip(price, budget))

    # 1. 全部放上，去掉不起作用的（去掉后不变小的）
    R, M = list(research_c), list(merc_c)
    full = f(R, M)
    R = [c for c in R if f([x for x in R if x != c], M) < full * (1 - EPS)]
    M = [c for c in M if f(R, [x for x in M if x != c]) < full * (1 - EPS)]

    # 2. 受限的组：组内穷举合法子集，其他组固定；轮流到不再变化
    def r_groups():
        groups = {}
        for c in research_c:
            groups.setdefault(pl.research[pl.r.by_code[c]].S__21_G, []).append(c)
        return {('研究', b): (pool, caps.get(b, 0)) for b, pool in groups.items()}

    def m_groups():
        groups = {}
        for c in merc_c:
            groups.setdefault(pl.group(pl.codes[c]), []).append(c)
        return {('佣兵', g): (pool, 4) for g, pool in groups.items()}

    groups = {**r_groups(), **m_groups()}

    def legal(key, subset):
        if key[0] == '佣兵':
            if sum(1 for c in subset if pl.codes[c].S__2d__21__5e_ == DRAGON) > 1:
                return False
        return True

    def best_subset(key, R, M):
        pool, cap = groups[key]
        current = R if key[0] == '研究' else M
        others = [c for c in current if c not in pool]
        n = sum(math.comb(len(pool), k) for k in range(0, min(cap, len(pool)) + 1))
        if n > MAX_SUBSETS:
            info['truncated'].append('%s%s 有 %d 个候选，只穷举了前 %d 个' % (key[0], key[1], len(pool), 14))
            pool = sorted(pool, key=lambda c: -f(*(([x for x in R if x != c] + [c], M) if key[0] == '研究'
                                                  else (R, [x for x in M if x != c] + [c]))))[:14]
        best, best_v = None, -1
        for k in range(min(cap, len(pool)), -1, -1):
            for sub in itertools.combinations(pool, k):
                if not legal(key, sub):
                    continue
                cand = others + list(sub)
                nr, nm = (cand, M) if key[0] == '研究' else (R, cand)
                if key[0] == '佣兵' and not affordable(nm):
                    continue
                v = f(nr, nm)
                if v > best_v * (1 + EPS):
                    best, best_v = (nr, nm), v
        return best, best_v

    def binding(key, R, M):
        pool, cap = groups[key]
        current = R if key[0] == '研究' else M
        inside = [c for c in current if c in pool]
        over = len(inside) > cap or (key[0] == '佣兵' and (not legal(key, inside) or not affordable(M)))
        return over or len(pool) > cap

    for _ in range(6):
        changed = False
        for key in groups:
            if not binding(key, R, M):
                continue
            if key not in info['binding']:
                info['binding'].append(key)
            res, v = best_subset(key, R, M)
            if res and (list(res[0]), list(res[1])) != (R, M):
                if sorted(res[0]) != sorted(R) or sorted(res[1]) != sorted(M):
                    changed = True
                R, M = list(res[0]), list(res[1])
        if not changed:
            break
    # 两个都受限的组再联合穷举一次（组合数不大时）
    keys = [k for k in info['binding']]
    for a, b in itertools.combinations(keys, 2):
        pa, ca = groups[a]
        pb, cb = groups[b]
        na = sum(math.comb(len(pa), k) for k in range(min(ca, len(pa)) + 1))
        nb = sum(math.comb(len(pb), k) for k in range(min(cb, len(pb)) + 1))
        if na * nb > MAX_SUBSETS:
            continue
        cur = f(R, M)
        best = (R, M, cur)
        for ka in range(min(ca, len(pa)) + 1):
            for sa in itertools.combinations(pa, ka):
                for kb in range(min(cb, len(pb)) + 1):
                    for sb in itertools.combinations(pb, kb):
                        nr, nm = list(R), list(M)
                        for key, sub in ((a, sa), (b, sb)):
                            pool = groups[key][0]
                            if key[0] == '研究':
                                nr = [c for c in nr if c not in pool] + list(sub)
                            else:
                                nm = [c for c in nm if c not in pool] + list(sub)
                        if not (legal(a, sa) and legal(b, sb) and affordable(nm)):
                            continue
                        v = f(nr, nm)
                        if v > best[2] * (1 + EPS):
                            best = (nr, nm, v)
        R, M = best[0], best[1]
    value = f(R, M)
    # 佣兵按贡献从大到小排：模板里靠前的先买、占本组便宜的格位
    if len(M) > 1:
        gain = {c: value / max(f(R, [x for x in M if x != c]), 1e-300) for c in M}
        M = sorted(M, key=lambda c: -gain[c])
    filled = []
    if fill:
        R, M, filled = fill_slots(pl, struct, R, M, caps, banned_research, banned_merc, affordable, info)
        value = f(R, M)
    # 研究按分支整理顺序（导入时按顺序买，不影响结果）
    plan = dict(struct, research=R, merc=order_merc(pl, M))
    info.update(value=value, candidates=dict(research=research_c, merc=merc_c), filled=filled)
    return plan, info


def order_merc(pl, picks):
    """龙族排最前（游戏导入模板先放龙族），其余保持传入的优先顺序（重要的在前：占便宜的格位、先买）。"""
    return sorted(picks, key=lambda c: pl.codes[c].S__2d__21__5e_ != DRAGON)


def fill_slots(pl, struct, R, M, caps, banned_research, banned_merc, affordable, info):
    """空格按「驱动」价值填：目标依赖哪个驱动（产出 / 回魔 / 阵营币）、依赖多少，由当前状态实测。"""
    plan = dict(struct, research=R, merc=M)
    full = pl.value(plan)
    weights = {}
    for d, sids in pl.graph.driver_rows(pl.goal).items():
        if d not in RATE_FN:
            continue
        w = 0.0
        for sid in sids:
            u = pl.r.ups.get(sid)
            if u is None or not u.S__3c__21_7:
                continue
            u.S__3c__21_7 = False
            v = pl.value()
            u.S__3c__21_7 = True
            if v > 0:
                w += math.log(full / v)
        if w > 0:
            weights[d] = w
    pl.value(plan)
    filled = []
    if not weights:
        return R, M, filled
    base_rates = pl.rates()

    def score(toggle):
        toggle.S__3c__21_7 = True
        pl.sim.refresh()
        rates = pl.rates()
        toggle.S__3c__21_7 = False
        return sum(w * math.log(rates[d] / base_rates[d]) for d, w in weights.items()
                   if base_rates[d] > 0 and rates[d] > 0)

    # 研究：每个分支的空格
    R = list(R)
    for b in range(6):
        free = caps.get(b, 0) - sum(1 for c in R if pl.research[pl.r.by_code[c]].S__21_G == b)
        if free <= 0:
            continue
        pool = []
        for sid, u in pl.research.items():
            code = pl.r.codes[sid]
            if u.S__21_G != b or code in R or code in banned_research or u.S__3c__21_7 or not pl.research_ok(u):
                continue
            s = score(u)
            if s > EPS:
                pool.append((s, code))
        for s, code in sorted(pool, reverse=True)[:free]:
            R.append(code)
            filled.append(dict(item=code, kind='研究', score=s))
        pl.value(dict(struct, research=R, merc=M))
        base_rates = pl.rates()
    # 佣兵：每组的空格
    if struct['faction'] == 'Mercenary':
        M = list(M)
        for g in (1, 2, 3):
            free = 4 - sum(1 for c in M if pl.group(pl.codes[c]) == g)
            pool = []
            for c, u in pl.codes.items():
                if free <= 0 or c in M or c in banned_merc or pl.group(u) != g or not pl.merc_ok(c) or u.S__3c__21_7:
                    continue
                s = score(u)
                if s > EPS:
                    pool.append((s, c))
            for s, c in sorted(pool, reverse=True):
                if free <= 0:
                    break
                if sum(1 for x in M + [c] if pl.codes[x].S__2d__21__5e_ == DRAGON and pl.group(pl.codes[x]) == g) > 1:
                    continue
                if affordable(M + [c]):
                    M.append(c)
                    free -= 1
                    filled.append(dict(item=c, kind='佣兵', score=s))
            pl.value(dict(struct, research=R, merc=M))
            base_rates = pl.rates()
    info['driver_weights'] = weights
    return R, M, filled


# ---------------------------------------------------------------- 闭环（每个结构用自己的状态）
def same_plan(a, b):
    return sorted(a.get('research', [])) == sorted(b.get('research', [])) and sorted(a.get('merc', [])) == sorted(b.get('merc', []))


def closed_loop(runner, pl, plan, goal, T, *, target=None, spell=None, rounds=4, log=None):
    """整局跑 → 在它自己跑出来的状态上重求 → 再跑，直到方案不变；返回整局最好的那次。"""
    banned_m, banned_r = set(), set()
    best, history = None, []
    tgt = target if target is not None else float('inf')
    for i in range(rounds):
        o = runner.run(plan, goal, tgt, T, spell=spell)
        if not o['ok'] and i == 0 and plan.get('prestige') in rg_goal.LATE_PRESTIGE:
            # 估算给的方案只有和目标直接相关的研究；龙族显赫要靠研究攒出条件，先把空格填满再试一次
            history.append(dict(round=0, note=o.get('note')))
            pl.save()
            try:
                plan, _ = solve_static(pl, {k: plan[k] for k in ('alignment', 'faction', 'prestige', 'bloodline')})
            finally:
                pl.restore()
            o = runner.run(plan, goal, tgt, T, spell=spell)
        if not o['ok']:
            history.append(dict(round=i + 1, note=o.get('note')))
            break
        sk_m, sk_r = o.get('skipped_merc') or [], o.get('skipped') or []
        history.append(dict(round=i + 1, value=o['value'], time=o['time'], reached=o['reached'],
                            skipped_merc=sk_m, skipped_research=sk_r, estimate=plan.get('_estimate')))
        if best is None or rg_goal.rank_key(o) < rg_goal.rank_key(best[0]):
            best = (o, {k: v for k, v in plan.items() if not k.startswith('_')})
        if log:
            log('    第 %d 轮整局 %s%s%s' % (i + 1, ('%.1f 秒达到' % o['time']) if o['reached'] else '%.4g' % o['value'],
                                       ('，佣兵买不起 ' + ','.join(sk_m)) if sk_m else '',
                                       ('，研究买不上 ' + ','.join(sk_r)) if sk_r else ''))
        banned_m |= set(sk_m)
        # 第一轮是估算给的方案，只有和目标直接相关的研究；有的研究要先攒到条件（如降价促销要魔上限 4 万），
        # 研究少时买不上、填满后能买上，所以第一轮买不上的不拉黑，后面几轮（研究都填满了）买不上的才拉黑
        if i > 0:
            banned_r |= set(sk_r)
        owned_merc = [c for c in plan.get('merc', []) if c not in sk_m]
        pl.save()
        try:
            new, info = solve_static(pl, {k: plan[k] for k in ('alignment', 'faction', 'prestige', 'bloodline')},
                                     banned_merc=banned_m, banned_research=banned_r, owned_merc=owned_merc)
        finally:
            pl.restore()
        new['_estimate'] = info['value']
        history[-1]['next_estimate'] = info['value']
        if same_plan(new, plan) and not sk_m and not sk_r:
            break
        plan = new
    if best is None:
        return dict(ok=False, plan=plan, history=history)
    o, p = best
    # 给用户的方案只列实际买到的（到时间上限还买不起的单独列出），贡献也只算买到的，
    # 在这套方案自己跑出来的状态上算（达到目标的方案只跑到达到为止）
    bought = dict(p, merc=[c for c in p.get('merc', []) if c not in (o.get('skipped_merc') or [])],
                  research=[c for c in p.get('research', []) if c not in (o.get('skipped') or [])])
    o2 = runner.run(bought, goal, tgt, T, spell=spell)
    # 去掉买不起的之后再跑一次：没有在等的升级挡着，可能更好；数值取两次里好的那次（都是整局跑的）
    if o2['ok'] and rg_goal.rank_key(o2) < rg_goal.rank_key(o):
        o = o2
        history.append(dict(round='去掉买不起的', value=o2['value'], time=o2['time'], reached=o2['reached']))
    pl.save()
    try:
        contrib = pl.contributions(bought)
    finally:
        pl.restore()
    return dict(ok=True, plan=bought, value=o['value'], time=o['time'], reached=o['reached'], picks=o['picks'],
                lineage=o.get('lineage'),
                merc_times=o.get('merc_times'), skipped_merc=o.get('skipped_merc'), skipped=o.get('skipped'),
                curve=o['curve'], history=history, contributions=contrib)


def units(spell_ok=None):
    """要整局跑的「阵营单位」：9 个基础阵营（立场固定）+ 三种立场的佣兵。"""
    for faction, (sid, align) in rg_goal.FACTIONS.items():
        yield dict(alignment=align, faction=faction)
    for align in ('good', 'evil', 'neutral'):
        yield dict(alignment=align, faction='Mercenary')


def unit_estimates(runner, pl, unit, goal, T, *, target=None, spell=None, log=None):
    """单位第一步：按这个阵营整局跑出自己的状态，在上面估算所有血统 / 显赫阵营。"""
    struct0 = dict(unit, prestige=None, bloodline=None)
    # 初始研究：在存档载入的状态上（还没退位）按这个结构求一次
    runner.reset()
    pl.save()
    try:
        plan0, _ = solve_static(pl, struct0, fill=True)
    finally:
        pl.restore()
    tgt = target if target is not None else float('inf')
    o = runner.run(plan0, goal, tgt, T, spell=spell)
    if not o['ok']:
        return dict(unit=unit, ok=False, note=o.get('note'))
    banned_m, banned_r = set(o.get('skipped_merc') or []), set(o.get('skipped') or [])
    all_research = {runner.codes[sid] for sid in runner.research}
    if o.get('research_ready') is None:
        banned_r |= all_research      # 这一局到时间上限研究都没显示出来，这个阵营不能买研究
    # 再闭环一次：在这个阵营自己跑出来的状态上重求、再跑，让状态接近这个阵营真正能做到的
    # （第一版方案是在存档状态上求的，跑出来的状态偏弱，估算会系统性偏低）
    owned = [c for c in plan0.get('merc', []) if c not in banned_m]
    pl.save()
    try:
        plan1, _ = solve_static(pl, struct0, banned_merc=banned_m, banned_research=banned_r, owned_merc=owned)
    finally:
        pl.restore()
    o1 = runner.run(plan1, goal, tgt, T, spell=spell)
    if o1['ok']:
        o, plan0 = o1, plan1
        banned_m |= set(o1.get('skipped_merc') or [])
        banned_r |= set(o1.get('skipped') or [])
    prestiges = [None] + ([p for p, a in PRESTIGE_ALIGN.items() if a == unit['alignment']] if unit['faction'] != 'Mercenary' else [])
    # 显赫阵营能不能选，用游戏实际跑一次判断：它要本阵营联盟、奖杯、还要花阵营币（矮人条约 2500 矮人币），
    # 而且要在买研究之前选——光看条件看不出要等多久。退位后只选结构、不买研究，规定时间内选不上就不考虑。
    feasible_prestige, prestige_notes, no_research = set(), {}, set()
    for p in prestiges[1:]:
        # 龙族显赫等研究买完才选，要靠研究攒出条件（泰坦等的第三个条约），所以带上这个阵营自己的研究试跑
        test = runner.run(dict(unit, prestige=p, bloodline=None,
                               research=plan0.get('research', []) if p in rg_goal.LATE_PRESTIGE else []), goal, float('inf'),
                          rg_goal.PICK_WAIT + 5, spell=spell)
        name = runner.ups[rg_goal.PRESTIGE[p]].S_1i
        if test['ok'] and name in test['picks'] and test['picks'][name] <= T:
            feasible_prestige.add(p)
            # 选了显赫阵营还要 Secrets of the Underworld 才显示研究；试跑里没显示就当这个组合不能买研究
            # 龙族显赫等研究买完才选（rg_goal.LATE_PRESTIGE），不受这条限制
            if test.get('research_ready') is None and p not in rg_goal.LATE_PRESTIGE:
                no_research.add(p)
        else:
            prestige_notes[p] = test.get('note')
    owned = [c for c in plan0.get('merc', []) if c not in banned_m]
    rows = []
    pl.save()
    try:
        for p in prestiges:
            if p is not None and p not in feasible_prestige:
                continue
            for b in [None] + list(rg_goal.BLOODLINES):
                struct = dict(unit, prestige=p, bloodline=b)
                plan, info = solve_static(pl, struct, banned_merc=banned_m,
                                          banned_research=all_research if p in no_research else banned_r,
                                          owned_merc=owned, fill=False)
                rows.append(dict(struct=struct, plan=plan, estimate=info['value'], binding=[list(k) for k in info['binding']]))
    finally:
        pl.restore()
    return dict(unit=unit, ok=True, run=dict(value=o['value'], time=o['time'], reached=o['reached']),
                prestige_infeasible=prestige_notes,
                plan0=plan0, estimates=rows)


# ---------------------------------------------------------------- 子进程和协调
def worker_main(source=None, sink=None):
    rg_goal.exit_with_parent()
    source = source or sys.stdin.buffer
    sink = sink or sys.stdout.buffer
    runner = pl = None
    for raw in source:
        started = time.time()
        try:
            req = json.loads(raw.decode('utf-8'))
            op = req.get('op')
            if op == 'init':
                runner = rg_goal.Runner(req['game_py'], save_path=req.get('save_path'), encoded_save=req.get('save'),
                                        timestamp=req.get('timestamp'), research_json=req.get('research_json'))
                graph = Graph(req.get('graph'))
                pl = Planner(runner, req['goal'], graph)
                result = dict(current=runner.current)
            elif op == 'unit':
                result = unit_estimates(runner, pl, req['unit'], req['goal'], req['T'], target=req.get('target'),
                                        spell=req.get('spell'))
            elif op == 'loop':
                result = closed_loop(runner, pl, req['plan'], req['goal'], req['T'], target=req.get('target'),
                                     spell=req.get('spell'))
            else:
                raise ValueError('未知请求')
            if isinstance(result, dict):
                result['elapsed'] = round(time.time() - started, 3)
            reply = dict(ok=True, result=result)
        except Exception as error:
            import traceback
            reply = dict(ok=False, error='%s: %s' % (type(error).__name__, error), trace=traceback.format_exc()[-1500:])
        sink.write(json.dumps(reply, ensure_ascii=False, default=float).encode('utf-8') + b'\n')
        sink.flush()


class Optimize:
    """后台线程里协调：各阵营单位并行估算 → 按估算从高到低闭环验证 → 剪枝。status() 给界面轮询。"""

    def __init__(self, command, init, *, goal, T, target=None, spell=None, workers=rg_goal.WORKERS, max_loops=40):
        self.goal, self.T, self.target, self.spell = goal, T, target, spell
        self.max_loops = max_loops
        self.stage, self.done_n, self.total_n = '启动计算进程', 0, 0
        self.results, self.units, self.error, self.finished, self.cancelled = [], [], None, False, False
        self.pruned, self.margin, self.log_lines, self.unexplored = 0, None, [], 0
        # 给界面：阶段（0 启动、1 各阵营跑状态估算、2 每个阵营验证一套、3 验证其余、4 结束）、每批在算什么、各阵营的组合
        self.phase, self.batch_labels, self.by_unit, self.ratio = 0, [], {}, {}
        self.cost = {}       # 各阵营单位第一阶段实测用时：后面的验证按它排顺序，慢的先跑
        self.started = time.time()
        self.thread = threading.Thread(target=self._main, args=(command, dict(init, goal=goal), workers), daemon=True)
        self.thread.start()

    def log(self, text):
        self.log_lines.append(text)

    def _batch(self, stage, reqs, labels):
        self.stage, self.done_n, self.total_n = stage, 0, len(reqs)
        self.batch_labels = labels
        for i, r in enumerate(reqs):
            self.pool.submit(i, dict(r, goal=self.goal, T=self.T, target=self.target, spell=self.spell))
        out = [None] * len(reqs)
        while self.done_n < len(reqs):
            if self.cancelled:
                raise RuntimeError('已停止')
            try:
                tag, reply = self.pool.results.get(timeout=0.5)
            except queue.Empty:
                continue
            out[tag] = reply['result'] if reply.get('ok') else dict(ok=False, note=reply.get('error'), trace=reply.get('trace'))
            self.done_n += 1
            yield tag, out[tag]
        return out

    def _main(self, command, init, workers):
        try:
            self.pool = rg_goal.Pool(command, workers, init)
            # 1. 每个阵营单位跑出自己的状态，估算所有血统 / 显赫阵营
            estimates = []
            self.phase = 1
            # 慢的先跑：佣兵单位整局跑明显更久（实测 2～5 秒，其他阵营约 1 秒），排在最前，免得最后大家等它
            unit_list = sorted(units(), key=lambda u: u['faction'] != 'Mercenary')
            for tag, res in self._batch('各阵营跑出自己的状态并估算', [dict(op='unit', unit=u) for u in unit_list],
                                        [dict(u, prestige=None, bloodline=None) for u in unit_list]):
                res.setdefault('unit', unit_list[tag])
                self.units.append(res)
                self.cost[(unit_list[tag]['alignment'], unit_list[tag]['faction'])] = res.get('elapsed', 0)
                if res.get('ok'):
                    estimates += res['estimates']
                    self.log('%s%s：整局 %s，估算最高 %.4g' % (
                        rg_goal.FACTIONS.get(res['unit']['faction'], ('', ''))[1] if False else res['unit']['alignment'],
                        res['unit']['faction'], ('%.1f 秒达到' % res['run']['time']) if res['run']['reached'] else '%.4g' % res['run']['value'],
                        max(r['estimate'] for r in res['estimates'])))
                else:
                    self.log('%s %s：%s' % (res.get('unit', {}).get('alignment'), res.get('unit', {}).get('faction'), res.get('note')))
            if not estimates:
                raise RuntimeError('没有可行的阵营：' + '; '.join(sorted({str(u.get('note')) for u in self.units}))[:300])
            # 2. 每个阵营先完整闭环验证自己估算最好的那套，得到这个阵营的「实测 / 估算」系数
            by_unit = self.by_unit
            self.phase = 2
            for row in estimates:
                key = (row['struct']['alignment'], row['struct']['faction'])
                by_unit.setdefault(key, []).append(row)
            for rows in by_unit.values():
                rows.sort(key=lambda r: -r['estimate'])
            heads = [rows[0] for rows in by_unit.values()]
            ratio, best_value = self.ratio, None
            done = set()

            def verify(rows, stage):
                nonlocal best_value
                # 同一批里按这个阵营第一阶段实测的用时排序，慢的先跑（只改顺序，不改验证哪些）
                rows = sorted(rows, key=lambda r: -self.cost.get((r['struct']['alignment'], r['struct']['faction']), 0))
                for tag, res in self._batch(stage, [dict(op='loop', plan=dict(r['plan'], _estimate=r['estimate'])) for r in rows],
                                            [r['struct'] for r in rows]):
                    row = rows[tag]
                    key = (row['struct']['alignment'], row['struct']['faction'])
                    res['estimate'] = row['estimate']
                    res['struct'] = row['struct']
                    res['id'] = len(self.results)          # 稳定编号：界面按它增量更新，不整块重画
                    res['finished_at'] = round(time.time() - self.started, 1)
                    self.results.append(res)
                    s = row['struct']
                    self.log('验证 %s %s%s%s：%s' % (
                        s['alignment'], s['faction'], (' 血统 ' + s['bloodline']) if s.get('bloodline') else '',
                        (' 显赫 ' + s['prestige']) if s.get('prestige') else '',
                        (('%.1f 秒达到' % res['time']) if res.get('reached') else '整局 %.4g' % res['value']) if res.get('ok')
                        else '没跑成（%s）' % (res.get('note') or (res.get('history') or [{}])[-1].get('note'))))
                    done.add(id(row))
                    if not res.get('ok') and row['struct'].get('prestige'):
                        # 显赫阵营实际选不上：这个阵营带同一显赫阵营的组合都不再考虑
                        bad = (key, row['struct']['prestige'])
                        by_unit[key][:] = [x for x in by_unit[key] if (key, x['struct'].get('prestige')) != bad or id(x) in done]
                    if res.get('ok') and row['estimate'] > 0:
                        ratio[key] = max(ratio.get(key, 0), res['value'] / row['estimate'])
                        if self.target is None and (best_value is None or res['value'] > best_value):
                            best_value = res['value']
            verify(heads, '每个阵营验证估算最好的一套')
            # 第一套验证失败（例如显赫阵营实际选不上）的阵营，接着验证它的下一套，直到每个阵营都有实测结果
            for attempt in range(1, 4):
                retry = [next(x for x in rows if id(x) not in done) for key, rows in by_unit.items()
                         if key not in ratio and any(id(x) not in done for x in rows)]
                if not retry or self.cancelled:
                    break
                verify(retry, '补验证第一套失败的阵营')
            self.margin = {('%s %s' % k): round(v, 3) for k, v in ratio.items()}
            for k, v in sorted(ratio.items(), key=lambda kv: -kv[1]):
                self.log('%s %s：实测 / 估算 = %.2f' % (k[0], k[1], v))
            # 3. 其余组合：估算 × 本阵营系数 × 1.2 仍够不上已验证最好的，不可能更好，跳过；其余按可能值从高到低验证
            rest = [r for rows in by_unit.values() for r in rows if id(r) not in done]
            self.phase = 3

            def potential(r):
                k = (r['struct']['alignment'], r['struct']['faction'])
                return r['estimate'] * ratio.get(k, 1.0) * SAFETY

            rest.sort(key=lambda r: -potential(r))
            if self.target is not None:
                # 最快达到：数值和用时不能直接比，每个阵营再验证可能值最高的两套，不做数值剪枝
                picked, per = [], {}
                for r in rest:
                    k = (r['struct']['alignment'], r['struct']['faction'])
                    if per.get(k, 0) < 2:
                        per[k] = per.get(k, 0) + 1
                        picked.append(r)
                self.pruned = len(rest) - len(picked)
                rest = picked
            while rest and len(self.results) < self.max_loops:
                if self.cancelled:
                    raise RuntimeError('已停止')
                if self.target is None and best_value is not None:
                    keep = [r for r in rest if potential(r) >= best_value]
                    self.pruned += len(rest) - len(keep)
                    rest = keep
                if not rest:
                    break
                batch, rest = rest[:self.pool_size()], rest[self.pool_size():]
                verify(batch, '验证其余可能更好的组合（已验证 %d 套）' % len(self.results))
            if rest:
                self.unexplored = len(rest)
                self.log('达到验证上限，还有 %d 套没验证（可能值都低于已验证的前几名）' % len(rest))
            self.stage = '完成'
        except Exception as error:
            self.error = str(error)
        finally:
            self.phase = 4
            self.batch_labels = []
            self.finished = True
            if hasattr(self, 'pool'):
                self.pool.close()

    def pool_size(self):
        return len(self.pool.procs)

    def stop(self):
        self.cancelled = True

    def best(self):
        ok = [r for r in self.results if r.get('ok')]
        return sorted(ok, key=lambda r: rg_goal.rank_key(dict(ok=True, reached=r['reached'], time=r['time'], value=r['value'])))

    def status(self):
        now = time.time()
        running = []
        pool, labels = getattr(self, 'pool', None), self.batch_labels
        if pool is not None and not self.finished:
            for tag, since in sorted(list(pool.running.items()), key=lambda kv: kv[1]):
                if tag < len(labels):
                    running.append(dict(labels[tag], seconds=round(now - since, 1)))
        return dict(stage=self.stage, phase=self.phase, done=self.done_n, total=self.total_n, finished=self.finished,
                    error=self.error, elapsed=now - self.started, entries=list(self.results), units=self.unit_stats(),
                    running=running, workers=len(pool.procs) if pool is not None else 0,
                    verified=len(self.results), pruned=self.pruned, margin=self.margin, unexplored=self.unexplored,
                    log=self.log_lines[-30:], log_total=len(self.log_lines))

    def unit_stats(self):
        """每个阵营单位：跑状态估算的结果、组合数、验证了几套、最好的一套。顺序固定。"""
        out = []
        done = {(u['unit']['alignment'], u['unit']['faction']): u for u in list(self.units) if u.get('unit')}
        results = list(self.results)
        for u in units():
            key = (u['alignment'], u['faction'])
            res = done.get(key)
            mine = [r for r in results if r.get('struct') and (r['struct']['alignment'], r['struct']['faction']) == key]
            ok = [r for r in mine if r.get('ok')]
            best = min(ok, key=lambda r: rg_goal.rank_key(dict(ok=True, reached=r['reached'], time=r['time'], value=r['value']))) if ok else None
            rows = self.by_unit.get(key) or (res or {}).get('estimates') or []
            out.append(dict(u, state='waiting' if res is None else ('ready' if res.get('ok') else 'failed'),
                            note=None if res is None or res.get('ok') else res.get('note'),
                            combos=len(rows), verified=len(mine),
                            estimate=max((r['estimate'] for r in rows), default=None),
                            ratio=self.ratio.get(key),
                            best=dict(id=best['id'], value=best['value'], time=best['time'], reached=best['reached'],
                                      bloodline=best['struct'].get('bloodline'), prestige=best['struct'].get('prestige'),
                                      lineage=best.get('lineage')) if best else None))
        return out


FACTION_ZH = {'Fairy': '仙灵', 'Elven': '精灵', 'Angel': '天使', 'Goblin': '地精', 'Undead': '亡灵', 'Demon': '恶魔',
              'Titan': '泰坦', 'Druid': '德鲁伊', 'Faceless': '无面者', 'Dwarven': '矮人', 'Drow': '卓尔', 'Dragon': '龙族',
              'Mercenary': '佣兵'}
ALIGNMENT_ZH = {'good': '善良', 'evil': '邪恶', 'neutral': '中立'}


def struct_zh(s):
    s = s or {}
    return dict(alignment=s.get('alignment'), faction=s.get('faction'), bloodline=s.get('bloodline'),
                prestige=s.get('prestige'), alignment_zh=ALIGNMENT_ZH.get(s.get('alignment')),
                faction_zh=FACTION_ZH.get(s.get('faction'), s.get('faction')),
                bloodline_zh=FACTION_ZH.get(s.get('bloodline'), s.get('bloodline')),
                prestige_zh=FACTION_ZH.get(s.get('prestige'), s.get('prestige')))


def ui_status(status, request, translate, research_names, options, revision):
    """把 Optimize.status() 翻成界面用的（引擎操作 goal_status）。放在这里而不是 build_engine：那边要加密打包，文件不能太大。
    每条验证结果带稳定编号 id，只追加、不会变，所以只发界面还没有的（request['known'] 条以后）。"""
    known = int(request.get('known') or 0)
    entries = []
    for r in status['entries'][known:]:
        p = r.get('plan') or {}
        entries.append(dict(
            struct_zh(r.get('struct') or p), id=r['id'], ok=bool(r.get('ok')), note=r.get('note'),
            reached=r.get('reached'), time=r.get('time'), value=r.get('value'), estimate=r.get('estimate'),
            finished_at=r.get('finished_at'), lineage=r.get('lineage'),
            research=p.get('research') or [], merc=p.get('merc') or [],
            research_zh=[research_names.get(c, c) for c in p.get('research') or []],
            skipped=r.get('skipped') or [], skipped_merc=r.get('skipped_merc') or [],
            picks={translate(k): v for k, v in (r.get('picks') or {}).items()},
            contributions=[dict(c, name=research_names.get(c['item'], c['item'])) for c in r.get('contributions') or []],
            curve=r.get('curve') or [], rounds=len(r.get('history') or [])))
    units = []
    for u in status['units']:
        best = u.get('best')
        if best:
            z = struct_zh(best)
            best = dict(best, bloodline_zh=z['bloodline_zh'], prestige_zh=z['prestige_zh'])
        units.append(dict(u, **struct_zh(u), best=best))
    running = [dict(r, **struct_zh(r)) for r in status['running']]
    return dict({k: v for k, v in status.items() if k not in ('entries', 'units', 'running')},
                entries=entries, total_entries=len(status['entries']), units=units, running=running,
                options=options, revision=revision)


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('game_py', nargs='?')
    ap.add_argument('--worker', action='store_true')
    ap.add_argument('--save')
    ap.add_argument('--goal', default='max_mana', choices=list(rg_goal.GOALS))
    ap.add_argument('--at', type=float, default=300, help='数值最高：在第几秒比较；最快达到：时间上限')
    ap.add_argument('--target', type=float, help='给了就按「最快达到」')
    ap.add_argument('--spell')
    ap.add_argument('--workers', type=int, default=rg_goal.WORKERS)
    ap.add_argument('--output')
    args = ap.parse_args()
    if args.worker:
        worker_main()
        return
    command = [sys.executable, '-X', 'utf8', str(Path(__file__).resolve()), '--worker']
    init = dict(game_py=str(Path(args.game_py).resolve()), save_path=args.save)
    opt = Optimize(command, init, goal=args.goal, T=args.at, target=args.target, spell=args.spell, workers=args.workers)
    shown = 0
    last = 0
    while not opt.finished:
        time.sleep(0.1)              # 及时发现结束；进度每 2 秒打一次
        if time.time() - last < 2 and not opt.finished:
            continue
        last = time.time()
        st = opt.status()
        for line in st['log'][shown:] if len(opt.log_lines) > shown else []:
            print(line, file=sys.stderr, flush=True)
        shown = len(opt.log_lines)
        print('%s %d/%d  已验证 %d  跳过 %d  用时 %.0f 秒' % (st['stage'], st['done'], st['total'], st['verified'],
                                                       st['pruned'], st['elapsed']), file=sys.stderr, flush=True)
    st = opt.status()
    if st['error']:
        print('出错：' + st['error'], file=sys.stderr)
    for r in opt.best()[:5]:
        p = r['plan']
        print('\n%s  %s %s 血统=%s 显赫=%s（最初估算 %.4g）' % (
            ('%.1f 秒达到' % r['time']) if r['reached'] else '整局 %.4g' % r['value'], p['alignment'], p['faction'],
            p.get('bloodline'), p.get('prestige'), r['estimate']))
        if p.get('merc'):
            print('  佣兵：' + ','.join(p['merc']))
        print('  研究：' + ','.join(p['research']))
        print('  贡献：' + '、'.join('%s ×%.2f（%s）' % (c['item'], c['ratio'], c['path']) for c in r['contributions'][:10] if c['ratio']))
    if args.output:
        Path(args.output).write_text(json.dumps(dict(status=st, units=opt.units, results=opt.results), ensure_ascii=False,
                                                indent=1, default=str), encoding='utf-8')


if __name__ == '__main__':
    main()
