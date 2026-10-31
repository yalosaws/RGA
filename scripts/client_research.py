"""从游戏客户端字节码导出研究的存档 ID、代号、英文名，存成 docs/客户端研究对照.json。

用法：python scripts/client_research.py <ffdec 导出的 pcode 研究目录> [输出 json]
（目录是 ffdec 按 pcode 导出 RealmGrinderDesktop.swf 后的 scripts/§;!J§，类名混淆过，但构造函数里的字段可读。）

每个研究类的构造函数依次给这些字段赋值：
  6!Z  ID 前段      "!U  分支内格子序号    !G  分支（0 S、1 C、2 D、3 E、4 A、5 W、6 F）
  %w   代号数字      1i   英文名
存档 ID = 100000 + 前段 × 100 + 格子序号（例：Transubstantiation 439、15 → 143915，代号 D270）。
"""
import glob
import json
import os
import re
import sys

BRANCH = 'SCDEAWF'


def parse(d):
    out = []
    for f in glob.glob(os.path.join(d, '*.pcode')):
        t = open(f, encoding='utf-8', errors='replace').read()
        m = re.search(r'method\s+name "([A-Za-z]+)"\s+returns null(.*?)end ; code', t, re.S)
        if not m:
            continue
        last, props = None, {}
        for line in m.group(2).splitlines():
            line = line.strip()
            p = re.match(r'push(?:short|byte|int) (-?\d+)', line)
            if p:
                last = int(p.group(1))
                continue
            p = re.match(r'pushstring "(.*)"', line)
            if p:
                last = p.group(1).replace("\\'", "'")
                continue
            p = re.match(r'setproperty QName\(PackageNamespace\(""\),"(.*)"\)', line)
            if p and last is not None:
                props[p.group(1).replace('\\"', '"')] = last
                last = None
        if all(k in props for k in ('6!Z', '"!U', '!G', '%w', '1i')):
            out.append({'id': 100000 + props['6!Z'] * 100 + props['"!U'],
                        'code': BRANCH[props['!G']] + str(props['%w']),
                        'name': props['1i'], 'class': m.group(1)})
    return sorted(out, key=lambda r: r['id'])


if __name__ == '__main__':
    root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    dst = sys.argv[2] if len(sys.argv) > 2 else os.path.join(root, 'docs', '客户端研究对照.json')
    rows = parse(sys.argv[1])
    with open(dst, 'w', encoding='utf-8') as f:
        f.write('[\n' + ',\n'.join(json.dumps(r, ensure_ascii=False) for r in rows) + '\n]\n')
    print(len(rows), '项 →', dst)
