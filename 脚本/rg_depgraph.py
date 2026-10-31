"""从客户端源码生成「目标 ← 来源 ← 输入」的依赖图，给 rg_optimize 筛候选、找连锁用。

python -X utf8 -I 脚本/rg_depgraph.py build/calculation/game.py

输出 资料/依赖图（客户端4.3.14）.json（prepare_engine 复制到 build/calculation/depgraph.json，运行时不需要 AS 源码）。
游戏更新后先跑 readable_client.py 再跑本脚本。

每个目标函数（Formulas.getMaxManaReal 等）里，来源都写成
  if(拥有 X) { 底数 += X.方法() }  或  { 底数 *= 1 + 0.01 * X.方法() }
（解析沿用 rg_sources.parse_sources）。再读 X.方法() 的方法体（往下追两层静态方法），收集它读的输入，分三类：
- 中间量：本身是可以当场算的公式（助手数、回魔、魔上限、产出、助手效率……），递归连到那个目标的来源；
- 驱动：一局里慢慢攒的量（建筑数、产生的魔力、找到的阵营币、施法次数 / 时长、点击），记下推动它的「速率」目标；
- 其他：研究点数、考古、世系等级、时间、奖杯数等，和这一局的 build 基本无关。
"""
import argparse
import json
from pathlib import Path
import re
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(Path(__file__).resolve().parent))

import rg_sources

AS_ROOT = ROOT / 'build/installed-as3-named/scripts'
OUT = ROOT / '资料/依赖图（客户端4.3.14）.json'

# 目标 → Formulas 里的函数
TARGETS = {
    'max_mana': 'getMaxManaReal',
    'assistants': 'getAssistantsNumReal',
    'mana_regen': 'getManaPerTickReal',
    'production': 'getProductionPerTickReal',
    'assistant_efficiency': 'getAssistantsMultiplierReal',
}
# 当场算的中间量：输入调用 → 目标
INTERMEDIATE = {
    'Formulas.getAssistantsNum': 'assistants', 'Formulas.getAssistantsNumReal': 'assistants',
    'Formulas.getManaPerTick': 'mana_regen', 'Formulas.getManaPerTickReal': 'mana_regen',
    'Formulas.getMaxMana': 'max_mana', 'Formulas.getMaxManaReal': 'max_mana',
    'Formulas.getProductionPerTick': 'production', 'Formulas.getProductionPerTickReal': 'production',
    'Formulas.getProductionPerSecond': 'production', 'Formulas.getProductionPerSecondReal': 'production',
    'Formulas.getAssistantsMultiplier': 'assistant_efficiency',
}
# 一局里攒的量：输入调用 → 推动它的速率（目标名；clicks / spells / fc 没有单独的目标函数）
DRIVERS = {
    'Utilities.getBuildingNumber': 'production', 'Game.getBuildingMax': 'production', 'Game.getBuildingNum': 'production',
    'Utilities.getMaxBuildingNumber': 'production', 'Utilities.getUniqueBuildingNumber': 'production',
    'Game.getUniqueMax': 'production', 'Utilities.getExchange': 'production',
    'Utilities.getManaProduced': 'mana_regen',
    'Utilities.getFactionCoinTotal': 'fc', 'Utilities.getFactionCoinChance': 'fc',
    'Utilities.getClicks': 'clicks',
    'Utilities.getSpellCast': 'spells', 'Utilities.getAllSpellCast': 'spells', 'Utilities.getCastTime': 'spells',
    'Utilities.getAllSpellCastStat': 'spells', 'Utilities.getMinMaxSpellCastTime': 'spells',
    'Utilities.getSpellDuration': 'spells', 'Utilities.getMinMaxSpellDuration': 'spells',
    'Utilities.getActiveSpells': 'spells', 'Game.hasSpellActive': 'spells',
}


