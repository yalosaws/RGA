"""加成目录：每个阵营升级、血统、传承、条约 / 联盟、世系天赋、研究的效果公式和起作用的位置。

python -X utf8 scripts/rg_catalog.py [--md 输出]

给人读、给配 build 的推理用：每一项列出
- 中文名、英文名、阵营、价格（升级的 §>=§）；
- 自己类里的数值函数，翻成中文公式（复用 research_formulas 的翻译）；
- 在游戏代码里起作用的地方：哪个函数、所在的条件、作用语句（界面文字不列）。
"""
import argparse
from pathlib import Path
import re
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(Path(__file__).resolve().parent))
import research_formulas as RF   # noqa: E402
import rg_dominance as D         # noqa: E402

FACTIONS = ['Fairy', 'Elven', 'Angel', 'Goblin', 'Undead', 'Demon', 'Titan', 'Druid', 'Faceless', 'Dwarven', 'Drow',
            'Mercenary', 'Dragon']
ZH_FACTION = dict(zip(FACTIONS, ['仙灵', '精灵', '天使', '地精', '亡灵', '恶魔', '泰坦', '德鲁伊', '无面者', '矮人', '卓尔', '佣兵', '龙族']))
KINDS = [(r'^(%s)Upgrade(\d+)$', '升级'), (r'^(%s)Bloodline$', '血统'), (r'^Advanced(%s|Angelic|Demonic)Heritage$', '高级传承'),
         (r'^(%s)Heritage$', '传承'), (r'^(%s)Faction0(\d)$', '条约 / 联盟'), (r'^(%s)Exchange$', '皇家贸易令'),
         (r'^(%s)Lineage$', '世系'), (r'^(%s)Perk(\d)$', '世系天赋'), (r'^(%s)Unique\d?$', '独特建筑')]


def kind_of(cls):
    alt = '|'.join(FACTIONS)
    for pat, k in KINDS:
        m = re.match(pat % alt if '%s' in pat else pat, cls)
        if m:
            f = m.group(1)
            f = {'Angelic': 'Angel', 'Demonic': 'Demon'}.get(f, f)
            return f, k
    return None, None


def own_formulas(cls):
    """类里的数值函数 → [(函数名, 中文公式)]。"""
    text = D.FILES.get(cls, '')
    out = []
    RF.CTX['cls'] = cls
    for name, args, ret, body in RF.FN.findall(text):
        if name in RF.SKIP or name == cls or ret not in ('Number', 'int', 'uint'):
            continue
        m = re.fullmatch(r'return ([^;]*);', body.strip(), re.S)
        if not m:
            out.append((name, '（多行代码）'))
            continue
        try:
            RF.CTX['params'] = {}
            expr, _ = RF.render(RF.Parser(m[1]).parse())
            out.append((name, re.sub(r'<[^>]+>', '', expr)))
        except Exception as e:      # noqa: BLE001  翻译不了的保留原文
            out.append((name, m[1].strip()[:160]))
    consts = re.findall(r'public static const (§[^§]*§|\w+):Number = (-?[\d.e+]+);', text)
    return out, consts


def header_chain(lines, i):
    """第 i 行往上的 if / else 条件链（缩进更浅的那些），最多 3 层。"""
    out, ind = [], len(lines[i]) - len(lines[i].lstrip())
    j = i - 1
    while j >= 0 and len(out) < 3:
        s = lines[j]
        k = len(s) - len(s.lstrip())
        if s.strip() and k < ind and re.match(r'\s*(else )?(if|for|while|switch|else)\b', s):
            out.append(s.strip())
            ind = k
        if re.match(r'      (?:override )?(?:public|private|protected)', s):
            break
        j -= 1
    return list(reversed(out))


def usages(classes):
    pat = re.compile(r'\b(%s)\.' % '|'.join(sorted(classes, key=len, reverse=True)))
    out = {c: [] for c in classes}
    for fcls, text in D.FILES.items():
        if not pat.search(text):
            continue
        lines, funcs, owner = D.functions_of(text)
        for i, line in enumerate(lines):
            for m in set(pat.findall(line)):
                if m == fcls:
                    continue
                fn = owner[i]
                if fn in D.UI_FUNCS or fn is None:
                    continue
                s = line.strip()
                # if 头里只写了「拥有它」的，作用在下一行块里，合并显示
                if re.match(r'(else )?if\(', s) and i + 2 < len(lines) and lines[i + 1].strip() == '{':
                    body = lines[i + 2].strip()
                    s = s + ' { ' + body + (' …' if lines[i + 3].strip() != '}' else '') + ' }'
                elif lines[i - 1].strip() == '{' and re.match(r'(else )?if\(', lines[i - 2].strip()) and m in lines[i - 2]:
                    continue
                out[m].append(('%s.%s' % (fcls, fn), header_chain(lines, i), s))
    return out


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--md', default=str(ROOT / 'build/加成目录.md'))
    args = ap.parse_args()
    items = {}
    for cls in D.FILES:
        f, k = kind_of(cls)
        if f:
            items[cls] = (f, k)
    use = usages(list(items))
    lines = ['# 加成目录（客户端 4.3.14）', '', '由 scripts/rg_catalog.py 生成。作用位置里 `_locN_` 是局部变量，`param1` 一般是建筑。', '']
    for f in FACTIONS:
        lines += ['## %s %s' % (ZH_FACTION[f], f), '']
        rows = sorted((c for c, v in items.items() if v[0] == f),
                      key=lambda c: ([k for _, k in KINDS].index(items[c][1]), int(re.sub(r'\D', '', c) or 0)))
        for c in rows:
            text = D.FILES[c]
            en = re.search(r'§1i§ = (?:_\()?"((?:[^"\\]|\\.)*)"', text)
            en = en.group(1) if en else c
            price = re.search(r'§>=§ = ([\d.e+]+);', text)
            lines.append('### %s %s（%s，%s）%s' % (items[c][1], RF.ZH.get(en, en), en, c,
                                                  '，价格 %s' % price.group(1) if price else ''))
            desc = re.search(r'getDescription\(\) : String\s*\{\s*return _\("((?:[^"\\]|\\.)*)"', text)
            if desc:
                lines.append('- 描述：' + RF.ZH.get(desc.group(1), desc.group(1)).replace('\n', ' '))
            vis = re.search(r'override public function get visible\(\) : Boolean\s*\{\s*return (.*?);\s*\}', text, re.S)
            if vis:
                lines.append('- 出现条件：`%s`' % re.sub(r'\s+', ' ', vis.group(1))[:200])
            fs, consts = own_formulas(c)
            for n, e in fs:
                lines.append('- %s = %s' % (n, e))
            for n, v in consts:
                lines.append('- 常量 %s = %s' % (n, v))
            for where, chain, s in use[c][:12]:
                ctx = ' / '.join(chain)
                lines.append('- 作用 %s：%s%s' % (where, ('〔%s〕 ' % ctx[:160]) if ctx else '', s[:220]))
            if len(use[c]) > 12:
                lines.append('- ……另有 %d 处' % (len(use[c]) - 12))
            lines.append('')
    Path(args.md).write_text('\n'.join(lines), encoding='utf-8')
    print('写出', args.md, len(items), '项')


if __name__ == '__main__':
    main()
