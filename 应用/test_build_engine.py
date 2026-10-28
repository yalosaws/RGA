"""用固定游戏存档穿过程序进程桥测试，不写回存档。"""
from pathlib import Path
import sys
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parent))
from build_engine import EngineClient

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT / '脚本'))
import rg_sim


class BuildEngineTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.path = ROOT / 'build/production-check3.sol'
        cls.raw = cls.path.read_bytes()
        cls.client = EngineClient()
        cls.loaded = cls.client.request(dict(op='load', save=rg_sim.save_text(cls.path), timestamp=cls.path.stat().st_mtime))
        if not cls.loaded['ok']:
            cls.client.close()
            raise AssertionError(cls.loaded)
        cls.revision = cls.loaded['revision']

    @classmethod
    def tearDownClass(cls):
        cls.client.close()
        assert cls.path.read_bytes() == cls.raw, '计算进程写入了游戏存档'

    def request(self, op, **kw):
        return self.client.request(dict(op=op, revision=self.revision, **kw))

    def key(self, name):
        return next(item['key'] for item in self.loaded['catalog'] if item['name'] == name)

    def test_snapshot_and_complete_research_catalog(self):
        snap = self.loaded['snapshot']
        self.assertEqual(snap['total'], 5.330346726772448e44)
        self.assertEqual(snap['total'], snap['buildings'] + snap['assistants'])
        self.assertEqual(snap['assistant_count'], 51816)
        # 这些研究在汇总函数中直接处理，不能只抓有统一方法的研究。
        codes = {item['code'] for item in self.loaded['catalog']}
        for code in ('C200', 'A400', 'S550', 'D1275', 'E3300', 'W3150', 'A270'):
            self.assertIn(code, codes)
        explosives = next(item for item in self.loaded['catalog'] if item['code'] == 'A270')
        self.assertEqual(explosives['labels'], ['建筑产出'])

    def test_effect_uses_client_formula(self):
        result = self.request('describe', keys=[self.key('Explosives'), self.key('Commerce'), self.key('Synthesis')])
        self.assertTrue(result['ok'], result)
        effects = result['items'][0]['effects']
        self.assertAlmostEqual(effects[0]['value'], 5176.315011906202)
        self.assertEqual(effects[0]['unit'], '%')
        self.assertTrue(result['items'][0]['description'])
        self.assertIn('考古深度', result['items'][0]['description'])
        self.assertNotIn('Project-Id-Version', result['items'][0]['description'])
        self.assertEqual(result['items'][1]['effects'][0]['unit'], '')  # 商贸增加助手数量，不是百分比。

    def test_repeat_actions_start_from_original_snapshot(self):
        key = self.key('Farm')
        first = self.request('compare', key=key, count=10)
        second = self.request('compare', key=key, count=10)
        self.assertTrue(first['ok'], first)
        self.assertEqual(first, second)
        self.assertEqual(first['action']['purchased'], 10)
        self.assertEqual(first['after']['total'], 5.3313786171946314e44)
        self.assertEqual(first['before'], self.loaded['snapshot'])

    def test_stale_save_invalid_action_and_owned_upgrade(self):
        result = self.client.request(dict(op='compare', revision='outdated', key=self.key('Farm')))
        self.assertFalse(result['ok'])
        self.assertFalse(self.request('compare', key='building:invalid')['ok'])
        self.assertFalse(self.request('compare', key=self.key('Farm'), count=0)['ok'])
        owned = self.request('compare', key=self.key('Synthesis'))
        self.assertTrue(owned['ok'], owned)
        self.assertFalse(owned['success'])
        self.assertIn('已拥有', owned['reason'])

    def test_spell_and_insufficient_money_keep_client_limits(self):
        result = self.request('compare', key=self.key('Tax Collection'))
        self.assertTrue(result['ok'], result)
        self.assertTrue(result['success'])
        self.assertEqual(result['before']['mana'] - result['after']['mana'], 160)
        result = self.request('compare', key=self.key('Farm'), count=100)
        self.assertTrue(result['ok'], result)
        self.assertEqual(result['action']['purchased'], 75)
        self.assertGreaterEqual(result['after']['coins'], 0)

    def test_z_future_save_format_rejected_without_default_values(self):
        import base64
        import zlib
        raw = bytearray(rg_sim.save_bytes(self.path))
        raw[:2] = b'\x00\x3b'  # 格式 59；客户端会直接跳过载入。
        encrypted = bytes(value ^ rg_sim.KEY[i % len(rg_sim.KEY)] for i, value in enumerate(raw))
        text = '$00s' + base64.b64encode(zlib.compress(encrypted)).decode() + '$e'
        result = self.client.request(dict(op='load', save=text, timestamp=self.path.stat().st_mtime))
        self.assertFalse(result['ok'])
        self.assertIn('59', result['error'])
        self.assertFalse(self.request('compare', key=self.key('Farm'))['ok'])


if __name__ == '__main__':
    unittest.main(verbosity=2)
