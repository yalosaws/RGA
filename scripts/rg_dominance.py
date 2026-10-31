"""研究之间的支配关系：从游戏代码证明「研究 A 在任何状态下都不比 B 差」。

python -X utf8 scripts/rg_dominance.py [--domain 0|1] [--json 输出]

定义：同一分支里，A 支配 B，指任何一套方案里有 B 没有 A 时，把 B 换成 A，整局结果不会变差。
成立时，求解器只需考虑「有 B 就有 A」的方案（有 B 没 A 的，换成 A 不差）。

证明分四步，任何一步证不出来都不判（宁可漏判，不能错判）：
1. 能买到：A 的编号不大于 B（研究要研究点数够编号才显示，价格也随编号单调涨），
   A 的阵营 / 立场要求是 B 的子集，A 没有额外的购买条件（或和 B 的相同）。
2. B 的每一处作用都找得到：在游戏全部代码里找 B 被引用的地方。界面文字（描述、进度、模板载入）不算作用；
   作为别的研究（组合研究）的前置条件、或在 Formulas 以外的地方起作用的，B 不判为被支配。
   Formulas 里的作用必须是「if(拥有 B) { 累计量 op= 表达式 }」这种形状，且不在 if / else 链里。
3. 每一处 B 的作用，A 在同一个代码块里有同一个累计量、同一种运算的作用，并且
   在两处之间这个累计量只被同一种运算修改（乘法和乘法可交换、加法和加法可交换），
   且 A 的值 ≥ B 的值对所有状态成立（区间运算 + 分割证明）。
   A 多出来的作用必须是有益的（乘 ≥ 1、加 ≥ 0，在越大越好的量上）。
4. 比较整局轨迹时用的「比较原理」：如果每个时刻 A 方案的状态都不比 B 方案差，则各速率也不差，
   状态就一直不差。要求 A 的值随会变的状态量单调不减。
   这一步依赖一个假设：游戏的状态更新是单调的（产出、回魔、魔上限越大，之后的各量都不会变小）。
   法术目标随机、买东西的先后等会让这条假设不严格成立，所以结果要用整局跑抽查。

变量的定义域：默认所有量 ≥ 0。--domain 1 时把「数量、时间、产出量」看成 0 或 ≥ 1
（第一秒以内的差别忽略），能多证出一些。
"""
import argparse
import json
import math
from pathlib import Path
import re
import sys

ROOT = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(Path(__file__).resolve().parent))
SRC = ROOT / 'build/installed-as3-named/scripts'
OUT = ROOT / 'docs/研究支配关系（客户端4.3.14）.json'

import research_formulas as RF   # noqa: E402  复用表达式解析器和类文件索引

FILES = {k: v.read_text(encoding='utf-8', errors='ignore') for k, v in RF.FILES.items()}
BRANCH = 'SCDEAW'

# 累计量越大越好的函数（产出、回魔、魔上限……）；越小越好的（价格、消耗）；和整局目标无关的（离线、宝石、考古）
HIGHER = {'getResourcePerTick', 'getFactionCoinChance', 'getProductionPerTickReal', 'getAssistantsNumReal',
          'getManaPerTickReal', 'getMaxManaReal', 'getSpellDuration', 'getExchangeBonus', 'getResourcePerClickReal',
          'getAssistantsMultiplierReal', 'getTrophyNum', 'getExchangeBase', 'getMaxSpellTier'}
LOWER = {'getSpellCost', 'getBuildingCostReal'}
IRRELEVANT = {'getOfflineBonus', 'getGemMultiplierBase', 'getGemMultiplier', 'getExcavationCost'}
# 研究类里只和界面有关的函数；其他类里只和界面有关的位置
UI_FUNCS = {'progress', 'getDescription', 'description', 'getHint', 'getTooltip', 'getAssistantTooltip',
            'loadTemplate', 'canReset', 'isQuestion', 'isExclamation', 'isCross'}


# ---------------------------------------------------------------- 研究的基本信息
def research_meta():
    rows = json.loads((ROOT / 'docs/客户端研究对照.json').read_text(encoding='utf-8'))
    out = {}
    for r in rows:
        text = FILES.get(r['class'])
        if not text:
            continue
        ctor = re.search(r'public function %s\(\)\s*\{(.*?)\n      \}' % r['class'], text, re.S)
        fields = dict(re.findall(r'(§[^§]*§) = (-?\d+);', ctor.group(1))) if ctor else {}
        g = lambda k: int(fields.get(k, -1))   # noqa: E731
        overrides = {}
        for name in ('condition', 'purchasable'):
            m = re.search(r'override public function get %s\(\) : Boolean\s*\{(.*?)\n      \}' % name, text, re.S)
            if m:
                overrides[name] = re.sub(r'\s+', ' ', m.group(1).replace(r['class'], '@')).strip()
        out[r['class']] = dict(code=r['code'], name=r['name'], cls=r['class'], id=r['id'],
                               num=g('§%w§'), branch=g('§!G§'), cond_faction=g('§^!C§'),
                               bound=g('§-!^§'), align=g('§;!#§'), overrides=overrides)
    return out


