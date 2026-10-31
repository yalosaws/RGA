"""用游戏自己连续写下的存档核对连续模拟。

python -X utf8 -I scripts/verify_timeline.py build/calculation/game.py <存档目录> [--output 结果.json]

存档目录里的文件按游戏写入时间命名（<mtime>.sol，可由脚本复制游戏存档得到）。
对每对相邻存档：从前一份开始，不买东西、不点击往前推进，在模拟里游戏自己调用 save()
的那一刻记下状态（游戏在 tick 中间存档：整秒处理之后、回魔和自动施法之前），
和后一份存档逐项比较。玩家在这段时间里买过东西、手动点过的，比较没有意义，
按建筑数量、已买升级和点击 / 购买统计判断后标出来。
"""
import argparse
import json
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parent))

import rg_growth
import rg_sim
from rg_timeline import Timeline, restore_spell_ends, spell_timers

# 统计编号（Game.§5!V§）：0 本局产出金币，4 点击次数，12 建造建筑数，16 本局产生魔力，26 花在建筑上的金币
STATS = {0: '本局产出金币', 4: '点击次数', 12: '建造建筑数', 16: '本局产生魔力', 26: '建筑花费'}
# 不买、不手动点时，这些统计应和模拟一致（自动点击升级也会加点击次数，所以和模拟比，不和前一份比）
PLAYER_STATS = (4, 12, 26)


def state(sim):
    G = sim.G
    stats = G.S_5_21_V
    return dict(
        coins=getattr(G, sim.game_names['resource']), mana=getattr(G, sim.game_names['mana']),
        stats={k: stats[k] for k in STATS},
        buildings={b.S_1i: b.S__21_a for b in G.S__25__3c_ if b.S__21_a},
        upgrades=sorted(u.S_1i for u in G.S__2d__21_4 if u.S__3c__21_7),
        spells={s.S_1i: s.S__27__21_X for s in G.S_0_21_A if s.S_23})


def rel(a, b):
    if a == b:
        return 0.0
    return abs(a - b) / max(abs(a), abs(b))