class Source:
    """AS 源码索引：类名 → 文件，按需取静态方法体。"""

    def __init__(self, root=AS_ROOT):
        self.files = {}
        for p in root.rglob('*.as'):
            text = p.read_text(encoding='utf-8', errors='ignore')
            m = re.search(r'public (?:final |dynamic )*class (\w+)', text)
            if m:
                self.files[m.group(1)] = text
        self.formulas = self.files['Formulas']

    def method(self, cls, name):
        text = self.files.get(cls)
        if not text:
            return None
        m = re.search(r'function %s\(.*?\n      \{\n(.*?)\n      \}\n' % re.escape(name), text, re.S)
        return m.group(1) if m else None

    def inputs(self, cls, name, depth=2, seen=None):
        """方法体里读的输入（Utilities / Formulas / Game 调用），往下追 depth 层其他类的静态方法。"""
        seen = seen if seen is not None else set()
        if (cls, name) in seen:
            return set()
        seen.add((cls, name))
        body = self.method(cls, name)
        if body is None:
            return set()
        found = set()
        for owner, fn in re.findall(r'\b(Utilities|Formulas|Game)\.(\w+)\(', body):
            found.add(owner + '.' + fn)
        if depth > 0:
            for owner, fn in re.findall(r'\b([A-Z]\w+)\.(get\w+)\(', body):
                if owner not in ('Utilities', 'Formulas', 'Game', 'Math'):
                    found |= self.inputs(owner, fn, depth - 1, seen)
            for fn in re.findall(r'(?<![\.\w])(get\w+)\(', body):      # 同一个类里的静态方法
                found |= self.inputs(cls, fn, depth - 1, seen)
        return found


def classify(calls):
    inter, drive, other = set(), set(), set()
    for c in calls:
        if c in INTERMEDIATE:
            inter.add(INTERMEDIATE[c])
        elif c in DRIVERS:
            drive.add(DRIVERS[c])
        elif not c.startswith('Game.has') and not c.startswith('Game.get' + 'Upgrade') and c != 'Utilities.hasChallenge':
            other.add(c)
    return sorted(inter), sorted(drive), sorted(other)


def build(src):
    graph = {}
    for target, fn in TARGETS.items():
        rows = []
        for s in rg_sources.parse_sources(rg_sources.function_body(src.formulas, fn)):
            if not s['cls'] and s['op'] == '其他':
                continue
            calls = set()
            for cls, meth in re.findall(r'\b([A-Z]\w+)\.(get\w+|§[^§]+§)\(', s['action']):
                calls |= src.inputs(cls, meth)
            # 条件本身读的东西（例如「某法术生效」）也算输入
            calls |= {o + '.' + f for o, f in re.findall(r'\b(Utilities|Formulas|Game)\.(\w+)\(', s['cond'])}
            inter, drive, other = classify(calls)
            rows.append(dict(cls=s['cls'], kind=s['kinds'][0][0] if s['kinds'] else '其他', op=s['op'],
                             intermediates=inter, drivers=drive, others=other, notes=s['notes']))
        graph[target] = rows
    return graph


def attach_ids(graph, game_py):
    """在模拟里把类名对到存档 ID（运行时用存档 ID 找对象）。"""
    import random
    import rg_growth
    from as2py import mangle
    random.seed(0)
    names = json.loads((ROOT / 'build/installed-as3-named/names.json').read_text(encoding='utf-8'))
    real_of = {mangle(k): v['name'] for k, v in names.items() if 'class' in str(v.get('kind'))}
    sim = rg_growth.Simulation(game_py)
    ids = {}
    for u in sim.G.S__2d__21_4:
        ids.setdefault(real_of.get(type(u).__name__), u.S_6_21_Z)
    spells = {real_of.get(type(s).__name__): s.S_6_21_Z for s in sim.G.S_0_21_A}
    for rows in graph.values():
        for r in rows:
            if r['kind'] == '法术生效':
                r['spell'] = spells.get(r['cls'])
            else:
                r['sid'] = ids.get(r['cls'])
    return graph


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('game_py')
    ap.add_argument('--output', default=str(OUT))
    args = ap.parse_args()
    graph = attach_ids(build(Source()), args.game_py)
    Path(args.output).write_text(json.dumps(graph, ensure_ascii=False, indent=1), encoding='utf-8')
    for target, rows in graph.items():
        inter = sorted({i for r in rows for i in r['intermediates']})
        drive = sorted({d for r in rows for d in r['drivers']})
        print('%-22s 来源 %3d  对上存档 %3d  经中间量 %s  经驱动 %s' % (
            target, len(rows), sum(1 for r in rows if r.get('sid') or r.get('spell')), inter, drive))


if __name__ == '__main__':
    main()
