"""通过真实应用入口验证新求解器、增量结果、停止清理和快照隔离，不启动窗口。"""
import hashlib
import json
from pathlib import Path
import sys
import time
import unittest
from unittest.mock import patch

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / 'app'))
sys.path.insert(0, str(ROOT / 'scripts'))
from build_engine import Engine
import rg_sim
rg_sim.MEMBER_NAMES = ROOT / 'build/calculation/member-names.json'


class PopulationIntegrationTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.path = ROOT / 'build/mechanics-audit/input.sol'
        cls.original = hashlib.sha256(cls.path.read_bytes()).hexdigest()
        cls.stamp = cls.path.stat().st_mtime

    @classmethod
    def tearDownClass(cls):
        assert cls.original == hashlib.sha256(cls.path.read_bytes()).hexdigest()
        assert cls.stamp == cls.path.stat().st_mtime

    def test_catalogue_and_other_runs_do_not_change_a_trajectory(self):
        import rg_goal
        from rg_search import catalogue, exact_evaluate
        runner = rg_goal.Runner(ROOT / 'build/calculation/game.py', save_path=self.path,
                              research_json=ROOT / 'build/calculation/research.json')
        p = dict(runner.current, merc=[])
        first = exact_evaluate(runner,p,'max_mana',60)
        cat = catalogue(runner,ROOT / 'build/calculation/build-model.json')
        self.assertEqual(len(cat['domains']),273)
        self.assertTrue(all(set(d['quotas']) == set(map(str,range(7))) for d in cat['domains']))
        exact_evaluate(runner,dict(p,research=[],bloodline='Angel'),'max_mana',60)
        last = exact_evaluate(runner,p,'max_mana',60)
        self.assertEqual(first,last)
        # 龙息由晚选的龙族显赫解锁，不能在选显赫之前提前判为不可用。
        dragon=dict(p,alignment='neutral',faction='Druid',prestige='Dragon')
        with_spell=exact_evaluate(runner,dragon,'max_mana',60,spell="Dragon's Breath")
        self.assertTrue(with_spell['ok'],with_spell)
        self.assertIn('Dragons Trade Treaty',with_spell['picks'])

    def engine(self):
        e=Engine()
        loaded=e.load(dict(save=rg_sim.save_text(self.path),timestamp=self.stamp))
        return e,dict(revision=loaded['revision'])

    def test_real_app_entry_uses_new_search_and_incremental_verified_rows(self):
        import rg_search
        e,request=self.engine()
        with patch.object(rg_search,'search_budget',return_value=dict(budget=12)):
            st=e.goal_start(dict(request,options=dict(goal='max_mana',mode='max',limit=60,depth='fast')))
        search=e.goal
        seen={}
        try:
            while not st['finished']:
                self.assertEqual(st['algorithm'],'population-response-v1')
                for row in st['entries']:
                    self.assertNotIn(row['id'],seen)
                    seen[row['id']]=row
                known=st['total_entries']
                time.sleep(.05)
                st=e.goal_status(dict(request,known=known))
            for row in st['entries']:
                self.assertNotIn(row['id'],seen)
                seen[row['id']]=row
            self.assertIsNone(st['error'])
            verified=[r for r in seen.values() if r['verified_exact']]
            self.assertGreaterEqual(len(verified),3)
            self.assertTrue(all(not r['skipped'] and not r['skipped_merc'] for r in verified))
            self.assertTrue(all(p.poll() is not None or p.wait(timeout=3) is not None for p in search.pool.procs))
            self.assertTrue(all(p.stdout.closed for p in search.pool.procs))
            self.assertNotIn('rg_optimize',sys.modules)
        finally:
            search.stop()
            search.thread.join(timeout=10)

    def test_stop_terminates_every_worker(self):
        e,request=self.engine()
        e.goal_start(dict(request,options=dict(goal='mana_regen',mode='max',limit=300,depth='fast')))
        search=e.goal
        until=time.monotonic()+20
        while not hasattr(search,'pool') and time.monotonic()<until:
            time.sleep(.05)
        self.assertTrue(hasattr(search,'pool'))
        e.goal_stop(dict(request,quiet=True))
        search.thread.join(timeout=10)
        self.assertTrue(search.finished)
        self.assertEqual(search.error,'已停止')
        self.assertTrue(all(p.poll() is not None or p.wait(timeout=3) is not None for p in search.pool.procs))
        self.assertTrue(all(p.stdout.closed for p in search.pool.procs))


if __name__=='__main__':
    unittest.main(verbosity=2)
