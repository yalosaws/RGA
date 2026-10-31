"""列出影响某个目标（魔上限、助手数……）的全部来源，并在存档上算每一项值多少。

python -X utf8 -I 脚本/rg_sources.py build/calculation/game.py --target getMaxManaReal

做法：
1. 从客户端源码（build/installed-as3-named/scripts/Formulas.as）解析目标函数：每个来源都写成
   「if(条件里的类) { 底数 += 类.方法() }」或「*= 1 + 0.01 × 类.方法()」，逐块取出条件类型、类名、加 / 乘。
2. 在模拟里找到这个类对应的游戏对象（升级、挑战、套装、世系都在升级列表里；法术在法术列表里），
   读它属于哪个阵营、哪个研究分支、要什么阵营。
3. 在存档状态上只切换这一项的「拥有」标记、重算目标值，得到它现在值多少倍
   （拥有的看去掉后掉多少，没拥有的看加上后涨多少）。只改标记，不推进时间。
"""
import argparse
import json
from pathlib import Path
import re
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(Path(__file__).resolve().parent))

FACTIONS = ['仙灵', '精灵', '天使', '地精', '亡灵', '恶魔', '泰坦', '德鲁伊', '无面者', '矮人', '卓尔',
            '佣兵', '龙族', '执政官', '巨灵', '永衡族']
BRANCHES = 'SCDEAW'
COND_KIND = {
    'Game.hasUpgrade': '升级', 'Utilities.hasBloodline': '血统', 'Utilities.hasChallenge': '挑战',
    'Utilities.hasSet': '遗物契印', 'Utilities.hasUnion': '联合', 'Utilities.hasLineage': '世系',
    'Game.hasSpellActive': '法术生效', 'Game.hasTrophy': '奖杯',
}
TARGET_CALL = {'getMaxManaReal': 'getMaxMana', 'getAssistantsNumReal': 'getAssistantsNum',
               'getManaPerTickReal': 'getManaPerTick'}


def function_body(source, name):
    m = re.search(r'public static function %s\(.*?\n      \{\n(.*?)\n      \}\n' % re.escape(name), source, re.S)
    if not m:
        raise ValueError('Formulas.as 里找不到 ' + name)
    return m.group(1)


