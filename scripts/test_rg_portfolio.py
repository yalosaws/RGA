"""跨时长污染、慢启动候选与公式联动探索的正确性边界。"""
import collections
from pathlib import Path
import random
import time
import unittest

from rg_mechanisms import Mechanisms, plan_key, structure_key
from rg_portfolio import Population, balanced_structures
from rg_search import Search

ROOT = Path(__file__).resolve().parents[1]


class PortfolioTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.model = Mechanisms(ROOT/'build/calculation/build-model.json', 'production')

    def domain(self, faction='Druid', prestige='Dragon', bloodline='Druid'):
        return dict(structure=dict(alignment='neutral', faction=faction, prestige=prestige, bloodline=bloodline),
                    research=['S1', 'S30', 'S50'], merc=[], free=[],
                    quotas={str(b):dict(kind='slots',value=2) for b in range(7)})

    def row(self, domain, codes, value, growth=None):
        return dict(ok=True, reached=False, time=None, value=value, curve=[(10, value), (60, value)],
                    picks={}, growth=growth or {}, plan=dict(domain['structure'], research=codes, merc=[]))

    def test_short_score_cannot_enter_long_ranking_or_cache(self):
        d=self.domain()
        short=Population(self.model,[d],60)
        long=Population(self.model,[d],1800)
        row=self.row(d,['S30'],1e200)
        short.observe(row['plan'],row)
        self.assertFalse(long.cache)
        self.assertFalse(long.valid)
        s=Search.__new__(Search)
        s.T=1800
        with self.assertRaises(ValueError):s.record(dict(row,horizon=60))

    def test_indirect_client_effects_reach_the_proposal_model(self):
        self.assertIn('gem_bonus',self.model.research['E1425']['outputs'])
        self.assertIn('artifacts',self.model.research['E1425']['inputs'])
        self.assertIn('reincarnation',self.model.research['D1375']['outputs'])
        # 研究仍按具体来源和配额选择；新增关系只指导提案，不直接给分。
        self.assertEqual(self.model.research['S1450']['faction'],12)

    def test_low_terminal_growth_candidate_keeps_promotion_path(self):
        d=self.domain()
        b=Population(self.model,[d],60)
        for c,value,mana in [('S1',1e100,1),('S30',1,1e20),('S50',10,1)]:
            r=self.row(d,[c],value,dict(mana_generated=mana))
            b.observe(r['plan'],r)
        candidates=[r['plan']['research'] for r in b.fronts()]
        self.assertIn(['S30'],candidates)
        self.assertEqual(candidates[0],['S1'])

    def test_blind_long_trial_does_not_require_short_approval(self):
        d=self.domain()
        s=Search.__new__(Search)
        s.model,s.rng,s.ordered_domains=self.model,random.Random(5),[d]
        short=Population(self.model,[d],60)
        long=Population(self.model,[d],1800)
        s.banks={60:short,1800:long}
        long.promoted=3
        plan,role=s._portfolio_candidate(long,set())
        self.assertEqual(role,'blind')
        self.assertIsNotNone(plan)
        self.assertNotIn(plan_key(plan),short.cache)

    def test_promotion_is_queued_without_copying_a_score(self):
        d=self.domain()
        s=Search.__new__(Search)
        s.model,s.rng,s.ordered_domains=self.model,random.Random(0),[d]
        short=Population(self.model,[d],60)
        long=Population(self.model,[d],1800)
        row=self.row(d,['S1'],1e200)
        short.observe(row['plan'],row)
        s.banks={60:short,1800:long}
        plan,role=s._portfolio_candidate(long,set())
        self.assertEqual(role,'promote')
        self.assertEqual(plan,row['plan'])
        self.assertFalse(long.cache)
        self.assertFalse(long.valid)

    def test_long_proposal_draws_do_not_shift_short_random_stream(self):
        d=self.domain()
        a=Population(self.model,[d],60,seed=7)
        b=Population(self.model,[d],1800,seed=7)
        expected=random.Random(7)
        for _ in range(500):b.rng.random()
        self.assertEqual([a.rng.random() for _ in range(20)],[expected.random() for _ in range(20)])

    def test_incomplete_short_plan_can_be_retried_intact_at_long_horizon(self):
        d=self.domain()
        s=Search.__new__(Search)
        s.model,s.rng,s.ordered_domains=self.model,random.Random(0),[d]
        short=Population(self.model,[d],60)
        long=Population(self.model,[d],1800)
        p=dict(d['structure'],research=['S1','S30'],merc=[])
        short.observe(p,dict(ok=False,deferred=True,value=None,plan=p))
        s.banks={60:short,1800:long};long.promoted=3
        got,role=s._portfolio_candidate(long,set())
        self.assertEqual(got,p)
        self.assertEqual(role,'blind')
        self.assertFalse(short.valid)
        self.assertFalse(long.cache)

    def test_prestige_is_covered_before_all_bloodlines_of_one_faction(self):
        domains=[self.domain(f,p,b) for f in ('Druid','Titan') for p in (None,'Dragon') for b in ('Druid','Dwarven','Elven')]
        first=balanced_structures(domains)[:4]
        self.assertEqual({(d['structure']['faction'],d['structure']['prestige']) for d in first},
                         {('Druid',None),('Druid','Dragon'),('Titan',None),('Titan','Dragon')})

    def test_target_horizon_evolution_has_a_reserved_slot(self):
        from unittest.mock import Mock
        d=self.domain()
        s=Search.__new__(Search)
        short=Population(self.model,[d],60)
        long=Population(self.model,[d],300)
        row=self.row(d,['S1'],1e100)
        short.observe(row['plan'],row)
        long.observe(row['plan'],dict(row,value=10))
        proposed=dict(row['plan'],research=['S30'])
        long.next_proposal=Mock(return_value=proposed)
        long.promoted=1
        s.banks={60:short,300:long}
        plan,role=s._portfolio_candidate(long,set())
        self.assertEqual(plan,proposed)
        self.assertEqual(role,'blind')
        long.next_proposal.assert_called_once()


if __name__=='__main__':unittest.main(verbosity=2)
