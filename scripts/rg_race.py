"""精确赛跑求解器（2026-11-02）：按目标找 build 的新主线。

依据（同一 A1 R60 固定存档实测，见 docs/build求解器精确赛跑（20261102）.md）：
- 一局的前 t 秒和跑多长无关（前缀一致），所以短跑就是长跑的开头，不是近似。
- 研究在第 6～10 秒买完，差距在开局滚雪球结束（累计产币约第 30 秒、魔力约第 20 秒）时就基本定型：
  第 30 秒谁领先，和第 300 秒谁领先一致 99%；之后只会放大或缩小，单项替换里没有由负转正的。
- 所以「比两套方案」不必都跑满：并排跑到定型时刻，落后的停掉，只把领先的跑完。

做法：
1. 粗筛：273 种结构各用机制模型给一套初始研究，只跑到定型时刻；前几名跑满全程，得到精确成绩。
2. 局部搜索（逐结构）：对当前最好方案列出全部单项改动（同分支换研究、加、去、佣兵、换血统、显赫、世系），
   每个都只跑到定型时刻，和这套方案自己的曲线成对比较；长目标再逐段淘汰。领先的单项和按领先幅度叠加的
   组合跑满全程，整局更好才换。找不到更好的就用两两组合扰动；结构之间按「已有成绩 + 可能的提升」分配。
3. 前 3 名从原始快照独立重跑，数值、曲线、购买记录必须逐位相同。

保证：入榜和名次只用跑满全程的严格整局（缺一项就不给分）；短跑和早停只决定哪些方案值得跑完，从不当成绩。
每批改动都整批跑完再决定下一步，同一存档、同一预算下搜索路线可复现。不用社区模板或当前存档配方作起点。
"""
import argparse
import collections
import copy
import hashlib
import json
import math
from pathlib import Path
import queue
import random
import sys
import threading
import time

import rg_goal
import rg_sim
from rg_mechanisms import Mechanisms, improves, plan_key, rank_key, structure_key
from rg_portfolio import balanced_structures

ROOT = Path(__file__).resolve().parents[1]
MODEL_PATH = Path(__file__).with_name('build-model.json')
if not MODEL_PATH.exists():
    MODEL_PATH = ROOT / 'build/calculation/build-model.json'
PRESTIGE_ALIGN = {'good': 'Dwarven', 'evil': 'Drow', 'neutral': 'Dragon'}
BIG = 1e4                 # 「最快达到」里达到目标的方案排在所有未达到的前面
PROXY = 300.0             # 「数值最高」目标 ≥600 秒时，先在这个时长上赛跑
PROXY_SHARE = 0.6         # 代理时长占总预算的比例
PROMOTE = 12              # 代理时长结束时按目标时长复核的结构数
FLOOR = -1e4
SAMPLE = 10.0             # 曲线采样间隔；检查点都落在采样点上
SETTLE_STEP = 1.5         # 10 秒内对数增长小于这个值，就认为开局滚雪球结束
FINAL_MARGIN = 2.5        # 跑满全程的候选：在检查点落后这么多（自然对数）才停
SINGLES = 4               # 每轮跑满全程的领先单项数
COMBO_SIZES = (2, 3, 4, 6, 8, 12, 16, 24, 32)
SKIP_BELOW = -2.0         # 上一轮落后这么多的改动，下一轮（非全面复查）先不试


def L(v):
    return math.log(v) if v is not None and v > 0 else FLOOR


def curve_at(curve, t):
    for ct, cv in curve or ():
        if abs(ct - t) < 0.05:
            return cv
    return None


def fitness(row, reach):
    if not row or not row.get('ok'):
        return FLOOR * 2
    if reach and row.get('reached'):
        return BIG - math.log(max(row['time'], 1 / 30))
    return L(row.get('value'))


def search_budget(options):
    depth = (options or {}).get('depth') or 'normal'
    if depth not in ('fast', 'normal', 'deep'):
        raise ValueError('未知搜索深度')
    fast = 120 if (options or {}).get('goal') in ('mana_regen', 'production', 'coins', 'gems') else 60
    return dict(budget={'fast': fast, 'normal': 240, 'deep': 900}[depth])


# ---------------------------------------------------------------- 计算进程
def race_task(runner, req):
    """精确执行一局，到 limit 或检查点落后为止。跑满目标时长（或达到目标）且买齐才附严格成绩 exact。"""
    from rg_evaluate import TemplateEvaluationError, template_result, validate_plan
    plan = copy.deepcopy(req['plan'])
    goal, T, limit, target = req['goal'], float(req['T']), float(req['limit']), req.get('target')
    validate_plan(runner, plan, goal, limit, target)
    out = runner.run(plan, goal, target if target is not None else float('inf'), limit, spell=req.get('spell'),
                     coarse=0, race_bar=req.get('bar'))
    G = runner.G
    growth = dict(mana_generated=G.S_5_21_V[16], casts=G.S_5_21_V[15], coins_generated=G.S_5_21_V[0],
                  buildings=G.S_5_21_V[12])
    pending = list(out.get('skipped') or [])
    blocked = []
    if out.get('research_ready') is not None:
        # 局已结束才读：客户端判定的阵营/前置不匹配、当前升华不可用，在这个结构里是固定的
        for c in pending:
            u = runner.research[runner.by_code[c]]
            if not u.S__22_h or u.S_9_21__3f_() or u.S__3e_I():
                blocked.append(c)
    res = dict(curve=out['curve'], value=out['value'], reached=bool(out.get('reached')), time=out.get('time'),
               stopped_at=out.get('stopped_at'), limit=limit, picks=out.get('picks') or {},
               research_times=out.get('research_times') or {}, research_ready=out.get('research_ready'),
               pending=pending, blocked=blocked, pending_merc=list(out.get('skipped_merc') or []),
               lineage=out.get('lineage'), growth=growth, executed=bool(out.get('ok')), note=out.get('note'))
    exact = None
    if out.get('stopped_at') is None and (out.get('reached') or limit >= T - 1e-9):
        try:
            exact = template_result(runner, plan, goal, T, target, out)
            exact['growth'] = growth
        except TemplateEvaluationError as error:
            res['issues'] = [x['message'] for x in error.issues][:4]
    res['exact'] = exact
    return res


