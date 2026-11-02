"""固定 A1 R60 存档，真实购买和活动上下文回归；一进程一份原生世界。"""
import copy
import hashlib
import json
from pathlib import Path
import unittest

import rg_goal,rg_sim
from rg_evaluate import evaluate_template,TemplateEvaluationError,parse_templates

ROOT=Path(__file__).resolve().parents[1]


class NativeEvaluationTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.save=ROOT/'build/mechanics-audit/input.sol';cls.sha=hashlib.sha256(cls.save.read_bytes()).hexdigest();cls.stamp=cls.save.stat().st_mtime
        rg_sim.MEMBER_NAMES=ROOT/'build/calculation/member-names.json'
        cls.r=rg_goal.Runner(ROOT/'build/calculation/game.py',save_path=cls.save,research_json=ROOT/'build/calculation/research.json',
            event_cache=dict(ne=7,nes=1793192460,nee=1793822340))
        cls.templates=json.loads((ROOT/'docs/A1-build-templates.json').read_text(encoding='utf-8'))
        cls.plan=dict(alignment='neutral',faction='Titan',bloodline='Dwarven',prestige='Dragon',merc=[],
                      research=cls.templates['research']['R60-62 DNTT (prod, e57+)']['tp'].split(','))

    @classmethod
    def tearDownClass(cls):
        assert cls.sha==hashlib.sha256(cls.save.read_bytes()).hexdigest() and cls.stamp==cls.save.stat().st_mtime

    def test_missing_dragon_rejects_partial_score(self):
        p=dict(self.plan,prestige=None);original=copy.deepcopy(p)
        with self.assertRaises(TemplateEvaluationError) as cm:evaluate_template(self.r,p,'production',300)
        self.assertIsNone(cm.exception.result['value'])
        self.assertEqual({x['item'] for x in cm.exception.issues},{'S1450','C1300','C1500','D1175','E1225'})
        self.assertEqual(p,original)

    def test_complete_plan_reproduces_community_value(self):
        out=evaluate_template(self.r,self.plan,'production',300)
        self.assertTrue(out['validated']);self.assertEqual(len(out['research']),32)
        self.assertEqual(out['value'],3.103475240308911e154)

    def test_mercenary_spell_contracts_are_actually_bought(self):
        text=self.templates['mercenary']['R60+ Autoclicker Trophy (Elfline Neutral Merc)']['tp']
        p=dict(alignment='neutral',faction='Mercenary',bloodline='Elven',prestige=None,**parse_templates('',text))
        out=evaluate_template(self.r,p,'production',300)
        self.assertEqual(set(out['merc_spell_times']),{'Lightning Strike',"Dragon's Breath"})
        self.assertEqual(len(out['merc_times']),12)
        out=evaluate_template(self.r,p,'production',300,spell="Dragon's Breath")
        self.assertTrue(out['validated'])

    def test_underworld_constraint_is_client_rule_not_purchase_deadlock(self):
        evaluate_template(self.r,self.plan,'production',300)
        try:
            for u in self.r.research.values():u.S__3c__21_7=False
            self.r.underworld.S__3c__21_7=False
            self.r.sim.refresh()
            u=self.r.research[self.r.by_code['S1450']]
            self.assertTrue(u.S__3f__21_6 and u.S__22_h and u.S_9_21__25_)
            self.assertFalse(self.r.sim.game_call('buyUpgrade',u,True))
            self.r.underworld.S__3c__21_7=True
            self.assertTrue(self.r.sim.game_call('buyUpgrade',u,True))
        finally:self.r.reset()

    def test_known_event_is_not_erased_after_thirty_minutes(self):
        out=evaluate_template(self.r,self.plan,'production',3600)
        self.assertEqual(self.r.ns['PlayFab'].season,7)
        self.assertEqual(out['value'],5.473442675615834e157)

    def test_economic_objectives_count_direct_income_without_changing_the_run(self):
        production=evaluate_template(self.r,self.plan,'production',60)
        earned=self.r.G.S_5_21_V[0]
        expected_gems=self.r.sim.core_call('getGemsReset')
        self.assertGreater(earned,60*production['value'])
        coins=evaluate_template(self.r,self.plan,'coins',60)
        self.assertEqual(coins['value'],earned)
        self.assertTrue(all(a[1]<=b[1] for a,b in zip(coins['curve'],coins['curve'][1:])))
        gems=evaluate_template(self.r,self.plan,'gems',60)
        self.assertEqual(gems['value'],expected_gems)

    def test_short_horizon_old_winners_keep_exact_curves(self):
        for name,goal in [('accepted-max_mana-60.json','max_mana'),('accepted-mana_regen-60.json','mana_regen')]:
            data=json.loads((ROOT/'build/benchmarks/build-search'/name).read_text(encoding='utf-8'));row=data['best'][0]
            actual=evaluate_template(self.r,row['plan'],goal,60)
            self.assertEqual(actual['value'],row['value']);self.assertEqual([list(p) for p in actual['curve']],row['curve'])

    def test_research_waits_past_thirty_seconds_without_being_removed(self):
        sid=self.r.by_code['S1450'];buy=self.r._buy;attempts=[]
        def delayed(item):
            if item==sid:
                t=self.r.tl.ticks/30
                attempts.append(t)
                if t<45:return False
            return buy(item)
        self.r._buy=delayed
        try:
            out=evaluate_template(self.r,self.plan,'production',60)
            self.assertTrue(out['validated'])
            self.assertIn('S1450',out['research'])
            self.assertEqual(out['plan'],self.plan)
            self.assertTrue(any(t>=45 for t in attempts))
            self.assertEqual(out['research_times']['S1450'],45)
        finally:self.r._buy=buy

    def test_reach_does_not_finish_before_mandatory_purchase(self):
        sid=self.r.by_code['S1450'];buy=self.r._buy
        def delayed(item):
            return False if item==sid and self.r.tl.ticks/30<45 else buy(item)
        self.r._buy=delayed
        try:
            out=evaluate_template(self.r,self.plan,'production',60,target=1)
            self.assertTrue(out['reached'])
            self.assertGreaterEqual(out['time'],45)
            self.assertIn('S1450',out['research'])
        finally:self.r._buy=buy



if __name__=='__main__':unittest.main(verbosity=2)
