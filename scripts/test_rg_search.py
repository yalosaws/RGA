"""新搜索的正确性边界：时序评分、真实回放、配额、种群跨越联动屏障。"""
import copy
import collections
import json
from pathlib import Path
import random
import time
import unittest

from rg_mechanisms import Mechanisms, ResponseModel, improves, plan_key, rank_key
from rg_search import Search, exact_evaluate, search_budget

ROOT = Path(__file__).resolve().parents[1]


class SearchRulesTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.model = Mechanisms(ROOT / 'build/calculation/build-model.json', 'mana_regen')

    def test_catalogue_covers_indirect_and_forbidden_research(self):
        self.assertEqual(len(self.model.research), 264)
        self.assertIn('artifacts', self.model.research['S400']['outputs'])
        self.assertIn('bloodline', self.model.research['A400']['outputs'])
        self.assertEqual(self.model.research['F5750']['branch'], 6)
        self.assertTrue(self.model.research['D270']['inputs'])

    def test_goal_specific_fast_budget(self):
        self.assertEqual(search_budget(dict(goal='max_mana',depth='fast')),dict(budget=60))
        self.assertEqual(search_budget(dict(goal='mana_regen',depth='fast')),dict(budget=120))
        self.assertEqual(search_budget(dict(goal='mana_regen',depth='normal')),dict(budget=240))

    def test_strategy_cache_keeps_order_and_lineage(self):
        p = dict(alignment='neutral', faction='Druid', research=['S400', 'S30'], merc=['FR1', 'AN1'])
        self.assertNotEqual(plan_key(p), plan_key(dict(p, research=['S30', 'S400'])))
        self.assertNotEqual(plan_key(p), plan_key(dict(p, merc=['AN1', 'FR1'])))
        self.assertNotEqual(plan_key(p), plan_key(dict(p, lineage=False)))
        self.assertEqual(plan_key(p), plan_key(dict(p, lineage=True)))

    def test_first_reach_uses_every_tick_then_value(self):
        a = dict(ok=True, reached=True, time=10, value=100)
        # 提前一 tick 的方案必须胜出，不能让 0.05 秒容差掩盖更快结果。
        b = dict(a, time=10 + 1/30, value=10000)
        self.assertTrue(improves(a, b))
        self.assertFalse(improves(b, a))
        self.assertEqual(sorted([b, a], key=rank_key), [a, b])
        self.assertTrue(improves(dict(a, value=100.000001), a))
        self.assertTrue(improves(a, dict(b, reached=False, value=1e100)))

    def test_seven_branches_budget_free_and_mercenary_constraints(self):
        m = copy.copy(self.model)
        codes = ['S1', 'S30', 'S50', 'F5750', 'F11500']
        domain = dict(structure=dict(alignment='good', faction='Mercenary'), research=codes,
            quotas={str(b): dict(kind='budget', value=5800 if b == 6 else 50) for b in range(7)},
            free=['S1'], merc=['FR1', 'AN1', 'EL1', 'UD1', 'GB1', 'DG1', 'DG2'],
            merc_groups={c:1 for c in ['FR1', 'AN1', 'EL1', 'UD1', 'GB1', 'DG1', 'DG2']}, merc_ids={})
        original = dict(domain['structure'], research=['S1','S30','S50','F5750','F11500','bad'],
                        merc=['DG1','DG2','FR1','AN1','EL1','UD1'])
        untouched = copy.deepcopy(original)
        out = m.repair(original, domain)
        self.assertEqual(out['research'], ['S1','S30','F5750'])
        self.assertEqual(out['merc'], ['DG1','FR1','AN1','EL1'])
        self.assertEqual(original, untouched)
        domain['quotas']['0'] = dict(kind='slots', value=1)
        self.assertEqual(m.repair(original, domain)['research'][:2], ['S1','S30'])

    def test_joint_mutation_crosses_single_change_barrier(self):
        domain = dict(structure=dict(alignment='neutral', faction='Druid'), research=['S1','S30','S50','S105'],
            quotas={str(b):dict(kind='slots',value=2) for b in range(7)},free=[],merc=[])
        parent = dict(domain['structure'], research=['S1','S30'], merc=[])
        donor = dict(parent, research=['S50','S105'])
        def value(p):
            s = set(p['research'])
            return 2 if s == {'S50','S105'} else 1 if s == {'S1','S30'} else 0
        self.assertTrue(all(value(dict(parent,research=[a,b])) == 0
                            for a in ['S1','S30'] for b in ['S50','S105']))
        rng = random.Random(0)
        candidates = [self.model.mutate(parent,domain,rng,donor=donor) for _ in range(100)]
        self.assertEqual(max(map(value,candidates)),2)

    def test_response_learning_uses_full_run_observations(self):
        domain = dict(structure=dict(alignment='neutral',faction='Druid'),research=['S1','S30'],merc=[])
        a = dict(ok=True,reached=False,time=60,value=10,plan=dict(domain['structure'],research=['S1'],merc=[]))
        b = dict(a,value=100,plan=dict(domain['structure'],research=['S30'],merc=[]))
        model = ResponseModel(self.model,None,60)
        domains = {('neutral','Druid',None,None):domain}
        for _ in range(5):
            model.train([a,b],domains,random.Random(0))
        self.assertGreater(model.predict(b['plan'],domain,explore=0),model.predict(a['plan'],domain,explore=0))
        self.assertEqual(a['value'],10)
        self.assertEqual(b['value'],100)

    def test_unpurchased_items_require_a_fresh_complete_run(self):
        class Runner:
            def __init__(self):
                self.calls=[]
                self.G=type('G',(),{'S_5_21_V': [0]*17})()
                self.ups=collections.defaultdict(lambda:type('U',(),{'S__3c__21_7':True})())
            def run(self,p,*args,**kw):
                self.calls.append((copy.deepcopy(p),kw))
                return dict(ok=True,skipped=['S400'] if 'S400' in p['research'] else [],skipped_merc=[],
                            value=999 if 'S400' in p['research'] else 10)
        r=Runner()
        p=dict(alignment='neutral',faction='Druid',research=['S400','S30'],merc=[])
        result=exact_evaluate(r,p,'mana_regen',60)
        self.assertEqual(len(r.calls),2)
        self.assertTrue(all(kw['coarse']==0 for _,kw in r.calls))
        self.assertEqual(result['value'],10)
        self.assertEqual(result['plan']['research'],['S30'])
        self.assertEqual(p['research'],['S400','S30'])

    def test_reach_before_purchase_timeout_does_not_claim_unbought_research(self):
        class Runner:
            def __init__(self):
                self.calls=[]
                self.G=type('G',(),{'S_5_21_V':[0]*17})()
                self.ups=collections.defaultdict(lambda:type('U',(),{'S__3c__21_7':True})())
            def run(self,p,*args,**kw):
                self.calls.append(copy.deepcopy(p))
                return dict(ok=True,reached=True,time=2,value=100,skipped=[],research=['S30'])
        r=Runner()
        out=exact_evaluate(r,dict(faction='Druid',research=['S400','S30']),'max_mana',60,target=100)
        self.assertEqual(len(r.calls),2)
        self.assertEqual(out['plan']['research'],['S30'])

    def test_unfinished_structure_is_not_a_feasible_zero_score(self):
        class Runner:
            ups=collections.defaultdict(lambda:type('U',(),{'S__3c__21_7':False})())
            def run(self,*args,**kwargs):
                return dict(ok=True,value=0,research=[],skipped=[])
        result=exact_evaluate(Runner(),dict(faction='Druid',bloodline='Angel',research=[]),'max_mana',60)
        self.assertFalse(result['ok'])

    def test_better_ablation_cannot_remain_hidden_in_cache(self):
        s=Search.__new__(Search)
        s.results,s.superseded,s.best_of,s.improved,s.started=[],set(),{},0,time.monotonic()
        p=dict(alignment='neutral',faction='Druid',research=['S400','S30'])
        a=dict(ok=True,plan=p,value=100,reached=False,time=None,curve=[],picks={})
        s.record(a,verified=True)
        b=dict(a,plan=dict(p,research=['S400']),value=110)
        s.cache={plan_key(p):a,plan_key(b['plan']):b}
        s._publish_observed()
        self.assertEqual(s.best()[0]['value'],110)
        self.assertFalse(s.best()[0]['verified_exact'])


if __name__ == '__main__':
    unittest.main(verbosity=2)
