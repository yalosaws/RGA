"""严格模板评测的失败边界和活动上下文；不启动原生世界。"""
import json
from pathlib import Path
import random
import struct
import sys
import unittest
from types import SimpleNamespace as NS

from rg_evaluate import parse_templates,validate_plan,missing_items,TemplateEvaluationError
from rg_events import configure,read_schedule

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'app'))
from template_store import string


class EvaluationRules(unittest.TestCase):
    def runner(self):
        return NS(by_code={'S30':1},merc_codes=lambda:{'FR1':NS()},G=NS(S_0_21_A=[NS(S_1i="Dragon's Breath")]))

    def plan(self,**changes):
        return dict(dict(alignment='neutral',faction='Titan',bloodline='Dwarven',prestige='Dragon',research=['S30'],merc=[]),**changes)

    def test_template_modifiers_are_preserved(self):
        p=parse_templates('S30, S400','FR1,MA:EL7,SP:Lightning Strike,SP:Dragon\'s Breath')
        self.assertEqual(p['research'],['S30','S400'])
        self.assertEqual(p['merc_alliance'],['EL7'])
        self.assertEqual(p['merc_spells'],['Lightning Strike',"Dragon's Breath"])
        for token in ['A2950:FR','SP:Lightning Strike']:
            with self.assertRaises(TemplateEvaluationError):parse_templates(token,'')

    def test_unknown_duplicate_and_incompatible_inputs_fail_closed(self):
        for p in [self.plan(research=['S999999']),self.plan(research=['S30','S30']),
                  self.plan(alignment='good'),self.plan(merc=['FR1']),self.plan(merc_spells=None)]:
            with self.subTest(plan=p),self.assertRaises(TemplateEvaluationError) as cm:
                validate_plan(self.runner(),p,'production',300)
            self.assertIsNone(cm.exception.result['value'])
            self.assertFalse(cm.exception.result['validated'])
        validate_plan(self.runner(),self.plan(),'production',300)

    def test_actual_ownership_catches_early_reach_without_skipped_flags(self):
        owned=NS(S__3c__21_7=True,S_1i='selected')
        absent=NS(S__3c__21_7=False,S__22_h=True,S__2d_6=True,S_9_21__25_=True,
                  S__3f__21_6=True,S_9_21__3f_=lambda:False,S__3e_I=lambda:False)
        r=NS(ups={388:owned,382:owned,150:owned,600:owned},research={1:absent},by_code={'S30':1},underworld=None,merc_codes=lambda:{})
        out=dict(ok=True,reached=True,time=2,value=100,skipped=[],research_ready=1)
        problems=missing_items(r,self.plan(),out)
        self.assertEqual([p['item'] for p in problems],['S30'])
        self.assertEqual(problems[0]['code'],'research_unbought')

    def test_event_cache_reader_only_extracts_schedule(self):
        name=b'rg-cache';body=b'TCSO\x00\x04\x00\x00\x00\x00'+len(name).to_bytes(2,'big')+name+b'\x00\x00\x00\x03'
        for k,v in {'ne':7,'nes':1793192460,'nee':1793822340,'other':123}.items():
            body+=string(k)+b'\x05'+struct.pack('>d',v)+b'\x00'
        raw=b'\x00\xbf'+len(body).to_bytes(4,'big')+body
        folder=ROOT/'build/test-events';folder.mkdir(parents=True,exist_ok=True)
        p=folder/'cache-reader-test.sol'
        try:
            p.write_bytes(raw);schedule,source=read_schedule(p)
            self.assertEqual(schedule,dict(ne=7,nes=1793192460,nee=1793822340))
            self.assertEqual(source['source'],'rg-cache')
            self.assertEqual(p.read_bytes(),raw)
        finally:p.unlink(missing_ok=True)

    def test_setting_environment_does_not_consume_game_random_stream(self):
        class Service:
            season=7
            def __setattr__(self,key,value):
                random.random();object.__setattr__(self,key,value)
        sim=NS(native=False,ns={'PlayFab':Service(),'_snapshot_clock':{'timestamp':1793483272}})
        before=random.getstate()
        info=configure(sim,dict(ne=7,nes=1793192460,nee=1793822340),dict(source='provided'))
        self.assertEqual(random.getstate(),before)
        self.assertEqual(info['policy'],'cached_schedule')
        self.assertEqual(sim.ns['PlayFab'].seasonNE,7)
        info=configure(sim,{},dict(source='missing'))
        self.assertEqual(info['policy'],'hold_saved_season')
        self.assertEqual(random.getstate(),before)


if __name__=='__main__':unittest.main(verbosity=2)
