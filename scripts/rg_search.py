"""整套方案种群求解器：机制图提案、整局响应学习、精确仿真和独立回放。

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
from rg_mechanisms import Mechanisms, ResponseModel, fitness, improves, plan_key, rank_key, structure_key

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
            rs, free = [], []
            for sid, u in runner.research.items():
                code = runner.codes[sid]
                row = data['research'][code]
                if points[row['branch']] < row['level'] and row['level'] != 1:
                    continue
                if not (u.S__2b__21_a and u.S_9_21__25_ and not u.S_9_21__3f_() and not u.S__3e_I()):
                    continue
                rs.append(code)
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
            domains.append(dict(structure=struct, research=rs, quotas=quotas, free=free,
                                merc=merc, merc_groups=groups, merc_ids=ids))
    finally:
        runner.reset()
    return dict(domains=domains, current=runner.current, ascension=asc, reincarnation=reincarnation)


def exact_evaluate(runner, plan, goal, T, target=None, spell=None):
    """每次从原始世界恢复，真实购买、施法、逐 tick 推进；不切换标记估值。"""
    p = copy.deepcopy(plan)
    for _ in range(4):
        out = runner.run(p, goal, target if target is not None else float('inf'), T, spell=spell, coarse=0)
        if not out['ok']:
            return dict(ok=False, plan=p, note=out.get('note'), value=out.get('value'))
        required = []
        if p.get('alignment'):
            required.append(rg_goal.ALIGNMENTS[p['alignment']])
        if p.get('faction'):
            required.append(rg_goal.MERC_PICK if p['faction']=='Mercenary' else rg_goal.FACTIONS[p['faction']][0])
        if p.get('bloodline'):
            required.append(rg_goal.BLOODLINES[p['bloodline']])
        if any(not runner.ups[sid].S__3c__21_7 for sid in required):
            return dict(ok=False, plan=p, note='到达终点时未能完成立场、阵营或血统选择', value=out.get('value'))
        skipped_r = set(out.get('skipped') or [])
        if 'research' in out:
            # 达标可能早于研究等待超时：不能仅凭 skipped 为空断言整张模板已买齐。
            skipped_r.update(set(p.get('research', [])) - set(out['research']))
        skipped_m = set(out.get('skipped_merc') or [])
        missing_prestige = (p.get('prestige') and not runner.ups[rg_goal.PRESTIGE[p['prestige']]].S__3c__21_7)
        if not skipped_r and not skipped_m and not missing_prestige:
            keys = ('value', 'time', 'reached', 'curve', 'picks', 'lineage', 'merc_times', 'skipped',
                    'skipped_merc', 'research_ready')
            result = dict(ok=True, plan=p, **{k: out.get(k) for k in keys})
            # 结束后读数不会再进入这条轨迹；下一次试跑先完整恢复原始世界。
            result['growth'] = dict(mana_generated=runner.G.S_5_21_V[16], casts=runner.G.S_5_21_V[15],
                                    coins_generated=runner.G.S_5_21_V[0], buildings=runner.G.S_5_21_V[12])
            return result
        p = dict(p, research=[c for c in p.get('research', []) if c not in skipped_r],
                 merc=[c for c in p.get('merc', []) if c not in skipped_m])
        if missing_prestige:
            p['prestige'] = None
    return dict(ok=False, plan=p, note='未得到全部项目可执行的配方')


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
                                        timestamp=req.get('timestamp'), research_json=req.get('research_json'))
                model_path = req.get('model') or MODEL_PATH
                result = dict(current=runner.current)
            elif req['op'] == 'catalogue':
                result = catalogue(runner, model_path)
            elif req['op'] == 'evaluate':
                result = exact_evaluate(runner, req['plan'], req['goal'], req['T'], req.get('target'), req.get('spell'))
            else:
                raise ValueError('未知新搜索请求')
            result['runs'] = getattr(runner, 'n_runs', 0) - before
            result['elapsed'] = time.perf_counter() - t0
            reply = dict(ok=True, result=result)
        except Exception as error:
            import traceback
            reply = dict(ok=False, error=str(error), trace=traceback.format_exc()[-1600:])
        sink.write(json.dumps(reply, ensure_ascii=False, allow_nan=False).encode('utf-8') + b'\n')
        sink.flush()


def search_budget(options):
    depth = (options or {}).get('depth') or 'normal'
    if depth not in ('fast', 'normal', 'deep'):
        raise ValueError('未知搜索深度')
    # 回魔的跨分支增长需要更多整局反馈；快速档按实测保留两分钟，魔上限为一分钟。
    fast = 120 if (options or {}).get('goal') == 'mana_regen' else 60
    return dict(budget={'fast': fast, 'normal': 240, 'deep': 900}[depth])


class Search:
    def __init__(self, command, init, *, goal, T, target=None, spell=None, workers=rg_goal.WORKERS, budget=60, seed=0):
        self.goal, self.T, self.target, self.spell = goal, T, target, spell
        self.budget, self.workers = budget, workers
        self.started = time.monotonic()
        self.deadline = self.started + budget
        self.rng = random.Random(seed)
        self.stage, self.phase, self.phase_frac = '启动新求解器', 0, 0.0
        self.results, self.superseded, self.best_of = [], set(), {}
        self.cache, self.archive, self.failures = {}, collections.defaultdict(list), collections.Counter()
        self.domains, self.domain_map, self.active = [], {}, {}
        self.cancelled = self.finished = False
        self.error = None
        self.log_lines = []
        self.runs = self.evaluated = self.improved = self.done_n = self.total_n = 0
        self.generation = 0
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

    def _preferences(self, domain):
        key = structure_key(domain['structure'])
        own = self.archive.get(key, [])[:8]
        # 同阵营其他结构提供训练样本，但其终态从不拿来给本结构静态估值。
        unit = (domain['structure']['alignment'], domain['structure']['faction'])
        others = [r for sk, rs in self.archive.items() if sk[:2] == unit for r in rs[:2]]
        rows = own + sorted(others, key=rank_key)[:8]
        if not rows:
            return {}
        count = collections.Counter(c for r in rows for c in r['plan'].get('research', []) + r['plan'].get('merc', []))
        return {c: 0.45 + 1.8 * count[c]/len(rows) for c in domain['research'] + domain.get('merc', [])}

    def _proposals(self, count=600):
        best = self.best()
        if not best:
            return [self.model.sample(d, self.rng, route=self.rng.randrange(4)) for d in self.domains[:count]]
        fmax = fitness(best[0], self.target, self.T)
        weights = [math.exp(max(-30, (fitness(r, self.target, self.T)-fmax)/0.9)) for r in best]
        pending, seen, preferences = [], set(), {}
        for i in range(count):
            if self.rng.random() < 0.16:
                domain = self.rng.choice(self.domains)
                arc = self.archive.get(structure_key(domain['structure']), [])
                parent = arc[0]['plan'] if arc else self.model.sample(domain, self.rng, route=self.rng.randrange(4))
            else:
                row = self.rng.choices(best, weights=weights, k=1)[0]
                domain = self.domain_map[structure_key(row['plan'])]
                arc = self.archive[structure_key(row['plan'])]
                parent = self.rng.choice(arc[:min(6, len(arc))])['plan']
            sk = structure_key(domain['structure'])
            if sk not in preferences:
                preferences[sk] = self._preferences(domain)
            pref = preferences[sk]
            donor = None
            if self.rng.random() < 0.6:
                compatible = [r for r in best if r['plan']['faction'] == parent['faction'] and r['plan']['alignment'] == parent['alignment']]
                if compatible:
                    donor = self.rng.choice(compatible)['plan']
            p = self.model.mutate(parent, domain, self.rng, donor=donor, preferences=pref)
            key = plan_key(p)
            if key not in self.cache and key not in seen:
                seen.add(key)
                pending.append(p)
        ranked = sorted(pending, key=lambda p: -self.response.predict(p, self.domain_map[structure_key(p)], explore=0.18))
        n = self.workers * 10
        chosen = ranked[:int(n*0.7)]
        rest = ranked[int(n*0.7):]
        if rest:
            chosen += self.rng.sample(rest, min(len(rest), n-len(chosen)))
        return chosen

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
            self.phase, self.stage = 2, '各结构独立整局模拟'
            seeds = [self.model.sample(d, self.rng, greedy=True) for d in self.domains]
            current = cat['current']
            if structure_key(current) in self.domain_map:
                seeds.insert(0, self.model.repair(dict(current, merc=current.get('merc', [])), self.domain_map[structure_key(current)]))
            # 先给每个基础阵营一个结果，随后覆盖全部结构。
            banks = collections.defaultdict(collections.deque)
            for p in seeds:
                u = (p['alignment'], p['faction'])
                banks[u].append(p)
            order = []
            while any(banks.values()):
                for bank in banks.values():
                    if bank:
                        order.append(bank.popleft())
            search_deadline = self.started + self.budget * 0.88
            # 长时局也必须留下联合搜索预算；剩余结构穿插在后续每批提案中。
            complete_scout = self.T <= 60 and self.goal == 'max_mana'
            if complete_scout:
                order = seeds
            self._evaluate_batch(order, search_deadline if complete_scout else self.started + self.budget * 0.38)
            unvisited = [p for p in order if plan_key(p) not in self.cache]
            self.phase, self.stage = 3, '整套方案联合搜索与响应学习'
            if complete_scout:
                routes = [self.model.sample(self.domain_map[structure_key(row['plan'])], self.rng, route=route, greedy=True)
                          for row in self.best()[:12] for route in (1, 2, 3)]
                self._evaluate_batch(routes, search_deadline)
            while time.monotonic() < search_deadline and not self.cancelled:
                self.generation += 1
                before = self.best()
                rows = [r for r in self.cache.values() if r.get('ok')]
                self.response.train(rows, self.domain_map, self.rng)
                proposals = self._proposals()
                if unvisited:
                    n = min(len(unvisited), self.workers * 3)
                    proposals = unvisited[:n] + proposals[:self.workers * 10 - n]
                    unvisited = unvisited[n:]
                if not proposals:
                    break
                self._evaluate_batch(proposals, search_deadline)
                after = self.best()
                self.phase_frac = max(0, min(0.99, (time.monotonic()-self.started-self.budget*0.38)/max(1, self.budget*0.50)))
                if after:
                    self.log('第 %d 代：已评估 %d 套，最好 %.6g%s' % (self.generation, self.evaluated, after[0]['value'],
                        '（提高）' if before and improves(after[0], before[0]) else ''))
            if not self.best():
                raise RuntimeError('在本次预算内没有找到可执行方案')
            if self.cancelled:
                raise RuntimeError('已停止')
            self.phase, self.phase_frac, self.stage = 4, 0, '最佳方案独立精确回放'
            leaders = self.best()[:3]
            # 预算控制搜索；最终三次独立回放必须完成，即使长时局的单次运行跨过预算。
            checked = self._evaluate_batch([r['plan'] for r in leaders], float('inf'), force=True, remember=False)
            if checked and checked[0].get('ok') and time.monotonic() < self.deadline:
                checked[0]['contributions'] = self._contributions(checked[0])
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
            algorithm='population-response-v1', evaluated=self.evaluated, generations=self.generation)


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
                  save_sha256=input_hash, timestamp=input_stamp, algorithm='population-response-v1', workers=args.workers,
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