def available_subset(a, b):
    """B 能买时 A 一定能买，且 A 不比 B 贵。"""
    if a['branch'] != b['branch'] or a['num'] > b['num']:
        return False
    for k in ('cond_faction', 'bound', 'align'):
        if a[k] != -1 and a[k] != b[k]:
            return False
    # 研究点数到 5000 以上要 R180 和遗物，编号小的不受这条影响；A 的额外条件必须和 B 的一样
    for name, body in a['overrides'].items():
        if b['overrides'].get(name) != body:
            return False
    return True


# ---------------------------------------------------------------- 代码块结构
class Block:
    def __init__(self, header, start, parent):
        self.header, self.start, self.parent, self.items = header, start, parent, []


def parse_function(lines, i0, i1):
    """lines[i0] 是函数开头的 '{'，lines[i1] 是对应的 '}'。返回最外层 Block；items 里是 (行号, 文本) 或 Block。"""
    root = Block(None, i0, None)
    cur = root
    i = i0 + 1
    while i < i1:
        s = lines[i].strip()
        if s == '{':
            header = cur.items.pop() if cur.items and not isinstance(cur.items[-1], Block) else (None, '')
            b = Block(header[1], header[0], cur)
            cur.items.append(b)
            cur = b
        elif s == '}':
            cur = cur.parent
        elif s:
            cur.items.append((i, s))
        i += 1
    return root


def functions_of(text):
    """类文件里的函数：名字 → (开始行, 结束行)；也给出每一行属于哪个函数。"""
    lines = text.split('\n')
    funcs, owner = {}, [None] * len(lines)
    i = 0
    while i < len(lines):
        m = re.match(r'      (?:override )?(?:public |private |protected |internal )?(?:static )?(?:final )?function (?:get |set )?(\S+?)\(', lines[i])
        if m and i + 1 < len(lines) and lines[i + 1] == '      {':
            j = i + 2
            while j < len(lines) and lines[j] != '      }':
                j += 1
            funcs.setdefault(m.group(1), (i + 1, j))
            for k in range(i, j + 1):
                owner[k] = m.group(1)
            i = j
        i += 1
    return lines, funcs, owner


FORMULAS = functions_of(FILES['Formulas'])
_trees = {}


def tree_of(fn):
    if fn not in _trees:
        lines, funcs, _ = FORMULAS
        _trees[fn] = parse_function(lines, *funcs[fn])
    return _trees[fn]


def find_header(block, line):
    """找到 header 在第 line 行的子块，返回 (父块, 下标, 子块)。"""
    for k, it in enumerate(block.items):
        if isinstance(it, Block):
            if it.start == line:
                return block, k, it
            r = find_header(it, line)
            if r:
                return r
    return None


def walk_texts(item):
    """一个 Block 或语句里所有的文本（含 header）。"""
    if isinstance(item, Block):
        yield item.header or ''
        for x in item.items:
            yield from walk_texts(x)
    else:
        yield item[1]


def split_and(cond):
    """顶层 && 拆开；含顶层 || 时返回 None。"""
    parts, depth, cur, i = [], 0, '', 0
    while i < len(cond):
        c = cond[i]
        if c == '(':
            depth += 1
        elif c == ')':
            depth -= 1
        if depth == 0 and cond.startswith('&&', i):
            parts.append(cur.strip())
            cur, i = '', i + 2
            continue
        if depth == 0 and cond.startswith('||', i):
            return None
        cur += c
        i += 1
    parts.append(cur.strip())
    return parts


def strip_parens(s):
    s = s.strip()
    while s.startswith('(') and s.endswith(')'):
        depth = 0
        for k, c in enumerate(s):
            depth += c == '('
            depth -= c == ')'
            if depth == 0 and k < len(s) - 1:
                return s
        s = s[1:-1].strip()
    return s


ASSIGN = re.compile(r'^(_loc\d+_|\w+)\s*(\*|\+|-|/)=\s*(.*);$')


class Opaque(Exception):
    pass


