"""各时长独立的实测种群；短局只提出候选，不冒充长局评分。"""
import collections
import math
import random

from rg_mechanisms import ResponseModel, plan_key, rank_key, structure_key


def balanced_structures(domains):
    """轮流覆盖阵营×显赫，再覆盖血统，避免显赫排在数百次试跑之后。"""
    groups = collections.defaultdict(collections.deque)
    for d in domains:
        p = d['structure']
        groups[(p['alignment'], p['faction'], p.get('prestige'))].append(d)
    order = []
    while any(groups.values()):
        for group in groups.values():
            if group:
                order.append(group.popleft())
    return order


def niche_value(row, niche):
    if niche == 'terminal':
        return row.get('value') or 0
    if niche == 'peak':
        return max((v for _, v in row.get('curve', [])), default=0)
    if niche == 'growth':
        curve = [(t, v) for t, v in row.get('curve', []) if v > 0]
        if len(curve) < 2:
            return 0
        first = curve[len(curve) // 2]
        last = curve[-1]
        return (math.log(last[1]) - math.log(first[1])) / max(1, last[0] - first[0])
    return (row.get('growth') or {}).get(niche) or 0


class Population:
    def __init__(self, model, domains, horizon, target=None, seed=0):
        self.model, self.domains = model, domains
        self.domain_map = {structure_key(d['structure']): d for d in domains}
        self.horizon, self.target = horizon, target
        self.rng = random.Random(seed)
        self.cache, self.valid = {}, {}
        self.deferred = {}
        self.archive = collections.defaultdict(list)
        self.response = ResponseModel(model, target, horizon)
        self.pending = collections.deque()
        self.initial = collections.deque()
        self.niches = ('terminal', 'peak', 'coins_generated', 'mana_generated', 'casts', 'buildings', 'growth')
        self.trained = 0
        self.completed = self.runs = self.promoted = self.blind = 0
        self.blind_cursor = 0
        self.seconds = 0.0

    def observe(self, requested, row):
        self.cache[plan_key(requested)] = row
        self.completed += 1
        self.runs += row.get('runs', 0)
        self.seconds += row.get('elapsed', 0)
        if not row.get('ok'):
            if row.get('deferred'):self.deferred[plan_key(requested)] = row
            return
        key = plan_key(row['plan'])
        self.cache.setdefault(key, row)
        self.valid[key] = row
        sk = structure_key(row['plan'])
        arc = self.archive[sk]
        if not any(plan_key(x['plan']) == key for x in arc):
            arc.append(row)
            arc.sort(key=rank_key)
            del arc[24:]
        self.response.remember(row, self.domain_map[sk])

    def best(self):
        return sorted((arc[0] for arc in self.archive.values() if arc), key=rank_key)

    def fronts(self):
        """保留实际终值、法术峰值、增长资源和后半程增长，不拟合虚构终值。"""
        rows = list(self.valid.values())
        rankings = [iter(sorted(rows, key=rank_key))]
        rankings += [iter(sorted(rows, key=lambda r: -niche_value(r, n))) for n in self.niches[1:]]
        out, seen = [], set()
        for _ in range(4):
            for ranking in rankings:
                for row in ranking:
                    key = plan_key(row['plan'])
                    if key not in seen:
                        seen.add(key)
                        out.append(row)
                        break
        return out

    def preferences(self, domain):
        sk = structure_key(domain['structure'])
        own = self.archive.get(sk, [])[:6]
        others = [arc[0] for key, arc in self.archive.items() if key[:2] == sk[:2] and arc]
        rows = own + sorted(others, key=rank_key)[:6]
        if not rows:
            return {}
        count = collections.Counter(c for r in rows for c in r['plan'].get('research', []) + r['plan'].get('merc', []))
        return {c: 0.6 + 1.4 * count[c] / len(rows) for c in domain['research'] + domain.get('merc', [])}

    def proposals(self, rng, size=48):
        if len(self.valid) - self.trained >= min(48, max(6, int(2880 / self.horizon))):
            self.response.train(list(self.valid.values()), self.domain_map, rng)
            self.trained = len(self.valid)
        best = self.best()
        leaders = sorted(self.valid.values(), key=rank_key)[:24]
        fronts = self.fronts()[:35]
        pending, seen, prefs = [], set(), {}
        for _ in range(max(120, size * 8)):
            choice = rng.random()
            if not best or choice < 0.20:
                domain = rng.choice(self.domains)
                arc = self.archive.get(structure_key(domain['structure']), [])
                parent = rng.choice(arc[:6])['plan'] if arc else self.model.sample(domain, rng, route=rng.randrange(4))
            else:
                rows = leaders[:4] if choice < 0.70 else best if choice < 0.85 else fronts
                # 按名次选择，数量级的差距不会让其他结构失去探索机会。
                row = rng.choices(rows, weights=[1 / (i + 1) ** 0.8 for i in range(len(rows))], k=1)[0]
                domain = self.domain_map[structure_key(row['plan'])]
                parent = row['plan']
            sk = structure_key(domain['structure'])
            if sk not in prefs:
                prefs[sk] = self.preferences(domain)
            donors = [r for r in leaders if r['plan']['faction'] == parent['faction']]
            donor = rng.choice(donors)['plan'] if donors and rng.random() < 0.6 else None
            plan = self.model.mutate(parent, domain, rng, donor=donor, preferences=prefs[sk])
            key = plan_key(plan)
            if key not in self.cache and key not in seen:
                seen.add(key)
                pending.append(plan)
        ranked = sorted(pending, key=lambda p: -self.response.predict(p, self.domain_map[structure_key(p)], explore=0.35))
        chosen = ranked[:size // 2]
        rest = ranked[size // 2:]
        # 一半保留模型的判断，一半给结构、资源增长与未知联动继续试验。
        rng.shuffle(rest)
        by_structure = collections.defaultdict(collections.deque)
        for p in rest:
            by_structure[structure_key(p)].append(p)
        while len(chosen) < size and by_structure:
            for sk in list(by_structure):
                chosen.append(by_structure[sk].popleft())
                if not by_structure[sk]:
                    del by_structure[sk]
                if len(chosen) >= size:
                    break
        return chosen

    def next_proposal(self, rng, inflight, *, seeds=True):
        for _ in range(256):
            if seeds and self.initial and (len(self.valid) < 36 or rng.random() < 0.4):
                plan = self.initial.popleft()
            else:
                if not self.pending:
                    self.pending.extend(self.proposals(rng))
                if not self.pending:
                    if self.initial:
                        plan = self.initial.popleft()
                    else:
                        return None
                else:
                    plan = self.pending.popleft()
            key = plan_key(plan)
            if key not in self.cache and key not in inflight:
                return plan
        return None

    def summary(self):
        return dict(horizon=self.horizon, completed=self.completed, runs=self.runs,
                    unique_valid=len(self.valid), structures=len(self.archive),
                    worker_seconds=self.seconds, promoted=self.promoted, blind=self.blind)
