"""用冻结的旧计算代码复跑对照结果，核对数值、整条曲线、购买记录和固定存档。"""
import argparse
import hashlib
import json
import os
from pathlib import Path
import sys

ROOT = Path(__file__).resolve().parents[1]


def sha(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('results', nargs='+', type=Path)
    ap.add_argument('--module-dir', type=Path, default=ROOT / 'build/benchmarks/build-search/variants/before')
    ap.add_argument('--save', type=Path, default=ROOT / 'build/mechanics-audit/input.sol')
    ap.add_argument('--top', type=int, default=5)
    ap.add_argument('--output', type=Path, required=True)
    args = ap.parse_args()
    os.environ.pop('RGA_COARSE', None)
    os.environ['RGA_NATIVE'] = '1'
    os.environ['RGA_CORE_DIR'] = str(args.module_dir.resolve())
    sys.path.insert(0, str(args.module_dir.resolve()))
    import rg_sim
    rg_sim.MEMBER_NAMES = ROOT / 'build/calculation/member-names.json'
    import rg_goal
    initial = sha(args.save)
    runner = rg_goal.Runner(ROOT / 'build/calculation/game.py', save_path=args.save,
                             research_json=ROOT / 'build/calculation/research.json')
    checks = []
    for path in args.results:
        data = json.loads(path.read_text(encoding='utf-8'))
        m = data['metadata']
        assert m['save_sha256'] == initial
        for row in data['best'][:args.top]:
            out = runner.run(row['plan'], m['goal'], m.get('target') if m.get('target') is not None else float('inf'), m['at'])
            fields = ('value', 'time', 'reached', 'curve', 'picks', 'lineage', 'merc_times', 'skipped', 'skipped_merc', 'research_ready')
            differences = {}
            for key in fields:
                a, b = out.get(key), row.get(key)
                # JSON 把 tuple 转成 list，统一为序列化表示；数值仍要求精确相等。
                if json.loads(json.dumps(a)) != json.loads(json.dumps(b)):
                    differences[key] = dict(expected=b, actual=a)
            check = dict(file=str(path), goal=m['goal'], T=m['at'], value=out['value'], ok=out['ok'],
                         all_research_bought=not out.get('skipped'), differences=differences)
            checks.append(check)
            assert out['ok'] and not differences, check
    assert sha(args.save) == initial
    result = dict(save_sha256=initial, oracle=str(args.module_dir.resolve()), checked=len(checks),
                  all_exact=True, input_unchanged=True, checks=checks)
    args.output.write_text(json.dumps(result, ensure_ascii=False, indent=1, allow_nan=False), encoding='utf-8')
    print(json.dumps(dict(checked=len(checks), all_exact=True, input_unchanged=True)), flush=True)


if __name__ == '__main__':
    main()
