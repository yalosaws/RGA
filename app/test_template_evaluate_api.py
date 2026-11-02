"""穿过真实程序进程桥，确保残缺模板报错且不给数值。"""
import hashlib
import json
from pathlib import Path
import sys
import unittest

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'app'));sys.path.insert(0,str(ROOT/'scripts'))
from build_engine import EngineClient
import rg_sim


class TemplateApiTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.path=ROOT/'build/mechanics-audit/input.sol';cls.original=hashlib.sha256(cls.path.read_bytes()).hexdigest()
        cls.client=EngineClient()
        result=cls.client.request(dict(op='load',save=rg_sim.save_text(cls.path),timestamp=cls.path.stat().st_mtime))
        assert result['ok'],result
        cls.revision=result['revision']
        template=json.loads((ROOT/'docs/A1-build-templates.json').read_text(encoding='utf-8'))['research']['R60-62 DNTT (prod, e57+)']['tp']
        cls.plan=dict(alignment='neutral',faction='Titan',bloodline='Dwarven',prestige='Dragon',research_template=template,merc_template='')

    @classmethod
    def tearDownClass(cls):
        cls.client.close()
        assert cls.original==hashlib.sha256(cls.path.read_bytes()).hexdigest()

    def test_missing_items_report_error_with_no_score(self):
        out=self.client.request(dict(op='template_evaluate',revision=self.revision,goal='production',at=300,plan=dict(self.plan,prestige=None)))
        self.assertFalse(out['ok'],out)
        self.assertIsNone(out['evaluation']['value'])
        self.assertIn('S1450',out['error'])

    def test_complete_template_has_validated_result(self):
        out=self.client.request(dict(op='template_evaluate',revision=self.revision,goal='production',at=300,plan=self.plan))
        self.assertTrue(out['ok'],out)
        self.assertTrue(out['evaluation']['validated'])
        self.assertEqual(out['evaluation']['value'],3.103475240308911e154)
        self.assertEqual(len(out['evaluation']['research']),32)

    def test_stale_save_does_not_start_evaluation(self):
        out=self.client.request(dict(op='template_evaluate',revision='stale',goal='production',at=300,plan=self.plan))
        self.assertFalse(out['ok'])
        self.assertNotIn('evaluation',out)


if __name__=='__main__':unittest.main(verbosity=2)