def parse_sources(body):
    """取出每个 if 块：条件、作用（加 / 乘）、用到的类和方法。"""
    out = []
    for m in re.finditer(r'\n         if\((.*?)\)\n         \{\n(.*?)\n         \}', body, re.S):
        cond, action = m.group(1), m.group(2).strip()
        op = '乘' if '*=' in action else '加' if '+=' in action else '其他'
        calls = re.findall(r'\b([A-Z]\w+)\.(get\w+|§[^§]+§)\(', action) or re.findall(r'\b([A-Z]\w+)\.', action)
        kinds = [(k, cls) for call, k in COND_KIND.items() for cls in re.findall(re.escape(call) + r'\((\w+)\.id', cond)]
        if 'getUpgrade(' in cond and '.visible' in cond:
            kinds += [('可见', c) for c in re.findall(r'getUpgrade\((\w+)\.id\)', cond)]
        extra = []
        if 'reincarnation' in cond:
            extra.append('R 条件')
        if 'season' in cond:
            extra.append('活动期间')
        if '§9!m§' in cond:
            extra.append('第二立场条件')
        if '!param1' in cond:
            extra.append('不计入实际上限')   # getMaxManaReal(true) 时跳过（法术生效类）
        out.append(dict(cond=cond, action=action, op=op, kinds=kinds,
                        cls=(kinds[0][1] if kinds else (calls[0][0] if calls and isinstance(calls[0], tuple) else None)),
                        method=calls[0][1] if calls and isinstance(calls[0], tuple) else None, notes=extra))
    return out


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('game_py')
    ap.add_argument('--target', default='getMaxManaReal')
    ap.add_argument('--save')
    ap.add_argument('--json')
    ap.add_argument('--md')
    args = ap.parse_args()

    import random
    import rg_growth
    import rg_sim
    from as2py import mangle
    random.seed(0)
    formulas = (ROOT / 'build/installed-as3-named/scripts/Formulas.as').read_text(encoding='utf-8')
    # 末尾「数值无效就返回 0」之类的检查不是来源
    sources = [s for s in parse_sources(function_body(formulas, args.target)) if s['cls'] or s['op'] != '其他']

    names = json.loads((ROOT / 'build/installed-as3-named/names.json').read_text(encoding='utf-8'))
    real_of = {mangle(k): v['name'] for k, v in names.items() if 'class' in str(v.get('kind'))}
    zh = {}
    tsv = max((ROOT / '资料').glob('汉化文本（PC_*）.tsv'))
    for line in tsv.read_text(encoding='utf-8').splitlines():
        if '\t' in line:
            en, cn = line.split('\t', 1)
            for v in en.split('\x00'):
                zh.setdefault(v, cn.split('\x00')[0])
    research_codes = {r['id']: r['code'] for r in json.loads((ROOT / '资料/客户端研究对照.json').read_text(encoding='utf-8'))}

    sim = rg_growth.Simulation(args.game_py, args.save or rg_sim.SOL)
    G = sim.G
    objects = {}
    for u in G.S__2d__21_4:
        objects.setdefault(real_of.get(type(u).__name__), u)
    spells = {real_of.get(type(s).__name__): s for s in G.S_0_21_A}
    call = TARGET_CALL.get(args.target, args.target)

    def value():
        sim.refresh()
        return sim.core_call(call)

    base = value()
    rows = []
    for src in sources:
        cls = src['cls']
        kind = src['kinds'][0][0] if src['kinds'] else '其他'
        row = dict(cls=cls, kind=kind, op=src['op'], method=src['method'], notes=list(src['notes']), cond=src['cond'])
        obj = objects.get(cls)
        if kind == '法术生效':
            s = spells.get(cls)
            row.update(name=s.S_1i if s else cls, owned=bool(s and s.S_23), what='法术')
        elif obj is not None:
            u = obj
            row.update(name=u.S_1i, sid=u.S_6_21_Z, owned=bool(u.S__3c__21_7))
            faction = getattr(u, 'S__2d__21__5e_', -1)
            branch = getattr(u, 'S__21_G', -1)
            need = getattr(u, 'S__5e__21_C', -1)
            if u.S_6_21_Z in research_codes:
                row['what'] = '研究 %s' % research_codes[u.S_6_21_Z]
                row['branch'] = BRANCHES[branch] if 0 <= branch < 6 else None
                if isinstance(need, int) and 0 <= need < len(FACTIONS):
                    row['requires'] = FACTIONS[need]
                if isinstance(faction, int) and 0 <= faction < len(FACTIONS):
                    row['requires'] = FACTIONS[faction]
            elif kind == '血统':
                row['what'] = '血统'
            elif kind in ('挑战', '遗物契印', '世系', '奖杯'):
                row['what'] = kind + '（永久）'
            elif re.search(r'(Perk\d|Lineage)$', cls or ''):
                row['what'] = '世系天赋（永久）'
            elif re.search(r'Heritage$|^Reincarnation\d|Power$', cls or ''):
                row['what'] = '永久'
            elif re.search(r'Faction0[1-4]$', cls or ''):
                row['what'] = '阵营条约 / 联合'
                if isinstance(faction, int) and 0 <= faction < len(FACTIONS):
                    row['requires'] = FACTIONS[faction]
            elif re.search(r'Upgrade\d+$', cls or ''):
                row['what'] = '阵营升级'
                if isinstance(faction, int) and 0 <= faction < len(FACTIONS):
                    row['requires'] = FACTIONS[faction]
            else:
                row['what'] = '其他升级'
                if isinstance(faction, int) and 0 <= faction < len(FACTIONS):
                    row['requires'] = FACTIONS[faction]
            # 切换拥有标记，看值多少
            before = u.S__3c__21_7
            u.S__3c__21_7 = not before
            try:
                other = value()
            finally:
                u.S__3c__21_7 = before
            if before:
                row['ratio'] = base / other if other else None      # 现在拥有：去掉它会掉到 1/ratio
            else:
                row['ratio'] = other / base if base else None       # 现在没有：加上它会涨 ratio 倍
        else:
            row.update(name=cls, what='未找到对象' if cls else '其他（条件复杂，未解析）')
        row['zh'] = zh.get(row['name'], row['name']) if row.get('name') else (src['action'][:60])
        if obj is not None:
            row['available'] = availability(obj, row, G)
        rows.append(row)
    value()
    # 同一个类既加又乘的合并成一行（切换标记算出的倍数已经包含两部分）
    merged = {}
    for r in rows:
        key = r['cls']
        if key in merged:
            merged[key]['op'] = '加和乘' if merged[key]['op'] != r['op'] else r['op']
        else:
            merged[key] = r
    rows = list(merged.values())
    out = dict(target=args.target, base=base, sources=rows)
    if args.json:
        Path(args.json).write_text(json.dumps(out, ensure_ascii=False, indent=1, default=str), encoding='utf-8')
    if args.md:
        Path(args.md).write_text(markdown(rows, base, args.target), encoding='utf-8')
    print('目标 %s 当前值 %.6g，来源 %d 项' % (args.target, base, len(rows)))


