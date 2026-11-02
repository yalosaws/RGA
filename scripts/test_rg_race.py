"""精确赛跑求解器的规则测试：检查点不改物理、停下的局不给分、严格成绩口径不变、改动叠加守配额。

python -X utf8 -m unittest discover -s scripts -p test_rg_race.py -v
"""
import collections
import hashlib
import json
from pathlib import Path
import random
import sys
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'scripts'))
import rg_sim
rg_sim.MEMBER_NAMES = ROOT / 'build/calculation/member-names.json'
import rg_goal
import rg_race
from rg_evaluate import evaluate_template
from rg_mechanisms import Mechanisms, plan_key, structure_key
from rg_search import catalogue

SAVE = ROOT / 'build/mechanics-audit/input.sol'
PLAN = dict(alignment='neutral', faction='Faceless', prestige='Dragon', bloodline='Fairy', research=[
    'W180', 'W400', 'W1275', 'W300', 'C1325', 'C305', 'C1300', 'D1375', 'D250', 'D1275', 'D1175', 'D330', 'D290',
    'C425', 'C250', 'W250', 'E425', 'E1225', 'E450', 'E150', 'E320', 'A135', 'A550', 'A400', 'A300', 'A250', 'S1500',
    'S1450', 'S400', 'S30', 'S330', 'S200'], merc=[])


class RaceTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        from rg_events import read_schedule
        cls.digest = hashlib.sha256(SAVE.read_bytes()).hexdigest()
        cls.stamp = SAVE.stat().st_mtime
        schedule, _ = read_schedule()
        cls.runner = rg_goal.Runner(ROOT / 'build/calculation/game.py', save_path=SAVE,
                                    research_json=ROOT / 'build/calculation/research.json', event_cache=schedule)

    @classmethod
    def tearDownClass(cls):
        assert cls.digest == hashlib.sha256(SAVE.read_bytes()).hexdigest()
        assert cls.stamp == SAVE.stat().st_mtime

    def req(self, **kw):
        return dict(dict(plan=PLAN, goal='coins', T=60, limit=60, target=None, spell=None, bar=None, full=True), **kw)

    def test_bar_that_never_triggers_changes_nothing(self):
        plain = evaluate_template(self.runner, PLAN, 'coins', 60)
        loose = rg_race.race_task(self.runner, self.req(bar=[(30, 1.0), (50, 1.0)]))
        self.assertIsNone(loose['stopped_at'])
        self.assertIsNotNone(loose['exact'])
        for k in ('value', 'time', 'curve', 'picks', 'research_times', 'lineage', 'research_ready'):
            self.assertEqual(plain[k], loose['exact'][k], k)
        self.assertEqual(plain['plan'], loose['exact']['plan'])

    def test_stopped_run_has_no_score_and_shares_the_prefix(self):
        full = rg_race.race_task(self.runner, self.req())
        bar = [(30, rg_race.curve_at(full['curve'], 30) * 1.001)]
        cut = rg_race.race_task(self.runner, self.req(bar=bar))
        self.assertEqual(cut['stopped_at'], 30)
        self.assertIsNone(cut['exact'])
        prefix = [p for p in full['curve'] if p[0] <= 30]
        self.assertEqual(cut['curve'][:len(prefix)], prefix)

    def test_short_probe_is_prefix_of_full_run(self):
        full = rg_race.race_task(self.runner, self.req())
        probe = rg_race.race_task(self.runner, self.req(limit=30, full=False))
        self.assertIsNone(probe['exact'])
        self.assertEqual([p for p in full['curve'] if p[0] <= 30][:3], probe['curve'][:3])

    def test_client_mismatch_is_reported_as_blocked(self):
        bad = dict(PLAN, research=['A1' if c == 'A135' else c for c in PLAN['research']])
        res = rg_race.race_task(self.runner, self.req(plan=bad, limit=30, full=False))
        self.assertIn('A1', res['blocked'])
        ok = rg_race.race_task(self.runner, self.req(limit=30, full=False))
        self.assertEqual(ok['blocked'], [])

    def test_moves_and_combos_respect_quotas(self):
        cat = catalogue(self.runner, ROOT / 'build/calculation/build-model.json')
        s = rg_race.Search.__new__(rg_race.Search)
        s.model = Mechanisms(ROOT / 'build/calculation/build-model.json', 'coins')
        s.domains = cat['domains']
        s.domain_map = {structure_key(d['structure']): d for d in s.domains}
        s.blocked, s.buyable = collections.defaultdict(set), collections.defaultdict(set)
        d = s.domain_map[structure_key(PLAN)]
        moves = s.moves(PLAN, True)
        keys = [plan_key(m[2]) for m in moves]
        self.assertEqual(len(keys), len(set(keys)))
        self.assertNotIn(plan_key(PLAN), keys)
        for _, kind, p in moves:
            if kind == 'inner':
                self.assertEqual(s.model.repair(p, d)['research'], p['research'])
        inner = [m[0] for m in moves if m[1] == 'inner' and m[0][0] == 'swap']
        random.Random(1).shuffle(inner)
        for p in s.compose(PLAN, inner[:40]):
            self.assertEqual(s.model.repair(p, d)['research'], p['research'])
            self.assertEqual(len(set(p['research'])), len(p['research']))
        self.assertIsNone(s.apply_move(PLAN, ('swap', 'W180', 'W400')))      # 已在方案里
        self.assertIsNone(s.apply_move(PLAN, ('drop', 'X1', None)))
        q = s.apply_move(PLAN, ('swap', 'W180', 'W200'))
        self.assertEqual(q['research'].index('W200'), PLAN['research'].index('W180'))   # 原位替换，购买顺序不变


if __name__ == '__main__':
    unittest.main(verbosity=2)
