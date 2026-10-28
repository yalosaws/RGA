"""固定输入分别测载入、查询和动作；输出结果指纹，防止只提速却改了数值。"""
import argparse
import cProfile
import hashlib
import json
from pathlib import Path
import pstats
import statistics
import sys
import time

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / '应用'))
from build_engine import Engine


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output', required=True)
    parser.add_argument('--profile')
    parser.add_argument('--save', default=str(ROOT / 'build/production-check3.sol'))
    opts = parser.parse_args()
    times, results = {}, {}

    def measure(name, fn):
        start = time.perf_counter()
        value = fn()
        times.setdefault(name, []).append((time.perf_counter() - start) * 1000)
        return value

    engine = measure('engine_start', Engine)
    path = Path(opts.save)
    original = path.read_bytes()
    request = dict(save=engine.rg_sim.save_text(path), timestamp=path.stat().st_mtime)
    loaded = measure('load', lambda: engine.load(request))
    measure('load_same_save', lambda: engine.load(request))
    revision = loaded['revision']
    keys = {item['name']: item['key'] for item in loaded['catalog']}
    for _ in range(3):
        measure('snapshot', engine.sim.snapshot)
        measure('snapshot_cache_rebuild', lambda: engine.sim.snapshot(refresh=False, cached=True))
        measure('snapshot_cached', lambda: engine.sim.snapshot(refresh=False, cached=True))
        measure('describe', lambda: engine.describe(dict(revision=revision, keys=[keys[n] for n in ['Explosives', 'Commerce', 'Synthesis']])))
        if hasattr(engine, 'comparisons'):
            engine.comparisons.clear()
        action = dict(revision=revision, key=keys['Farm'], count=10)
        results['farm10'] = measure('compare_farm10', lambda: engine.compare(action))
        measure('compare_farm10_cached', lambda: engine.compare(action))
    results['tax'] = measure('compare_tax', lambda: engine.compare(dict(revision=revision, key=keys['Tax Collection'])))
    if opts.profile:
        profiler = cProfile.Profile()
        if hasattr(engine, 'comparisons'):
            engine.comparisons.clear()
        profiler.runcall(engine.compare, dict(revision=revision, key=keys['Farm'], count=10))
        profiler.dump_stats(opts.profile)
        pstats.Stats(profiler).strip_dirs().sort_stats('cumulative').print_stats(22)
    assert path.read_bytes() == original, '计时过程中修改了输入存档'
    report = dict(input_sha256=hashlib.sha256(original).hexdigest(),
        times_ms={key: dict(samples=values, median=statistics.median(values)) for key, values in times.items()},
        results=results)
    Path(opts.output).write_text(json.dumps(report, ensure_ascii=False, indent=2, allow_nan=False), encoding='utf-8')
    print(json.dumps({key: round(statistics.median(values), 3) for key, values in times.items()}, ensure_ascii=False))


if __name__ == '__main__':
    main()
