"""多时长组合求解器：独立实测种群、按成本分配试跑、长局验证和独立回放。

不调用旧 Planner、静态子集求解、闭环重配或逐项爬山。rg_goal 只提供游戏执行器和进程池。
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
from as2py import mangle
from rg_mechanisms import Mechanisms, ResponseModel, improves, plan_key, rank_key, structure_key
from rg_portfolio import Population, balanced_structures

ROOT = Path(__file__).resolve().parents[1]
FACTION_INDEX = {'Fairy': 0, 'Elven': 1, 'Angel': 2, 'Goblin': 3, 'Undead': 4, 'Demon': 5,
                 'Titan': 6, 'Druid': 7, 'Faceless': 8, 'Dwarven': 9, 'Drow': 10, 'Mercenary': 11, 'Dragon': 12}
ALIGN_INDEX = {'good': 1, 'evil': 2, 'neutral': 3}
PRESTIGE_ALIGN = {'good': 'Dwarven', 'evil': 'Drow', 'neutral': 'Dragon'}
MODEL_PATH = Path(__file__).with_name('build-model.json')
if not MODEL_PATH.exists():
    MODEL_PATH = ROOT / 'build/calculation/build-model.json'


def structures():
    for faction, (_, alignment) in rg_goal.FACTIONS.items():
        for prestige in (None, PRESTIGE_ALIGN[alignment]):
            for bloodline in (None, *rg_goal.BLOODLINES):
                yield dict(alignment=alignment, faction=faction, prestige=prestige, bloodline=bloodline)
    for alignment in ALIGN_INDEX:
        for bloodline in (None, *rg_goal.BLOODLINES):
            yield dict(alignment=alignment, faction='Mercenary', prestige=None, bloodline=bloodline)


def catalogue(runner, model_path):
    """采集潜在合法候选和配额。虚拟结构仅用于读取规则，从不据其目标值给方案打分。"""
    data = json.loads(Path(model_path).read_text(encoding='utf-8'))
    U = runner.ns[data['runtime_classes']['Utilities']['python']]
    unames = rg_sim._real2obf(data['runtime_classes']['Utilities']['raw'])
    core = runner.sim.core
    asc = int(getattr(runner.G, runner.sim.game_names['ascension']))
    reincarnation = int(getattr(runner.G, runner.sim.game_names['reincarnation']))
    points = {b: getattr(U, unames['getResearchValue'])(b, True) for b in range(7)}
    codes = runner.merc_codes()
    num_attr = mangle('§["-§')
    selection = [u for u in runner.G.S__2d__21_4 if any(
        word in u.S_1i for word in ('Trade Treaty', 'Friendship Pact', 'Alliance', 'Union', 'Contract'))]
    domains = []
    try:
        for struct in structures():
            runner.reset()
            G = runner.G
            for u in list(runner.research.values()) + list(codes.values()) + selection:
                u.S__3c__21_7 = False
            for sid in (*rg_goal.ALIGNMENTS.values(), *rg_goal.BLOODLINES.values()):
                runner.ups[sid].S__3c__21_7 = False
            f = FACTION_INDEX[struct['faction']]
            p = FACTION_INDEX[struct['prestige']] if struct['prestige'] else -1
            G.S__2c__21_Y, G.S__2d__21__5e_, G.S__23_3 = ALIGN_INDEX[struct['alignment']], f, p
            runner.ups[rg_goal.ALIGNMENTS[struct['alignment']]].S__3c__21_7 = True
            for u in selection:
                if u.S__2d__21__5e_ in (f, p):
                    u.S__3c__21_7 = True
            if struct['bloodline']:
                runner.ups[rg_goal.BLOODLINES[struct['bloodline']]].S__3c__21_7 = True
            quotas = {str(b): dict(kind='budget' if asc >= 3 else 'slots', value=float(
                runner.sim.core_call('getResearchBudget', b) if asc >= 3 else runner.sim.core_call('getResearchCap', b)))
                for b in range(7)}
            rs, free, ready = [], [], []
            for sid, u in runner.research.items():
                code = runner.codes[sid]
                row = data['research'][code]
                # 只依据已确认的客户端基类规则排除永久冲突。
                # 研究点仅由手动 ResearchTier.onPurchase 增加；本执行策略不做该动作。
                evidence = row.get('eligibility', {})
                unlocked = bool(getattr(u, mangle('§?!6§')))
                if evidence.get('research_visible_owner') == 'ResearchUpgrade':
                    if row['level'] >= 5000 and reincarnation < 180:
                        continue
                    if points[row['branch']] < row['level'] and row['level'] != 1 and not unlocked:
                        continue
                if evidence.get('purchasable_owner') == 'ResearchUpgrade':
                    if asc >= 4 and row['level'] < 5000 or asc >= 3 and row['level'] < 405:
                        continue
                    if row['faction'] != -1 and row['faction'] not in (f, p) and f != 11:
                        continue
                # 未解锁、问号、感叹号、当前资源/自定义条件都允许留待整局验证。
                rs.append(code)
                if u.S_9_21__25_ and (unlocked or u.S__2d_6):ready.append(code)
                if asc == 2 and row['faction'] != -1 and row['faction'] in (f, p):
                    free.append(code)
            if f == 11 and asc == 1 and reincarnation < 75:
                # ResearchMercenary.condition 的永久重生门槛；不是从某一局没买上推断。
                rs = []
            merc, groups, ids = [], {}, {}
            if f == 11:
                for code, u in codes.items():
                    n = getattr(u, num_attr)
                    if 1 <= n <= 9 and u.S__2d__21__5e_ <= 12 and (not code.startswith('DG') or u.S_9_21__25_):
                        merc.append(code)
                        groups[code] = (n + 2) // 3
                        ids[code] = u.S_6_21_Z
            domains.append(dict(structure=struct, research=rs, ready_research=ready, quotas=quotas, free=free,
                                merc=merc, merc_groups=groups, merc_ids=ids))
    finally:
        runner.reset()
    return dict(domains=domains, ascension=asc, reincarnation=reincarnation)


def exact_evaluate(runner, plan, goal, T, target=None, spell=None):
    """每次从原始世界恢复，真实购买、施法、逐 tick 推进；不切换标记估值。"""
    from rg_evaluate import evaluate_template, TemplateEvaluationError
    p = copy.deepcopy(plan)
    try:
        result = evaluate_template(runner, p, goal, T, target, spell)
    except TemplateEvaluationError as error:
        return dict(error.result, plan=p, deferred=True, note=str(error))
    result['growth'] = dict(mana_generated=runner.G.S_5_21_V[16], casts=runner.G.S_5_21_V[15],
                            coins_generated=runner.G.S_5_21_V[0], buildings=runner.G.S_5_21_V[12])
    return result


def worker_main(source=None, sink=None):
    rg_goal.exit_with_parent()
    source = source or sys.stdin.buffer
    sink = sink or sys.stdout.buffer
    runner = None
    for raw in source:
        t0 = time.perf_counter()
        try:
            req = json.loads(raw.decode('utf-8'))
            before = getattr(runner, 'n_runs', 0)
            if req['op'] == 'init':
                runner = rg_goal.Runner(req['game_py'], save_path=req.get('save_path'), encoded_save=req.get('save'),
                                        timestamp=req.get('timestamp'), research_json=req.get('research_json'), seed=req.get('seed', 0),
                                        event_cache=req.get('event_cache'), event_policy=req.get('event_policy', 'snapshot'))
                model_path = req.get('model') or MODEL_PATH
                result = dict(current={}, environment=runner.environment)
            elif req['op'] == 'catalogue':
                result = catalogue(runner, model_path)
            elif req['op'] == 'evaluate':
                result = exact_evaluate(runner, req['plan'], req['goal'], req['T'], req.get('target'), req.get('spell'))
            elif req['op'] == 'evaluate_strict':
                from rg_evaluate import evaluate_template
                result = evaluate_template(runner, req['plan'], req['goal'], req['T'], req.get('target'), req.get('spell'))
            else:
                raise ValueError('未知新搜索请求')
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


def search_budget(options):
    depth = (options or {}).get('depth') or 'normal'
    if depth not in ('fast', 'normal', 'deep'):
        raise ValueError('未知搜索深度')
    # 回魔的跨分支增长需要更多整局反馈；快速档按实测保留两分钟，魔上限为一分钟。
    fast = 120 if (options or {}).get('goal') in ('mana_regen','production','coins','gems') else 60
    return dict(budget={'fast': fast, 'normal': 240, 'deep': 900}[depth])


class Search:
    def __init__(self, command, init, *, goal, T, target=None, spell=None, workers=rg_goal.WORKERS, budget=60, seed=0):
        self.goal, self.T, self.target, self.spell = goal, T, target, spell
        self.budget, self.workers = budget, workers
        self.started = time.monotonic()
        self.deadline = self.started + budget
        self.rng = random.Random(seed)
        self.seed = seed
        self.stage, self.phase, self.phase_frac = '启动新求解器', 0, 0.0
        self.results, self.superseded, self.best_of = [], set(), {}
        self.cache, self.archive, self.failures = {}, collections.defaultdict(list), collections.Counter()
        self.domains, self.domain_map, self.active = [], {}, {}
        self.cancelled = self.finished = False
        self.error = None
        self.log_lines = []
        self.runs = self.evaluated = self.improved = self.done_n = self.total_n = 0
        self.generation = 0
        self.banks = {}
        self.promotions = []
        if init.get('reference_templates'):
            raise ValueError('独立求解不接受外部模板作为搜索起点')
        self.model = Mechanisms(init.get('model') or MODEL_PATH, goal)
        self.response = ResponseModel(self.model, target, T)
        self.thread = threading.Thread(target=self._main, args=(command, init, workers), daemon=True)
        self.thread.start()

    def log(self, text):
        self.log_lines.append(text)

    def best(self):
        return sorted((r for r in self.results if r.get('ok') and r['id'] not in self.superseded), key=rank_key)

    def record(self, row, *, verified=False):
        if not row.get('ok'):
            return None
        if hasattr(self, 'T') and row.get('horizon', self.T) != self.T:
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
                     id=len(self.results), finished_at=time.monotonic()-self.started, verified_exact=verified,
                     contributions=row.get('contributions') or [], checked=False)
        if old is not None:
            self.superseded.add(old)
            self.improved += 1
        self.best_of[sk] = entry['id']
        self.results.append(entry)
        return entry

    def _evaluate_batch(self, plans, deadline, *, force=False, remember=True):
        todo, seen = [], set()
        for plan in plans:
            key = plan_key(plan)
            if key not in seen and (force or key not in self.cache):
                todo.append((key, plan))
                seen.add(key)
        self.done_n, self.total_n = 0, len(todo)
        waiting, submitted, completed, out = {}, 0, 0, []

        def submit():
            nonlocal submitted
            while submitted < len(todo) and len(waiting) < self.workers and time.monotonic() < deadline:
                i = submitted
                key, plan = todo[i]
                waiting[i] = (key, plan)
                self.active[i] = plan
                self.pool.submit(i, dict(op='evaluate', plan=plan, goal=self.goal, T=self.T,
                                        target=self.target, spell=self.spell))
                submitted += 1
        submit()
        while waiting:
            if self.cancelled:
                raise RuntimeError('已停止')
            try:
                tag, reply = self.pool.results.get(timeout=0.2)
            except queue.Empty:
                continue
            key, plan = waiting.pop(tag)
            self.active.pop(tag, None)
            if not reply.get('ok'):
                raise RuntimeError(reply.get('error', '计算进程失败'))
            row = reply['result']
            self.runs += row.get('runs', 0)
            self.evaluated += 1
            self.cache[key] = row
            self.done_n += 1
            if self.phase == 2:
                self.phase_frac = self.done_n / max(1, self.total_n)
            completed += 1
            if row.get('ok'):
                actual = plan_key(row['plan'])
                self.cache.setdefault(actual, row)
                sk = structure_key(row['plan'])
                if remember:
                    arc = self.archive[sk]
                    if not any(plan_key(x['plan']) == actual for x in arc):
                        arc.append(row)
                        arc.sort(key=rank_key)
                        del arc[24:]
                    self.response.remember(row, self.domain_map[sk])
                    self.record(row)
            else:
                self.failures[structure_key(plan)] += 1
            out.append((tag, row))
            submit()
        return [row for _, row in sorted(out)]

    def _portfolio_candidate(self, bank, inflight):
        rng = bank.rng
        if bank.horizon == min(self.banks):
            return bank.next_proposal(rng, inflight), 'explore'
        if bank.initial:
            return bank.initial.popleft(), 'baseline'
        # 每四次长局至少有一次不以短局名次为条件，保留慢启动和模型未知路线。
        blind = (bank.promoted + bank.blind) % 4 == 3
        if blind:
            for h in sorted(self.banks,reverse=True):
                if h >= bank.horizon:continue
                for key,row in self.banks[h].deferred.items():
                    if key not in bank.cache and key not in inflight:
                        return row['plan'], 'blind'
        # 目标时长自己的组合优化需要固定预算，不能一直被短局新候选挤占。
        if (bank.promoted+bank.blind)%4==1 and bank.valid:
            plan=bank.next_proposal(rng,inflight,seeds=False)
            if plan is not None:return plan,'blind'
        if not blind:
            lower = [self.banks[h] for h in sorted(self.banks, reverse=True) if h < bank.horizon]
            fronts = [collections.deque(b.fronts()) for b in lower]
            while any(fronts):
                for rows in fronts:
                    if not rows:
                        continue
                    row = rows.popleft()
                    key = plan_key(row['plan'])
                    if key not in bank.cache and key not in inflight:
                        return row['plan'], 'promote'
        if bank.valid and rng.random() < 0.5:
            plan = bank.next_proposal(rng, inflight, seeds=False)
            if plan is not None:
                return plan, 'blind'
        # 独立长局抽样不从短局差分推断“不值得跑”。
        ordered = self.ordered_domains
        for _ in range(64):
            domain = ordered[bank.blind_cursor % len(ordered)]
            bank.blind_cursor += 1
            plan = self.model.sample(domain, rng, route=rng.randrange(4))
            if plan_key(plan) not in bank.cache and plan_key(plan) not in inflight:
                return plan, 'blind'
        return None, 'blind'

    def _portfolio_search(self):
        short = min(60,self.T)
        horizons = sorted({short, self.T} | ({300} if self.T > 600 else set()))
        shares = [1.0] if len(horizons) == 1 else [0.80, 0.20] if len(horizons) == 2 else [0.70, 0.12, 0.18]
        self.banks = {h: Population(self.model, self.domains, h, self.target if h == self.T else None, seed=self.seed) for h in horizons}
        self.ordered_domains = balanced_structures(self.domains)
        first = self.banks[short]
        first.initial.extend(self.model.sample(d, first.rng, route=i % 4, greedy=True) for i,d in enumerate(self.ordered_domains))
        self.cache = self.banks[self.T].cache
        self.archive = self.banks[self.T].archive
        self.response = self.banks[self.T].response
        pending, tag = {}, 0
        cutoff = self.started + self.budget * 0.94
        last_log = 0
        self.phase, self.stage = 3, '多时长探索与目标时长验证'
        while pending or time.monotonic() < cutoff:
            if self.cancelled:
                raise RuntimeError('已停止')
            while len(pending) < self.workers and time.monotonic() < cutoff:
                now = time.monotonic()
                if now >= self.started + self.budget * 0.84:
                    choices = [self.banks[self.T]]
                else:
                    def debt(item):
                        h, share = item
                        b = self.banks[h]
                        cost = b.seconds / max(1, b.completed) if b.completed else 0.35 * h / 60 + 0.05
                        reserved = sum(max(cost, now - started) for bh, _, started, _ in pending.values() if bh == h)
                        return (b.seconds + reserved) / share
                    choices = [self.banks[h] for h, _ in sorted(zip(horizons, shares), key=debt)]
                submitted = False
                for bank in choices:
                    inflight = {plan_key(p) for h, p, _, _ in pending.values() if h == bank.horizon}
                    plan, role = self._portfolio_candidate(bank, inflight)
                    if plan is None:
                        continue
                    if role == 'promote':
                        bank.promoted += 1
                    elif role == 'blind':
                        bank.blind += 1
                    pending[tag] = bank.horizon, plan, time.monotonic(), role
                    self.active[tag] = plan
                    self.pool.submit(tag, dict(op='evaluate', plan=plan, goal=self.goal, T=bank.horizon,
                                              target=bank.target, spell=self.spell))
                    tag += 1
                    submitted = True
                    break
                if not submitted:
                    break
            if not pending:
                break
            try:
                done, reply = self.pool.results.get(timeout=0.2)
            except queue.Empty:
                continue
            h, plan, started, role = pending.pop(done)
            self.active.pop(done, None)
            if not reply.get('ok'):
                raise RuntimeError(reply.get('error', '计算进程失败'))
            row = dict(reply['result'], horizon=h)
            bank = self.banks[h]
            bank.observe(plan, row)
            self.runs += row.get('runs', 0)
            self.evaluated += 1
            self.done_n = self.evaluated
            self.total_n = self.evaluated + len(pending)
            self.generation = first.trained // 48
            if h == self.T:
                self.record(row)
            self.phase_frac = min(0.99, (time.monotonic()-self.started) / max(1, self.budget))
            if time.monotonic() - last_log >= 20:
                last_log = time.monotonic()
                best = self.best()
                self.log('已评估 %d 套；%s；目标时长最好 %s' % (self.evaluated,
                    ' / '.join('%g秒:%d套' % (b.horizon, b.completed) for b in self.banks.values()),
                    '%.6g' % best[0]['value'] if best else '等待验证'))
        self.log('预算分配：' + json.dumps([b.summary() for b in self.banks.values()], ensure_ascii=False))

    def _contributions(self, leader):
        """剩余预算内对第一名做真实去项回放；不切换拥有标记，不用静态贡献冒充。"""
        plan = leader['plan']
        changes = []
        for kind, field in (('研究', 'research'), ('佣兵', 'merc')):
            for code in plan.get(field, []):
                changes.append((kind, code, dict(plan, **{field: [c for c in plan[field] if c != code]})))
        if plan.get('bloodline'):
            changes.append(('血统', plan['bloodline'], dict(plan, bloodline=None)))
        if plan.get('prestige'):
            changes.append(('显赫阵营', plan['prestige'], dict(plan, prestige=None)))
        if leader.get('lineage'):
            changes.append(('世系', leader['lineage'], dict(plan, lineage=False)))
        self._evaluate_batch([p for _, _, p in changes], self.deadline, remember=False)
        out = []
        for kind, code, p in changes:
            r = self.cache.get(plan_key(p))
            if r is None:
                continue
            ratio, path = None, '去掉后整局实测'
            if not r.get('ok'):
                path = '去掉后无法完成这套方案'
            elif leader.get('reached'):
                if r.get('reached'):
                    ratio = r['time']/max(leader['time'], 1/30)
                else:
                    ratio = self.T/max(leader['time'], 1/30)
                    path = '去掉后到时间上限仍未达到（至少）'
            elif r.get('value'):
                ratio = leader['value']/r['value']
            out.append(dict(kind=kind, item=code, ratio=ratio, path=path, exact=True))
        return sorted(out, key=lambda x: -(x['ratio'] or 0))

    def _publish_observed(self):
        # 解释用的去项回放也是真实观察；若发现更好的方案，不能只留在缓存里。
        for row in list(self.cache.values()):
            self.record(row)

    def _main(self, command, init, workers):
        try:
            self.pool = rg_goal.Pool(command, workers, dict(init, goal=self.goal))
            if self.cancelled:
                raise RuntimeError('已停止')
            self.phase, self.stage = 1, '建立研究约束和增长机制图'
            self.pool.submit(0, dict(op='catalogue'))
            _, reply = self.pool.results.get()
            if not reply.get('ok'):
                raise RuntimeError(reply.get('error'))
            cat = reply['result']
            self.domains = cat['domains']
            self.domain_map = {structure_key(d['structure']): d for d in self.domains}
            self.log('机制模型：%d 项研究，%d 种结构；研究配额由游戏提供' % (len(self.model.research), len(self.domains)))
            self._portfolio_search()
            if not self.best():
                raise RuntimeError('在本次预算内没有找到可执行方案')
            if self.cancelled:
                raise RuntimeError('已停止')
            self.phase, self.phase_frac, self.stage = 4, 0, '最佳方案独立精确回放'
            leaders = self.best()[:3]
            # 预算控制搜索；最终三次独立回放必须完成，即使长时局的单次运行跨过预算。
            checked = self._evaluate_batch([r['plan'] for r in leaders], float('inf'), force=True, remember=False)
            for row in checked:
                if row.get('ok'):
                    self.record(row, verified=True)
            self._publish_observed()
            leaders = [r for r in self.best()[:3] if not r.get('verified_exact')]
            if leaders:
                for row in self._evaluate_batch([r['plan'] for r in leaders], float('inf'), force=True, remember=False):
                    self.record(row, verified=True)
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
        evaluated = {structure_key(r.get('plan', {})) for r in list(self.cache.values())}
        for a, f in unit_keys:
            ds = [d for d in self.domains if (d['structure']['alignment'], d['structure']['faction']) == (a, f)]
            rows = [r for r in live if (r['plan']['alignment'], r['plan']['faction']) == (a, f)]
            top = rows[0] if rows else None
            result.append(dict(alignment=a, faction=f, state='ready', combos=len(ds),
                verified=sum(structure_key(d['structure']) in evaluated for d in ds), estimate=None, ratio=None, note=None,
                best=dict(id=top['id'], value=top['value'], time=top['time'], reached=top['reached'],
                          bloodline=top['plan'].get('bloodline'), prestige=top['plan'].get('prestige'),
                          lineage=top.get('lineage')) if top else None))
        return result

    def status(self):
        running = [{**{k: p.get(k) for k in ('alignment', 'faction', 'prestige', 'bloodline')}, 'seconds': 0}
                   for p in list(self.active.values())]
        verified_structs = {structure_key(r['plan']) for r in self.results if r.get('ok')}
        return dict(stage=self.stage, phase=self.phase, phase_frac=self.phase_frac, done=self.done_n, total=self.total_n,
            finished=self.finished, error=self.error, elapsed=time.monotonic()-self.started, entries=list(self.results),
            superseded=sorted(self.superseded), units=self.unit_stats(), running=running, workers=self.workers,
            verified=len(verified_structs), runs=self.runs, improved=self.improved, checked=[], pruned=0, margin=None,
            unexplored=max(0, len(self.domains)-len(verified_structs)), log=self.log_lines[-30:], log_total=len(self.log_lines),
            algorithm='portfolio-response-v2', evaluated=self.evaluated, generations=self.generation,
            allocation=[b.summary() for b in self.banks.values()])


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--worker', action='store_true')
    ap.add_argument('--save', type=Path)
    ap.add_argument('--goal', default='mana_regen')
    ap.add_argument('--at', type=float, default=60)
    ap.add_argument('--target', type=float)
    ap.add_argument('--budget', type=float, default=60)
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
    input_hash = hashlib.sha256(args.save.read_bytes()).hexdigest()
    input_stamp = args.save.stat().st_mtime
    command = [sys.executable, '-X', 'utf8', str(Path(__file__).resolve()), '--worker']
    init = dict(game_py=str(ROOT/'build/calculation/game.py'), save_path=str(args.save.resolve()),
                research_json=str(ROOT/'build/calculation/research.json'), model=str(MODEL_PATH.resolve()))
    search = Search(command, init, goal=args.goal, T=args.at, target=args.target, workers=args.workers,
                    budget=args.budget, seed=args.seed)
    last = -100
    while not search.finished:
        elapsed = time.monotonic()-search.started
        if elapsed-last >= 10:
            last = elapsed
            best = search.best()
            print(json.dumps(dict(seconds=round(elapsed, 1), stage=search.stage, evaluated=search.evaluated,
                best=best[0]['value'] if best else None), ensure_ascii=False), flush=True)
        time.sleep(0.1)
    assert input_hash == hashlib.sha256(args.save.read_bytes()).hexdigest(), '固定存档改变'
    assert input_stamp == args.save.stat().st_mtime, '固定存档时间改变'
    result = dict(metadata=dict(goal=args.goal, at=args.at, target=args.target, budget=args.budget,
                  save_sha256=input_hash, timestamp=input_stamp, algorithm='portfolio-response-v2', workers=args.workers,
                  seed=args.seed, model_sha256=hashlib.sha256(MODEL_PATH.read_bytes()).hexdigest()),
                  elapsed=time.monotonic()-search.started, runs=search.runs, error=search.error,
                  best=search.best(), log=search.log_lines, status=search.status())
    args.output.parent.mkdir(parents=True, exist_ok=True)
    args.output.write_text(json.dumps(result, ensure_ascii=False, indent=1, allow_nan=False), encoding='utf-8')
    print(json.dumps(dict(elapsed=result['elapsed'], runs=result['runs'], error=search.error,
                         value=result['best'][0]['value'] if result['best'] else None), ensure_ascii=False), flush=True)
    if search.error:
        raise SystemExit(1)


if __name__ == '__main__':
    main()
