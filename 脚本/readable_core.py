"""把反混淆后的核心类 AS3 里的混淆名换成真名，方便阅读。

用法：python 脚本/readable_core.py <pcode scripts 目录> <core.as> [输出 as]
换的东西：
  1. 方法/getter 的真名：pcode 里 `trait method QName(..,"混淆名") ... name "真名"`
     - `§8G§.§7d§(…)` → `Game.hasUpgrade(…)`（8G 是游戏状态类，&c 是统计/判定辅助类，#!! 是核心计算类）
     - 升级类的 `.§&s§()` 这种成员，按全局唯一的真名换（&s = getBuildingMultiplier 等）
  2. 升级/建筑/法术等类名：构造函数里的英文名（字段 1i）→ `U<英文名>`
字段（slot）在字节码里没有真名，保持混淆名，另在 资料/ 里记推断含义。
"""
import glob
import json
import os
import re
import sys
import urllib.parse

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from game_effects import ctor_props  # noqa: E402

CLS_ALIAS = {'§8G§': 'Game', '§&c§': 'Stats', '§#!!§': 'Core'}


def unesc(s):
    return s.replace("\\'", "'").replace('\\"', '"')


def main(pdir, core, dst, own=None):
    cls_name, members, glob_members, kinds = {}, {}, {}, {}
    for f in glob.glob(os.path.join(pdir, '**', '*.pcode'), recursive=True):
        t = open(f, encoding='utf-8', errors='replace').read()
        m = re.search(r'public class (.+?)(?: extends .*)?\s*$', t, re.M)
        if not m:
            continue
        cls = m.group(1)
        pr = ctor_props(t)
        if '1i' in pr:
            cls_name.setdefault(cls, []).append(pr['1i'])
        for tm in re.finditer(r'trait (method|getter|setter) QName\(PackageNamespace\(""\),"(.*?)"\)\s*(?:flag \w+\s*)*dispid \d+\s*method\s*name "([^"]*)"', t):
            mem, real = unesc(tm.group(2)), tm.group(3)
            kinds[(cls, mem)] = tm.group(1)
            members[(cls, mem)] = real
            glob_members.setdefault(mem, set()).add(real)
    src = open(core, encoding='utf-8').read()
    if own:  # 本类自己的成员：方法按调用/声明换，getter 全换
        for (c, mem), real in members.items():
            if c != own:
                continue
            tok = '§' + mem + '§'
            if kinds[(c, mem)] == 'method':
                src = re.sub(r'(?<![.\w])' + re.escape(tok) + r'(?=\()', real, src)
                src = src.replace('this.' + tok, 'this.' + real)
            else:
                src = src.replace(tok, real)
    n_mem = n_cls = 0

    def sub_member(m):
        nonlocal n_mem
        c, mem = '§' + m.group(1) + '§', m.group(2)
        real = members.get((c, mem))
        if real is None:
            g = glob_members.get(mem)
            real = next(iter(g)) if g and len(g) == 1 else None
        if real is None:
            return m.group(0)
        n_mem += 1
        return '§' + m.group(1) + '§.' + real

    # 先换 类.成员
    src = re.sub(r'§([^§]+)§\.§([^§]+)§', sub_member, src)

    def sub_cls(m):
        nonlocal n_cls
        c = m.group(0)
        if c in CLS_ALIAS:
            return CLS_ALIAS[c]
        names = cls_name.get(c)
        if names and len(set(names)) == 1:
            n_cls += 1
            return 'U<' + names[0] + '>'
        return c

    src = re.sub(r'§[^§]+§', sub_cls, src)
    with open(dst, 'w', encoding='utf-8') as f:
        f.write(src)
    print('成员换名', n_mem, '类换名', n_cls, '→', dst)


if __name__ == '__main__':
    root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    main(sys.argv[1], sys.argv[2], sys.argv[3] if len(sys.argv) > 3 else os.path.join(root, 'build', 'game-core.readable.as'),
         sys.argv[4] if len(sys.argv) > 4 else None)
