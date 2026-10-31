"""比较两次导出的 AS3 与原始 pcode，区分客户端改动和反编译差异。"""
import argparse
import hashlib
import json
from pathlib import Path
import re
import sys

sys.path.insert(0, str(Path(__file__).resolve().parent))
from pcode_sym import methods_of


def compare(old_as, new_as, old_pc, new_pc):
    changes = []
    matched = 0
    for target in sorted(Path(new_as).rglob('*.as')):
        rel = target.relative_to(new_as)
        original = Path(old_as) / rel
        if not original.exists():
            continue
        matched += 1
        before, after = original.read_text(encoding='utf-8'), target.read_text(encoding='utf-8')
        if before == after:
            continue
        row = dict(source=str(rel))
        a, b = Path(old_pc) / rel.with_suffix('.pcode'), Path(new_pc) / rel.with_suffix('.pcode')
        if a.exists() and b.exists():
            ma, mb = methods_of(a.read_text(encoding='utf-8')), methods_of(b.read_text(encoding='utf-8'))
            row['changed_bytecode_methods'] = [name for name in sorted(set(ma) | set(mb))
                if [(op, arg) for _, op, arg in ma.get(name, {}).get('code', [])]
                != [(op, arg) for _, op, arg in mb.get(name, {}).get('code', [])]]
            row['classification'] = 'bytecode_changed' if row['changed_bytecode_methods'] else 'decompiler_output_only'
        else:
            row['classification'] = 'missing_pcode'
        changes.append(row)
    return dict(matched_files=matched, changed_as_files=len(changes), changes=changes,
                note='比较方法体指令；未据此证明常量池、资源、字段初值或整个 SWF 完全相同。')


if __name__ == '__main__':
    ap = argparse.ArgumentParser(description=__doc__)
    for name in ('old_as', 'new_as', 'old_pc', 'new_pc', 'output'):
        ap.add_argument(name)
    args = ap.parse_args()
    result = compare(args.old_as, args.new_as, args.old_pc, args.new_pc)
    Path(args.output).write_text(json.dumps(result, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(result, ensure_ascii=False))
