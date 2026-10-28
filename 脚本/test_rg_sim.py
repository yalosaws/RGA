"""转写计算的集成回归；需要已生成的游戏模块和本机/指定存档。

python -X utf8 -I 脚本/test_rg_sim.py [build/rg_installed_game.py] [存档.sol]
测试始终只操作内存副本，结束后核对输入存档没有被写入。
"""
from pathlib import Path
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parent))
import rg_sim
from rg_growth import Simulation
from as2py import mangle

ROOT = Path(__file__).resolve().parents[1]
GAME = Path(sys.argv[1]) if len(sys.argv) > 1 else ROOT / 'build/rg_installed_game.py'
SAVE = Path(sys.argv[2]) if len(sys.argv) > 2 else Path(rg_sim.SOL)


class SimulationTests(unittest.TestCase):
    @classmethod
    def setUpClass(cls):
        cls.raw = SAVE.read_bytes()
        cls.temp = tempfile.TemporaryDirectory()
        cls.save = Path(cls.temp.name) / 'snapshot.sol'
        cls.save.write_bytes(cls.raw)

    @classmethod
    def tearDownClass(cls):
        assert cls.save.read_bytes() == cls.raw, '模拟器写入了输入存档'
        cls.temp.cleanup()

    def setUp(self):
        self.sim = Simulation(str(GAME), str(self.save))

    def test_real_named_method_is_not_swallowed_by_stub(self):
        self.assertEqual(self.sim.game_names['useSpell'], 'useSpell')
        self.assertNotIsInstance(getattr(self.sim.g, 'useSpell'), rg_sim.R.StubValue)

    def test_total_includes_assistant_income_and_is_repeatable(self):
        first = self.sim.snapshot()
        self.assertEqual(first, self.sim.snapshot())
        # 独立走客户端的助手点击奖励计算，防止把玩家点击值误用于助手。
        expected = self.sim.core_call('getResourcePerClickReal', True)
        self.assertEqual(first['assistant_click'], expected)
        self.assertEqual(first['total'], first['buildings'] + first['assistants'])
        if first['assistant_count'] > 0 and expected > 0:
            self.assertGreater(first['total'], first['buildings'])

    def test_building_purchase_obeys_cost_and_single_buy_mode(self):
        sim = self.sim
        b = sim.find(sim.G.S__25__3c_, 'Farm')
        sim.snapshot()
        cost = sim.core_call('getBuildingCost', b, 1)
        before_coins = getattr(sim.G, sim.game_names['resource'])
        before_q = b.S__21_a
        if cost > before_coins or cost <= 0:
            self.skipTest('当前存档买不起一栋 Farm')
        # 即使存档选择“买最大”，模拟要求的一次购买也只能买一栋。
        setattr(sim.G, mangle('§[!M§'), 6)
        result = sim.buy_building('Farm')
        self.assertEqual(result['purchased'], 1)
        self.assertEqual(getattr(sim.G, mangle('§[!M§')), 6)
        self.assertEqual(b.S__21_a, before_q + 1)
        after_coins = getattr(sim.G, sim.game_names['resource'])
        self.assertAlmostEqual(after_coins / (before_coins - cost), 1, places=12)

    def test_no_money_cannot_buy_building(self):
        sim = self.sim
        setattr(sim.G, sim.game_names['resource'], 0)
        self.assertEqual(sim.buy_building('Farm')['purchased'], 0)
        self.assertEqual(getattr(sim.G, sim.game_names['resource']), 0)

    def test_tax_collection_spends_mana_and_awards_coins(self):
        sim = self.sim
        s = sim.find(sim.G.S_0_21_A, 'Tax Collection')
        before = sim.snapshot()
        cost = sim.core_call('getSpellCost', s)
        if before['mana'] < cost or not s.S__2d_6:
            self.skipTest('当前存档无法施放征税')
        self.assertTrue(sim.cast('Tax Collection')['cast'])
        after = sim.snapshot()
        self.assertAlmostEqual(after['mana'], before['mana'] - cost)
        self.assertGreater(after['coins'], before['coins'])

    def test_no_mana_cannot_cast(self):
        sim = self.sim
        setattr(sim.G, sim.game_names['mana'], 0)
        self.assertFalse(sim.cast('Tax Collection')['cast'])

    def test_upgrade_purchases_and_cannot_purchase_twice(self):
        sim = self.sim
        u = sim.find(sim.G.S__2d__21_4, 'Spiked Floor')
        if u.S__3c__21_7 or not getattr(u, 'S__2d_6', False):
            self.skipTest('当前存档不适合购买 Spiked Floor')
        before = sim.snapshot()
        result = sim.buy_upgrade('Spiked Floor')
        if not result['purchased']:
            self.skipTest('当前存档不满足 Spiked Floor 的购买条件')
        self.assertTrue(u.S__3c__21_7)
        self.assertLess(sim.snapshot()['coins'], before['coins'])
        self.assertFalse(sim.buy_upgrade('Spiked Floor')['purchased'])

    def test_separate_sessions_do_not_share_game_state(self):
        other = Simulation(str(GAME), str(self.save))
        q = other.find(other.G.S__25__3c_, 'Farm').S__21_a
        self.sim.find(self.sim.G.S__25__3c_, 'Farm').S__21_a += 7
        self.assertEqual(other.find(other.G.S__25__3c_, 'Farm').S__21_a, q)

    def test_platform_and_clock_are_not_stubs(self):
        sim = self.sim
        self.assertIsInstance(sim.ns['PlayFab'].season, int)
        self.assertEqual(sim.ns['PlayFab'].season, sim.g.S__5e_4)
        self.assertEqual(sim.ns['PlayFab'].serverTime, -1)
        stats = sim.ns['S__26_c']
        names = rg_sim._real2obf('§&c§')
        stamp = getattr(stats, names['getTimestamp'])()
        self.assertGreater(stamp, 1400000000)
        self.assertAlmostEqual(stamp, sim.ns['_snapshot_context']['timestamp'], delta=0.51)

    def test_royal_exchange_lookup_is_initialized_without_ui(self):
        sim = self.sim
        stats = sim.ns['S__26_c']
        names = rg_sim._real2obf('§&c§')
        for faction in (0, 1, 10):
            self.assertGreater(getattr(stats, names['getExchangeOCD'])(faction), 0)


if __name__ == '__main__':
    unittest.main(argv=[sys.argv[0]])