def formulas_site(cls, fn, line):
    """Formulas 里 cls 在第 line 行的一处作用 → dict(fn, block, index, acc, op, expr 文本, extra 条件)。"""
    lines = FORMULAS[0]
    text = lines[line].strip()
    m = re.match(r'^(else )?if\((.*)\)$', text)
    if not m:
        raise Opaque('不在 if 条件里：' + text[:80])
    if m.group(1):
        raise Opaque('在 else if 链里')
    found = find_header(tree_of(fn), line)
    if not found:
        raise Opaque('找不到代码块')
    parent, k, blk = found
    nxt = parent.items[k + 1] if k + 1 < len(parent.items) else None
    if nxt is not None and not isinstance(nxt, Block) and nxt[1].startswith('else'):
        raise Opaque('if 后面有 else')
    if isinstance(nxt, Block) and (nxt.header or '').startswith('else'):
        raise Opaque('if 后面有 else')
    conj = split_and(m.group(2))
    if conj is None:
        raise Opaque('条件里有 ||')
    own = [c for c in conj if strip_parens(c) in ('Game.hasUpgrade(%s.id)' % cls,)]
    if len(own) != 1:
        raise Opaque('条件不是「拥有它」：' + m.group(2)[:80])
    extra = [c for c in conj if c not in own]
    if any(re.search(r'\b%s\b' % cls, c) for c in extra):
        extra = [resolve_statics(cls, c) for c in extra]
    if len(blk.items) != 1 or isinstance(blk.items[0], Block):
        raise Opaque('块里不止一句')
    a = ASSIGN.match(blk.items[0][1])
    if not a:
        raise Opaque('不是「累计量 op= 表达式」：' + blk.items[0][1][:80])
    return dict(fn=fn, parent=id(parent), parent_obj=parent, index=k, acc=a.group(1), op=a.group(2),
                expr=a.group(3), extra=tuple(sorted(extra)))


def resolve_statics(cls, cond):
    def rep(m):
        v = RF.class_static(cls, m.group(1))
        if v is None:
            raise Opaque('条件里有读不出的字段：' + m.group(0))
        return repr(v)
    return re.sub(r'\b%s\.(§[^§]*§|\w+)' % cls, rep, cond)


def commuting(site_a, site_b):
    """同一代码块里两处之间，累计量只被同一种运算修改、不被读取。"""
    if site_a['parent'] != site_b['parent'] or site_a['acc'] != site_b['acc'] or site_a['op'] != site_b['op']:
        return False
    if site_a['fn'] != site_b['fn']:
        return False
    lo, hi = sorted((site_a['index'], site_b['index']))
    acc, op = site_a['acc'], site_a['op']
    pat = re.compile(r'\b%s\b' % re.escape(acc))
    for it in site_a['parent_obj'].items[lo + 1:hi]:
        for t in walk_texts(it):
            if re.match(r'^(case |default:|break;|continue;|return)', t):
                return False
            if not pat.search(t):
                continue
            a = ASSIGN.match(t)
            if not a or a.group(1) != acc or a.group(2) != op or pat.search(a.group(3)):
                return False
    return True


# ---------------------------------------------------------------- 引用
def references(meta):
    """每个研究在自己类以外被引用的地方，分成作用 / 前置条件 / 界面 / 其他。"""
    own_file = {c: c for c in meta}
    refs = {c: dict(sites=[], prereq_of=[], opaque=[]) for c in meta}
    pats = {c: re.compile(r'\b%s\.(§[^§]*§|\w+)' % c) for c in meta}
    any_pat = re.compile(r'\b(%s)\.' % '|'.join(sorted(meta, key=len, reverse=True)))
    for fcls, text in FILES.items():
        if not any_pat.search(text):
            continue
        lines, funcs, owner = functions_of(text) if fcls != 'Formulas' else FORMULAS
        for i, line in enumerate(lines):
            for m in any_pat.finditer(line):
                c = m.group(1)
                if own_file.get(c) == fcls:
                    continue
                fn = owner[i]
                where = '%s.%s' % (fcls, fn)
                if fn in UI_FUNCS:
                    continue
                if fcls in meta and fn == 'condition':
                    refs[c]['prereq_of'].append(fcls)
                    continue
                if fcls == 'Formulas':
                    if fn in IRRELEVANT:
                        continue
                    if not re.match(r'^\s*(else )?if\(', line):
                        # 作用语句本身（X.getM()）在 if 块里，由 if 那一行处理
                        hdr = lines[i - 2].strip() if i >= 2 else ''
                        if lines[i - 1].strip() == '{' and re.search(r'Game\.hasUpgrade\(%s\.id\)' % c, hdr):
                            continue
                        refs[c]['opaque'].append('%s：%s' % (where, line.strip()[:90]))
                        continue
                    if fn not in HIGHER and fn not in LOWER:
                        refs[c]['opaque'].append('%s（不知道越大越好还是越小越好）' % where)
                        continue
                    try:
                        site = formulas_site(c, fn, i)
                        site['line'] = i + 1
                        if site not in refs[c]['sites']:
                            refs[c]['sites'].append(site)
                    except Opaque as e:
                        refs[c]['opaque'].append('%s 第 %d 行：%s' % (where, i + 1, e))
                    continue
                refs[c]['opaque'].append('%s：%s' % (where, line.strip()[:90]))
    # 同一行可能匹配多次（条件 + 作用写在一起），去重
    for r in refs.values():
        seen, uniq = set(), []
        for s in r['sites']:
            if s['line'] not in seen:
                seen.add(s['line'])
                uniq.append(s)
        r['sites'] = uniq
        r['prereq_of'] = sorted(set(r['prereq_of']))
        r['opaque'] = sorted(set(r['opaque']))
    return refs


