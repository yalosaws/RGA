"""列出客户端里的法术类（有 onEffect 方法的类）：名称、立场、阵营、费用基数、时长、描述、加成公式。

用法：python scripts/spell_list.py <pcode scripts 目录> <game-effects.json> <输出 tsv>
字段（构造函数常量）：6!Z id，1i 英文名，,!Y 立场，-!^ 阵营，>= 费用基数，+ 持续时间（tick，30 = 1 秒）。
"""
import glob
import json
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from game_effects import ctor_props  # noqa: E402


def main(pdir, effects, dst):
    eff = json.load(open(effects, encoding='utf-8'))
    rows = ['名称\t立场\t阵营编号\t费用基数\t时长(tick)\t描述\t加成公式']
    for f in sorted(glob.glob(os.path.join(pdir, '**', '*.pcode'), recursive=True)):
        t = open(f, encoding='utf-8', errors='replace').read()
        if 'name "onEffect"' not in t:
            continue
        p = ctor_props(t)
        if '1i' not in p:
            continue
        rel = os.path.relpath(f, pdir)[:-6]
        e = eff.get(rel, {})
        desc = re.findall(r'pushstring "(.*?)"\s*\n\s*callproperty QName\(PackageNamespace\(""\),"_"\)', t)
        forms = '; '.join(k + '=' + v[:70] for k, v in e.get('effects', {}).items())
        rows.append('\t'.join([p['1i'], str(p.get(',!Y', '')), str(p.get('-!^', '')), str(p.get('>=', '')),
                               str(p.get('+', '')), re.sub(r'\s+', ' ', ' / '.join(desc[1:3]))[:200], forms[:300]]))
    with open(dst, 'w', encoding='utf-8') as fo:
        fo.write('\n'.join(rows) + '\n')
    print(len(rows) - 1, '个法术 →', dst)


if __name__ == '__main__':
    main(sys.argv[1], sys.argv[2], sys.argv[3])
