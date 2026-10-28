"""把 pcode 方法体符号执行成公式，折掉混淆器插的假分支。

混淆器的假分支条件是从没赋过值的局部变量（undefined，当 false），所以按常量折叠；
真条件（比如 this.id 的比较）则两边都走，结果写成 `cond ? a : b`。

用法（作为库）：
    from pcode_sym import methods_of, run
    for name, m in methods_of(pcode_text).items(): print(name, run(m))
"""
import re

SKIP = ('maxstack', 'localcount', 'initscopedepth', 'maxscopedepth', 'debug', 'body', 'code', 'end', 'method',
        'name', 'returns', 'flag', 'param', 'dispid', 'trait', 'paramname')


def qn(s):
    """QName(PackageNamespace(""),"x") → x"""
    m = re.search(r',"((?:[^"\\]|\\.)*)"\)\s*$', s)
    if m:
        return m.group(1).replace("\\'", "'").replace('\\"', '"')
    return s.strip()


def methods_of(text):
    """{方法真名: {'nparams': n, 'code': [(label, op, arg)]}}（同名方法取第一个）"""
    out = {}
    for m in re.finditer(r'method\s*\n((?:\s*(?:name|returns|flag|param|paramname|optional)[^\n]*\n)+)\s*body(.*?)end ; code', text, re.S):
        head, body = m.group(1), m.group(2)
        nm = re.search(r'name "([^"]*)"', head)
        if not nm:
            continue
        code = body.split('code', 1)[1] if 'code' in body else ''
        ins, label = [], None
        for line in code.splitlines():
            line = line.strip()
            if not line:
                continue
            lm = re.match(r'^(\w+):$', line)
            if lm:
                label = lm.group(1)
                continue
            parts = line.split(None, 1)
            ins.append((label, parts[0], parts[1] if len(parts) > 1 else ''))
            label = None
        out.setdefault(nm.group(1), {'nparams': len(re.findall(r'^\s*param ', head, re.M)), 'code': ins})
    return out


class C:  # 常量
    def __init__(self, v):
        self.v = v

    def s(self):
        v = self.v
        if isinstance(v, bool):
            return 'true' if v else 'false'
        if isinstance(v, float):
            return repr(round(v, 12)).rstrip('0').rstrip('.') if v != int(v) or abs(v) < 1e15 else repr(v)
        return str(v)


class E:  # 表达式
    def __init__(self, s, prec=9):
        self.t, self.prec = s, prec

    def s(self):
        return self.t


def s_(x, prec=0):
    t = x.s()
    if isinstance(x, E) and x.prec < prec:
        return '(' + t + ')'
    if isinstance(x, C) and isinstance(x.v, (int, float)) and not isinstance(x.v, bool) and x.v < 0 and prec > 5:
        return '(' + t + ')'
    return t


def truthy(x):
    if isinstance(x, C):
        v = x.v
        return bool(v) if v is not None else False
    return None


BIN = {'add': ('+', 4), 'subtract': ('-', 4), 'multiply': ('*', 5), 'divide': ('/', 5), 'modulo': ('%', 5),
       'equals': ('==', 2), 'lessthan': ('<', 3), 'lessequals': ('<=', 3), 'greaterthan': ('>', 3),
       'greaterequals': ('>=', 3), 'strictequals': ('===', 2)}
PY = {'add': lambda a, b: a + b, 'subtract': lambda a, b: a - b, 'multiply': lambda a, b: a * b,
      'divide': lambda a, b: a / b if b else None, 'modulo': lambda a, b: a % b if b else None,
      'equals': lambda a, b: a == b, 'lessthan': lambda a, b: a < b, 'lessequals': lambda a, b: a <= b,
      'greaterthan': lambda a, b: a > b, 'greaterequals': lambda a, b: a >= b, 'strictequals': lambda a, b: a == b}
