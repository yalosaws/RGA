"""新求解器的机制图、基因约束和提案模型；不持有或切换游戏对象。"""
import collections
import json
import math
from pathlib import Path
import random


def plan_key(plan):
    # 研究和佣兵的购买顺序都是策略的一部分。
    return (plan.get('alignment'), plan.get('faction'), plan.get('prestige'), plan.get('bloodline'),
            plan.get('lineage', True) is not False, tuple(plan.get('research', [])), tuple(plan.get('merc', [])))


def structure_key(plan):
    return tuple(plan.get(k) for k in ('alignment', 'faction', 'prestige', 'bloodline'))


def rank_key(row):
    if not row.get('ok'):
        return (2, 0, 0)
    value = -(row.get('value') or 0)
    return (0, row['time'], value) if row.get('reached') else (1, value, 0)


def improves(a, b):
    if not a.get('ok'):
        return False
    if not b or not b.get('ok'):
        return True
    return rank_key(a) < rank_key(b)


def fitness(row, target=None, horizon=60):
    if not row.get('ok'):
        return -30.0
    if target is not None:
        if row.get('reached'):
            return 1 + math.log1p(horizon / max(row['time'], 1 / 30))
        return math.log(max(row.get('value') or 0, 1e-300) / target)
    return math.log(max(row.get('value') or 0, 1e-300))


