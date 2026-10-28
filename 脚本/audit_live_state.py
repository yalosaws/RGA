"""实时计算快照的独立输入核对与缓存/全量路径比较。"""
import argparse
import json
from pathlib import Path
import time

from as2py import mangle
from live_snapshot import LiveSnapshot
from rg_growth import Simulation


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--snapshot', type=Path, default=Path('build/live-state-candidate.json'))
    args = parser.parse_args()
    snapshot = json.loads(args.snapshot.read_text(encoding='utf-8'))
    sim = Simulation(Path('build/rg_installed_game.py'), timestamp=snapshot['observed_at'])
    adapter = LiveSnapshot(sim, snapshot)
    adapter.apply()
    values = sim.snapshot(refresh=False, cached=True)
    full = sim.snapshot(cached=False)
    cache = snapshot['classes']['#!!']
    pairs = {'buildings': ('0!0', '+!J', 30), 'max_mana': ('"f', '@Y', 1),
             'mana_per_second': ('+O', ']N', 30), 'assistant_count': ('8&', '&!7', 1),
             'assistant_click': (';!Q', "'X", 1), 'assistant_multiplier': ('7!Y', '+!E', 1)}
    checks = {key: dict(valid=not cache[flag], live=cache[field]*factor, calculated=values[key],
                       equal=cache[field]*factor == values[key]) for key,(flag,field,factor) in pairs.items()}
    print(json.dumps(dict(snapshot=values, cache_equals_full=values == full,
        live_cache_checks=checks,
        buildings=sum(obj.S__21_a for obj in sim.G.S__25__3c_),
        owned=sum(bool(obj.S__3c__21_7) for obj in sim.G.S__2d__21_4),
        active=[dict(name=obj.S_1i, ticks=obj.S__27__21_X) for obj in sim.G.S_0_21_A if obj.S_23]), ensure_ascii=False))


if __name__ == '__main__':
    main()