# ---------------------------------------------------------------- 表达式：解析、展开、区间运算
INF = float('inf')


def up(x):
    return math.nextafter(x, INF) if math.isfinite(x) else x


def dn(x):
    return math.nextafter(x, -INF) if math.isfinite(x) else x


class I:
    """闭区间 [lo, hi]，运算都向外取整。"""
    __slots__ = ('lo', 'hi')

    def __init__(self, lo, hi=None):
        self.lo, self.hi = lo, lo if hi is None else hi
        if math.isnan(self.lo) or math.isnan(self.hi):
            raise Opaque('区间出现 NaN')

    def __repr__(self):
        return '[%g, %g]' % (self.lo, self.hi)


def i_add(a, b):
    return I(dn(a.lo + b.lo), up(a.hi + b.hi))


def i_neg(a):
    return I(-a.hi, -a.lo)


def i_mul(a, b):
    ps = []
    for x in (a.lo, a.hi):
        for y in (b.lo, b.hi):
            ps.append(0.0 if (x == 0 or y == 0) else x * y)
    return I(dn(min(ps)), up(max(ps)))


def i_div(a, b):
    if b.lo <= 0 <= b.hi:
        raise Opaque('除数可能为 0')
    return i_mul(a, I(dn(1 / b.hi), up(1 / b.lo)))


def i_pow(a, b):
    if b.lo == b.hi:
        p = b.lo
        if a.lo < 0:
            if p == int(p):
                pass
            else:
                raise Opaque('负数的非整数次幂')
        if p == int(p) and a.lo < 0:
            vals = [x ** p for x in (a.lo, a.hi)]
            if p % 2 == 0 and a.lo < 0 < a.hi:
                vals.append(0.0)
            return I(dn(min(vals)), up(max(vals)))
    if a.lo < 0:
        raise Opaque('负数底的幂')
    vals = []
    for x in (a.lo, a.hi):
        for y in (b.lo, b.hi):
            try:
                vals.append(math.pow(x, y))
            except OverflowError:
                vals.append(INF)
            except ValueError:
                raise Opaque('pow 定义域')
    return I(dn(min(vals)), up(max(vals)))


def i_mono(f, a, inc=True):
    lo, hi = f(a.lo), f(a.hi)
    return I(dn(lo), up(hi)) if inc else I(dn(hi), up(lo))


def i_log(a):
    if a.lo <= 0:
        if a.hi <= 0:
            raise Opaque('log 定义域')
        return I(-INF, up(math.log(a.hi)))
    return i_mono(math.log, a)


def i_exp(a):
    def e(x):
        try:
            return math.exp(x)
        except OverflowError:
            return INF
    return i_mono(e, a)


# 变量：游戏里读的量。类别：
#   exo  两套方案里一样（时间、点击、存档里固定的量、参数），不要求单调
#   ord  随状态变（建筑数、产生的魔力、魔上限……），按比较原理两套方案有序，要求 A 单调不减
#   unk  其他（生效中的法术等），A 不能依赖
EXO_CALLS = {'Utilities.getTimeStat', 'Utilities.getStat', 'Utilities.getClicks', 'Utilities.getResearchPointSpent',
             'Utilities.getResearchValue', 'Formulas.getTrophyNum', 'Utilities.getExcavation', 'Utilities.getArtifactNum',
             'Utilities.getOfflineTime', 'Utilities.getFactionTime', 'Utilities.getMinLineageLevel',
             'Utilities.getRubiesTotal', 'Utilities.getGems'}
ORD_CALLS = {'Utilities.getBuildingNumber', 'Utilities.getNonUniqueBuildingNumber', 'Utilities.getUniqueBuildingNumber',
             'Utilities.getManaProduced', 'Utilities.getFactionCoinTotal', 'Utilities.getFactionCoins',
             'Formulas.getMaxMana', 'Formulas.getManaPerSecond', 'Formulas.getManaPerTick', 'Formulas.getAssistantsNum',
             'Utilities.getMaxBuildingNumber', 'Game.getBuildingNum'}


class Var:
    def __init__(self, key, kind, lo=0.0, hi=1.7e308, integer=False):
        self.key, self.kind, self.lo, self.hi, self.integer = key, kind, lo, hi, integer


def unparse(e):
    t = e[0]
    if t == 'num':
        return repr(e[1])
    if t == 'str':
        return '"%s"' % e[1]
    if t == 'name':
        return e[1]
    if t == 'member':
        return unparse(e[1]) + '.' + e[2]
    if t == 'call':
        return unparse(e[1]) + '(' + ','.join(unparse(a) for a in e[2]) + ')'
    if t == 'index':
        return unparse(e[1]) + '[' + unparse(e[2]) + ']'
    if t == 'un':
        return e[1] + unparse(e[2])
    if t == 'bin':
        return '(' + unparse(e[2]) + e[1] + unparse(e[3]) + ')'
    if t == 'cond':
        return '(' + unparse(e[1]) + '?' + unparse(e[2]) + ':' + unparse(e[3]) + ')'
    return str(e)


