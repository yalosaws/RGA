"""在独立内存存档上试买建筑、升级、施法，输出动作前后的实际数值。

python -X utf8 -I 脚本/rg_growth.py build/rg_game.py --building Farm --count 10
python -X utf8 -I 脚本/rg_growth.py build/rg_game.py --spell "Tax Collection"
所有动作调用转写出的游戏函数；不会向正在运行的游戏输入，也不写回存档。
这里只做即时动作比较，尚不预测持续自动建造、随机事件或未来施法策略。
"""
import argparse
import json
import inspect
from pathlib import Path
import sys

sys.path.insert(0, str(Path(__file__).resolve().parent))

import rg_sim
from as2py import mangle


class Simulation:
    def __init__(self, game_py, sol_path=rg_sim.SOL, **context):
        self.preserve_live_caches = False
        self.ns, self.G, self.g = rg_sim.make_game(game_py, sol_path, require_pcode=True, **context)
        self.core = self.ns['S__23__21__21_']
        self.core_names = rg_sim._real2obf()
        self.game_names = rg_sim._real2obf('§8G§')

    def game_call(self, name, *args):
        attr = self.game_names[name]
        # Game 继承界面桩，普通 getattr 会把拼错/缺失的调用静默吞掉。
        inspect.getattr_static(self.g, attr)
        return getattr(self.g, attr)(*args)

    def core_call(self, name, *args):
        return getattr(self.core, self.core_names[name])(*args)

    def refresh(self):
        self.game_call('invalidateAllCache')

    def snapshot(self, refresh=True, *, cached=False):
        if refresh:
            self.refresh()
        out = rg_sim.production(self.ns, cached=cached)
        out.update(coins=getattr(self.G, self.game_names['resource']),
                   mana=getattr(self.G, self.game_names['mana']),
                   max_mana=self.core_call('getMaxMana'),
                   mana_per_second=30 * self.core_call('getManaPerTick'))
        return out

    def find(self, collection, name_or_sid):
        # 对外使用存档 ID；客户端运行时 id 随初始化顺序分配，不能混用。
        candidates = [x for x in collection if x.S_1i == name_or_sid or str(x.S_6_21_Z) == str(name_or_sid)]
        if len(candidates) != 1:
            raise ValueError('名称/存档 ID 需要唯一匹配：%r（找到 %d 项）' % (name_or_sid, len(candidates)))
        return candidates[0]

    def buy_building(self, name_or_sid, count=1):
        if isinstance(count, bool) or not isinstance(count, int) or not 1 <= count <= 10000:
            raise ValueError('建筑数量必须是 1～10000 的整数')
        b = self.find(self.G.S__25__3c_, name_or_sid)
        if b.S__2c__21_Y not in (0, self.G.S__2c__21_Y):
            raise ValueError('当前立场不能购买该建筑')
        mode = mangle('§[!M§')
        old = getattr(self.G, mode)
        before = b.S__21_a
        try:
            # 单买模式，绕过存档中的“买最大”等界面选择；不使用免费购买参数。
            setattr(self.G, mode, 0)
            for _ in range(count):
                q = b.S__21_a
                self.game_call('buyBuilding', b)
                if b.S__21_a == q:
                    break
        finally:
            setattr(self.G, mode, old)
        if not self.preserve_live_caches:
            self.refresh()
        return dict(action='building', name=b.S_1i, purchased=b.S__21_a - before,
                    requested=count, quantity=b.S__21_a)

    def buy_upgrade(self, name_or_sid):
        u = self.find(self.G.S__2d__21_4, name_or_sid)
        owned_before = bool(u.S__3c__21_7)
        # param2 关闭“顺便购买同组后续项”；保留游戏自己的可见性、资源、前置条件判断。
        purchased = False if owned_before else bool(self.game_call('buyUpgrade', u, True))
        if not self.preserve_live_caches:
            self.refresh()
        return dict(action='upgrade', name=u.S_1i, purchased=purchased,
                    owned_before=owned_before, owned_after=bool(u.S__3c__21_7))

    def cast(self, name_or_sid):
        s = self.find(self.G.S_0_21_A, name_or_sid)
        # useSpell 是界面内部入口，不检查可见性；对外调用前补上这项检查。
        if not s.S__2d_6:
            raise ValueError('当前存档尚不能使用该法术')
        cast = bool(self.game_call('useSpell', s))
        if not self.preserve_live_caches:
            self.refresh()
        return dict(action='spell', name=s.S_1i, cast=cast, active=bool(s.S_23),
                    active_ticks=s.S__27__21_X, tier=s.S__60_r)

    def compare(self, action, target, count=1, *, before=None, use_cache=False):
        before = self.snapshot(cached=use_cache) if before is None else dict(before)
        if action == 'building':
            result = self.buy_building(target, count)
        elif action == 'upgrade':
            result = self.buy_upgrade(target)
        elif action == 'spell':
            result = self.cast(target)
        else:
            raise ValueError('未知动作：' + action)
        # 动作入口已经使缓存失效；读取时不再清空刚算出来的结果。
        after = self.snapshot(refresh=False, cached=use_cache)
        return dict(action=result, before=before, after=after,
                    production_change=after['total'] - before['total'],
                    production_ratio=after['total'] / before['total'] if before['total'] else None)


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('game_py')
    ap.add_argument('--save', default=rg_sim.SOL)
    actions = ap.add_mutually_exclusive_group(required=True)
    actions.add_argument('--building')
    actions.add_argument('--upgrade')
    actions.add_argument('--spell')
    ap.add_argument('--count', type=int, default=1)
    args = ap.parse_args()
    sim = Simulation(args.game_py, args.save)
    action = next(n for n in ('building', 'upgrade', 'spell') if getattr(args, n) is not None)
    result = sim.compare(action, getattr(args, action), args.count)
    print(json.dumps(result, ensure_ascii=False, indent=2, allow_nan=False))


if __name__ == '__main__':
    main()
