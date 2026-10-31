"""整分支交换研究组合，跨过需要同时替换多项的局部最优；每个新方案用精确整局评估。"""
import argparse
import itertools
import json
from pathlib import Path
import sys
import time

import rg_goal
import rg_optimize as O

ROOT = Path(__file__).resolve().parents[1]


def research_groups(plan):
    groups = {}
    for code in plan.get('research', []):
        groups.setdefault(code[0], []).append(code)
    return groups


def candidates(recipient, donors, width=1):
    """同阵营不同血统/显赫的整套方案和单个研究分支。实际合法性仍由游戏购买逻辑裁定。"""
    plan = recipient['plan']
    seen = {O.plan_key(plan)}
    for donor in donors:
        other = donor['plan']
        if (other['alignment'], other['faction']) != (plan['alignment'], plan['faction']):
            continue
        own = research_groups(plan)
        theirs = research_groups(other)
        variants = [('全部研究', other.get('research', []))]
        for branch in sorted(set(own) | set(theirs)):
            rs = [c for c in plan.get('research', []) if c[0] != branch] + theirs.get(branch, [])
            variants.append((branch, rs))
        if width >= 2:
            for pair in itertools.combinations(sorted(set(own) | set(theirs)), 2):
                rs = [c for c in plan.get('research', []) if c[0] not in pair]
                rs += [c for b in pair for c in theirs.get(b, [])]
                variants.append(('+'.join(pair), rs))
        for name, rs in variants:
            p = dict(plan, research=list(rs))
            key = O.plan_key(p)
            if key not in seen:
                seen.add(key)
                yield dict(plan=p, branch=name, donor={k: other.get(k) for k in ('bloodline', 'prestige')})


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--input', type=Path, required=True)
    ap.add_argument('--output', type=Path, required=True)
    ap.add_argument('--save', type=Path, default=ROOT / 'build/mechanics-audit/input.sol')
    ap.add_argument('--top', type=int, default=3)
    ap.add_argument('--rounds', type=int, default=3)
    ap.add_argument('--width', type=int, choices=(1, 2), default=1)
    ap.add_argument('--workers', type=int, default=6)
    args = ap.parse_args()
    raw = json.loads(args.input.read_text(encoding='utf-8'))
    meta = raw['metadata']
    rows = [r for r in raw['best'] if r.get('ok')]
    goal, T, target = meta['goal'], meta['at'], meta.get('target')
    import rg_sim
    rg_sim.MEMBER_NAMES = ROOT / 'build/calculation/member-names.json'
    command = [sys.executable, '-X', 'utf8', str(ROOT / 'scripts/benchmark_build_search.py'), '--worker']
    init = dict(game_py=str(ROOT / 'build/calculation/game.py'), save_path=str(args.save.resolve()),
                research_json=str(ROOT / 'build/calculation/research.json'), goal=goal,
                graph=str(ROOT / 'docs/依赖图（客户端4.3.14）.json'))
    cache = {O.plan_key(r['plan']): r for r in rows}
    pool = rg_goal.Pool(command, args.workers, init)
    all_results, history, runs = [], [], 0
    started = time.perf_counter()
    try:
        for rnd in range(args.rounds):
            starts = sorted(rows, key=O.rank_of)[:args.top]
            todo = {}
            for r in starts:
                for c in candidates(r, rows, width=args.width):
                    key = O.plan_key(c['plan'])
                    if key not in cache:
                        todo.setdefault(key, c)
            todo = list(todo.items())
            print(json.dumps(dict(round=rnd+1, candidates=len(todo), best=starts[0]['value']), ensure_ascii=False), flush=True)
            if not todo:
                break
            for i, (_, c) in enumerate(todo):
                pool.submit(i, dict(op='eval', plan=c['plan'], goal=goal, T=T, target=target))
            improvements = []
            for _ in todo:
                tag, reply = pool.results.get()
                key, context = todo[tag]
                if not reply.get('ok'):
                    raise RuntimeError(str(reply))
                r = reply['result']
                cache[key] = r
                runs += r.get('runs', 0)
                if r.get('ok'):
                    cache.setdefault(O.plan_key(r['plan']), r)
                    all_results.append(dict(r, mutation=context['branch'], donor=context['donor']))
                    if O.improves(r, starts[-1]):
                        improvements.append(r)
            old_best = min(rows, key=O.rank_of)
            # 保留每个结构的最佳值，下一轮能复用所有结构已有的研究组合。
            by_struct = {O.struct_key(r['plan']): r for r in rows}
            for r in improvements:
                key = O.struct_key(r['plan'])
                if key not in by_struct or O.improves(r, by_struct[key]):
                    by_struct[key] = r
            rows = list(by_struct.values())
            best = min(rows, key=O.rank_of)
            history.append(dict(round=rnd+1, tested=len(todo), old=old_best['value'], best=best['value'],
                                improved=O.improves(best, old_best)))
            print(json.dumps(history[-1]), flush=True)
            if not improvements:
                break
    finally:
        pool.close()
    elapsed = time.perf_counter() - started
    result = dict(metadata=meta, elapsed=elapsed, runs=runs, history=history, best=sorted(rows, key=O.rank_of),
                  candidates=all_results)
    args.output.write_text(json.dumps(result, ensure_ascii=False, indent=1, allow_nan=False), encoding='utf-8')
    print(json.dumps(dict(elapsed=elapsed, runs=runs, best=result['best'][0]['value']), ensure_ascii=False), flush=True)


if __name__ == '__main__':
    main()