MATH1 = {'Math.log': i_log, 'Math.exp': i_exp, 'Math.sqrt': lambda a: i_pow(a, I(0.5)),
         'Math.floor': lambda a: i_mono(math.floor, a), 'Math.ceil': lambda a: i_mono(math.ceil, a),
         'Math.round': lambda a: i_mono(lambda x: math.floor(x + 0.5), a)}


class Expr:
    """展开后的表达式树；变量登记在 self.vars（key → Var）。"""

    def __init__(self, tree, vars_):
        self.tree, self.vars = tree, vars_


def inline(e, cls, depth=0, env=None):
    """把 类.方法(参数) 换成方法体（只有一句 return 的），类.静态字段 换成常量。cls 是当前类（同类里的调用）。"""
    env = env or {}
    t = e[0]
    if t == 'name' and e[1] in env:
        return env[e[1]]
    if t == 'call':
        fd = RF.dotted(e[1])
        args = [inline(a, cls, depth, env) for a in e[2]]
        if fd and '.' not in fd and cls:      # 同类里的静态函数
            fd = cls + '.' + fd
        if fd and fd.count('.') == 1:
            owner, meth = fd.split('.')
            if owner not in ('Math', 'Utilities', 'Formulas', 'Game') and owner in FILES and depth < 4:
                body = method_return(owner, meth)
                if body is None:
                    raise Opaque('%s.%s 不是一句 return' % (owner, meth))
                params, tree = body
                sub = dict(zip(params, args))
                return inline(tree, owner, depth + 1, sub)
        return ('call', e[1], args)
    if t == 'member':
        fd = RF.dotted(e)
        if fd and fd.count('.') == 1:
            owner, field = fd.split('.')
            if owner in FILES and owner not in ('Game', 'Utilities', 'Formulas'):
                v = RF.class_static(owner, field)
                if v is not None:
                    return ('num', v)
        return ('member', inline(e[1], cls, depth, env), e[2])
    if t == 'bin':
        return ('bin', e[1], inline(e[2], cls, depth, env), inline(e[3], cls, depth, env))
    if t == 'un':
        return ('un', e[1], inline(e[2], cls, depth, env))
    if t == 'cond':
        return ('cond',) + tuple(inline(x, cls, depth, env) for x in e[1:])
    if t == 'index':
        return ('index', inline(e[1], cls, depth, env), inline(e[2], cls, depth, env))
    return e


_ret = {}


def method_return(cls, meth):
    key = (cls, meth)
    if key not in _ret:
        _ret[key] = None
        text = FILES.get(cls, '')
        m = re.search(r'(?:override )?public (?:static )?function (?:get )?%s\(([^)]*)\)\s*:\s*\w+\s*\{(.*?)\n      \}' % re.escape(meth), text, re.S)
        if m:
            body = m.group(2).strip()
            r = re.fullmatch(r'return ([^;]*);', body, re.S)
            if r:
                params = [p.split(':')[0].strip() for p in m.group(1).split(',') if p.strip()]
                try:
                    _ret[key] = (params, RF.Parser(r.group(1)).parse())
                except ValueError:
                    pass
    return _ret[key]


def classify_var(e, unit_domain):
    """读到的量 → Var。"""
    key = unparse(e)
    lo1 = 1.0 if unit_domain else 0.0
    if e[0] == 'member' and RF.dotted(e) and RF.dotted(e).startswith('param1.'):
        f = RF.dotted(e)
        if f == 'param1.tier':
            return Var(key, 'exo', 0, 11, True)
        return Var(key, 'exo', 0, 1.7e308)
    if e[0] == 'member' and RF.dotted(e) in ('Game.reincarnation', 'Game.ascension'):
        return Var(key, 'exo', 0, 1e6, True)
    if e[0] == 'call':
        fd = RF.dotted(e[1]) or ''
        if fd in EXO_CALLS:
            return Var(key, 'exo', 0, 1.7e308)
        if fd in ORD_CALLS:
            v = Var(key, 'ord', 0, 1.7e308)
            if fd == 'Formulas.getMaxMana':
                v.lo = 1000.0          # getMaxManaReal 从 1000 起加
            return v
    return Var(key, 'unk', 0, 1.7e308)


def collect_vars(e, out, unit_domain):
    t = e[0]
    if t in ('num', 'str'):
        return
    if t == 'call':
        fd = RF.dotted(e[1]) or ''
        if fd.startswith('Math.'):
            for a in e[2]:
                collect_vars(a, out, unit_domain)
            return
        out.setdefault(unparse(e), classify_var(e, unit_domain))
        return
    if t in ('member', 'name', 'index'):
        out.setdefault(unparse(e), classify_var(e, unit_domain))
        return
    for x in e[1:]:
        if isinstance(x, tuple):
            collect_vars(x, out, unit_domain)


