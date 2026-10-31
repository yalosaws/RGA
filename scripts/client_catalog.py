"""将当前客户端的计算/判定方法及完整 AS3 方法体整理成可查询索引。

不截断公式，不把单个存档下通过的差分检查称为所有条件已验证。
"""
import argparse
from collections import Counter
import json
from pathlib import Path
import sys

sys.path.insert(0, str(Path(__file__).resolve().parent))
from game_effects import ctor_props
from spell_effects import body


def main(pcode, source, audit_dir, output):
    folder = Path(audit_dir)
    methods = json.loads((folder / 'client-methods.json').read_text(encoding='utf-8'))
    audit = json.loads((folder / 'final.json').read_text(encoding='utf-8'))
    checked = Counter(row['method'] for row in audit['cases'] if row['status'] == 'exact')
    sources, props = {}, {}
    entries = []
    for method in methods:
        rel = method['source']
        if rel not in sources:
            sources[rel] = (Path(source) / Path(rel).with_suffix('.as')).read_text(encoding='utf-8')
            props[rel] = ctor_props((Path(pcode) / rel).read_text(encoding='utf-8'))
        entry = dict(method)
        entry['name'] = props[rel].get('1i')
        entry['sid'] = props[rel].get('6!Z')
        if all(k in props[rel] for k in ('6!Z', '"!U', '!G', '%w')):
            entry['sid'] = 100000 + props[rel]['6!Z'] * 100 + props[rel]['"!U']
            entry['code'] = 'SCDEAWF'[props[rel]['!G']] + str(props[rel]['%w'])
        entry['body'] = body(sources[rel], method['member'], method['kind'])
        entry['verified_cases_in_snapshot'] = checked[method['cls'] + '.' + method['real']]
        entries.append(entry)
    result = dict(note='方法原文完整保留；字段名和部分局部名字仍混淆。verified_cases_in_snapshot 仅表示这份存档和参数样本下的字节码差分检查。',
                  module_sha256=audit['module_sha256'], save_sha256=audit['save_sha256'],
                  entries=entries)
    Path(output).write_text(json.dumps(result, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(dict(methods=len(entries), classes=len({e['cls'] for e in entries}),
                          bodies=sum(bool(e['body']) for e in entries)), ensure_ascii=False))


if __name__ == '__main__':
    ap = argparse.ArgumentParser(description=__doc__)
    for key in ('pcode', 'source', 'audit_dir', 'output'):
        ap.add_argument(key)
    opts = ap.parse_args()
    main(opts.pcode, opts.source, opts.audit_dir, opts.output)
