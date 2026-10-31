"""对结构化实时样本测试计算桥、缓存口径和状态隔离；不读写游戏进程。"""
from copy import deepcopy
import json
from pathlib import Path
import sys
import unittest

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(ROOT/'app'))
sys.path.insert(0, str(ROOT/'scripts'))
from build_engine import EngineClient
import rg_sim


class LiveEngineTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.sample = json.loads((ROOT/'build/live-state-candidate.json').read_text(encoding='utf-8'))
        cls.save = rg_sim.save_text()
        cls.client = EngineClient()
        cls.loaded = cls.load_sample(cls.sample)
        if not cls.loaded['ok']:
            cls.client.close()
            raise AssertionError(cls.loaded)

    @classmethod
    def load_sample(cls, sample, action=None):
        return cls.client.request(dict(op='load_live', save=cls.save, timestamp=sample['observed_at'],
                                       live_snapshot=sample, action=action))

    @classmethod
    def tearDownClass(cls):
        cls.client.close()

    def test_live_cache_values_are_preserved(self):
        cache, calculated = self.sample['classes']['#!!'], self.loaded['snapshot']
        for key, flag, field, factor in [('buildings','0!0','+!J',30), ('max_mana','"f','@Y',1),
                ('mana_per_second','+O',']N',30),('assistant_count','8&','&!7',1),
                ('assistant_click',';!Q',"'X",1),('assistant_multiplier','7!Y','+!E',1)]:
            if not cache[flag]:
                self.assertEqual(calculated[key], cache[field]*factor)
        self.assertEqual(calculated['coins'],self.sample['classes']['8G']['7p']['value'])
        self.assertEqual(calculated['mana'],self.sample['classes']['8G'][' T']['value'])
        self.assertEqual(self.loaded['source'],'游戏实时快照')

    def test_current_owned_states_use_live_upgrades(self):
        expected = {str(row['fields']['6!Z']): bool(row['fields']['<!7']) for row in self.sample['objects']['upgrades'] if row['fields']['6!Z']}
        for row in self.loaded['catalog']:
            if row['kind']=='upgrade' and row['sid'] in expected:
                self.assertEqual(row['owned'], expected[row['sid']])

    def test_repeat_trials_start_at_the_same_live_snapshot(self):
        key = next(row['key'] for row in self.loaded['catalog'] if row['name']=='Farm')
        first = self.load_sample(self.sample, dict(key=key,count=1))
        second = self.load_sample(self.sample, dict(key=key,count=1))
        self.assertTrue(first['ok'],first)
        self.assertEqual(first['comparison'],second['comparison'])
        self.assertEqual(first['comparison']['before'],self.loaded['snapshot'])
        self.assertEqual(first['comparison']['action']['purchased'],1)

    def test_new_live_sample_changes_the_revision_and_mana(self):
        sample = deepcopy(self.sample)
        sample['observed_at'] += .5
        sample['classes']['8G'][' T']['value'] = 0
        loaded = self.load_sample(sample)
        self.assertTrue(loaded['ok'],loaded)
        self.assertEqual(loaded['snapshot']['mana'],0)
        self.assertNotEqual(loaded['revision'],self.loaded['revision'])
        stale = self.client.request(dict(op='compare',revision=self.loaded['revision'],key='building:9',count=1))
        self.assertFalse(stale['ok'])

    def test_missing_inputs_do_not_reuse_old_save(self):
        for change in ('field','class','unstable','clock','hash'):
            sample = deepcopy(self.sample)
            sample['observed_at'] += 1
            if change=='field': del sample['objects']['spells'][0]['fields']['23']
            if change=='class': del sample['classes']['#!!']
            if change=='unstable': sample['copy_consistent']=False
            if change=='clock': sample.pop('frame_timer_ms')
            if change=='hash': sample['swf_sha256']='wrong'
            result = self.load_sample(sample)
            self.assertFalse(result['ok'],change)
            old = self.client.request(dict(op='compare',revision=self.loaded['revision'],key='building:9',count=1))
            self.assertFalse(old['ok'],change)


if __name__=='__main__':
    unittest.main(verbosity=2)