class Mechanisms:
    def __init__(self, path, goal):
        self.data = json.loads(Path(path).read_text(encoding='utf-8'))
        self.research = self.data['research']
        self.items = self.data['items']
        self.by_sid = {x['sid']: x for x in self.items.values() if x.get('sid') is not None}
        self.goal = 'gems' if goal == 'gems' else goal
        self._prior_cache = {}
        self._links_cache = {}

    def traits(self, code, domain):
        return self.research.get(code) or self.by_sid.get(domain.get('merc_ids', {}).get(code)) or {}

    def priorities(self, domain, route=0):
        key = (structure_key(domain['structure']), route)
        if key in self._prior_cache:
            return self._prior_cache[key]
        edges = collections.defaultdict(set)
        for a, bs in self.data['bridges'].items():
            edges[a].update(bs)
        struct = domain['structure']
        active = []
        for cls, row in self.items.items():
            if any(cls == f'{struct.get(k)}Bloodline' for k in ('bloodline',)):
                active.append(row)
            if any(cls.startswith(str(struct.get(k)) + 'Upgrade') for k in ('faction', 'prestige') if struct.get(k)):
                active.append(row)
        pool = domain['research'] + domain.get('merc', [])
        active += [self.traits(c, domain) for c in pool]
        for row in active:
            for q in row.get('inputs', []):
                edges[q].update(row.get('outputs', []))
        reverse = collections.defaultdict(set)
        for a, bs in edges.items():
            for b in bs:
                reverse[b].add(a)
        distance, todo = {self.goal: 0}, collections.deque([self.goal])
        while todo:
            b = todo.popleft()
            for a in reverse[b]:
                if a not in distance:
                    distance[a] = distance[b] + 1
                    todo.append(a)
        utility = {q: 8 * 0.42 ** d for q, d in distance.items()}
        # 不同增长路线共同参与，避免用一种静态口径排除启动、饱和或门槛方案。
        if route == 1:
            for q in ('fc', 'production', 'building_cost', 'exchange_cost', 'click_rate'):
                utility[q] = utility.get(q, 0) + 2
        elif route == 2:
            for q in ('max_mana', 'artifacts', 'assistants', 'mana_regen'):
                utility[q] = utility.get(q, 0) + 2
        elif route == 3:
            for q in ('duration', 'spell_cost', 'tax_duplicate', 'bloodline', 'lineage'):
                utility[q] = utility.get(q, 0) + 3
        weights = {}
        for code in pool:
            row = self.traits(code, domain)
            weights[code] = 0.3 + sum(utility.get(q, 0.15) for q in row.get('outputs', []))
            if not row.get('outputs') or row.get('opaque'):
                weights[code] += 0.4  # 未解析项保持探索权重，不当成零效果。
        self._prior_cache[key] = weights
        return weights

    def links(self, domain):
        key = structure_key(domain['structure'])
        if key not in self._links_cache:
            codes = domain['research'] + domain.get('merc', [])
            result = {}
            for c in codes:
                out = set(self.traits(c, domain).get('outputs', []))
                result[c] = {d for d in codes if d != c and out.intersection(self.traits(d, domain).get('inputs', []))}
            self._links_cache[key] = result
        return self._links_cache[key]

    def repair(self, plan, domain, weights=None):
        """只做离散配额和来源修复；可负担性、时序门槛由真实游戏执行器裁定。"""
        p = dict(plan)
        allowed = set(domain['research'])
        selected = list(dict.fromkeys(c for c in plan.get('research', []) if c in allowed))
        if weights:
            selected.sort(key=lambda c: -weights.get(c, 0))
        used, rs = collections.defaultdict(float), []
        for c in selected:
            row = self.research[c]
            branch = str(row['branch'])
            quota = domain['quotas'][branch]
            free = c in domain.get('free', [])
            cost = 0 if free else (row['level'] if quota['kind'] == 'budget' else 1)
            if used[branch] + cost <= quota['value'] + 1e-9:
                used[branch] += cost
                rs.append(c)
        p['research'] = rs
        allowed_m = set(domain.get('merc', []))
        ms, counts, dragons = [], collections.Counter(), set()
        for c in dict.fromkeys(plan.get('merc', [])):
            if c not in allowed_m:
                continue
            g = domain['merc_groups'][c]
            dragon = c.startswith('DG')
            if counts[g] >= 4 or dragon and g in dragons:
                continue
            counts[g] += 1
            if dragon:
                dragons.add(g)
            ms.append(c)
        p['merc'] = ms
        return p

    def sample(self, domain, rng, *, route=0, greedy=False, preferences=None):
        prior = self.priorities(domain, route)
        weights = {c: max(0.01, w * (preferences or {}).get(c, 1)) for c, w in prior.items()}
        pools = collections.defaultdict(list)
        for c in domain['research']:
            pools[self.research[c]['branch']].append(c)
        rs = []
        for branch, pool in sorted(pools.items()):
            # 加权无放回抽样；整体考虑所有研究，而不是只允许目标直接相连的项。
            pool = sorted(pool, key=lambda c: -weights[c] if greedy else -math.log(max(rng.random(), 1e-12)) / weights[c])
            quota = domain['quotas'][str(branch)]
            cost = 0
            for c in pool:
                w = 0 if c in domain.get('free', []) else (self.research[c]['level'] if quota['kind'] == 'budget' else 1)
                if cost + w <= quota['value'] + 1e-9:
                    rs.append(c)
                    cost += w
        merc = sorted(domain.get('merc', []), key=lambda c: -weights[c] if greedy else -math.log(max(rng.random(), 1e-12))/weights[c])
        return self.repair(dict(domain['structure'], research=rs, merc=merc), domain)

    def mutate(self, parent, domain, rng, *, donor=None, preferences=None, strength=1):
        prior = self.priorities(domain, rng.randrange(4))
        weights = {c: w * (preferences or {}).get(c, 1) for c, w in prior.items()}
        p = dict(parent, research=list(parent.get('research', [])), merc=list(parent.get('merc', [])))
        kind = rng.random()
        if kind < 0.18:
            return self.sample(domain, rng, route=rng.randrange(4), preferences=preferences)
        if kind < 0.48:
            # 整分支/多分支更新属于种群的基本变异，不作为旧搜索后的追加阶段。
            branches = sorted({c[0] for c in domain['research']})
            if branches:
                chosen = set(rng.sample(branches, min(len(branches), 1 + (rng.random() < 0.3))))
                replacement = donor or self.sample(domain, rng, route=rng.randrange(4), preferences=preferences)
                p['research'] = [c for c in p['research'] if c[0] not in chosen] + [c for c in replacement.get('research', []) if c[0] in chosen]
        elif kind < 0.75 and domain['research']:
            pivot = rng.choice(domain['research'])
            linked = sorted(self.links(domain).get(pivot, ()))
            add = [pivot] + (rng.sample(linked, min(len(linked), rng.randint(1, 3))) if linked else [])
            touched = {c[0] for c in add}
            keep = [c for c in p['research'] if c[0] not in touched]
            old = [c for c in p['research'] if c[0] in touched and c not in add]
            p['research'] = add + old + keep
            # 被指定的生产者/消费者先保留，再按真实配额修复。
            weights = None
        elif domain['research']:
            add = rng.choice(domain['research'])
            same = [c for c in p['research'] if c[0] == add[0] and c != add]
            if add not in p['research']:
                if same:
                    p['research'].remove(rng.choice(same))
                p['research'].append(add)
            elif rng.random() < 0.3:
                p['research'].remove(add)
        if domain.get('merc') and rng.random() < 0.5:
            alt = self.sample(domain, rng, route=rng.randrange(4), preferences=preferences)
            g = rng.randint(1, 3)
            p['merc'] = [c for c in p['merc'] if domain['merc_groups'].get(c) != g] + [c for c in alt['merc'] if domain['merc_groups'][c] == g]
        if p.get('bloodline') and rng.random() < 0.06:
            p['lineage'] = not p.get('lineage', True)
        return self.repair(p, domain, weights)