def worker_main(source=None, sink=None):
    """rg_search.worker_main 的超集：多一个 race 请求。模板评测也走这个进程。"""
    import rg_search
    rg_goal.exit_with_parent()
    source = source or sys.stdin.buffer
    sink = sink or sys.stdout.buffer
    runner = None
    model_path = MODEL_PATH
    for raw in source:
        t0 = time.perf_counter()
        try:
            req = json.loads(raw.decode('utf-8'))
            before = getattr(runner, 'n_runs', 0)
            op = req['op']
            if op == 'init':
                runner = rg_goal.Runner(req['game_py'], save_path=req.get('save_path'), encoded_save=req.get('save'),
                                        timestamp=req.get('timestamp'), research_json=req.get('research_json'),
                                        seed=req.get('seed', 0), event_cache=req.get('event_cache'),
                                        event_policy=req.get('event_policy', 'snapshot'))
                model_path = req.get('model') or MODEL_PATH
                result = dict(current={}, environment=runner.environment)
            elif op == 'catalogue':
                result = rg_search.catalogue(runner, model_path)
            elif op == 'race':
                result = race_task(runner, req)
            elif op == 'evaluate':
                result = rg_search.exact_evaluate(runner, req['plan'], req['goal'], req['T'], req.get('target'), req.get('spell'))
            elif op == 'evaluate_strict':
                from rg_evaluate import evaluate_template
                result = evaluate_template(runner, req['plan'], req['goal'], req['T'], req.get('target'), req.get('spell'))
            else:
                raise ValueError('未知求解请求')
            result['runs'] = getattr(runner, 'n_runs', 0) - before
            result['elapsed'] = time.perf_counter() - t0
            reply = dict(ok=True, result=result)
        except Exception as error:
            import traceback
            reply = dict(ok=False, error=str(error), trace=traceback.format_exc()[-1600:])
            if hasattr(error, 'result'):
                reply['evaluation'] = error.result
        sink.write(json.dumps(reply, ensure_ascii=False, allow_nan=False).encode('utf-8') + b'\n')
        sink.flush()


