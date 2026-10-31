"""固定代码、存档和配置比较 build 搜索/整局计算；不写游戏存档、不启动窗口。"""
import argparse
import hashlib
import json
import os
from pathlib import Path
import shutil
import sys
import time

ROOT = Path(__file__).resolve().parents[1]
HERE = Path(__file__).resolve().parent
OUT = ROOT / 'build/benchmarks/build-search'


def digest(path):
    return hashlib.sha256(path.read_bytes()).hexdigest()


def freeze(name):
    dest = OUT / 'variants' / name
    if dest.exists():
        raise ValueError('已有固定版本，拒绝覆盖：' + str(dest))
    dest.mkdir(parents=True)
    for path in HERE.glob('*.py'):
        shutil.copyfile(path, dest / path.name)
    shutil.copyfile(ROOT / 'docs/依赖图（客户端4.3.14）.json', dest / 'depgraph.json')
    model = ROOT / 'build/calculation/build-model.json'
    if model.exists():
        shutil.copyfile(model, dest / model.name)
    for path in (ROOT / 'build/calculation').glob('rgcore*.pyd'):
        shutil.copyfile(path, dest / path.name)
    (dest / 'manifest.json').write_text(json.dumps({p.name: digest(p) for p in dest.iterdir() if p.is_file()}, indent=2), encoding='utf-8')
    print(str(dest), flush=True)