CHOOSABLE = ('研究', '阵营升级', '血统', '阵营条约 / 联合')


def availability(u, row, G):
    """这一项在当前阶段能不能拿到（按游戏自己的判断，能读到的才判断）。"""
    what = row.get('what', '')
    if what.startswith('研究'):
        # 研究编号超过本分支已解锁的进度就看不到（ResearchUpgrade.researchVisible）
        return '能选' if u.S__2b__21_a else '现在拿不到（研究进度不够）'
    if row.get('requires') in ('执政官', '巨灵', '永衡族'):
        return '现在拿不到（A2 以后的阵营）'
    if what in ('阵营升级', '阵营条约 / 联合', '血统'):
        return '能选'
    return '已有' if row.get('owned') else '没有'


def markdown(rows, base, target):
    def worth(r):
        ratio = r.get('ratio')
        if ratio is None:
            return '—'
        if abs(ratio - 1) < 1e-9:
            return '×1（现在不起作用）'
        return ('有它 ×%.3g' if r.get('owned') else '加上 ×%.3g') % ratio

    def cond(r):
        return '、'.join(x for x in [r.get('requires') and '限' + r['requires'], r.get('branch') and r['branch'] + ' 分支'] + r['notes'] if x) or '—'

    def key(r):
        return -(r.get('ratio') or 1)

    pick = [r for r in rows if r.get('what', '').startswith(CHOOSABLE) or r.get('what') in CHOOSABLE]
    now = [r for r in pick if r.get('available') == '能选']
    later = [r for r in pick if r.get('available') != '能选']
    rest = [r for r in rows if r not in pick]
    lines = ['# %s 的来源（当前存档值 %.6g）' % (target, base), '',
             '「值多少」是在当前存档状态下只切换这一项算出来的倍数，会随时间、建筑数等变化，只作参考。', '']
    for title, group in (('每局能选、现在就能拿到', now), ('每局能选、但现在拿不到', later), ('永久的或其他（不由 build 决定）', rest)):
        lines += ['## %s（%d 项）' % (title, len(group)), '',
                  '| 来源 | 类型 | 加 / 乘 | 条件 | 现在 | 值多少 |', '|---|---|---|---|---|---|']
        for r in sorted(group, key=key):
            lines.append('| %s（%s） | %s | %s | %s | %s | %s |' % (r['zh'], r.get('name'), r.get('what', r['kind']), r['op'],
                         cond(r), '有' if r.get('owned') else '没有', worth(r)))
        lines.append('')
    return '\n'.join(lines)


if __name__ == '__main__':
    main()
