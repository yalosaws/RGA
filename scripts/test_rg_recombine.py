"""研究整分支交叉的搜索回归：跨越单项替换无法改善的组合，并保留结构约束。"""
import copy
import itertools
import unittest

from rg_optimize import recombination_candidates


class RecombinationTests(unittest.TestCase):
    def test_crosses_a_joint_replacement_barrier(self):
        # 两格研究的合法小问题：两项必须一起换，单项交换都会变差。
        parent = dict(alignment='neutral', faction='Druid', bloodline='Druid', prestige=None,
                      research=['A1', 'A2', 'S30'], merc=[], lineage=False)
        donor = dict(parent, bloodline='Faceless', research=['A3', 'A4', 'S400'])
        original = copy.deepcopy((parent, donor))

        def objective(plan):
            a = {c for c in plan['research'] if c.startswith('A')}
            return 2 if a == {'A3', 'A4'} else 1 if a == {'A1', 'A2'} else 0

        single = [dict(parent, research=[c for c in parent['research'] if c != remove] + [add])
                  for remove in ('A1', 'A2') for add in ('A3', 'A4')]
        self.assertTrue(all(objective(p) < objective(parent) for p in single))
        generated = list(recombination_candidates(parent, [donor]))
        replacement = next(p for branch, p in generated if branch == 'A')
        self.assertEqual(objective(replacement), max(2 if set(pair) == {'A3', 'A4'} else
            1 if set(pair) == {'A1', 'A2'} else 0 for pair in itertools.combinations(('A1', 'A2', 'A3', 'A4'), 2)))
        self.assertIn('S30', replacement['research'])
        self.assertEqual(replacement['bloodline'], 'Druid')
        self.assertFalse(replacement['lineage'])
        self.assertEqual((parent, donor), original)

    def test_forbidden_branch_and_incompatible_factions(self):
        parent = dict(alignment='neutral', faction='Druid', research=['F5750', 'S30'], merc=[])
        donor = dict(parent, research=['F11500', 'S30'])
        generated = list(recombination_candidates(parent, [donor]))
        self.assertTrue(any(set(p['research']) == {'S30', 'F11500'} for _, p in generated))
        self.assertEqual(list(recombination_candidates(parent, [dict(donor, faction='Faceless')])), [])
        self.assertEqual(list(recombination_candidates(parent, [parent, parent])), [])


if __name__ == '__main__':
    unittest.main()