class ResponseModel:
    """从整局数据学习整套方案的响应；预测只排提案顺序，最终排名永远用实测。"""
    def __init__(self, mechanisms, target, horizon):
        self.m = mechanisms
        self.target, self.horizon = target, horizon
        self.weights = collections.defaultdict(float)
        self.counts = collections.Counter()
        self.reference = {}
        self.features_cache = {}

    def features(self, plan, domain):
        key = plan_key(plan)
        if key in self.features_cache:
            return self.features_cache[key]
        chosen = set(plan.get('research', []) + plan.get('merc', []))
        out = {'r:' + c: 1.0 for c in chosen}
        unit = plan['faction'] + ':'
        out.update({'u:' + unit + c: 1.0 for c in chosen})
        for c in chosen:
            for d in self.m.links(domain).get(c, set()) & chosen:
                out['p:' + c + ':' + d] = 1.0
        if plan.get('lineage', True):
            out['lineage'] = 1.0
        # 精细搜索会产生远多于实跑数量的提案，特征缓存不能随 15 分钟预算无限长大。
        if len(self.features_cache) >= 8192:
            self.features_cache.clear()
        self.features_cache[key] = out
        return out

    def remember(self, row, domain):
        if not row.get('ok'):
            return
        key = structure_key(row['plan'])
        self.reference.setdefault(key, (fitness(row, self.target, self.horizon), self.features(row['plan'], domain)))

    def difference(self, plan, domain):
        x = self.features(plan, domain)
        ref = self.reference.get(structure_key(plan))
        if ref is None:
            return x
        old = ref[1]
        return {k: x.get(k, 0) - old.get(k, 0) for k in x.keys() | old.keys() if x.get(k, 0) != old.get(k, 0)}

    def train(self, rows, domains, rng):
        good = [r for r in rows if r.get('ok')]
        if len(good) > 768:
            good = good[-384:] + rng.sample(good[:-384], 384)
        for _ in range(3):
            rng.shuffle(good)
            for row in good:
                key = structure_key(row['plan'])
                domain = domains[key]
                self.remember(row, domain)
                x = self.difference(row['plan'], domain)
                if not x:
                    continue
                y = fitness(row, self.target, self.horizon) - self.reference[key][0]
                error = max(-5, min(5, y - sum(self.weights[k] * v for k, v in x.items())))
                step = 0.45 / max(1, sum(v*v for v in x.values()))
                for k, v in x.items():
                    self.weights[k] += step * (error * v - 0.001 * self.weights[k])
                    self.counts[k] += 1

    def predict(self, plan, domain, explore=0.2):
        x = self.difference(plan, domain)
        reference = self.reference.get(structure_key(plan), (0, {}))[0]
        mean = reference + sum(self.weights[k] * v for k, v in x.items())
        uncertainty = math.sqrt(sum(v*v/(2+self.counts[k]) for k, v in x.items()))
        return mean + explore * uncertainty