# 条件跳转：(取反后条件? 与栈上值的关系)
NEGCMP = {'ifnlt': ('<', True), 'ifnle': ('<=', True), 'ifngt': ('>', True), 'ifnge': ('>=', True),
          'iflt': ('<', False), 'ifle': ('<=', False), 'ifgt': ('>', False), 'ifge': ('>=', False),
          'ifeq': ('==', False), 'ifne': ('!=', False), 'ifstricteq': ('===', False), 'ifstrictne': ('!==', False)}


def run(m, maxsteps=4000):
    """返回 [(条件列表, 表达式)]；条件列表空 = 无条件。"""
    code, np_ = m['code'], m['nparams']
    labels = {l: i for i, (l, _, _) in enumerate(code) if l}
    written = {int(a.split()[0]) if op == 'setlocal' else int(op[-1]) for _, op, a in code
               if op == 'setlocal' or re.fullmatch(r'setlocal\d', op)}
    results, budget = [], [maxsteps]

    def local_val(i, locs):
        if i in locs:
            return locs[i]
        if i == 0:
            return E('this')
        if i <= np_:
            return E('param%d' % i)
        return C(None)  # 从没赋过值：undefined

    def go(pc, stack, locs, conds, seen):
        while pc < len(code):
            budget[0] -= 1
            if budget[0] < 0:
                results.append((conds, E('<循环/过长>')))
                return
            lab, op, arg = code[pc]
            pc += 1
            if op in ('pushbyte', 'pushshort', 'pushint', 'pushuint'):
                stack.append(C(int(arg)))
            elif op == 'pushdouble':
                stack.append(C(float(arg)))
            elif op == 'pushtrue':
                stack.append(C(True))
            elif op == 'pushfalse':
                stack.append(C(False))
            elif op == 'pushnull' or op == 'pushundefined':
                stack.append(C(None))
            elif op == 'pushnan':
                stack.append(E('NaN'))
            elif op == 'pushstring':
                stack.append(E(arg))
            elif re.fullmatch(r'getlocal\d', op) or op == 'getlocal':
                i = int(op[-1]) if op != 'getlocal' else int(arg)
                stack.append(local_val(i, locs))
            elif re.fullmatch(r'setlocal\d', op) or op == 'setlocal':
                i = int(op[-1]) if op != 'setlocal' else int(arg)
                locs = dict(locs)
                locs[i] = stack.pop()
            elif op in ('pushscope', 'label', 'nop', 'coerce_a', 'coerce', 'convert_d', 'convert_i', 'convert_u',
                        'convert_b', 'convert_s', 'astypelate', 'debugline', 'debugfile', 'debug'):
                if op == 'astypelate':
                    stack.pop()
                if op in ('convert_b',) and stack and isinstance(stack[-1], C):
                    stack[-1] = C(bool(truthy(stack[-1])))
            elif op == 'pop':
                stack.pop()
            elif op == 'dup':
                stack.append(stack[-1])
            elif op == 'swap':
                stack[-1], stack[-2] = stack[-2], stack[-1]
            elif op == 'getlex':
                stack.append(E(qn(arg)))
            elif op in ('findpropstrict', 'findproperty'):
                stack.append(E('@' + qn(arg)))
            elif op == 'getproperty':
                o = stack.pop()
                n = qn(arg)
                stack.append(E(n if o.s().startswith('@') else s_(o, 9) + '.' + n))
            elif op == 'setproperty':
                stack.pop()
                stack.pop()
            elif op in ('callproperty', 'callpropvoid'):
                n = int(arg.rsplit(',', 1)[1])
                args = [stack.pop() for _ in range(n)][::-1]
                o = stack.pop()
                name = qn(arg.rsplit(',', 1)[0])
                call = name + '(' + ', '.join(a.s() for a in args) + ')'
                r = E(call if o.s().startswith('@') else s_(o, 9) + '.' + call)
                if op == 'callproperty':
                    stack.append(r)
            elif op in BIN:
                b, a = stack.pop(), stack.pop()
                sym, pr = BIN[op]
                if isinstance(a, C) and isinstance(b, C) and isinstance(a.v, (int, float)) and isinstance(b.v, (int, float)):
                    v = PY[op](a.v, b.v)
                    if v is not None:
                        stack.append(C(v))
                        continue
                stack.append(E('%s %s %s' % (s_(a, pr), sym, s_(b, pr + 1)), pr))
            elif op == 'negate':
                a = stack.pop()
                stack.append(C(-a.v) if isinstance(a, C) and isinstance(a.v, (int, float)) else E('-' + s_(a, 9), 8))
            elif op == 'not':
                a = stack.pop()
                t = truthy(a)
                stack.append(C(not t) if t is not None else E('!' + s_(a, 9), 8))
            elif op in ('iftrue', 'iffalse') or op in NEGCMP:
                if op in ('iftrue', 'iffalse'):
                    a = stack.pop()
                    t = truthy(a)
                    jump_if = (op == 'iftrue')
                    ctext = a.s() if isinstance(a, E) else a.s()
                    cond = (s_(a, 9), jump_if)
                else:
                    b, a = stack.pop(), stack.pop()
                    sym, neg = NEGCMP[op]
                    t = None
                    if isinstance(a, C) and isinstance(b, C) and isinstance(a.v, (int, float)) and isinstance(b.v, (int, float)):
                        base = {'==': a.v == b.v, '!=': a.v != b.v, '<': a.v < b.v, '<=': a.v <= b.v,
                                '>': a.v > b.v, '>=': a.v >= b.v, '===': a.v == b.v, '!==': a.v != b.v}[sym]
                        t = (not base) if neg else base
                    cond = ('%s %s %s' % (s_(a, 4), sym, s_(b, 4)), True) if not neg else \
                           ('!(%s %s %s)' % (s_(a, 4), sym, s_(b, 4)), True)
                    jump_if = True
                target = labels[arg.strip()]
                if t is not None:
                    taken = (t == jump_if) if op in ('iftrue', 'iffalse') else t
                    if taken:
                        pc = target
                    continue
                key = (pc, target, tuple(x.s() for x in stack))
                if key in seen:
                    results.append((conds, E('<循环>')))
                    return
                seen = seen | {key}
                text, jif = cond
                # 跳转分支 / 不跳转分支
                jt_cond = (text, True) if jif else (text, False)
                go(target, list(stack), locs, conds + [jt_cond], seen)
                go(pc, list(stack), locs, conds + [(text, not jt_cond[1])], seen)
                return
            elif op == 'jump':
                pc = labels[arg.strip()]
            elif op == 'returnvalue':
                results.append((conds, stack.pop()))
                return
            elif op == 'returnvoid':
                results.append((conds, E('void')))
                return
            elif op in ('hasnext2', 'nextvalue', 'nextname'):
                results.append((conds, E('<for-in>')))
                return
            else:
                results.append((conds, E('<未处理 %s>' % op)))
                return
        results.append((conds, E('<落空>')))

    go(0, [], {}, [], frozenset())
    return results


def fmt(results):
    """合成一个表达式：多条路径写成 cond ? a : b。"""
    if not results:
        return '?'
    # 路径条件相同的返回值合并去重
    def build(rs):
        if len(rs) == 1:
            return rs[0][1].s()
        # 找第一个分叉条件
        first = rs[0][0][0][0] if rs[0][0] else None
        if first is None:
            return rs[0][1].s()
        yes = [(c[1:], e) for c, e in rs if c and c[0][0] == first and c[0][1]]
        no = [(c[1:], e) for c, e in rs if c and c[0][0] == first and not c[0][1]]
        rest = [(c, e) for c, e in rs if not c or c[0][0] != first]
        if rest or not yes or not no:
            return ' | '.join('[%s] %s' % (' && '.join(('' if v else '!') + t for t, v in c), e.s()) for c, e in rs)
        a, b = build(yes), build(no)
        return a if a == b else '(%s ? %s : %s)' % (first, a, b)
    return build(results)