def ev(e, box):
    """区间求值。box：变量 key → I。布尔值用 I(0/1)。"""
    t = e[0]
    if t == 'num':
        return I(e[1])
    if t in ('member', 'name', 'index'):
        k = unparse(e)
        if k in box:
            return box[k]
        if k == 'true':
            return I(1.0)
        if k == 'false':
            return I(0.0)
        raise Opaque('未登记的量 ' + k)
    if t == 'call':
        fd = RF.dotted(e[1]) or ''
        if fd == 'Math.pow':
            return i_pow(ev(e[2][0], box), ev(e[2][1], box))
        if fd in MATH1:
            return MATH1[fd](ev(e[2][0], box))
        if fd == 'Math.abs':
            a = ev(e[2][0], box)
            if a.lo >= 0:
                return a
            if a.hi <= 0:
                return i_neg(a)
            return I(0.0, max(-a.lo, a.hi))
        if fd in ('Math.min', 'Math.max'):
            vs = [ev(x, box) for x in e[2]]
            f = min if fd == 'Math.min' else max
            return I(f(v.lo for v in vs), f(v.hi for v in vs))
        k = unparse(e)
        if k in box:
            return box[k]
        raise Opaque('未登记的调用 ' + k)
    if t == 'un':
        a = ev(e[2], box)
        if e[1] == '-':
            return i_neg(a)
        if e[1] == '!':
            return I(1.0 - a.hi, 1.0 - a.lo)
    if t == 'bin':
        op = e[1]
        a, b = ev(e[2], box), ev(e[3], box)
        if op == '+':
            return i_add(a, b)
        if op == '-':
            return i_add(a, i_neg(b))
        if op == '*':
            return i_mul(a, b)
        if op == '/':
            return i_div(a, b)
        if op in ('<', '<=', '>', '>='):
            if op in ('>', '>='):
                a, b, op = b, a, {'>': '<', '>=': '<='}[op]
            sure = a.hi < b.lo if op == '<' else a.hi <= b.lo
            never = a.lo >= b.hi if op == '<' else a.lo > b.hi
            return I(1.0) if sure else I(0.0) if never else I(0.0, 1.0)
        if op in ('==', '===', '!=', '!=='):
            eq_sure = a.lo == a.hi == b.lo == b.hi
            eq_never = a.hi < b.lo or b.hi < a.lo
            r = I(1.0) if eq_sure else I(0.0) if eq_never else I(0.0, 1.0)
            return r if op in ('==', '===') else I(1.0 - r.hi, 1.0 - r.lo)
        if op == '&&':
            return I(min(a.lo, b.lo), min(a.hi, b.hi))
        if op == '||':
            return I(max(a.lo, b.lo), max(a.hi, b.hi))
    if t == 'cond':
        c = ev(e[1], box)
        if c.lo >= 1:
            return ev(e[2], box)
        if c.hi <= 0:
            return ev(e[3], box)
        x, y = ev(e[2], box), ev(e[3], box)
        return I(min(x.lo, y.lo), max(x.hi, y.hi))
    raise Opaque('不认识的表达式 %s' % (t,))


def site_value(cls, site):
    """作用语句右边的表达式，展开 cls 的方法。"""
    tree = RF.Parser(site['expr']).parse()
    return inline(tree, None)


def initial_box(vs):
    return {k: I(v.lo, v.hi) for k, v in vs.items()}


def split_points(v, iv):
    """把一个变量的区间分成两半：跨度大时按对数分，否则按算术分。"""
    lo, hi = iv.lo, iv.hi
    if lo <= 0 < hi:
        m = min(hi, 1e-12) if hi > 1e-12 else hi / 2
        if m <= lo:
            m = (lo + hi) / 2
        return [(lo, m), (m, hi)]
    if lo > 0 and hi / lo > 4:
        m = math.sqrt(lo) * math.sqrt(hi)
    else:
        m = (lo + hi) / 2
    if v.integer:
        m = math.floor(m)
        if m <= lo:
            m = lo
        return [(lo, m), (m + 1, hi)] if m + 1 <= hi else [(lo, hi)]
    return [(lo, m), (m, hi)]