# ---------------------------------------------------------------- 求解
class Search:
    def __init__(self, command, init, *, goal, T, target=None, spell=None, workers=rg_goal.WORKERS, budget=60, seed=0):
        self.goal, self.T, self.target, self.spell = goal, float(T), target, spell
        self.T_final = float(T)
        self.reach = target is not None
        self.budget, self.workers, self.seed = budget, workers, seed
        self.rng = random.Random(seed)
        self.started = time.monotonic()
        self.deadline = self.started + budget
        self.stage, self.phase, self.phase_frac = '启动精确赛跑求解器', 0, 0.0
        self.results, self.superseded, self.best_of = [], set(), {}
        self.final_known, self.final_inc = {}, {}
        self.domains, self.domain_map = [], {}
        self.active = {}
        self.cancelled = self.finished = False
        self.error = None
        self.log_lines = []
        self.runs = self.evaluated = self.improved = self.done_n = self.total_n = 0
        self.generation = 0
        self.game_seconds = 0.0          # 实际推进的游戏秒数
        self.full_seconds = 0.0          # 同样的试跑全都跑满要多少游戏秒
        self.rung_counts = collections.Counter()
        self.timeline = []               # (秒, 当前最好)：每次最好成绩变化
        self.batches = []                # (任务数, 墙钟, 进程忙碌合计)：并行利用率
        self.blocked = collections.defaultdict(set)
        self.buyable = collections.defaultdict(set)
        self.shadow = []                 # 代理时长搜出的新最好方案，排进下一批按目标时长跑满
        self.shadowed = set()
        self.struct_moves = True
        self.cur_deadline = self.deadline
        self.levels = [self.T_final] if self.reach or self.T_final < 600 else [PROXY, self.T_final]
        self._enter_level(self.levels[0])
        self._tag = 0
        if init.get('reference_templates'):
            raise ValueError('独立求解不接受外部模板作为搜索起点')
        self.model = Mechanisms(init.get('model') or MODEL_PATH, goal)
        self.thread = threading.Thread(target=self._main, args=(command, init, workers), daemon=True)
        self.thread.start()

    def _enter_level(self, H):
        """切换搜索时长。每个时长各有精确成绩、缓存和调度状态；目标时长的那份和界面榜单共用。
        客户端判定固定不能买的研究、实际买到过的研究属于结构本身，各时长共用。"""
        self.T = float(H)
        final = self._is_final(self.T)
        self.known = self.final_known if final else {}
        self.inc = self.final_inc if final else {}
        self.scans = collections.Counter()
        self.kicks = collections.Counter()
        self.last_gain, self.first_gains, self.transfer_gains = {}, [], []
        self.converged, self.exhausted = set(), set()
        self.history = collections.defaultdict(dict)
        self.changed = {}
        self.probe_f, self.offsets = {}, []
        self.seeds, self.recent = {}, {}
        self.struct_tried = {}
        self.origin = {sk: 'seed' for sk in self.inc}
        self.scan_cost = None

    def _is_final(self, T):
        return abs(float(T) - self.T_final) < 1e-9

    # ---- 记录 ----
    def log(self, text):
        self.log_lines.append(text)

    def best(self):
        return sorted((r for r in self.results if r.get('ok') and r['id'] not in self.superseded), key=rank_key)

    def record(self, row, *, verified=False):
        if not row.get('ok'):
            return None
        if not self._is_final(row.get('horizon', self.T_final)):
            raise ValueError('不同目标时长的成绩不能进入同一排名')
        sk = structure_key(row['plan'])
        old = self.best_of.get(sk)
        if old is not None and not improves(row, self.results[old]) and not verified:
            return None
        if verified and old is not None:
            if (row['value'], row['time'], row['curve'], row['picks']) != tuple(
                    self.results[old][k] for k in ('value', 'time', 'curve', 'picks')):
                raise RuntimeError('独立回放与已记录结果不一致')
        entry = dict(row, struct={k: row['plan'].get(k) for k in ('alignment', 'faction', 'prestige', 'bloodline')},
                     id=len(self.results), finished_at=time.monotonic() - self.started, verified_exact=verified,
                     contributions=row.get('contributions') or [], checked=False)
        if old is not None:
            self.superseded.add(old)
            self.improved += 1
        self.best_of[sk] = entry['id']
        self.results.append(entry)
        return entry

    def _offer(self, row):
        """严格整局成绩：进榜，并更新该结构的当前最好（同分按方案键定先后，结果与完成顺序无关）。"""
        sk = structure_key(row['plan'])
        final = self._is_final(row.get('horizon', self.T))
        target = self.final_inc if final else self.inc
        old = target.get(sk)
        if target is self.inc:
            self.origin.setdefault(sk, 'transfer' if self.phase >= 3 else 'seed')
        if old is None or rank_key(row) < rank_key(old) or (
                rank_key(row) == rank_key(old) and repr(plan_key(row['plan'])) < repr(plan_key(old['plan']))):
            target[sk] = row
        if final and self.record(row) is not None:
            top = self.best()[0]
            if not self.timeline or self.timeline[-1][1] != top['value'] or self.timeline[-1][2] != top.get('time'):
                self.timeline.append((round(time.monotonic() - self.started, 2), top['value'], top.get('time')))

    # ---- 执行 ----
    def _known_for(self, task):
        return self.final_known if self._is_final(task.get('T', self.T)) else self.known

    def _lookup(self, task):
        info = self._known_for(task).get(plan_key(task['plan']))
        if info is None:
            return None
        if info['exact'] is not None or info['invalid']:
            return info
        if task.get('full'):
            # 跑完过、被检查点停过（对照只会越来越强），或已经跑到这次的时长上限都没达到，都不必重跑
            done = info['complete'] or info['stopped'] or (info['upto'] >= task['limit'] - 1e-6 and not info['reached'])
            return info if done else None
        if info['upto'] >= task['limit'] - 1e-6 or info['stopped']:
            return info
        return None

    def _absorb(self, task, res):
        plan = task['plan']
        key = plan_key(plan)
        sk = structure_key(plan)
        T = float(task.get('T', self.T))
        known = self._known_for(task)
        upto = res['stopped_at'] if res['stopped_at'] is not None else (res['time'] if res['reached'] else res['limit'])
        self.game_seconds += upto
        self.full_seconds += self.T_final if not (self.reach and res['reached']) else upto
        self.rung_counts[task['limit']] += 1
        self.evaluated += 1
        self.runs += res.get('runs', 0)
        self.blocked[sk].update(res['blocked'])
        self.buyable[sk].update(res['research_times'])
        info = dict(plan=plan, curve=res['curve'], upto=upto, stopped=res['stopped_at'] is not None,
                    reached=res['reached'], time=res['time'], exact=res['exact'], pending=res['pending'],
                    blocked=res['blocked'], research_ready=res['research_ready'],
                    complete=res['stopped_at'] is None and (res['reached'] or res['limit'] >= T - 1e-9),
                    invalid=bool(res['blocked']) or bool(res.get('issues')) and res['stopped_at'] is None
                    and res['limit'] >= T - 1e-9)
        old = known.get(key)
        if old is None or info['exact'] is not None or (old['exact'] is None and info['upto'] > old['upto']):
            known[key] = info
        if res['exact'] is not None:
            self._offer(res['exact'])
        return known[key]

    def _batch(self, tasks, deadline=None):
        """整批执行，返回与 tasks 同序的结果；同一方案同一长度只跑一次。批内完成顺序不影响结果。"""
        deadline = self.deadline if deadline is None else deadline
        out = [None] * len(tasks)
        groups = collections.OrderedDict()
        for i, task in enumerate(tasks):
            info = self._lookup(task)
            if info is not None:
                out[i] = info
                continue
            k = (plan_key(task['plan']), task['limit'], bool(task.get('full')), task.get('T', self.T))
            groups.setdefault(k, []).append(i)
        todo = list(groups.values())
        # 长的先跑，批尾空等的进程少
        todo.sort(key=lambda idx: -tasks[idx[0]]['limit'])
        self.done_n, self.total_n = 0, len(todo)
        waiting, nxt = {}, 0
        t0, busy = time.monotonic(), 0.0
        while nxt < len(todo) or waiting:
            if self.cancelled:
                raise RuntimeError('已停止')
            while nxt < len(todo) and len(waiting) < self.workers and time.monotonic() < deadline:
                idx = todo[nxt]
                nxt += 1
                task = tasks[idx[0]]
                tag = self._tag
                self._tag += 1
                waiting[tag] = idx
                self.active[tag] = task['plan']
                self.pool.submit(tag, dict(op='race', plan=task['plan'], goal=self.goal, T=task.get('T', self.T), limit=task['limit'],
                                           target=self.target, spell=self.spell, bar=task.get('bar'),
                                           full=bool(task.get('full'))))
            if not waiting:
                break
            try:
                tag, reply = self.pool.results.get(timeout=0.2)
            except queue.Empty:
                continue
            idx = waiting.pop(tag)
            self.active.pop(tag, None)
            if not reply.get('ok'):
                raise RuntimeError(reply.get('error') or '计算进程失败')
            busy += reply['result'].get('elapsed', 0)
            info = self._absorb(tasks[idx[0]], reply['result'])
            for i in idx:
                out[i] = info
            self.done_n += 1
        if todo:
            self.batches.append((len(todo), round(time.monotonic() - t0, 3), round(busy, 3)))
        return out

    # ---- 读数 ----
    def pv(self, info, t):
        """方案第 t 秒的对数读数；「最快达到」里已达到的按到达时间。超出覆盖范围返回 None。"""
        if info is None:
            return None
        if self.reach and info.get('reached') and info['time'] is not None and info['time'] <= t + 1e-6:
            return BIG - math.log(max(info['time'], 1 / 30))
        if t > info['upto'] + 1e-6:
            return None
        v = curve_at(info['curve'], t)
        return None if v is None else L(v)

    def estimate(self, info, parent, t):
        """和父方案在同一时刻成对比较；被检查点停下的按停下时刻比。只用来排提案，不当成绩。"""
        if info is None or info['blocked']:
            return None
        if not (self.reach and info.get('reached')) and info['upto'] < t - 1e-6:
            t = info['upto']
        a, b = self.pv(info, t), self.pv(parent, t)
        if a is None or b is None:
            # 停在两个采样点之间（「最快达到」截在父方案的到达时刻）：退回前一个采样点比
            t = math.floor(t / SAMPLE + 1e-9) * SAMPLE
            a, b = self.pv(info, t), self.pv(parent, t)
        if a is None or b is None:
            return None
        return a - b

    def settle_time(self, curve):
        pts = {round(t, 1): L(v) for t, v in curve or () if v and v > 0}
        t = 20.0
        while t <= self.T:
            if t in pts and t - SAMPLE in pts and pts[t] - pts[t - SAMPLE] < SETTLE_STEP:
                return t
            t += SAMPLE
        return 30.0

    def rungs(self, curve=None):
        """逐段淘汰的检查长度：第一段到开局定型，之后每段约 5 倍，最后跑满。"""
        T = self.T
        half = SAMPLE * math.floor(T / 2 / SAMPLE + 1e-9)
        if T <= 20 or half < 20:
            return [T]
        r = min(max(20.0, self.settle_time(curve) if curve else 30.0), half)
        rs = [r]
        while rs[-1] * 5 < T * 0.5:
            rs.append(rs[-1] * 5)
        return rs + [T]

    def final_task(self, plan, inc, *, paired=True):
        """跑满目标时长。paired：和 inc 同结构、可成对比较，定型时刻落后很多就停；换结构的不设门槛。"""
        limit = self.T
        if self.reach and inc is not None and inc.get('reached'):
            limit = min(self.T, inc['time'])      # 到这时还没达到，就不可能比它快
        bar = None
        if inc is not None and paired:
            pts = [r for r in self.rungs(inc['curve'])[:-1] if r < limit]
            bar = [(t, curve_at(inc['curve'], t) * math.exp(-FINAL_MARGIN)) for t in pts
                   if curve_at(inc['curve'], t) and not (self.reach and inc.get('reached') and inc['time'] <= t)]
        return dict(plan=plan, limit=limit, bar=bar or None, full=True)

    # ---- 方案空间 ----
    def allowed(self, sk):
        d = self.domain_map[sk]
        return (set(d.get('ready_research', d['research'])) | self.buyable[sk]) - self.blocked[sk]

    def branch(self, code):
        return self.model.research[code]['branch']

    def fill(self, plan, d):
        """修复配额，再按机制先验把空格补满（只用这个结构能直接买或已买到过的研究）。"""
        sk = structure_key(d['structure'])
        allowed = self.allowed(sk)
        p = self.model.repair(dict(plan, research=[c for c in plan.get('research', []) if c not in self.blocked[sk]]), d)
        w = self.model.priorities(d, 0)
        R = list(p['research'])
        for c in sorted((c for c in d['research'] if c in allowed and c not in R), key=lambda c: (-w.get(c, 0), c)):
            q = self.model.repair(dict(p, research=R + [c]), d)
            if c in q['research']:
                R = q['research']
        return self.model.repair(dict(p, research=R), d)

    def transfer(self, plan, struct):
        sk = structure_key(struct)
        if sk not in self.domain_map:
            return None
        d = self.domain_map[sk]
        p = dict(plan, **struct)
        if struct['faction'] != plan['faction']:
            p['merc'] = []
        return self.fill(p, d)

    def apply_move(self, P, key):
        if key[0] == 'pair':
            Q = self.apply_move(P, key[1:4])
            return self.apply_move(Q, key[4:7]) if Q is not None else None
        kind, a, b = key
        d = self.domain_map[structure_key(P)]
        R, M = list(P.get('research', [])), list(P.get('merc', []))
        if kind == 'swap':
            if a not in R or b in R:
                return None
            R[R.index(a)] = b
        elif kind == 'drop':
            if a not in R:
                return None
            R.remove(a)
        elif kind == 'add':
            if b in R:
                return None
            R.append(b)
        elif kind == 'mswap':
            if a not in M or b in M:
                return None
            M[M.index(a)] = b
        elif kind == 'mdrop':
            if a not in M:
                return None
            M.remove(a)
        elif kind == 'madd':
            if b in M:
                return None
            M.append(b)
        else:
            return None
        Q = self.model.repair(dict(P, research=R, merc=M), d)
        if b is not None and b not in Q['research'] + Q['merc']:
            return None
        if kind in ('swap', 'drop', 'mswap', 'mdrop') and a in Q['research'] + Q['merc']:
            return None
        return Q if plan_key(Q) != plan_key(P) else None

    def moves(self, plan, first):
        """全部单项改动（固定顺序）。inner：同结构，可叠加；struct：换血统 / 显赫 / 世系。"""
        sk = structure_key(plan)
        d = self.domain_map[sk]
        allowed = self.allowed(sk)
        R, M = list(plan.get('research', [])), list(plan.get('merc', []))
        by_branch = collections.defaultdict(list)
        for c in d['research']:
            if c in allowed:
                by_branch[self.branch(c)].append(c)
        keys = []
        for r in R:
            keys += [('swap', r, a) for a in by_branch[self.branch(r)] if a not in R]
            keys.append(('drop', r, None))
        keys += [('add', None, a) for a in d['research'] if a in allowed and a not in R]
        if first:
            # 目录里暂时不能直接买的研究（可能开局后才解锁），每个试一次；客户端判定固定不匹配的以后不再试
            for a in d['research']:
                if a in allowed or a in R or a in self.blocked[sk]:
                    continue
                same = [r for r in R if self.branch(r) == self.branch(a)]
                keys.append(('swap', same[-1], a) if same else ('add', None, a))
        groups = d.get('merc_groups', {})
        for m in M:
            keys += [('mswap', m, a) for a in d.get('merc', []) if a not in M and groups.get(a) == groups.get(m)]
            keys.append(('mdrop', m, None))
        keys += [('madd', None, a) for a in d.get('merc', []) if a not in M]
        out, seen = [], {plan_key(plan)}
        for key in keys:
            q = self.apply_move(plan, key)
            if q is not None and plan_key(q) not in seen:
                seen.add(plan_key(q))
                out.append((key, 'inner', q))
        s = plan
        others = []
        for b in (None, *rg_goal.BLOODLINES):
            if b != s.get('bloodline'):
                others.append((('blood', s.get('bloodline'), b), dict(alignment=s['alignment'], faction=s['faction'],
                                                                     prestige=s.get('prestige'), bloodline=b)))
        if s['faction'] != 'Mercenary':
            p2 = None if s.get('prestige') else PRESTIGE_ALIGN[s['alignment']]
            others.append((('prestige', s.get('prestige'), p2), dict(alignment=s['alignment'], faction=s['faction'],
                                                                     prestige=p2, bloodline=s.get('bloodline'))))
        for key, struct in others:
            q = self.transfer(plan, struct)
            if q is not None and plan_key(q) not in seen:
                seen.add(plan_key(q))
                out.append((key, 'struct', q))
        if s.get('bloodline'):
            q = dict(plan, lineage=not plan.get('lineage', True))
            if plan_key(q) not in seen:
                out.append((('lineage', None, None), 'struct', q))
        return out

    def compose(self, plan, ordered):
        """按领先幅度依次叠加互不冲突的改动，取几个长度跑满。"""
        P, applied, combos = plan, [], []
        for key in ordered:
            Q = self.apply_move(P, key)
            if Q is None:
                continue
            P = Q
            applied.append(key)
            if len(applied) in COMBO_SIZES:
                combos.append(P)
        if len(applied) > 1 and (not combos or plan_key(combos[-1]) != plan_key(P)):
            combos.append(P)
        return combos

    # ---- 局部搜索 ----
    def _ensure_inc(self, sk):
        plan = self.seeds.get(sk)
        if plan is None:
            self.exhausted.add(sk)
            return
        self.origin.setdefault(sk, 'seed')
        self._batch([self.final_task(plan, None)])
        if sk not in self.inc:
            self.exhausted.add(sk)

    def _race_moves(self, inc, moves, label):
        """逐段淘汰；返回 [(估计提升, 改动)]（最深一段的估计在前），并跑满领先者与叠加组合。"""
        sk = structure_key(inc['plan'])
        parent = self.known.get(plan_key(inc['plan']))
        rs = self.rungs(inc['curve'])
        # 换血统 / 显赫 / 世系改变事件早晚，不能和父方案成对比较，直接跑满
        struct_moves = [m for m in moves if m[1] == 'struct']
        moves = [m for m in moves if m[1] == 'inner']
        alive = list(moves)
        est = {}
        depth = {}
        n0 = len(alive)
        kept = []
        for k, r in enumerate(rs[:-1]):
            if self.reach and inc.get('reached'):
                r = min(r, inc['time'])       # 父方案第 τ 秒已达到：到 τ 还没达到的改动不可能更快
            extra = self._take_shadow() if k == 0 else []
            infos = self._batch([dict(plan=m[2], limit=r) for m in alive] + extra)[:len(alive)]
            scored = []
            for m, info in zip(alive, infos):
                if info is None:
                    continue
                if info['blocked']:
                    est[m[0]] = None
                    continue
                e = self.estimate(info, parent, r)
                if e is None:
                    continue
                est[m[0]], depth[m[0]] = e, k
                self.history[sk][m[0]] = e
                scored.append((e, m))
            scored.sort(key=lambda x: -x[0])
            kept.append(len(scored))
            if k < len(rs) - 2:
                keep = max(8, math.ceil(len(scored) * 0.25))
                alive = [m for _, m in scored[:keep]]
        ranked = sorted(((est[m[0]], depth[m[0]], m) for m in moves if est.get(m[0]) is not None),
                        key=lambda x: (-x[1], -x[0]))
        before = fitness(inc, self.reach)
        if len(rs) == 1:
            # 目标时长太短，没有可淘汰的检查点：全部改动直接跑满，再按实测提升叠加
            infos = self._batch([self.final_task(m[2], inc) for m in moves])
            ranked = []
            for m, info in zip(moves, infos):
                if info is not None and info['exact'] is not None:
                    est[m[0]] = fitness(info['exact'], self.reach) - before
                    self.history[sk][m[0]] = est[m[0]]
                    ranked.append((est[m[0]], 0, m))
            ranked.sort(key=lambda x: -x[0])
            kept.append(len(ranked))
        inner = [(e, m) for e, _, m in ranked]
        finals = [] if len(rs) == 1 else [m[2] for _, m in inner[:SINGLES]]
        finals += self.compose(inc['plan'], [m[0] for e, m in inner if e > 0])
        cross = {plan_key(m[2]) for m in struct_moves}
        finals += [m[2] for m in struct_moves]
        seen, uniq = set(), []
        for p in finals:
            if plan_key(p) not in seen:
                seen.add(plan_key(p))
                uniq.append(p)
        self._batch([self.final_task(p, inc, paired=plan_key(p) not in cross) for p in uniq],
                    deadline=self.cur_deadline + self.grace())
        after = fitness(self.inc.get(sk), self.reach)
        top = max(self.inc.values(), key=lambda r: fitness(r, self.reach))
        self.log('%s · %s：%d 个研究改动跑到第 %s 秒，%d 套跑满（含 %d 个换结构）；%s' % (
            label, self.name(sk), n0, '/'.join('%g' % (min(r, inc['time']) if self.reach and inc.get('reached') else r)
                                               for r in rs[:-1]) or '%g' % self.T, len(uniq), len(struct_moves),
            ('提升 ×%.3g' % math.exp(min(after - before, 700))) if after > before + 1e-12 else '没有更好的'))
        self.log('目前最好 %s：%s%s' % (self.fmt(top), self.name(structure_key(top['plan'])), self.level_label()))
        return inner, after - before

    def _scan(self, sk):
        inc = self.inc[sk]
        first = self.scans[sk] == 0
        moves = self.moves(inc['plan'], first)
        full = first or self.scans[sk] % 3 == 0 or self.last_gain.get(sk, 1) <= 0
        # 换结构：每次全面复查、且这套方案还没试过时一起试（调好的研究移植到其他血统 / 显赫）。
        # 和兄弟结构重复的方案有缓存，不会重跑。
        key = plan_key(inc['plan'])
        if not full or self.struct_tried.get(sk) == key:
            moves = [m for m in moves if m[1] != 'struct']
        else:
            self.struct_tried[sk] = key
            if not self.struct_moves:
                moves = [m for m in moves if m[1] != 'struct' or m[0][0] == 'lineage']
        if not full:
            hist, changed = self.history[sk], self.changed.get(sk, set())
            moves = [m for m in moves if m[1] == 'struct' or hist.get(m[0], 0) > SKIP_BELOW
                     or m[0][1] in changed or m[0][2] in changed]
        old = set(inc['plan'].get('research', []) + inc['plan'].get('merc', []))
        inner, gain = self._race_moves(inc, moves, '%s第 %d 轮' % (self.level_label(), self.scans[sk] + 1))
        self.scans[sk] += 1
        self.generation += 1
        if first:
            (self.first_gains if self.origin.get(sk) == 'seed' else self.transfer_gains).append(max(gain, 0.0))
        self.last_gain[sk] = gain
        new = self.inc[sk]['plan']
        self.changed[sk] = old ^ set(new.get('research', []) + new.get('merc', []))
        if gain > 1e-12:
            self.converged.discard(sk)
        elif full:
            self.converged.add(sk)
        self.recent[sk] = inner

    def _kick(self, sk):
        """局部最优时的扰动：领先的 16 个改动两两组合（门槛类收益要两项一起才显出来）。"""
        inc = self.inc[sk]
        inner = self.recent.get(sk) or []
        top = [m[0] for _, m in inner[:16]]
        pairs = []
        for i in range(len(top)):
            for j in range(i + 1, len(top)):
                q = self.apply_move(inc['plan'], top[i])
                q = self.apply_move(q, top[j]) if q is not None else None
                if q is not None:
                    pairs.append(((('pair',) + top[i] + top[j]), 'inner', q))
        self.kicks[sk] += 1
        if not pairs:
            self.exhausted.add(sk)
            return
        _, gain = self._race_moves(inc, pairs, self.level_label() + '两两组合')
        self.generation += 1
        if gain > 1e-12:
            self.converged.discard(sk)
            self.last_gain[sk] = gain
            self.kicks[sk] = 0
        elif self.kicks[sk] >= 1:
            self.exhausted.add(sk)

    def priority(self, sk):
        """已有精确成绩 + 可能的提升：没调过的按调过的结构首轮提升（中位数）的一半估，
        从别的结构换血统/显赫转来的（研究已调过）只估四分之一，调过的按上一轮提升的一半。"""
        if sk in self.exhausted:
            return None
        def median(xs, default):
            xs = sorted(xs)
            return xs[len(xs) // 2] if xs else default
        g = median(self.first_gains, 0.0)
        if sk in self.inc:
            f = fitness(self.inc[sk], self.reach)
            if self.scans[sk] == 0:
                if self.origin.get(sk) == 'seed':
                    return f + 0.5 * g
                return f + 0.5 * median(self.transfer_gains, min(2.0, 0.1 * g))
            if sk in self.converged:
                return f
            return f + 0.5 * max(self.last_gain.get(sk, 0), 0)
        if sk in self.probe_f:
            off = sorted(self.offsets)[len(self.offsets) // 2] if self.offsets else 0.0
            return self.probe_f[sk] + off + 0.5 * g
        return None

    def grace(self):
        """短跑已经做完的一轮，跑满阶段可以超出截止时间一点（不超过预算的 15%）。"""
        return 0.15 * self.budget

    def level_label(self):
        return '' if self._is_final(self.T) else '（%g 秒代理）' % self.T

    def _take_shadow(self):
        """代理时长的新最好方案按目标时长跑满：结果直接进榜，切换时长后接着调。"""
        tasks = [dict(plan=p, limit=self.T_final, T=self.T_final, full=True) for p in self.shadow]
        self.shadow = []
        return tasks

    def screen_horizon(self):
        """不同结构之间不能成对比较（龙族联盟、世系等事件早晚不同），粗筛要跑得比定型时刻长得多。
        固定存档实测：第 30 秒的结构排名里真第 1 名只排 41，第 120 秒起前 4 名基本对上。"""
        if self.T <= 150:
            return self.T
        return min(self.T, max(120.0, SAMPLE * round(min(0.4 * self.T, 300) / SAMPLE)))

    def _screen(self):
        self.phase, self.stage = 2, '粗筛：各结构的初始方案'
        order = balanced_structures(self.domains)
        r = self.screen_horizon()
        seeds = []
        for d in order:
            sk = structure_key(d['structure'])
            seeds.append((sk, self.fill(self.model.sample(d, random.Random(self.seed), route=0, greedy=True), d)))
        scored = []
        n_structs = len(seeds)
        for attempt in range(2):
            infos = self._batch([dict(plan=p, limit=r, full=r >= self.T) for _, p in seeds])
            retry = []
            for (sk, p), info in zip(seeds, infos):
                if info is None:
                    continue
                if info['blocked']:
                    # 客户端判定固定不匹配的研究换掉再试一次
                    retry.append((sk, self.fill(p, self.domain_map[sk])))
                    continue
                self.seeds[sk] = p
                v = self.pv(info, r)
                if v is not None:
                    self.probe_f[sk] = v
                    scored.append((v, sk))
            seeds = retry
            if not seeds:
                break
        scored.sort(key=lambda x: -x[0])
        # 前 6 个结构再试三条不同增长路线的初始研究
        extra = []
        for _, sk in scored[:6]:
            d = self.domain_map[sk]
            for route in (1, 2, 3):
                extra.append((sk, self.fill(self.model.sample(d, random.Random(self.seed + route), route=route, greedy=True), d)))
        infos = self._batch([dict(plan=p, limit=r, full=r >= self.T) for _, p in extra])
        for (sk, p), info in zip(extra, infos):
            v = self.pv(info, r) if info is not None and not info['blocked'] else None
            if v is not None and v > self.probe_f.get(sk, FLOOR * 2):
                self.probe_f[sk], self.seeds[sk] = v, p
        scored = sorted(((v, sk) for sk, v in self.probe_f.items()), key=lambda x: (-x[0], repr(x[1])))
        top = [sk for _, sk in scored[:8]]
        if r < self.T:
            self.log('粗筛：%d 种结构的初始方案各跑到第 %g 秒，前 8 名跑满全程' % (n_structs, r))
            self._batch([self.final_task(self.seeds[sk], None) for sk in top])
        else:
            self.log('粗筛：%d 种结构的初始方案全部跑满' % n_structs)
        for sk in top:
            if sk in self.inc and plan_key(self.inc[sk]['plan']) == plan_key(self.seeds[sk]):
                self.offsets.append(fitness(self.inc[sk], self.reach) - self.probe_f[sk])
        if self.inc:
            top = max(self.inc.values(), key=lambda row: fitness(row, self.reach))
            self.log('粗筛最好 %s：%s' % (self.fmt(top), self.name(structure_key(top['plan']))))

    def _search(self, deadline):
        self.phase, self.stage = 3, '逐结构赛跑：单项改动成对比较，领先的跑满'
        self.cur_deadline = deadline
        while time.monotonic() < deadline:
            if self.cancelled:
                raise RuntimeError('已停止')
            if self.scan_cost is not None and deadline - time.monotonic() < 0.5 * self.scan_cost:
                break                                 # 剩下的时间不够半轮，不再开新轮
            self.phase_frac = min(0.99, (time.monotonic() - self.started) / max(1, self.budget))
            if not self._is_final(self.T) and self.inc:
                top = max(self.inc.values(), key=lambda r: (fitness(r, self.reach), repr(plan_key(r['plan']))))
                if plan_key(top['plan']) not in self.shadowed:
                    self.shadowed.add(plan_key(top['plan']))
                    self.shadow.append(top['plan'])
            t0 = time.monotonic()
            cand = [(p, repr(sk), sk) for sk in set(self.inc) | set(self.probe_f)
                    if (p := self.priority(sk)) is not None]
            if not cand:
                break
            _, _, sk = max(cand)
            if sk not in self.inc:
                self._ensure_inc(sk)
                continue
            if sk in self.converged:
                self._kick(sk)
            else:
                self._scan(sk)
            cost = time.monotonic() - t0
            self.scan_cost = cost if self.scan_cost is None else 0.5 * (self.scan_cost + cost)

    # ---- 主流程 ----
    def name(self, sk):
        a, f, p, b = sk
        return '%s %s%s%s' % (a, f, ' + %s血统' % b if b else '', ' + %s显赫' % p if p else '')

    def fmt(self, row):
        return ('%.1f 秒达到' % row['time']) if self.reach and row.get('reached') else '%.4g' % (row.get('value') or 0)

    def _main(self, command, init, workers):
        try:
            self.pool = rg_goal.Pool(command, workers, dict(init, goal=self.goal))
            if self.cancelled:
                raise RuntimeError('已停止')
            self.phase, self.stage = 1, '建立研究约束和增长机制图'
            self.pool.submit(-1, dict(op='catalogue'))
            _, reply = self.pool.results.get()
            if not reply.get('ok'):
                raise RuntimeError(reply.get('error'))
            self.domains = reply['result']['domains']
            self.domain_map = {structure_key(d['structure']): d for d in self.domains}
            self.log('机制模型：%d 项研究，%d 种结构；检查长度 %s 秒' % (
                len(self.model.research), len(self.domains), ' / '.join('%g' % r for r in self.rungs())))
            self._screen()
            if len(self.levels) > 1:
                # 长目标：先在代理时长上赛跑到收敛（每轮便宜得多），再把各结构的最好方案按目标时长跑满、接着调
                self.log('目标 %g 秒较长：先在 %g 秒上赛跑，再按目标时长复核和微调' % (self.T_final, self.T))
                self._search(self.started + PROXY_SHARE * self.budget)
                leaders = sorted(self.inc.values(), key=lambda r: (-fitness(r, self.reach), repr(plan_key(r['plan']))))
                plans = [r['plan'] for r in leaders[:PROMOTE]] + self.shadow
                self.shadow = []
                self._enter_level(self.T_final)
                self.struct_moves = False             # 结构已在代理时长上比过，这里只调研究、佣兵和世系
                self.phase, self.stage = 3, '按目标时长复核代理时长的各结构最好方案'
                self._batch([dict(plan=p, limit=self.T, full=True) for p in plans],
                            deadline=self.deadline + self.grace())
                self.origin = {sk: 'seed' for sk in self.inc}
                if self.inc:
                    top = max(self.inc.values(), key=lambda r: fitness(r, self.reach))
                    self.log('%g 秒复核 %d 套：最好 %s（%s）' % (self.T, len(plans), self.fmt(top),
                                                         self.name(structure_key(top['plan']))))
            self._search(self.deadline)
            if not self.best():
                raise RuntimeError('在本次预算内没有找到可执行方案')
            if self.cancelled:
                raise RuntimeError('已停止')
            self.phase, self.phase_frac, self.stage = 4, 0, '最佳方案独立精确回放'
            for _ in range(2):
                leaders = [r for r in self.best()[:3] if not r.get('verified_exact')]
                if not leaders:
                    break
                self._replay(leaders)
            self.log('赛跑省下 %.0f%% 的模拟量：实际推进 %.0f 游戏秒，全部跑满需要 %.0f' % (
                100 * (1 - self.game_seconds / max(1, self.full_seconds)), self.game_seconds, self.full_seconds))
            self.stage = '完成'
        except Exception as error:
            self.error = '已停止' if self.cancelled else str(error)
        finally:
            self.active.clear()
            if hasattr(self, 'pool'):
                self.pool.close()
                for process in self.pool.procs:
                    try:
                        process.wait(timeout=3)
                    except Exception:
                        process.kill()
                        process.wait(timeout=3)
                    finally:
                        if process.stdout:
                            process.stdout.close()
            self.phase, self.phase_frac, self.finished = 5, 1.0, True

    def _replay(self, leaders):
        """原始快照、原评测入口（不带检查点）重跑，必须逐位一致。"""
        waiting = {}
        for i, row in enumerate(leaders):
            tag = self._tag
            self._tag += 1
            waiting[tag] = row
            self.active[tag] = row['plan']
            self.pool.submit(tag, dict(op='evaluate', plan=row['plan'], goal=self.goal, T=self.T,
                                       target=self.target, spell=self.spell))
        while waiting:
            if self.cancelled:
                raise RuntimeError('已停止')
            try:
                tag, reply = self.pool.results.get(timeout=0.2)
            except queue.Empty:
                continue
            waiting.pop(tag)
            self.active.pop(tag, None)
            if not reply.get('ok'):
                raise RuntimeError(reply.get('error', '计算进程失败'))
            row = reply['result']
            if not row.get('ok'):
                raise RuntimeError('独立回放未能买齐：' + str(row.get('note')))
            self.record(row, verified=True)

    def stop(self):
        self.cancelled = True
        if hasattr(self, 'pool'):
            self.pool.close()
        self.thread.join(timeout=10)
        if self.thread.is_alive():
            raise RuntimeError('停止计算仍在清理，请稍后重试')

    def unit_stats(self):
        result = []
        live = self.best()
        unit_keys = list(dict.fromkeys((d['structure']['alignment'], d['structure']['faction']) for d in self.domains))
        tried = {structure_key(i['plan']) for i in list(self.known.values())}
        for a, f in unit_keys:
            ds = [d for d in self.domains if (d['structure']['alignment'], d['structure']['faction']) == (a, f)]
            rows = [r for r in live if (r['plan']['alignment'], r['plan']['faction']) == (a, f)]
            top = rows[0] if rows else None
            result.append(dict(alignment=a, faction=f, state='ready', combos=len(ds),
                               verified=sum(structure_key(d['structure']) in tried for d in ds), estimate=None, ratio=None,
                               note=None,
                               best=dict(id=top['id'], value=top['value'], time=top['time'], reached=top['reached'],
                                         bloodline=top['plan'].get('bloodline'), prestige=top['plan'].get('prestige'),
                                         lineage=top.get('lineage')) if top else None))
        return result

    def status(self):
        running = [{**{k: p.get(k) for k in ('alignment', 'faction', 'prestige', 'bloodline')}, 'seconds': 0}
                   for p in list(self.active.values())]
        verified_structs = {structure_key(r['plan']) for r in self.results if r.get('ok')}
        saved = 1 - self.game_seconds / max(1, self.full_seconds)
        return dict(stage=self.stage, phase=self.phase, phase_frac=self.phase_frac, done=self.done_n, total=self.total_n,
                    finished=self.finished, error=self.error, elapsed=time.monotonic() - self.started,
                    entries=list(self.results), superseded=sorted(self.superseded), units=self.unit_stats(),
                    running=running, workers=self.workers, verified=len(verified_structs), runs=self.runs,
                    improved=self.improved, checked=[], pruned=0, margin=None,
                    unexplored=max(0, len(self.domains) - len(verified_structs)), log=self.log_lines[-30:],
                    log_total=len(self.log_lines), algorithm='exact-race-v1', evaluated=self.evaluated,
                    generations=self.generation, saved_fraction=saved, game_seconds=self.game_seconds,
                    timeline=self.timeline, batches=self.batches,
                    allocation=[dict(horizon=r, completed=n) for r, n in sorted(self.rung_counts.items())])


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--worker', action='store_true')
    ap.add_argument('--save', type=Path)
    ap.add_argument('--goal', default='coins')
    ap.add_argument('--at', type=float, default=300)
    ap.add_argument('--target', type=float)
    ap.add_argument('--budget', type=float, default=120)
    ap.add_argument('--workers', type=int, default=6)
    ap.add_argument('--seed', type=int, default=0)
    ap.add_argument('--output', type=Path)
    args = ap.parse_args()
    rg_sim.MEMBER_NAMES = ROOT / 'build/calculation/member-names.json'
    if args.worker:
        worker_main()
        return
    if not args.save or not args.output:
        ap.error('需要 --save 和 --output')
    from rg_events import read_schedule
    schedule, provenance = read_schedule()
    input_hash = hashlib.sha256(args.save.read_bytes()).hexdigest()
    input_stamp = args.save.stat().st_mtime
    command = [sys.executable, '-X', 'utf8', str(Path(__file__).resolve()), '--worker']
    init = dict(game_py=str(ROOT / 'build/calculation/game.py'), save_path=str(args.save.resolve()),
                research_json=str(ROOT / 'build/calculation/research.json'), model=str(MODEL_PATH.resolve()),
                event_cache=schedule, seed=0)
    search = Search(command, init, goal=args.goal, T=args.at, target=args.target, workers=args.workers,
                    budget=args.budget, seed=args.seed)
    last = -100
    while not search.finished:
        elapsed = time.monotonic() - search.started
        if elapsed - last >= 10:
            last = elapsed
            best = search.best()
            print(json.dumps(dict(seconds=round(elapsed, 1), stage=search.stage, evaluated=search.evaluated,
                                  best=best[0]['value'] if best else None, log=search.log_lines[-1:]),
                             ensure_ascii=False), flush=True)
        time.sleep(0.1)
    assert input_hash == hashlib.sha256(args.save.read_bytes()).hexdigest(), '固定存档改变'
    assert input_stamp == args.save.stat().st_mtime, '固定存档时间改变'
    sources = {name: hashlib.sha256((Path(__file__).resolve().parent / name).read_bytes()).hexdigest()
               for name in ('rg_race.py', 'rg_goal.py', 'rg_evaluate.py', 'rg_mechanisms.py', 'rg_search.py')}
    result = dict(metadata=dict(goal=args.goal, at=args.at, target=args.target, budget=args.budget,
                                save_sha256=input_hash, timestamp=input_stamp, algorithm='exact-race-v1', sources=sources,
                                levels=search.levels,
                                workers=args.workers, seed=args.seed, event_source=provenance,
                                model_sha256=hashlib.sha256(MODEL_PATH.read_bytes()).hexdigest()),
                  elapsed=time.monotonic() - search.started, runs=search.runs, error=search.error,
                  best=search.best(), results=search.results, log=search.log_lines, status=search.status())
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(result, ensure_ascii=False, indent=1, allow_nan=False), encoding='utf-8')
    print(json.dumps(dict(elapsed=result['elapsed'], runs=result['runs'], error=search.error,
                          value=result['best'][0]['value'] if result['best'] else None), ensure_ascii=False), flush=True)
    if search.error:
        raise SystemExit(1)


if __name__ == '__main__':
    main()
