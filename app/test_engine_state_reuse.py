"""比较优化路径与全量重算，专门检测缓存和失败回滚的串档风险。"""
import inspect
from pathlib import Path
import sys
import unittest
from unittest.mock import patch

sys.path.insert(0, str(Path(__file__).resolve().parent))
from build_engine import Engine

ROOT = Path(__file__).resolve().parents[1]


class StateReuseTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.engine = Engine()
        cls.path = ROOT / 'build/production-check3.sol'
        cls.raw = cls.path.read_bytes()
        cls.request = dict(save=cls.engine.rg_sim.save_text(cls.path), timestamp=cls.path.stat().st_mtime)

    @classmethod
    def tearDownClass(cls):
        assert cls.path.read_bytes() == cls.raw

    def setUp(self):
        self.loaded = self.engine.load(self.request)
        self.engine.checkpoint.restore()
        self.engine.comparisons.clear()
        self.engine.descriptions.clear()

    def action(self, name, count=1):
        item = next(row for row in self.engine.catalog if row['name'] == name)
        return dict(revision=self.loaded['revision'], key=item['key'], count=count)

    def test_cached_formulas_equal_full_recalculation_for_mixed_actions(self):
        for name, count in [('Farm', 10), ('Tax Collection', 1), ('Spiked Floor', 1)]:
            request = self.action(name, count)
            item = self.engine.catalog_map[request['key']]
            with self.engine.checkpoint.transaction():
                reference = self.engine.sim.compare(item['kind'], item['sid'], count)
            actual = self.engine.compare(request)
            for key in ('action', 'before', 'after', 'production_change', 'production_ratio'):
                self.assertEqual(reference[key], actual[key], (name, key))

    def test_exception_after_mutation_restores_state_and_object_identity(self):
        sim = self.engine.sim
        building = sim.find(sim.G.S__25__3c_, 'Farm')
        quantity = building.S__21_a

        def fail(*args, **kwargs):
            setattr(sim.G, sim.game_names['resource'], 0)
            building.S__21_a += 100
            sim.G.new_probe_field = True
            raise RuntimeError('partial action failed')

        with patch.object(sim, 'compare', side_effect=fail):
            with self.assertRaisesRegex(RuntimeError, 'partial action'):
                self.engine.compare(self.action('Farm', 7))
        self.assertIs(sim.find(sim.G.S__25__3c_, 'Farm'), building)
        self.assertEqual(building.S__21_a, quantity)
        with self.assertRaises(AttributeError):
            inspect.getattr_static(sim.G, 'new_probe_field')
        self.assertEqual(sim.snapshot(refresh=False, cached=True), self.loaded['snapshot'])

    def test_cached_results_are_independent_and_do_not_skip_input_validation(self):
        request = self.action('Farm')
        first = self.engine.compare(request)
        expected = first['after']['total']
        first['after']['total'] = 0
        second = self.engine.compare(request)
        self.assertEqual(second['after']['total'], expected)
        second['after']['total'] = -1
        self.assertEqual(self.engine.compare(request)['after']['total'], expected)
        with self.assertRaises(ValueError):
            self.engine.compare(dict(request, count=True))

    def test_new_snapshot_invalidates_action_and_query_caches(self):
        old_action = self.action('Farm', 10)
        self.engine.compare(old_action)
        key = next(row['key'] for row in self.engine.catalog if row['code'] == 'A270')
        self.engine.describe(dict(revision=self.loaded['revision'], keys=[key]))
        replacement = self.engine.load(dict(self.request, timestamp=self.request['timestamp'] + 60))
        self.assertNotEqual(replacement['revision'], self.loaded['revision'])
        self.assertEqual(self.engine.comparisons, {})
        self.assertEqual(self.engine.descriptions, {})
        with self.assertRaises(ValueError):
            self.engine.compare(old_action)
        actual = self.engine.compare(dict(old_action, revision=replacement['revision']))
        self.assertEqual(actual['before'], replacement['snapshot'])
        with self.engine.checkpoint.transaction():
            full = self.engine.sim.snapshot()
        self.assertEqual(full, replacement['snapshot'])


if __name__ == '__main__':
    unittest.main(verbosity=2)