def runtime(module_dir, algorithm):
    if module_dir:
        sys.path.insert(0, str(module_dir))
        os.environ['RGA_CORE_DIR'] = str(module_dir)
    import rg_sim
    rg_sim.MEMBER_NAMES = ROOT / 'build/calculation/member-names.json'
    import rg_goal
    import importlib
    return rg_goal, importlib.import_module('rg_search' if algorithm == 'population' else 'rg_optimize')


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--freeze')
    ap.add_argument('--module-dir', type=Path)
    ap.add_argument('--worker', action='store_true')
    ap.add_argument('--algorithm', choices=('legacy', 'population'), default='legacy')
    ap.add_argument('--budget', type=float, default=60)
    ap.add_argument('--seed', type=int, default=0)
    ap.add_argument('--task', choices=('search', 'corpus', 'profile'), default='search')
    ap.add_argument('--save', type=Path, default=ROOT / 'build/mechanics-audit/input.sol')
    ap.add_argument('--goal', default='mana_regen')
    ap.add_argument('--at', type=float, default=60)
    ap.add_argument('--target', type=float)
    ap.add_argument('--workers', type=int, default=6)
    ap.add_argument('--refine-budget', type=float, default=60)
    ap.add_argument('--sweep-budget', type=float, default=0)
    ap.add_argument('--plans', type=Path)
    ap.add_argument('--count', type=int, default=24)
    ap.add_argument('--repeat', type=int, default=3)
    ap.add_argument('--output', type=Path)
    args = ap.parse_args()
    if args.freeze:
        freeze(args.freeze)
        return
    goal, opt = runtime(args.module_dir, args.algorithm)
    if args.worker:
        opt.worker_main()
        return
    if not args.output:
        ap.error('需要 --output')
    args.output.parent.mkdir(parents=True, exist_ok=True)
    initial_hash = digest(args.save)
    initial_stamp = args.save.stat().st_mtime
    metadata = dict(save_sha256=initial_hash, timestamp=initial_stamp, goal=args.goal, at=args.at, target=args.target,
                    module_dir=str(args.module_dir or HERE), workers=args.workers, algorithm=args.algorithm, seed=args.seed,
                    hashes={p.name: digest(p) for name in ('rg_optimize.py','rg_search.py','rg_mechanisms.py','rg_goal.py',
                                                          'build-model.json')
                            if (p := (args.module_dir or HERE) / name).exists()})
    graph = (args.module_dir / 'depgraph.json') if args.module_dir else ROOT / 'docs/依赖图（客户端4.3.14）.json'
    if args.task == 'search':
        command = [sys.executable, '-X', 'utf8', str(Path(__file__).resolve()), '--worker', '--algorithm', args.algorithm]
        if args.module_dir:
            command += ['--module-dir', str(args.module_dir.resolve())]
        init = dict(game_py=str(ROOT / 'build/calculation/game.py'), save_path=str(args.save.resolve()),
                    research_json=str(ROOT / 'build/calculation/research.json'), graph=str(graph.resolve()))
        model = ((args.module_dir / 'build-model.json') if args.module_dir else ROOT / 'build/calculation/build-model.json')
        init['model'] = str(model.resolve())
        started = time.perf_counter()
        if args.algorithm == 'population':
            search = opt.Search(command, init, goal=args.goal, T=args.at, target=args.target, workers=args.workers,
                                budget=args.budget, seed=args.seed)
        else:
            search = opt.Optimize(command, init, goal=args.goal, T=args.at, target=args.target, workers=args.workers,
                                  refine_budget=args.refine_budget, sweep_budget=args.sweep_budget)
        last = -100
        while not search.finished:
            now = time.perf_counter() - started
            if now - last >= 10:
                last = now
                top = search.best()
                print(json.dumps(dict(seconds=round(now, 1), stage=search.stage, done=search.done_n,
                                      total=search.total_n, runs=search.runs, best=top[0]['value'] if top else None)), flush=True)
            time.sleep(0.2)
        elapsed = time.perf_counter() - started
        result = dict(metadata=metadata, elapsed=elapsed, refine_budget=args.refine_budget, sweep_budget=args.sweep_budget,
                      budget=args.budget if args.algorithm == 'population' else None,
                      runs=search.runs, error=search.error, best=search.best(), results=search.results, log=search.log_lines)
        if search.error:
            raise RuntimeError(search.error)
        print(json.dumps(dict(elapsed=elapsed, runs=search.runs, value=result['best'][0]['value'],
                              plan=result['best'][0]['plan']), ensure_ascii=False), flush=True)
    else:
        runner = goal.Runner(ROOT / 'build/calculation/game.py', save_path=args.save,
                             research_json=ROOT / 'build/calculation/research.json')
        if args.plans:
            data = json.loads(args.plans.read_text(encoding='utf-8'))
            rows = data.get('best', data.get('results', []))
            plans, keys = [], set()
            for row in rows:
                if not row.get('ok'):
                    continue
                key = opt.plan_key(row['plan'])
                if key not in keys:
                    plans.append(row['plan'])
                    keys.add(key)
                if len(plans) >= args.count:
                    break
        else:
            plans = [dict(runner.current, merc=[])]
        # 避免把首次代码/内存触碰计入每局加速，另保留整体搜索的冷启动基准。
        for plan in plans:
            runner.run(plan, args.goal, args.target if args.target is not None else float('inf'), args.at)
        if args.task == 'profile':
            import rg_native
            rg_native.rgcore.fnprof()
        samples = []
        for rep in range(args.repeat):
            for i, plan in enumerate(plans):
                started = time.perf_counter()
                out = runner.run(plan, args.goal, args.target if args.target is not None else float('inf'), args.at)
                samples.append(dict(repeat=rep, index=i, seconds=time.perf_counter()-started, result=out))
        result = dict(metadata=metadata, plans=plans, samples=samples)
        if args.task == 'profile':
            result['profile'] = rg_native.rgcore.fnprof()
        print(json.dumps(dict(cases=len(samples), seconds=sum(x['seconds'] for x in samples)), ensure_ascii=False), flush=True)
    assert initial_hash == digest(args.save), '固定存档发生改变'
    assert initial_stamp == args.save.stat().st_mtime, '固定存档时间发生改变'
    args.output.write_text(json.dumps(result, ensure_ascii=False, indent=1, allow_nan=False), encoding='utf-8')


if __name__ == '__main__':
    main()
