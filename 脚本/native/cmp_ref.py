"""对照用：Python 版按 Timeline 的方式推进 N tick，打印若干状态（和 rgtest.exe 输出同格式）。"""
import os
import sys
import time
import random
sys.path.insert(0, os.path.join(os.path.dirname(os.path.abspath(__file__)), '..'))
import rg_sim
import rg_timeline

save = open(sys.argv[1]).read().strip()
ts = float(open(sys.argv[2]).read())
n = int(sys.argv[3])
random.seed(0)
ns, G, g = rg_sim.make_game('build/calculation/game.py', encoded_save=save, timestamp=ts)
clock = ns['_snapshot_clock']
ui = rg_timeline.Headless()
g.S_8_21_O = ui
ns['S__20_g'].S__3e__21_a = ui
R = ns['tostr']
t = time.time()
step = int(os.environ.get('RG_STEP', '0')) or n
done = 0
while done < n:
    for i in range(min(step, n - done)):
        clock['timestamp'] += 1 / 30
        clock['timer_ms'] += 1000 / 30
        g.S__2d__21_R(1)
    done += min(step, n - done)
    print('t=%d gold=%s mana=%s stat0=%s' % (done, R(G.S__40_e), R(G.S_0_21__20_), R(G.S_5_21_V[0])))
print('py %d ticks %.3fs' % (n, time.time() - t))
