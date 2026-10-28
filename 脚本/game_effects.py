"""从游戏客户端 pcode 抽出每个升级/研究/法术/阵营类的加成公式，存成 JSON。

用法：python 脚本/game_effects.py <ffdec 导出的 pcode scripts 目录> [输出 json]
每个类输出：构造函数里赋的常量（id/代号/英文名等）、描述原文、各加成方法的公式（pcode_sym 符号执行，折掉假分支）。
类名、字段名是混淆的，方法真名在 pcode 的 `name "..."` 里。公式里的 `&c.xxx` 之类是混淆名，映射见 game_names.json（待整理）。
"""
import glob
import json
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pcode_sym import methods_of, run, fmt  # noqa: E402

EFF = re.compile(r'^get\w*(Multiplier|Bonus)$|^getNum\w*$|^getTierRequirement$')
BRANCH = 'SCDEAWF'


def unesc(s):
    return s.replace("\\'", "'").replace('\\"', '"').replace('\\\\', '\\')


def ctor_props(t):
    cm = re.search(r'method\s+name "([A-Za-z0-9_$]+)"\s+returns null(.*?)end ; code', t, re.S)
    props, last = {}, None
    if not cm:
        return props
    for line in cm.group(2).splitlines():
        line = line.strip()
        p = re.match(r'push(?:short|byte|int|double) (-?[\d.eE+-]+)', line)
        if p:
            v = p.group(1)
            last = float(v) if ('.' in v or 'e' in v.lower()) else int(v)
            continue
        p = re.match(r'pushstring "(.*)"', line)
        if p:
            last = p.group(1).replace("\\'", "'")
            continue
        p = re.match(r'setproperty QName\(PackageNamespace\(""\),"(.*)"\)', line)
        if p and last is not None:
            props[unesc(p.group(1))] = last
            last = None
    return props


def main(pdir, dst):
    res = {}
    for pf in sorted(glob.glob(os.path.join(pdir, '**', '*.pcode'), recursive=True)):
        t = open(pf, encoding='utf-8', errors='replace').read()
        if 'getDescription' not in t and 'Multiplier' not in t:
            continue
        m = re.search(r'public class (.+?) extends (.+?)\s*$', t, re.M)
        if not m:
            continue
        ms = methods_of(t)
        eff = {}
        for n, mm in ms.items():
            if EFF.match(n) or n in ('getSpecificBonus',):
                eff[n] = fmt(run(mm))
        if not eff:
            continue
        props = ctor_props(t)
        desc = re.findall(r'pushstring "(.*?)"\s*\n\s*callproperty QName\(PackageNamespace\(""\),"_"\)', t)
        rec = {'extends': m.group(2), 'props': props, 'text': [d.replace("\\'", "'") for d in desc], 'effects': eff}
        if all(k in props for k in ('6!Z', '"!U', '!G', '%w', '1i')):
            rec['rid'] = 100000 + props['6!Z'] * 100 + props['"!U']
            rec['code'] = BRANCH[props['!G']] + str(props['%w'])
        res[os.path.relpath(pf, pdir)[:-6]] = rec
    with open(dst, 'w', encoding='utf-8') as f:
        json.dump(res, f, ensure_ascii=False, indent=1)
    bad = sum(1 for r in res.values() for v in r['effects'].values() if '<' in v and ('未处理' in v or '循环' in v or '落空' in v or 'for-in' in v))
    tot = sum(len(r['effects']) for r in res.values())
    print(len(res), '个类', tot, '个加成方法，其中没折干净的', bad, '→', dst)


if __name__ == '__main__':
    root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    main(sys.argv[1], sys.argv[2] if len(sys.argv) > 2 else os.path.join(root, 'build', 'game-effects.json'))