def compare_pair(game_py, a_path, b_path, history=(), loaded=None):
    import random
    random.seed(0)   # 随机事件用 Python 的随机数，不能复现游戏的；固定种子让核对结果可重复
    ta, tb = float(a_path.stem), float(b_path.stem)
    seconds = tb - ta
    real_a = state(rg_growth.Simulation(game_py, str(a_path), timestamp=ta))
    real_b = state(rg_growth.Simulation(game_py, str(b_path), timestamp=tb))
    player = []
    if real_a['buildings'] != real_b['buildings']:
        player.append('建筑数量变了')
    if real_a['upgrades'] != real_b['upgrades']:
        player.append('买了升级：' + '、'.join(sorted(set(real_b['upgrades']) - set(real_a['upgrades'])))[:200])
    sim = rg_growth.Simulation(game_py, str(a_path), timestamp=ta)
    # 生效中法术的结束帧按施放后最早的存档还原（存档本身不存结束帧）
    loaded = {} if loaded is None else loaded

    def load(path):
        if path not in loaded:
            loaded[path] = spell_timers(rg_growth.Simulation(game_py, str(path), timestamp=float(path.stem)))
        return loaded[path]
    spell_ends = restore_spell_ends(sim, ta, [(float(h.stem), h) for h in history], load)
    # 收下游戏自己写出的存档字符串（make_game 默认每次 getLocal 都给新对象，写入就丢了）
    store = rg_sim._SO('')
    sim.ns['SharedObject'].getLocal = staticmethod(lambda *args: store)
    tl = Timeline(sim, buy_interval=None, buy_upgrades=False, buy_buildings=False)
    tl.finish_save_tick()
    saves = []
    save_attr = sim.game_names['save']
    original = getattr(sim.g, save_attr)

    def capture(*args):
        result = original(*args)
        saves.append((tl.seconds, str(store.data['save'])))
        return result
    setattr(sim.g, save_attr, capture)
    result = tl.run(seconds + 2, sample_every=seconds + 2)
    if not saves:
        raise ValueError('模拟期间游戏没有存档')
    save_t, text = min(saves, key=lambda x: abs(x[0] - seconds))
    # 和真实存档同样经过一次 load 再比（load 会调整部分字段，例如魔力）
    simulated = state(rg_growth.Simulation(game_py, encoded_save=text, timestamp=tb))
    sim_bytes, real_bytes = rg_sim.decode_save_bytes(text), rg_sim.decode_save_bytes(rg_sim.save_text(str(b_path)))
    differing = sum(1 for x, y in zip(sim_bytes, real_bytes) if x != y) + abs(len(sim_bytes) - len(real_bytes))
    for k in PLAYER_STATS:
        if simulated['stats'][k] != real_b['stats'][k]:
            player.append('%s 和模拟不同' % STATS[k])
    gained_real = real_b['stats'][0] - real_a['stats'][0]
    gained_sim = simulated['stats'][0] - real_a['stats'][0]
    mana_real = real_b['stats'][16] - real_a['stats'][16]
    mana_sim = simulated['stats'][16] - real_a['stats'][16]
    return dict(
        a=a_path.name, b=b_path.name, seconds=seconds, sim_save_at=save_t, ticks=result['ticks'], wall_seconds=result['wall_seconds'],
        player_actions=player, comparable=not player,
        spell_ends=[dict(r, source=r['source']) for r in spell_ends],
        save_bytes=dict(total=len(real_bytes), differing=differing, same_length=len(sim_bytes) == len(real_bytes)),
        coins_produced=dict(real=gained_real, sim=gained_sim, rel_error=rel(gained_real, gained_sim)),
        mana_produced=dict(real=mana_real, sim=mana_sim, rel_error=rel(mana_real, mana_sim)),
        coins=dict(real=real_b['coins'], sim=simulated['coins'], rel_error=rel(real_b['coins'], simulated['coins'])),
        mana=dict(real=real_b['mana'], sim=simulated['mana']),
        spells=dict(real=real_b['spells'], sim=simulated['spells']),
        stats_mismatch={STATS[k]: [real_b['stats'][k], simulated['stats'][k]]
                        for k in STATS if k not in (0, 16) and real_b['stats'][k] != simulated['stats'][k]})


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('game_py')
    ap.add_argument('saves')
    ap.add_argument('--output')
    args = ap.parse_args()
    files = sorted(Path(args.saves).glob('*.sol'), key=lambda p: float(p.stem))
    rows, loaded = [], {}
    for i, (a, b) in enumerate(zip(files, files[1:])):
        if not 29 <= float(b.stem) - float(a.stem) <= 31:
            # 不是 30 秒一次的自动存档（玩家操作会提前存档），这一对不比
            print('%s → %s  间隔 %.1f 秒，不是自动存档，跳过' % (a.stem, b.stem, float(b.stem) - float(a.stem)), file=sys.stderr)
            continue
        row = compare_pair(args.game_py, a, b, files[:i], loaded)
        rows.append(row)
        print('%s → %s  %.1f 秒  %s  存档不同字节 %d/%d  金币产出误差 %.3g%%  魔力误差 %.3g%%  %s' % (
            a.stem, b.stem, row['seconds'], '可比' if row['comparable'] else '玩家有操作', row['save_bytes']['differing'], row['save_bytes']['total'],
            100 * row['coins_produced']['rel_error'], 100 * row['mana_produced']['rel_error'],
            '；'.join(row['player_actions'])), file=sys.stderr)
    text = json.dumps(rows, ensure_ascii=False, indent=1, default=str)
    if args.output:
        Path(args.output).write_text(text, encoding='utf-8')
    else:
        print(text)


if __name__ == '__main__':
    main()
