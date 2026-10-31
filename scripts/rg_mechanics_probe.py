"""固定输入验证静态估值的状态副作用；只读原存档，不启动界面，不改现有求解器。"""
import argparse
import hashlib
import json
from pathlib import Path
import time

import rg_goal
import rg_optimize as O
import rg_sim

ROOT = Path(__file__).resolve().parents[1]


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--save', type=Path, default=rg_sim.SOL)
    ap.add_argument('--output', type=Path, default=ROOT / 'build/mechanics-audit')
    args = ap.parse_args()
    args.output.mkdir(parents=True, exist_ok=True)
    raw = args.save.read_bytes()
    stamp = args.save.stat().st_mtime
    fixed = args.output / 'input.sol'
    if args.save.resolve() != fixed.resolve():
        fixed.write_bytes(raw)
        import os
        os.utime(fixed, (stamp, stamp))
    r = rg_goal.Runner(ROOT / 'build/calculation/game.py', save_path=fixed, research_json=ROOT / 'build/calculation/research.json')
    graph = O.Graph()
    pl = O.Planner(r, 'max_mana', graph)
    struct = dict(alignment='neutral', faction='Druid', prestige=None, bloodline='Faceless')
    plan = dict(struct, research=r.current['research'], merc=[])
    run = r.run(plan, 'max_mana', float('inf'), 60)
    stats = r.G.S_5_21_V
    before = list(stats)
    pl.save()
    all_r = [r.codes[sid] for sid, u in pl.research.items() if sid in pl.relevant]
    high = pl.value(dict(struct, research=all_r, merc=[]))
    pl.restore()
    after = list(stats)
    changed = [dict(index=i, before=a, after=b) for i, (a, b) in enumerate(zip(before, after)) if a != b]
    result = dict(input_sha256=hashlib.sha256(raw).hexdigest(), input_timestamp=stamp,
                  engine='native' if r.native else 'python', source_run_ok=run['ok'],
                  source_run_value=run['value'], trial_value=high,
                  stats_changed_after_planner_restore=changed)
    # 原存档的历史最高值可能已很高；本次查询没有写统计，不能推断查询是纯函数。
    writes = {}
    for goal in ('max_mana', 'mana_regen', 'assistants', 'production'):
        r.reset()
        stat = r.G.S_5_21_V
        old = list(stat)
        r.sim.refresh()
        val = r.metric(goal)
        new = list(stat)
        writes[goal] = dict(value=val, changed=[dict(index=i, before=a, after=b)
                                             for i, (a, b) in enumerate(zip(old, new)) if a != b])
    result['query_writes'] = writes
    result['current_plan'] = r.current
    # 真实轨迹中的魔力生成瓶颈。回魔和魔上限查询本来就在此目标的每秒路径内。
    traces = []
    current = dict(r.current, merc=[])
    if current.get('faction'):
        def observe(rn, t):
            traces.append(dict(t=t, mana_cap=rn.metric('max_mana'), regen=rn.metric('mana_regen'),
                               generated=rn.G.S_5_21_V[16], casts=rn.G.S_5_21_V[15]))
        start = time.perf_counter()
        checked = r.run(current, 'mana_regen', float('inf'), 60, probes=list(range(1, 61)), probe_fn=observe)
        runtime = time.perf_counter() - start
        repeat = r.run(current, 'mana_regen', float('inf'), 60)
        result['trace_run'] = dict(ok=checked['ok'], value=checked['value'], seconds=runtime,
                                  unobserved_value=repeat['value'], observation_same_value=checked['value'] == repeat['value'])
        result['mana_trace'] = traces
    # 当前输入可能是游戏一直在写的文件；固定副本为本实验唯一输入。
    result['fixed_copy_sha256'] = hashlib.sha256(fixed.read_bytes()).hexdigest()
    # 两项都不在当前回魔依赖候选图里，但会改变血统启用与读数语义。
    experiments = []
    for horizon in (60, 300):
        for blood in ('Druid', 'Faceless'):
            for include_a, include_s in ((False, False), (True, False), (False, True), (True, True)):
                rs = [c for c in r.current['research'] if c not in ('A400', 'S400')]
                rs += (['A400'] if include_a else []) + (['S400'] if include_s else [])
                p = dict(alignment='neutral', faction='Druid', prestige='Dragon', bloodline=blood, research=rs, merc=[])
                t0 = time.perf_counter()
                out = r.run(p, 'mana_regen', float('inf'), horizon)
                experiments.append(dict(horizon=horizon, bloodline=blood, A400=include_a, S400=include_s,
                                        ok=out['ok'], value=out['value'], skipped=out['skipped'],
                                        mana_cap=r.metric('max_mana'), generated=r.G.S_5_21_V[16],
                                        seconds=time.perf_counter() - t0))
    result['excluded_research_experiments'] = experiments
    orders = [('original', list(r.current['research'])), ('reverse', list(reversed(r.current['research']))),
              ('sorted', sorted(r.current['research']))]
    order_runs = []
    for horizon in (60, 300):
        for name, research in orders:
            p = dict(r.current, research=research, merc=[])
            out = r.run(p, 'mana_regen', float('inf'), horizon)
            order_runs.append(dict(horizon=horizon, order=name, ok=out['ok'], value=out['value'],
                                   research=research, picks=out['picks'], skipped=out['skipped']))
    result['research_order_experiments'] = order_runs
    result['all_order_variants_have_same_old_cache_key'] = len({O.plan_key(dict(r.current, research=rs, merc=[]))
                                                               for _, rs in orders}) == 1
    (args.output / 'probe.json').write_text(json.dumps(result, ensure_ascii=False, indent=2, allow_nan=False), encoding='utf-8')
    print(json.dumps(result, ensure_ascii=False, indent=2, allow_nan=False))


if __name__ == '__main__':
    main()
