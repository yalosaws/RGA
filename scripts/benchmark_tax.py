"""分开测征税入口、客户端自动批量及完整试算；只操作内存副本。"""
import argparse
import cProfile
import json
from pathlib import Path
import pstats
import sys
import time

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'app'))
from build_engine import Engine


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--save', default=str(ROOT / 'build/production-check3.sol'))
    parser.add_argument('--output', default=str(ROOT / 'build/tax-paths.json'))
    parser.add_argument('--profile')
    args = parser.parse_args()
    engine = Engine()
    path = Path(args.save)
    original = path.read_bytes()
    loaded = engine.load(dict(save=engine.rg_sim.save_text(path), timestamp=path.stat().st_mtime))
    sim = engine.sim
    spell = sim.find(sim.G.S_0_21_A, 'Tax Collection')
    from as2py import mangle
    casts_field = mangle('§2-§')
    cost = sim.core_call('getSpellCost', spell)
    results = dict(cost=cost, starting_mana=loaded['snapshot']['mana'], cases={})

    def cast(automatic=False, times=1):
        before_casts = getattr(spell, casts_field)
        before_mana = getattr(sim.G, sim.game_names['mana'])
        start = time.perf_counter()
        calls = 0
        for _ in range(times):
            if not sim.game_call('useSpell', spell, automatic):
                break
            calls += 1
        elapsed = (time.perf_counter() - start) * 1000
        spent = before_mana - getattr(sim.G, sim.game_names['mana'])
        return dict(ms=elapsed, successful_calls=calls, recorded_casts=getattr(spell, casts_field) - before_casts,
                    mana_spent=spent, casts_cost_equivalent=spent / cost)

    for label, automatic, times in [('manual_once', False, 1), ('automatic_batch', True, 1), ('manual_16', False, 16)]:
        with engine.checkpoint.transaction():
            results['cases'][label] = cast(automatic, times)

    with engine.checkpoint.transaction():
        start = time.perf_counter()
        sim.cast('Tax Collection')
        action_time = (time.perf_counter() - start) * 1000
        start = time.perf_counter()
        sim.snapshot(refresh=False, cached=True)
        summary_time = (time.perf_counter() - start) * 1000
        results['cases']['trial_phases'] = dict(action_ms=action_time, summary_ms=summary_time)

    key = next(row['key'] for row in engine.catalog if row['name'] == 'Tax Collection')
    start = time.perf_counter()
    engine.compare(dict(revision=loaded['revision'], key=key))
    results['cases']['full_trial'] = dict(ms=(time.perf_counter() - start) * 1000)
    if args.profile:
        profiler = cProfile.Profile()
        with engine.checkpoint.transaction():
            profiler.runcall(cast, True)
        profiler.dump_stats(args.profile)
        pstats.Stats(profiler).strip_dirs().sort_stats('cumulative').print_stats(18)
    assert path.read_bytes() == original, '存档文件运行期间发生变化，请用冻结副本重测'
    Path(args.output).write_text(json.dumps(results, ensure_ascii=False, indent=2), encoding='utf-8')
    print(json.dumps(results, ensure_ascii=False))


if __name__ == '__main__':
    main()