def prove_ge(fa, fb, vs, unit_domain, budget=4000):
    """证明 fa ≥ fb 在定义域上恒成立。返回 'proved' / 'refuted'（附反例）/ 'unknown'。"""
    diff = ('bin', '-', fa, fb)
    keys = sorted(vs)
    # 定义域：每个量 0 或 [lo1, hi]（unit_domain 时 lo1 = 1，否则整段 [0, hi]）
    pieces = [{}]
    for k in keys:
        v = vs[k]
        parts = []
        if unit_domain and v.lo == 0 and v.kind != 'exo' or unit_domain and v.lo == 0 and not k.startswith('param1.'):
            parts = [(0.0, 0.0), (1.0, v.hi)]
        else:
            parts = [(v.lo, v.hi)]
        pieces = [dict(p, **{k: I(*q)}) for p in pieces for q in parts]
    stack = list(pieces)
    n = 0
    while stack:
        box = stack.pop()
        n += 1
        if n > budget:
            return 'unknown', None
        try:
            d = ev(diff, box)
        except Opaque:
            d = None
        if d is not None and d.lo >= 0:
            continue
        # 试中点：小于 0 就是反例
        mid = {k: I(_mid(vs[k], iv)) for k, iv in box.items()}
        try:
            dm = ev(diff, mid)
            if dm.hi < 0:
                return 'refuted', {k: iv.lo for k, iv in mid.items()}
        except Opaque:
            pass
        # 分割最宽的变量
        widest, score = None, -1
        for k, iv in box.items():
            if iv.lo == iv.hi:
                continue
            if iv.lo > 0 and iv.hi > iv.lo:
                w = min(400.0, math.log10(iv.hi / iv.lo)) if math.isfinite(iv.hi / iv.lo) else 400.0
            elif iv.lo < 0 < iv.hi or iv.lo == 0 < iv.hi:
                w = 400.0
            else:
                w = 0.0
            if vs[k].integer:
                w = max(w, (iv.hi - iv.lo) / max(1.0, iv.hi))
            if w > score:
                widest, score = k, w
        if widest is None or score < 1e-9:
            return 'unknown', None
        for a, b in split_points(vs[widest], box[widest]):
            stack.append(dict(box, **{widest: I(a, b)}))
    return 'proved', None


def _mid(v, iv):
    lo, hi = iv.lo, iv.hi
    if lo > 0 and hi / lo > 4:
        m = math.sqrt(lo) * math.sqrt(hi)
    else:
        m = (lo + hi) / 2
    return math.floor(m) if v.integer else m


def monotone_nondecreasing(f, vs, unit_domain):
    """A 的值对每个 ord 量单调不减：f(x + h) ≥ f(x)，用「把 x 换成 x 与 y 两个变量、y ≥ x」证明。"""
    for k, v in vs.items():
        if v.kind != 'ord':
            continue
        # 换元：x 和 y = x·(1+s)，s ≥ 0；证 f(y) ≥ f(x)
        ky = k + '#y'
        fy = substitute_var(f, k, ('call', ('name', '__Y__'), [('name', ky)]))
        fy = rename_call(fy, ky)
        vs2 = dict(vs)
        vs2[ky] = Var(ky, 'ord', v.lo, v.hi)
        # 只在 y ≥ x 的格子里证：做法是把 y 写成 x + t，t ≥ 0
        kt = k + '#t'
        fy = substitute_var(f, k, ('bin', '+', ('name', k), ('name', kt)))
        vs3 = dict(vs)
        vs3[kt] = Var(kt, 'exo', 0.0, 1.7e308)
        r, _ = prove_ge(fy, f, vs3, unit_domain, budget=3000)
        if r != 'proved':
            return False
    return True


def substitute_var(e, key, rep):
    if unparse(e) == key and e[0] in ('call', 'member', 'name', 'index'):
        return rep
    if e[0] == 'call':
        fd = RF.dotted(e[1]) or ''
        if fd.startswith('Math.'):
            return ('call', e[1], [substitute_var(a, key, rep) for a in e[2]])
        return e
    if e[0] in ('bin',):
        return ('bin', e[1], substitute_var(e[2], key, rep), substitute_var(e[3], key, rep))
    if e[0] == 'un':
        return ('un', e[1], substitute_var(e[2], key, rep))
    if e[0] == 'cond':
        return ('cond',) + tuple(substitute_var(x, key, rep) for x in e[1:])
    return e


def rename_call(e, key):
    return e


# ---------------------------------------------------------------- 支配判定
def effect_ok(site, value, vs, unit_domain):
    """A 多出来的作用是否有益：越大越好的量上乘 ≥ 1 / 加 ≥ 0；越小越好的反过来。"""
    better_high = site['fn'] in HIGHER
    op = site['op']
    if op in ('*', '/'):
        ref = ('num', 1.0)
    elif op in ('+', '-'):
        ref = ('num', 0.0)
    else:
        return False
    want_ge = (op in ('*', '+')) == better_high
    r, _ = prove_ge(value, ref, vs, unit_domain) if want_ge else prove_ge(ref, value, vs, unit_domain)
    return r == 'proved'


def analyze(unit_domain=False):
    meta = research_meta()
    refs = references(meta)
    # 每个研究：能否当被支配者（作用全看懂）、能否当支配者（没有看不懂的作用），以及每处作用的展开值
    info = {}
    for c, m in meta.items():
        r = refs[c]
        vals, bad = [], list(r['opaque'])
        for s in r['sites']:
            try:
                v = site_value(c, s)
                vs = {}
                collect_vars(v, vs, unit_domain)
                vals.append((s, v, vs))
            except (Opaque, ValueError, RF.Unknown, KeyError, IndexError) as e:
                bad.append('%s 第 %d 行：%s' % (s['fn'], s['line'], e))
        info[c] = dict(meta=m, sites=vals, bad=bad, prereq_of=r['prereq_of'])
    pairs, stats = [], dict(considered=0, avail=0)
    blockers = {}
    for cb, ib in info.items():
        if ib['bad'] or ib['prereq_of'] or not ib['sites']:
            continue
        for ca, ia in info.items():
            if ca == cb or ia['bad'] or not available_subset(ia['meta'], ib['meta']):
                continue
            stats['avail'] += 1
            ok, why, used = True, [], set()
            for sb, vb, vsb in ib['sites']:
                match = None
                for k, (sa, va, vsa) in enumerate(ia['sites']):
                    if sa['extra'] == sb['extra'] and commuting(sa, sb):
                        match = k
                        break
                if match is None:
                    ok = False
                    why.append('B 的 %s 第 %d 行没有对应' % (sb['fn'], sb['line']))
                    break
                sa, va, vsa = ia['sites'][match]
                used.add(match)
                vs = dict(vsb)
                vs.update(vsa)
                if any(v.kind == 'unk' for v in vsa.values()):
                    ok = False
                    why.append('A 依赖不确定的量')
                    break
                higher = sb['fn'] in HIGHER
                better_ge = (sb['op'] in ('*', '+')) == higher
                res, cex = prove_ge(va, vb, vs, unit_domain) if better_ge else prove_ge(vb, va, vs, unit_domain)
                if res != 'proved':
                    ok = False
                    why.append('%s：%s' % (res, cex) if cex else res)
                    break
                if sb['op'] == '*' and higher:
                    # 乘法要求累计量非负、乘数非负：在越大越好的量上，乘数 ≥ 0 才保序
                    r0, _ = prove_ge(vb, ('num', 0.0), vs, unit_domain)
                    if r0 != 'proved':
                        ok = False
                        why.append('乘数可能为负')
                        break
                if not monotone_nondecreasing(va, vsa, unit_domain):
                    ok = False
                    why.append('A 的值不是随状态单调不减')
                    break
            if ok:
                for k, (sa, va, vsa) in enumerate(ia['sites']):
                    if k in used:
                        continue
                    if any(v.kind == 'unk' for v in vsa.values()) or not effect_ok(sa, va, vsa, unit_domain) \
                            or not monotone_nondecreasing(va, vsa, unit_domain):
                        ok = False
                        why.append('A 多出来的 %s 第 %d 行不能证明有益' % (sa['fn'], sa['line']))
                        break
            stats['considered'] += 1
            if ok:
                pairs.append((ca, cb))
            else:
                blockers.setdefault(cb, []).append((ca, why[0] if why else ''))
    return meta, info, pairs, stats, blockers


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument('--domain', type=int, default=0, help='1：数量、时间、产出量看成 0 或 ≥ 1')
    ap.add_argument('--json', default=None)
    ap.add_argument('-v', action='store_true')
    args = ap.parse_args()
    meta, info, pairs, stats, blockers = analyze(bool(args.domain))
    code = lambda c: meta[c]['code']   # noqa: E731
    clean = [c for c, i in info.items() if not i['bad'] and not i['prereq_of'] and i['sites']]
    print('研究 %d 项；作用全看懂、能判被支配的 %d 项；没有数值作用的 %d 项；当前置条件的 %d 项；有看不懂作用的 %d 项' % (
        len(meta), len(clean), sum(1 for i in info.values() if not i['sites'] and not i['bad']),
        sum(1 for i in info.values() if i['prereq_of']), sum(1 for i in info.values() if i['bad'])))
    print('同分支、能买到条件满足的有序对 %d，逐对证明 %d，支配成立 %d' % (stats['avail'], stats['considered'], len(pairs)))
    for a, b in sorted(pairs, key=lambda p: (meta[p[1]]['branch'], meta[p[1]]['num'])):
        print('  %s 支配 %s' % (code(a), code(b)))
    if args.v:
        print('\n看不懂的作用：')
        for c, i in sorted(info.items(), key=lambda x: x[1]['meta']['code']):
            if i['bad']:
                print(' ', i['meta']['code'], '；'.join(i['bad'])[:300])
        print('\n逐对证明失败的原因（每个 B 列前 3 个）：')
        for b, lst in blockers.items():
            print(' ', code(b), '；'.join('%s：%s' % (code(a), w) for a, w in lst[:3])[:300])
    if args.json:
        Path(args.json).write_text(json.dumps(dict(
            domain=args.domain, pairs=[[code(a), code(b)] for a, b in pairs]), ensure_ascii=False, indent=1), encoding='utf-8')


if __name__ == '__main__':
    main()
