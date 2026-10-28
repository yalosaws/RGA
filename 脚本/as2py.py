"""AS3（ffdec 反编译出的子集）→ Python 转写器。

用法（作为库）：
    from as2py import parse_file, Gen
    cls_defs = parse_file(open('x.as', encoding='utf-8').read())
命令行：python 脚本/as2py.py <as3 scripts 目录> <输出 py> [--skip com,feathers,mx,starling]
把目录里所有 .as 转成一个 Python 模块（类名、成员名里的 §…§ 用 S_ 前缀 + 十六进制转义成合法标识符）。

支持：类（继承、静态/实例字段、方法、getter/setter、静态 getter 走元类）、if/else、for、for each、for in、
while、do-while、switch、try/catch/finally、throw、带标签的 break/continue、三目、字面量、new、as/is/in、
匿名函数、++/--/复合赋值、int()/Number() 等转换。不支持：XML、正则字面量、命名空间、with。
"""
import keyword
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

# ------------------------------------------------------------------ 词法
KEYWORDS = {'var', 'const', 'function', 'class', 'package', 'import', 'if', 'else', 'for', 'while', 'do', 'switch',
            'case', 'default', 'break', 'continue', 'return', 'throw', 'try', 'catch', 'finally', 'new', 'delete',
            'typeof', 'void', 'in', 'is', 'as', 'instanceof', 'each', 'extends', 'implements', 'interface', 'static',
            'public', 'private', 'protected', 'internal', 'override', 'final', 'dynamic', 'native', 'get', 'set',
            'true', 'false', 'null', 'this', 'super', 'use', 'namespace', 'with'}
OPS = ['>>>=', '===', '!==', '>>>', '<<=', '>>=', '...', '&&=', '||=', '++', '--', '+=', '-=', '*=', '/=', '%=', '&=',
       '|=', '^=', '==', '!=', '<=', '>=', '&&', '||', '<<', '>>', '::', '.<',
       '{', '}', '(', ')', '[', ']', ';', ',', '.', '<', '>', '+', '-', '*', '/', '%', '&', '|', '^', '!', '~', '?',
       ':', '=']
TOKEN_RE = re.compile(r'''
    (?P<ws>\s+|//[^\n]*|/\*.*?\*/)
  | (?P<id>§[^§]*§|[A-Za-z_$][\w$]*)
  | (?P<num>0[xX][0-9a-fA-F]+|(?:\d+\.?\d*|\.\d+)(?:[eE][+-]?\d+)?)
  | (?P<str>"(?:[^"\\]|\\.)*"|'(?:[^'\\]|\\.)*')
  | (?P<op>''' + '|'.join(re.escape(o) for o in OPS) + r''')
''', re.X | re.S)


class Tok:
    __slots__ = ('k', 'v', 'pos')

    def __init__(self, k, v, pos):
        self.k, self.v, self.pos = k, v, pos

    def __repr__(self):
        return '%s:%s' % (self.k, self.v)


META_RE = re.compile(r'^[ \t]*\[(?:SWF|Embed|Inline|Bindable|Event|Exclude|Style|DefaultProperty|ArrayElementType)\b[^\n]*\][ \t]*$', re.M)
REGEX_PREV_OPS = {'(', ',', '=', ':', '[', '!', '&', '|', '?', '{', '}', ';', '+', '-', '*', '%', '<', '>', '==', '!=',
                  '&&', '||', '+=', '-=', '*=', '/=', '===', '!==', '<=', '>='}


def tokenize(src):
    src = META_RE.sub('', src)
    out, i, n = [], 0, len(src)
    while i < n:
        if src[i] == '/' and i + 1 < n and src[i + 1] not in '/*':
            prev = out[-1] if out else None
            if prev is None or (prev.k == 'op' and prev.v in REGEX_PREV_OPS) or \
                    (prev.k == 'id' and prev.v in ('return', 'typeof', 'case', 'in', 'of')):
                j = i + 1
                incls = False
                while j < n and (src[j] != '/' or incls):
                    if src[j] == '\\':
                        j += 1
                    elif src[j] == '[':
                        incls = True
                    elif src[j] == ']':
                        incls = False
                    j += 1
                j += 1
                while j < n and src[j].isalpha():
                    j += 1
                out.append(Tok('regex', src[i:j], i))
                i = j
                continue
        m = TOKEN_RE.match(src, i)
        if not m:
            raise SyntaxError('词法错误 @%d: %r' % (i, src[i:i + 30]))
        k = m.lastgroup
        if k != 'ws':
            out.append(Tok(k, m.group(k), i))
        i = m.end()
    out.append(Tok('eof', '', n))
    return out


# ------------------------------------------------------------------ 语法
class Parser:
    def __init__(self, toks, src=''):
        self.t, self.i, self.src = toks, 0, src

    # --- 基础
    @property
    def cur(self):
        return self.t[self.i]

    def peek(self, n=1):
        return self.t[min(self.i + n, len(self.t) - 1)]

    def err(self, msg):
        p = self.cur.pos
        raise SyntaxError('%s @%d: ...%s' % (msg, p, self.src[max(0, p - 40):p + 40].replace('\n', ' ')))

    def at(self, v):
        c = self.cur
        return c.v == v and c.k in ('op', 'id')

    def eat(self, v=None):
        c = self.cur
        if v is not None and c.v != v:
            self.err('期望 %r 得到 %r' % (v, c.v))
        self.i += 1
        return c

    def accept(self, v):
        if self.cur.v == v and self.cur.k in ('op', 'id'):
            self.i += 1
            return True
        return False

    def ident(self):
        c = self.cur
        if c.k != 'id':
            self.err('期望标识符')
        self.i += 1
        return c.v

    def close_angle(self):
        c = self.cur
        if c.v == '>>' and c.k == 'op':
            c.v = '>'
            return
        if c.v == '>>>' and c.k == 'op':
            c.v = '>>'
            return
        self.eat('>')

    # --- 类型
    def type_(self):
        if self.accept('*'):
            return '*'
        name = self.ident()
        while True:
            if self.at('.') and self.peek().k == 'id':
                self.i += 1
                name += '.' + self.ident()
            elif self.at('.<'):
                self.i += 1
                inner = self.type_()
                self.close_angle()
                name += '.<' + inner + '>'
            else:
                break
        return name

    # --- 文件
    def file(self):
        classes, imports = [], []
        self.eat('package')
        pkg = ''
        if self.cur.k == 'id' and not self.at('{'):
            pkg = self.ident()
            while self.accept('.'):
                pkg += '.' + self.ident()
        self.eat('{')
        while not self.at('}'):
            if self.at('import'):
                self.i += 1
                imp = self.ident()
                while self.accept('.'):
                    if self.at(';'):
                        break
                    imp += '.' + (self.ident() if not self.at('*') else self.eat('*').v)
                self.accept(';')
                imports.append(imp)
            elif self.at('use'):
                while not self.at(';'):
                    self.i += 1
                self.i += 1
            else:
                classes.append(self.class_(pkg))
        self.eat('}')
        # 包外的类
        while self.cur.k != 'eof':
            if self.at('import'):
                while not self.at(';'):
                    self.i += 1
                self.i += 1
                continue
            classes.append(self.class_(pkg))
        return {'pkg': pkg, 'imports': imports, 'classes': classes}

    def mods(self):
        m = set()
        while self.cur.k == 'id' and self.cur.v in ('public', 'private', 'protected', 'internal', 'static', 'override',
                                                     'final', 'dynamic', 'native'):
            m.add(self.eat().v)
        return m

    def class_(self, pkg):
        mods = self.mods()
        kind = self.ident()
        if kind not in ('class', 'interface'):
            self.err('期望 class')
        name = self.ident()
        ext, impls = None, []
        if self.accept('extends'):
            ext = self.type_()
            while self.accept(','):
                impls.append(self.type_())  # interface 的多重继承
        if self.accept('implements'):
            impls.append(self.type_())
            while self.accept(','):
                impls.append(self.type_())
        self.eat('{')
        members = []
        while not self.at('}'):
            members.append(self.member())
        self.eat('}')
        return {'pkg': pkg, 'name': name, 'extends': ext, 'impls': impls, 'members': members, 'kind': kind}

    def member(self):
        mods = self.mods()
        if self.at('var') or self.at('const'):
            self.i += 1
            decls = []
            while True:
                n = self.ident()
                ty = self.type_() if self.accept(':') else None
                init = self.expr_noin() if self.accept('=') else None
                decls.append((n, ty, init))
                if not self.accept(','):
                    break
            self.accept(';')
            return {'k': 'var', 'mods': mods, 'decls': decls}
        if self.at('function'):
            return self.function(mods)
        if self.at('{'):  # 静态初始化块
            return {'k': 'sinit', 'mods': mods, 'body': self.block()}
        self.err('未知类成员')

    def function(self, mods):
        self.eat('function')
        kind = 'method'
        if (self.at('get') or self.at('set')) and self.peek().k == 'id' and self.peek().v != '(':
            kind = self.eat().v
        name = self.ident() if not self.at('(') else None
        params, rest = self.params()
        ret = self.type_() if self.accept(':') else None
        body = None
        if self.at('{'):
            body = self.block()
        else:
            self.accept(';')
        return {'k': 'func', 'kind': kind, 'mods': mods, 'name': name, 'params': params, 'rest': rest, 'ret': ret,
                'body': body}

    def params(self):
        self.eat('(')
        ps, rest = [], None
        while not self.at(')'):
            if self.accept('...'):
                rest = self.ident()
                if self.accept(':'):
                    self.type_()
            else:
                n = self.ident()
                ty = self.type_() if self.accept(':') else None
                d = self.assign() if self.accept('=') else None
                ps.append((n, ty, d))
            if not self.accept(','):
                break
        self.eat(')')
        return ps, rest

    # --- 语句
    def block(self):
        self.eat('{')
        out = []
        while not self.at('}'):
            out.append(self.stmt())
        self.eat('}')
        return ('block', out)

    def stmt(self):
        c = self.cur
        v = c.v
        if c.k == 'op':
            if v == '{':
                return self.block()
            if v == ';':
                self.i += 1
                return ('empty',)
        if c.k == 'id':
            # 标签
            if self.peek().v == ':' and self.peek().k == 'op' and v not in KEYWORDS and self.peek(2).v != ':':
                self.i += 2
                return ('label', v, self.stmt())
            if v in ('var', 'const'):
                s = self.vardecl()
                self.accept(';')
                return s
            if v == 'if':
                self.i += 1
                self.eat('(')
                cond = self.expr()
                self.eat(')')
                then = self.stmt()
                els = None
                if self.accept('else'):
                    els = self.stmt()
                return ('if', cond, then, els)
            if v == 'while':
                self.i += 1
                self.eat('(')
                cond = self.expr()
                self.eat(')')
                return ('while', cond, self.stmt())
            if v == 'do':
                self.i += 1
                body = self.stmt()
                self.eat('while')
                self.eat('(')
                cond = self.expr()
                self.eat(')')
                self.accept(';')
                return ('dowhile', body, cond)
            if v == 'for':
                return self.for_()
            if v == 'switch':
                return self.switch()
            if v == 'return':
                self.i += 1
                e = None
                if not self.at(';') and not self.at('}'):
                    e = self.expr()
                self.accept(';')
                return ('return', e)
            if v in ('break', 'continue'):
                self.i += 1
                lab = None
                if self.cur.k == 'id' and self.cur.v not in KEYWORDS:
                    lab = self.ident()
                self.accept(';')
                return (v, lab)
            if v == 'throw':
                self.i += 1
                e = self.expr()
                self.accept(';')
                return ('throw', e)
            if v == 'try':
                self.i += 1
                body = self.block()
                catches, fin = [], None
                while self.accept('catch'):
                    self.eat('(')
                    n = self.ident()
                    ty = self.type_() if self.accept(':') else None
                    self.eat(')')
                    catches.append((n, ty, self.block()))
                if self.accept('finally'):
                    fin = self.block()
                return ('try', body, catches, fin)
            if v == 'function' and self.peek().k == 'id':
                f = self.function(set())
                return ('funcdecl', f)
        e = self.expr()
        self.accept(';')
        return ('expr', e)

    def vardecl(self, noin=False):
        self.i += 1
        decls = []
        while True:
            n = self.ident()
            ty = self.type_() if self.accept(':') else None
            init = (self.assign(noin) if self.accept('=') else None)
            decls.append((n, ty, init))
            if not self.accept(','):
                break
        return ('var', decls)

    def for_(self):
        self.eat('for')
        each = self.accept('each')
        self.eat('(')
        init = None
        if not self.at(';'):
            if self.at('var') or self.at('const'):
                init = self.vardecl(noin=True)
            else:
                init = ('expr', self.expr(noin=True))
        if self.at('in'):
            self.i += 1
            coll = self.expr()
            self.eat(')')
            body = self.stmt()
            return ('forin', each, init, coll, body)
        self.eat(';')
        cond = None if self.at(';') else self.expr()
        self.eat(';')
        it = None if self.at(')') else self.expr()
        self.eat(')')
        return ('for', init, cond, it, self.stmt())

    def switch(self):
        self.eat('switch')
        self.eat('(')
        sel = self.expr()
        self.eat(')')
        self.eat('{')
        cases = []
        while not self.at('}'):
            if self.accept('case'):
                test = self.expr()
            else:
                self.eat('default')
                test = None
            self.eat(':')
            body = []
            while not (self.at('case') or self.at('default') or self.at('}')):
                body.append(self.stmt())
            cases.append((test, body))
        self.eat('}')
        return ('switch', sel, cases)

    # --- 表达式
    def expr(self, noin=False):
        e = self.assign(noin)
        while self.at(','):
            self.i += 1
            e = ('comma', e, self.assign(noin))
        return e

    expr_noin = expr

    ASSIGN = {'=', '+=', '-=', '*=', '/=', '%=', '&=', '|=', '^=', '<<=', '>>=', '>>>=', '&&=', '||='}

    def assign(self, noin=False):
        left = self.ternary(noin)
        c = self.cur
        if c.k == 'op' and c.v in self.ASSIGN:
            self.i += 1
            right = self.assign(noin)
            return ('assign', c.v, left, right)
        return left

    def ternary(self, noin=False):
        c = self.binary(0, noin)
        if self.at('?'):
            self.i += 1
            a = self.assign()
            self.eat(':')
            b = self.assign(noin)
            return ('cond', c, a, b)
        return c

    PREC = [('||',), ('&&',), ('|',), ('^',), ('&',), ('==', '!=', '===', '!=='),
            ('<', '<=', '>', '>=', 'is', 'as', 'instanceof', 'in'), ('<<', '>>', '>>>'), ('+', '-'), ('*', '/', '%')]

    def binary(self, lvl, noin=False):
        if lvl == len(self.PREC):
            return self.unary()
        ops = self.PREC[lvl]
        left = self.binary(lvl + 1, noin)
        while True:
            c = self.cur
            if c.v in ops and c.k in ('op', 'id') and not (noin and c.v == 'in'):
                self.i += 1
                if c.v in ('is', 'as'):
                    right = ('typeref', self.type_())
                else:
                    right = self.binary(lvl + 1, noin)
                left = ('bin', c.v, left, right)
            else:
                return left

    def unary(self):
        c = self.cur
        if c.k == 'op' and c.v in ('!', '-', '+', '~'):
            self.i += 1
            return ('un', c.v, self.unary())
        if c.k == 'op' and c.v in ('++', '--'):
            self.i += 1
            return ('pre', c.v, self.unary())
        if c.k == 'id' and c.v in ('typeof', 'void', 'delete'):
            self.i += 1
            return ('un', c.v, self.unary())
        return self.postfix()

    def postfix(self):
        e = self.primary()
        while True:
            c = self.cur
            if c.k == 'op':
                if c.v == '.':
                    self.i += 1
                    n = self.cur
                    if n.k != 'id':
                        self.err('期望属性名')
                    self.i += 1
                    e = ('member', e, n.v)
                    continue
                if c.v == '.<':
                    self.i += 1
                    ty = self.type_()
                    self.close_angle()
                    e = ('typeapp', e, ty)
                    continue
                if c.v == '::':
                    self.i += 1
                    e = ('member', e, self.ident())
                    continue
                if c.v == '[':
                    self.i += 1
                    idx = self.expr()
                    self.eat(']')
                    e = ('index', e, idx)
                    continue
                if c.v == '(':
                    e = ('call', e, self.args())
                    continue
                if c.v in ('++', '--'):
                    self.i += 1
                    e = ('post', c.v, e)
                    continue
            return e

    def args(self):
        self.eat('(')
        a = []
        while not self.at(')'):
            a.append(self.assign())
            if not self.accept(','):
                break
        self.eat(')')
        return a

    def primary(self):
        c = self.cur
        if c.k == 'num':
            self.i += 1
            return ('num', c.v)
        if c.k == 'str':
            self.i += 1
            return ('str', c.v)
        if c.k == 'regex':
            self.i += 1
            return ('regex', c.v)
        if c.k == 'id':
            v = c.v
            if v == 'new':
                self.i += 1
                if self.at('<'):  # new <T>[...] 向量字面量
                    self.i += 1
                    self.type_()
                    self.eat('>')
                    return self.primary()
                # 构造目标：成员链或括号表达式
                tgt = self.primary_new()
                args = self.args() if self.at('(') else []
                return ('new', tgt, args)
            if v == 'function':
                f = self.function(set())
                return ('lambda', f)
            if v in ('true', 'false', 'null', 'this', 'super'):
                self.i += 1
                return (v,)
            self.i += 1
            return ('name', v)
        if c.k == 'op':
            if c.v == '(':
                self.i += 1
                e = self.expr()
                self.eat(')')
                return ('paren', e)
            if c.v == '[':
                self.i += 1
                items = []
                while not self.at(']'):
                    items.append(self.assign())
                    if not self.accept(','):
                        break
                self.eat(']')
                return ('array', items)
            if c.v == '{':
                self.i += 1
                items = []
                while not self.at('}'):
                    k = self.cur
                    self.i += 1
                    key = k.v if k.k != 'str' else k.v
                    kind = 'str' if k.k == 'str' else ('num' if k.k == 'num' else 'name')
                    self.eat(':')
                    items.append(((kind, key), self.assign()))
                    if not self.accept(','):
                        break
                self.eat('}')
                return ('object', items)
        self.err('意外的记号 %r' % (c,))

    def primary_new(self):
        e = self.primary()
        while True:
            if self.at('.'):
                self.i += 1
                e = ('member', e, self.ident())
            elif self.at('.<'):
                self.i += 1
                ty = self.type_()
                self.close_angle()
                e = ('typeapp', e, ty)
            elif self.at('['):
                self.i += 1
                idx = self.expr()
                self.eat(']')
                e = ('index', e, idx)
            else:
                return e


def parse_file(src):
    p = Parser(tokenize(src), src)
    return p.file()


# ------------------------------------------------------------------ 代码生成
PYKW = {'False', 'None', 'True', 'and', 'as', 'assert', 'async', 'await', 'break', 'class', 'continue', 'def', 'del',
        'elif', 'else', 'except', 'finally', 'for', 'from', 'global', 'if', 'import', 'in', 'is', 'lambda', 'nonlocal',
        'not', 'or', 'pass', 'raise', 'return', 'try', 'while', 'with', 'yield', 'self', 'print', 'exec', 'len', 'int',
        'float', 'str', 'list', 'dict', 'set', 'min', 'max', 'abs', 'range', 'type', 'object', 'id', 'map', 'filter',
        'sum', 'any', 'all', 'iter', 'next', 'open', 'input', 'sorted', 'reversed', 'round', 'hash', 'format', 'bool',
        'tuple', 'bytes', 'chr', 'ord', 'repr', 'vars', 'dir', 'pow', 'divmod', 'T', 'add', 'div', 'mod', 'Math'}


def mangle(n):
    """§…§ 或普通标识符 → 合法 Python 标识符。普通标识符保持原样（避开 Python 关键字/内建/运行时名）。"""
    if n.startswith('§'):
        core = n[1:-1]
        return 'S_' + ''.join(c if (c.isalnum() and c.isascii()) else '_%x_' % ord(c) for c in core)
    if n in PYKW or n.startswith('_'):
        return 'A_' + n
    return n.replace('$', '_dollar_')


def mangle_attr(n):
    """成员名：§…§ 同 mangle；普通名只避开 Python 关键字"""
    if n.startswith('§'):
        return mangle(n)
    if keyword.iskeyword(n) or n in ('self', 'None', 'True', 'False') or n.startswith('__'):
        return n + '_'
    return n.replace('$', '_dollar_')


class Scope:
    def __init__(self, parent=None):
        self.vars = {}
        self.parent = parent


class Gen:
    def __init__(self, classes_info, builtins):
        """classes_info: {短名: {'static': set, 'inst': set, 'ext': 基类短名或None, 'getters': set, 'ptypes': {}}}"""
        self.ci = classes_info
        self.builtins = builtins
        self.uid = 0
        self.out = []

    # --- 工具
    def new_id(self, p='_t'):
        self.uid += 1
        return '%s%d' % (p, self.uid)

    def lookup_member(self, cls, name):
        """沿继承链找成员：返回 ('static', 声明类) / ('inst', None) / None"""
        seen = set()
        while cls and cls not in seen:
            seen.add(cls)
            info = self.ci.get(cls)
            if not info:
                return ('unknown', cls)
            if name in info['static']:
                return ('static', cls)
            if name in info['inst']:
                return ('inst', cls)
            cls = info['ext']
        return None

    # --- 函数
    def gen_function(self, f, cls, is_static, ind, is_ctor=False, name_override=None):
        lines = []
        self.cur_cls, self.cur_static = cls, is_static
        self.cur_ret = f.get('ret')
        self.scope = {}
        self.types = {}
        self.pre = []
        self.loops = []
        self.fn_labels_used = set()
        pname = name_override or mangle_attr(f['name'] or '_anon')
        ps = []
        for (n, ty, d) in f['params']:
            self.scope[n] = mangle(n)
            self.types[mangle(n)] = ty
        for (n, ty, d) in f['params']:
            if d is not None:
                ps.append('%s=%s' % (mangle(n), self.expr(d)))
            else:
                ps.append('%s=_UNSET' % mangle(n) if any(x[2] is not None for x in f['params']) else mangle(n))
        # 无默认值的参数放在有默认值的参数前面时，Python 要求都有默认值；统一给 _UNSET
        ps = []
        for (n, ty, d) in f['params']:
            if d is not None:
                ps.append('%s=%s' % (mangle(n), self.expr(d)))
            else:
                ps.append('%s=_UNSET' % mangle(n))
        if f['rest']:
            self.scope[f['rest']] = mangle(f['rest'])
            ps.append('*%s' % mangle(f['rest']))
        first = [] if is_static else ['self']
        sig = ', '.join(first + ps)
        body_lines = []
        for n, ty, _ in f['params']:
            if ty in ('int', 'uint', 'Number', 'Boolean', 'String'):
                body_lines.append('%s = %s' % (mangle(n), self.coerce(ty, mangle(n))))
        # 先收集 var 声明，函数顶部初始化默认值
        decls = []
        self.collect_vars(f['body'], decls)
        for (n, ty) in decls:
            m = mangle(n)
            self.scope[n] = m
            self.types[m] = ty
        for (n, ty) in decls:
            m = mangle(n)
            body_lines.append('%s = %s' % (m, default_for(ty)))
        if f['rest']:
            body_lines.append('%s = Arr(%s)' % (mangle(f['rest']), mangle(f['rest'])))
        self.indent = 0
        body = self.stmt(f['body'], 0)
        body_lines.extend(body)
        if not body_lines:
            body_lines = ['pass']
        return pname, sig, body_lines

    def collect_vars(self, node, out):
        if node is None:
            return
        if isinstance(node, tuple):
            if node and node[0] == 'var':
                for (n, ty, init) in node[1]:
                    out.append((n, ty))
                    if init is not None:
                        self.collect_vars(init, out)
                return
            if node and node[0] == 'lambda':
                return
            if node and node[0] == 'forin' and node[2] and node[2][0] == 'var':
                for (n, ty, init) in node[2][1]:
                    out.append((n, ty))
            for x in node:
                self.collect_vars(x, out)
        elif isinstance(node, list):
            for x in node:
                self.collect_vars(x, out)

    # --- 语句
    def stmt(self, s, depth):
        """返回行列表（已带缩进，相对 depth）"""
        pad = '    ' * depth
        k = s[0]
        out = []
        if k == 'block':
            for x in s[1]:
                out.extend(self.stmt(x, depth))
            return out
        if k == 'empty':
            return []
        if k == 'var':
            for (n, ty, init) in s[1]:
                if init is not None:
                    e = self.expr_stmt_prefix(init, out, pad)
                    out.append('%s%s = %s' % (pad, mangle(n), self.coerce(ty, e)))
            return out
        if k == 'expr':
            return self.expr_statement(s[1], depth)
        if k == 'if':
            c = self.cond(s[1], out, pad)
            out.append('%sif %s:' % (pad, c))
            out.extend(self.suite(s[2], depth + 1))
            e = s[3]
            while e is not None:
                if e[0] == 'if':
                    pre = []
                    c2 = self.cond(e[1], pre, pad)
                    if pre:  # 条件里有需要前置语句：退化成嵌套 else
                        out.append('%selse:' % pad)
                        out.extend(self.stmt(e, depth + 1))
                        e = None
                        break
                    out.append('%selif %s:' % (pad, c2))
                    out.extend(self.suite(e[2], depth + 1))
                    e = e[3]
                else:
                    out.append('%selse:' % pad)
                    out.extend(self.suite(e, depth + 1))
                    e = None
            return out
        if k in ('while', 'dowhile', 'for', 'forin'):
            return self.loop(s, depth, None)
        if k == 'label':
            return self.loop(s[2], depth, s[1]) if s[2][0] in ('while', 'dowhile', 'for', 'forin') else \
                self.labeled_block(s, depth)
        if k == 'switch':
            return self.switch(s, depth)
        if k == 'return':
            if s[1] is None:
                return [pad + 'return None']
            e = self.expr_stmt_prefix(s[1], out, pad)
            out.append('%sreturn %s' % (pad, self.coerce(getattr(self, 'cur_ret', None), e)))
            return out
        if k == 'break':
            return self.jump('break', s[1], pad)
        if k == 'continue':
            return self.jump('continue', s[1], pad)
        if k == 'throw':
            e = self.expr_stmt_prefix(s[1], out, pad)
            out.append('%sraise ASError(%s)' % (pad, e))
            return out
        if k == 'try':
            out.append(pad + 'try:')
            out.extend(self.suite(s[1], depth + 1))
            if s[2]:
                for (n, ty, blk) in s[2]:
                    m = mangle(n)
                    out.append('%sexcept Exception as _e:' % pad)
                    out.append('%s    %s = _e' % (pad, m))
                    out.extend(self.suite(blk, depth + 1))
                    break
            if s[3]:
                out.append(pad + 'finally:')
                out.extend(self.suite(s[3], depth + 1))
            elif not s[2]:
                out.append(pad + 'finally:')
                out.append(pad + '    pass')
            return out
        if k == 'funcdecl':
            f = s[1]
            pname, sig, body = self.gen_nested(f)
            out.append('%sdef %s(%s):' % (pad, pname, sig))
            out.extend('%s    %s' % (pad, l) for l in body)
            self.scope[f['name']] = pname
            return out
        raise NotImplementedError('stmt ' + k)

    def suite(self, s, depth):
        lines = self.stmt(s, depth)
        if not lines:
            lines = ['    ' * depth + 'pass']
        return lines

    def labeled_block(self, s, depth):
        # 标签直接放在块上：用 while True 单次循环模拟
        pad = '    ' * depth
        lab = s[1]
        out = [pad + 'try:']
        self.loops.append({'label': lab, 'kind': 'block', 'iter': None, 'used': False})
        out.extend(self.suite(s[2], depth + 1))
        self.loops.pop()
        out.append(pad + 'except Brk as _b:')
        out.append("%s    if _b.label != %r: raise" % (pad, lab))
        return out

    def jump(self, kind, label, pad):
        # 找目标循环
        target = None
        if label is None:
            for L in reversed(self.loops):
                if L['kind'] in ('loop', 'switch') and (kind == 'break' or L['kind'] == 'loop'):
                    target = L
                    break
        else:
            for L in reversed(self.loops):
                if L['label'] == label:
                    target = L
                    break
        if target is None:
            return [pad + '# %s 找不到目标' % kind, pad + 'pass']
        # 目标是否为最内层“同类”结构
        inner = None
        for L in reversed(self.loops):
            if L['kind'] in ('loop', 'switch'):
                inner = L
                break
        if kind == 'break' and target is inner and target['kind'] != 'block':
            return [pad + 'break']
        if kind == 'continue' and target is inner and target['kind'] == 'loop':
            lines = []
            if target['iter']:
                lines.extend(pad + l for l in target['iter'])
            lines.append(pad + 'continue')
            return lines
        # 跨层：抛异常
        target['used'] = True
        if kind == 'break':
            return ["%sraise Brk(%r)" % (pad, target['label'] or target['id'])]
        return ["%sraise Cnt(%r)" % (pad, target['label'] or target['id'])]

    def loop(self, s, depth, label):
        pad = '    ' * depth
        out = []
        k = s[0]
        L = {'label': label, 'kind': 'loop', 'iter': None, 'used': False, 'id': self.new_id('L')}
        if k == 'for':
            init, cond, it, body = s[1], s[2], s[3], s[4]
            if init is not None:
                out.extend(self.stmt(init, depth))
            iter_lines = self.expr_statement(it, 0) if it is not None else []
            L['iter'] = iter_lines
            pre = []
            c = self.cond(cond, pre, pad + '    ') if cond is not None else 'True'
            head = '%swhile %s:' % (pad, c) if not pre else '%swhile True:' % pad
            body_out = []
            if pre:
                body_out.extend(pre)
                body_out.append('%s    if not (%s): break' % (pad, c))
            self.loops.append(L)
            body_lines = self.suite(body, depth + 1)
            self.loops.pop()
            out.append(head)
            out.extend(body_out)
            out.extend(self.wrap_cont(L, body_lines, iter_lines, depth + 1))
            return self.wrap_brk(L, out, depth)
        if k == 'while':
            pre = []
            c = self.cond(s[1], pre, pad + '    ')
            self.loops.append(L)
            body_lines = self.suite(s[2], depth + 1)
            self.loops.pop()
            if pre:
                out.append('%swhile True:' % pad)
                out.extend(pre)
                out.append('%s    if not (%s): break' % (pad, c))
            else:
                out.append('%swhile %s:' % (pad, c))
            out.extend(self.wrap_cont(L, body_lines, [], depth + 1))
            return self.wrap_brk(L, out, depth)
        if k == 'dowhile':
            # do { body } while(c)  →  while True: body; if not c: break  （continue 要先判断条件）
            pre = []
            c = self.cond(s[2], pre, pad + '    ')
            L['iter'] = [l.strip() for l in pre] + ['if not (%s): break' % c] if not pre else \
                [l.strip() for l in pre] + ['if not (%s): break' % c]
            self.loops.append(L)
            body_lines = self.suite(s[1], depth + 1)
            self.loops.pop()
            out.append('%swhile True:' % pad)
            out.extend(self.wrap_cont(L, body_lines, L['iter'], depth + 1))
            return self.wrap_brk(L, out, depth)
        if k == 'forin':
            each, init, coll, body = s[1], s[2], s[3], s[4]
            if init[0] == 'var':
                vname = mangle(init[1][0][0])
            else:
                vname = self.expr(init[1])
            c = self.expr_stmt_prefix(coll, out, pad)
            self.loops.append(L)
            body_lines = self.suite(body, depth + 1)
            self.loops.pop()
            out.append('%sfor %s in %s(%s):' % (pad, vname, 'each' if each else 'keys', c))
            out.extend(self.wrap_cont(L, body_lines, [], depth + 1))
            return self.wrap_brk(L, out, depth)
        raise NotImplementedError(k)

    def wrap_cont(self, L, body_lines, iter_lines, depth):
        pad = '    ' * depth
        if L['used']:
            lines = [pad + 'try:']
            lines.extend(('    ' + l) if l.strip() else l for l in body_lines)
            lines.append(pad + 'except Cnt as _c:')
            lines.append("%s    if _c.label != %r: raise" % (pad, L['label'] or L['id']))
            res = lines
        else:
            res = body_lines
        if iter_lines:
            res = list(res) + [pad + l for l in iter_lines]
        return self.reindent(res, depth)

    def reindent(self, lines, depth):
        """body_lines 是按 depth+1 缩进生成的；这里统一成 depth 层缩进（loop 的 body 位于 depth+1）。"""
        return lines

    def wrap_brk(self, L, out, depth):
        if not L['used']:
            return out
        pad = '    ' * depth
        lines = [pad + 'try:']
        lines.extend('    ' + l for l in out)
        lines.append(pad + 'except Brk as _b:')
        lines.append("%s    if _b.label != %r: raise" % (pad, L['label'] or L['id']))
        return lines

    def switch(self, s, depth):
        pad = '    ' * depth
        out = []
        sel = self.new_id('_sw')
        entry = self.new_id('_case')
        out.append('%s%s = %s' % (pad, sel, self.expr_stmt_prefix(s[1], out, pad)))
        out.append('%s%s = -1' % (pad, entry))
        L = {'label': None, 'kind': 'switch', 'iter': None, 'used': False, 'id': self.new_id('S')}
        self.loops.append(L)
        default_idx = None
        for i, (test, body) in enumerate(s[2]):
            if test is None:
                default_idx = i
        # 先确定入口，再按源码顺序执行；default 可以位于中间并继续落空。
        for i, (test, body) in enumerate(s[2]):
            if test is None:
                continue
            out.append('%sif %s == -1 and strict_eq(%s, %s):' % (pad, entry, sel, self.expr(test)))
            out.append('%s    %s = %d' % (pad, entry, i))
        out.append('%sif %s == -1: %s = %d' % (pad, entry, entry, default_idx if default_idx is not None else len(s[2])))
        out.append('%swhile True:' % pad)
        for i, (test, body) in enumerate(s[2]):
            out.append('%s    if %s <= %d:' % (pad, entry, i))
            lines = []
            for st in body:
                lines.extend(self.stmt(st, depth + 2))
            out.extend(lines or ['%s        pass' % pad])
        out.append('%s    break' % pad)
        self.loops.pop()
        return self.wrap_brk(L, out, depth)

    # --- 表达式作语句
    def expr_statement(self, e, depth):
        pad = '    ' * depth
        out = []
        k = e[0]
        if k == 'paren':
            return self.expr_statement(e[1], depth)
        if k == 'comma':
            out.extend(self.expr_statement(e[1], depth))
            out.extend(self.expr_statement(e[2], depth))
            return out
        if k == 'assign':
            op, l, r = e[1], e[2], e[3]
            rv = self.expr_stmt_prefix(r, out, pad)
            out.extend(self.assign_stmt(op, l, rv, pad))
            return out
        if k in ('post', 'pre'):
            op = '+' if e[1] == '++' else '-'
            out.extend(self.assign_stmt(op + '=', e[2], '1', pad))
            return out
        if k == 'un' and e[1] == 'delete':
            tgt = e[2]
            if tgt[0] == 'index':
                out.append('%sdelete_(%s, %s)' % (pad, self.expr(tgt[1]), self.expr(tgt[2])))
            elif tgt[0] == 'member':
                out.append('%sdelete_(%s, %r)' % (pad, self.expr(tgt[1]), mangle(tgt[2])))
            return out
        txt = self.expr_stmt_prefix(e, out, pad)
        out.append('%s%s' % (pad, txt))
        return out

    def expr_stmt_prefix(self, e, out, pad):
        """生成表达式，必要的前置语句（匿名函数 def）追加到 out"""
        self.pre = []
        t = self.expr(e)
        for l in self.pre:
            out.append(pad + l)
        self.pre = []
        return t

    def cond(self, e, out, pad):
        t = self.expr_stmt_prefix(e, out, pad)
        if e[0] in ('bin',) and e[1] in ('==', '!=', '===', '!==', '<', '<=', '>', '>=', 'is', 'in', 'instanceof'):
            return t
        if e[0] == 'un' and e[1] == '!':
            return t
        if e[0] in ('true', 'false'):
            return t
        if e[0] == 'bin' and e[1] in ('&&', '||'):
            return 'T(%s)' % t
        return 'T(%s)' % t

    def lvalue_obj(self, node, out, pad):
        """对象表达式若非简单名字则放进临时变量"""
        t = self.expr(node)
        if re.fullmatch(r'[\w.]+', t):
            return t
        tmp = self.new_id('_o')
        out.append('%s%s = %s' % (pad, tmp, t))
        return tmp

    def assign_stmt(self, op, l, rv, pad):
        out = []
        base = op[:-1] if op != '=' else None
        k = l[0]
        if k == 'paren':
            return self.assign_stmt(op, l[1], rv, pad)
        if k == 'name':
            name = self.resolve_name(l[1], write=True)
            ty = self.types.get(name)
            cur = name
            if base:
                rv = self.binop_text(base, cur, rv)
            out.append('%s%s = %s' % (pad, name, self.coerce(ty, rv)))
            return out
        if k == 'member':
            obj = self.lvalue_obj(l[1], out, pad) if base else self.expr(l[1])
            attr = self.member_name(l[1], l[2])
            tgt = '%s.%s' % (obj, attr)
            if base:
                rv = self.binop_text(base, tgt, rv)
            out.append('%s%s = %s' % (pad, tgt, rv))
            return out
        if k == 'index':
            obj = self.lvalue_obj(l[1], out, pad) if base else self.expr(l[1])
            idx = self.expr(l[2])
            if base:
                tmp = self.new_id('_i')
                out.append('%s%s = %s' % (pad, tmp, idx))
                idx = tmp
                rv = self.binop_text(base, 'idx_get(%s, %s)' % (obj, idx), rv)
            out.append('%sidx_set(%s, %s, %s)' % (pad, obj, idx, rv))
            return out
        raise NotImplementedError('assign to ' + k)

    def binop_text(self, op, a, b):
        if op == '+':
            return 'add(%s, %s)' % (a, b)
        if op == '-':
            return '(%s - %s)' % (a, b)
        if op == '*':
            return '(%s * %s)' % (a, b)
        if op == '/':
            return 'div(%s, %s)' % (a, b)
        if op == '%':
            return 'mod(%s, %s)' % (a, b)
        if op in ('&', '|', '^'):
            return 'bit%s(%s, %s)' % ({'&': 'and', '|': 'or', '^': 'xor'}[op], a, b)
        if op == '<<':
            return 'shl(%s, %s)' % (a, b)
        if op == '>>':
            return 'shr(%s, %s)' % (a, b)
        if op == '>>>':
            return 'ushr(%s, %s)' % (a, b)
        if op == '&&':
            return '(%s and %s)' % (a, b)
        if op == '||':
            return '(%s or %s)' % (a, b)
        raise NotImplementedError(op)

    def coerce(self, ty, text):
        if ty in ('int',):
            return 'toint(%s)' % text
        if ty == 'uint':
            return 'touint(%s)' % text
        if ty == 'Number':
            return 'to_number(%s)' % text
        if ty == 'Boolean':
            return 'tobool(%s)' % text
        if ty == 'String':
            return 'slot_string(%s)' % text
        return text

    # --- 名字解析
    def resolve_name(self, n, write=False):
        if n in self.scope:
            return self.scope[n]
        if n in self.ci or n in self.builtins:  # 类名/全局函数优先于同名成员
            return mangle(n)
        cls = self.cur_cls
        if cls:
            r = self.lookup_member(cls, n)
            if r:
                kind, decl = r
                if kind == 'static':
                    return '%s.%s' % (mangle(decl), mangle_attr(n))
                if kind == 'inst':
                    return 'self.%s' % mangle_attr(n) if not self.cur_static else mangle(n)
                if kind == 'unknown' and n not in self.builtins and not self.cur_static and n not in self.ci:
                    return 'self.%s' % mangle_attr(n)
        return mangle(n)

    def member_name(self, obj, n):
        return mangle_attr(n)

    # --- 表达式
    def expr(self, e):
        k = e[0]
        m = getattr(self, 'e_' + k, None)
        if m is None:
            raise NotImplementedError('expr ' + k)
        return m(e)

    def e_num(self, e):
        v = e[1]
        if v.lower().startswith('0x'):
            return str(int(v, 16))
        if re.fullmatch(r'\d+', v):
            return v if int(v) < 2 ** 31 else repr(float(v))
        return repr(float(v))

    def e_str(self, e):
        s = e[1]
        # AS3 字符串转义与 Python 基本一致；单引号串保持
        body = s[1:-1]
        return repr(py_unescape(body))

    def e_regex(self, e):
        s = e[1]
        j = s.rindex('/')
        return 'RegExp_(%r, %r)' % (s[1:j], s[j + 1:])

    def e_true(self, e):
        return 'True'

    def e_false(self, e):
        return 'False'

    def e_null(self, e):
        return 'None'

    def e_this(self, e):
        return 'self'

    def e_super(self, e):
        return '_SUPER'

    def e_paren(self, e):
        return '(%s)' % self.expr(e[1])

    def e_name(self, e):
        n = e[1]
        if n == 'undefined':
            return 'UNDEFINED'
        if n == 'NaN':
            return 'NaN'
        if n == 'Infinity':
            return 'INF'
        return self.resolve_name(n)

    def e_member(self, e):
        obj, n = e[1], e[2]
        if obj[0] == 'super':
            return '_super_get(%s, self, %r)' % (self.super_cls(), mangle_attr(n))
        if n == 'length':
            return 'alen(%s)' % self.expr(obj)
        return '%s.%s' % (self.expr_atom(obj), mangle_attr(n))

    def expr_atom(self, e):
        t = self.expr(e)
        if e[0] in ('num',):
            return '(%s)' % t
        return t

    def e_index(self, e):
        return 'idx_get(%s, %s)' % (self.expr(e[1]), self.expr(e[2]))

    def e_typeapp(self, e):
        return self.expr(e[1])

    def e_call(self, e):
        f, args = e[1], e[2]
        a = ', '.join(self.expr(x) for x in args)
        if f[0] == 'super':
            return '%s.__init__(self%s)' % (self.super_cls(), (', ' + a) if a else '')
        if f[0] == 'member' and f[1][0] == 'super':
            return '%s.%s(self%s)' % (self.super_cls(), mangle_attr(f[2]), (', ' + a) if a else '')
        if f[0] == 'name':
            n = f[1]
            if n in CAST_FUNCS and n not in self.scope:
                return '%s(%s)' % (CAST_FUNCS[n], a)
            return '%s(%s)' % (self.resolve_name(n), a)
        if f[0] == 'member' and f[2] in STR_METHODS and f[1][0] != 'super':
            return 'mcall(%s, %r%s)' % (self.expr(f[1]), f[2], (', ' + a) if a else '')
        return '%s(%s)' % (self.expr(f), a)

    def super_cls(self):
        info = self.ci.get(self.cur_cls)
        return mangle(info['ext']) if info and info['ext'] else 'AsObject'

    def e_new(self, e):
        tgt, args = e[1], e[2]
        a = ', '.join(self.expr(x) for x in args)
        if tgt[0] == 'typeapp':
            base = tgt[1]
            if base[0] == 'name' and base[1] == 'Vector':
                return 'Vec(%selement_type=%r)' % ((a + ', ') if a else '', tgt[2])
            return '%s(%s)' % (self.expr(base), a)
        return '%s(%s)' % (self.expr(tgt), a)

    def e_array(self, e):
        return 'Arr([%s])' % ', '.join(self.expr(x) for x in e[1])

    def e_object(self, e):
        items = []
        for ((kk, key), v) in e[1]:
            if kk == 'str':
                ks = repr(py_unescape(key[1:-1]))
            elif kk == 'num':
                ks = key
            else:
                ks = repr(mangle_attr(key))
            items.append('%s: %s' % (ks, self.expr(v)))
        return 'Obj({%s})' % ', '.join(items)

    def e_lambda(self, e):
        f = e[1]
        pname, sig, body = self.gen_nested(f)
        self.uid += 1
        fname = '_fn%d' % self.uid
        lines = ['def %s(%s):' % (fname, sig)] + ['    ' + l for l in body]
        self.pre.extend(lines)
        return fname

    def gen_nested(self, f):
        saved = (self.scope, self.types, self.loops, self.pre, self.cur_cls, self.cur_static)
        saved_ret = getattr(self, 'cur_ret', None)
        self.cur_ret = f.get('ret')
        scope0 = dict(self.scope)
        self.scope = dict(scope0)
        self.types = dict(self.types)
        self.loops = []
        self.pre = []
        ps = []
        for (n, ty, d) in f['params']:
            self.scope[n] = mangle(n)
            ps.append('%s=%s' % (mangle(n), self.expr(d) if d is not None else '_UNSET'))
        if f['rest']:
            self.scope[f['rest']] = mangle(f['rest'])
            ps.append('*%s' % mangle(f['rest']))
        decls = []
        self.collect_vars(f['body'], decls)
        body = []
        local_names = []
        for (n, ty) in decls:
            self.scope[n] = mangle(n)
            self.types[mangle(n)] = ty
            local_names.append(mangle(n))
            body.append('%s = %s' % (mangle(n), default_for(ty)))
        inner = self.stmt(f['body'], 0)
        body.extend(inner or ['pass'])
        res = (mangle(f['name'] or '_anon'), ', '.join(ps), body)
        self.scope, self.types, self.loops, self.pre, self.cur_cls, self.cur_static = saved
        self.cur_ret = saved_ret
        return res

    def e_un(self, e):
        op, a = e[1], e[2]
        if op == '!':
            return '(not T(%s))' % self.expr(a)
        if op == '-':
            return '(-%s)' % self.expr_atom(a)
        if op == '+':
            return 'tonum(%s)' % self.expr(a)
        if op == '~':
            return 'bitnot(%s)' % self.expr(a)
        if op == 'typeof':
            return 'typeof(%s)' % self.expr(a)
        if op == 'void':
            return 'None'
        if op == 'delete':
            tgt = a
            if tgt[0] == 'index':
                return 'delete_(%s, %s)' % (self.expr(tgt[1]), self.expr(tgt[2]))
            return 'True'
        raise NotImplementedError(op)

    def e_bin(self, e):
        op, a, b = e[1], e[2], e[3]
        if op == 'is':
            return 'is_(%s, %s)' % (self.expr(a), self.typeref(b))
        if op == 'as':
            return 'as_(%s, %s)' % (self.expr(a), self.typeref(b))
        if op == 'instanceof':
            return 'is_(%s, %s)' % (self.expr(a), self.expr(b))
        if op == 'in':
            return 'in_(%s, %s)' % (self.expr(a), self.expr(b))
        ea, eb = self.expr(a), self.expr(b)
        if op in ('==', '==='):
            return '%s(%s, %s)' % ('strict_eq' if op == '===' else 'eq', ea, eb)
        if op in ('!=', '!=='):
            return '(not %s(%s, %s))' % ('strict_eq' if op == '!==' else 'eq', ea, eb)
        if op in ('<', '<=', '>', '>='):
            return 'cmp_%s(%s, %s)' % ({'<': 'lt', '<=': 'le', '>': 'gt', '>=': 'ge'}[op], ea, eb)
        if op == '&&':
            return '(%s and %s)' % (ea, eb)
        if op == '||':
            return '(%s or %s)' % (ea, eb)
        return self.binop_text(op, ea, eb)

    def typeref(self, b):
        t = b[1]
        return TYPE_MAP.get(t, mangle(t.split('.')[-1]) if not t.startswith('Vector') else 'Vec')

    def e_cond(self, e):
        return '(%s if T(%s) else %s)' % (self.expr(e[2]), self.expr(e[1]), self.expr(e[3]))

    def e_comma(self, e):
        return '(%s, %s)[-1]' % (self.expr(e[1]), self.expr(e[2]))

    def e_assign(self, e):
        op, l, r = e[1], e[2], e[3]
        rv = self.expr(r)
        base = op[:-1] if op != '=' else None
        k = l[0]
        if k == 'paren':
            return self.e_assign(('assign', op, l[1], r))
        if k == 'name':
            name = self.resolve_name(l[1], write=True)
            if '.' in name:  # 属性：用 setattr 表达式
                cur = name
                val = self.binop_text(base, cur, rv) if base else rv
                obj, attr = name.rsplit('.', 1)
                return 'setattr_(%s, %r, %s)' % (obj, attr, self.coerce(self.types.get(name), val))
            cur = name
            val = self.binop_text(base, cur, rv) if base else rv
            return '(%s := %s)' % (name, self.coerce(self.types.get(name), val))
        if k == 'member':
            obj = self.expr(l[1])
            attr = mangle_attr(l[2])
            val = rv if not base else self.binop_text(base, '%s.%s' % (obj, attr), rv)
            return 'setattr_(%s, %r, %s)' % (obj, attr, val)
        if k == 'index':
            obj, idx = self.expr(l[1]), self.expr(l[2])
            val = rv if not base else self.binop_text(base, 'idx_get(%s, %s)' % (obj, idx), rv)
            return 'idx_set(%s, %s, %s)' % (obj, idx, val)
        raise NotImplementedError('assign expr to ' + k)

    def e_pre(self, e):
        return self.incdec(e, True)

    def e_post(self, e):
        return self.incdec(e, False)

    def incdec(self, e, pre):
        op = '+' if e[1] == '++' else '-'
        t = e[2]
        if t[0] == 'name':
            name = self.resolve_name(t[1], write=True)
            if '.' in name:
                obj, attr = name.rsplit('.', 1)
                return 'incdec_attr(%s, %r, %s, %s)' % (obj, attr, '1' if op == '+' else '-1', pre)
            if pre:
                return '(%s := tonum(%s) %s 1)' % (name, name, op)
            return '((%s := tonum(%s) %s 1) %s 1)' % (name, name, op, '-' if op == '+' else '+')
        if t[0] == 'member':
            return 'incdec_attr(%s, %r, %s, %s)' % (self.expr(t[1]), mangle_attr(t[2]), '1' if op == '+' else '-1', pre)
        if t[0] == 'index':
            return 'incdec_idx(%s, %s, %s, %s)' % (self.expr(t[1]), self.expr(t[2]), '1' if op == '+' else '-1', pre)
        raise NotImplementedError('incdec ' + t[0])


STR_METHODS = {'toString', 'toFixed', 'toPrecision', 'toExponential', 'substring', 'substr', 'slice', 'indexOf',
               'lastIndexOf', 'charAt', 'charCodeAt', 'toUpperCase', 'toLowerCase', 'split', 'replace', 'concat',
               'match', 'search', 'localeCompare', 'valueOf', 'toLocaleString'}
CAST_FUNCS = {'int': 'toint', 'uint': 'touint', 'Number': 'tonum', 'String': 'tostr', 'Boolean': 'tobool',
              'Array': 'Arr', 'Object': 'as_object', 'parseInt': 'parseInt', 'parseFloat': 'parseFloat'}
TYPE_MAP = {'Number': 'Number_', 'int': 'int_', 'uint': 'uint_', 'String': 'String_', 'Boolean': 'Boolean_',
            'Array': 'Arr', 'Object': 'Obj', '*': 'object'}


def default_for(ty):
    if ty == '*':
        return 'UNDEFINED'
    if ty in ('int', 'uint'):
        return '0'
    if ty == 'Number':
        return 'NaN'
    if ty == 'Boolean':
        return 'False'
    return 'None'


def py_unescape(s):
    out, i = [], 0
    while i < len(s):
        c = s[i]
        if c == '\\' and i + 1 < len(s):
            n = s[i + 1]
            m = {'n': '\n', 'r': '\r', 't': '\t', 'b': '\b', 'f': '\f', '\\': '\\', '"': '"', "'": "'", '0': '\0'}
            if n in m:
                out.append(m[n])
                i += 2
                continue
            if n == 'u' and i + 5 < len(s) + 0:
                try:
                    out.append(chr(int(s[i + 2:i + 6], 16)))
                    i += 6
                    continue
                except ValueError:
                    pass
            out.append(n)
            i += 2
            continue
        out.append(c)
        i += 1
    return ''.join(out)


# ------------------------------------------------------------------ 类生成
def is_const(e):
    if e[0] in ('num', 'str', 'true', 'false', 'null'):
        return True
    if e[0] == 'un' and e[1] in ('-', '+') and e[2][0] == 'num':
        return True
    if e[0] == 'name' and e[1] in ('NaN', 'undefined', 'Infinity'):
        return True
    return False


def class_info(cd):
    st, inst, getters = set(), set(), set()
    for m in cd['members']:
        if m['k'] == 'var':
            for (n, ty, init) in m['decls']:
                (st if 'static' in m['mods'] else inst).add(n)
        elif m['k'] == 'func' and m['name']:
            (st if 'static' in m['mods'] else inst).add(m['name'])
    ext = cd['extends'].split('.')[-1] if cd['extends'] else None
    return {'static': st, 'inst': inst, 'ext': ext, 'name': cd['name'], 'pkg': cd['pkg']}


def gen_class(g, cd):
    """返回 (类定义文本, 静态初始化函数文本)"""
    name = cd['name']
    mn = mangle(name)
    ext = cd['extends'].split('.')[-1] if cd['extends'] else None
    base = mangle(ext) if ext else 'AsObject'
    lines = []
    sinit = []
    inst_inits = []   # (field, init_expr) 实例字段初始化
    g.cur_cls = name
    # 元类（静态 getter/setter）
    sgetters = [m for m in cd['members'] if m['k'] == 'func' and m['kind'] in ('get', 'set') and 'static' in m['mods']]
    meta = None
    if sgetters:
        meta = '_M_' + mn
    # 收集 getter/setter 的实例属性
    props = {}
    for m in cd['members']:
        if m['k'] == 'func' and m['kind'] in ('get', 'set') and 'static' not in m['mods']:
            props.setdefault(m['name'], {})[m['kind']] = m
    body = []
    for mods, target in (('static', '_stypes'), ('instance', '_itypes')):
        types = {mangle_attr(n): ty for member in cd['members'] if member['k'] == 'var'
                 and (('static' in member['mods']) == (mods == 'static'))
                 for n, ty, _ in member['decls'] if ty in ('int', 'uint', 'Number', 'Boolean', 'String')}
        if types:
            body.append('%s = %r' % (target, types))
    # 实例字段默认值/初始化
    inst_assign = []
    for m in cd['members']:
        if m['k'] == 'var' and 'static' not in m['mods']:
            for (n, ty, init) in m['decls']:
                inst_assign.append((n, ty, init))
    ctor = None
    for m in cd['members']:
        if m['k'] == 'func' and m['name'] == name and 'static' not in m['mods']:
            ctor = m
    # 构造函数
    g.cur_cls, g.cur_static = name, False
    idef = []
    if ctor is not None or inst_assign:
        f = ctor or {'params': [], 'rest': None, 'body': ('block', []), 'name': name}
        pname, sig, bl = g.gen_function(f, name, False, 0, is_ctor=True, name_override='__init__')
        # 实例字段初始化放最前（AS3 在构造函数体之前初始化）；super() 调用若存在则字段先于它——保持 AS3 行为
        pre = []
        g.scope = {}
        g.types = {}
        g.cur_static = False
        g.pre = []
        for (n, ty, init) in inst_assign:
            if init is None:
                idef.append('%r: %s' % (mangle_attr(n), default_for(ty)))  # 槽默认值，读取时回退（见运行时 __getattr__）
            elif is_const(init):
                g.scope, g.types, g.pre = {}, {}, []
                idef.append('%r: %s' % (mangle_attr(n), g.coerce(ty, g.expr(init))))  # 常量初值是槽的初始值，不在构造函数里执行
            else:
                tmp = []
                t = g.expr_stmt_prefix(init, tmp, '')
                pre.extend(tmp)
                pre.append('self.%s = %s' % (mangle_attr(n), g.coerce(ty, t)))
        # 若构造函数体里没有显式 super()，补一个
        has_super = any('.__init__(self' in l for l in bl)
        head = pre + ([] if has_super else ['%s.__init__(self)' % base] if ext else [])
        if ext and not has_super:
            head = ['%s.__init__(self)' % base] + pre
        body.append('def __init__(%s):' % sig)
        body.extend('    ' + l for l in (head + bl))
    # 方法/属性
    for m in cd['members']:
        if m['k'] != 'func' or m['body'] is None and m['kind'] == 'method':
            if m['k'] == 'func' and m['name'] and m['name'] != name:
                body.append('def %s(self, *a, **k): return None' % mangle(m['name']) if 'static' not in m['mods']
                            else '@staticmethod\ndef %s(*a, **k): return None' % mangle(m['name']))
            continue
        if m['name'] == name and 'static' not in m['mods']:
            continue
        static = 'static' in m['mods']
        if m['kind'] in ('get', 'set') and static:
            continue
        if m['kind'] in ('get', 'set'):
            continue
        g.cur_static = static
        pname, sig, bl = g.gen_function(m, name, static, 0)
        if static:
            body.append('@staticmethod')
        body.append('def %s(%s):' % (pname, sig))
        body.extend('    ' + l for l in (bl or ['pass']))
    for pn, d in props.items():
        mp = mangle_attr(pn)
        for kind in ('get', 'set'):
            if kind in d:
                m = d[kind]
                g.cur_static = False
                pname, sig, bl = g.gen_function(m, name, False, 0, name_override=mp + '_' + kind)
                body.append('def %s_%s(%s):' % (mp, kind, sig))
                body.extend('    ' + l for l in (bl or ['pass']))
        if 'get' in d and 'set' in d:
            body.append('%s = property(%s_get, %s_set)' % (mp, mp, mp))
        elif 'get' in d:
            body.append('%s = property(%s_get)' % (mp, mp))
        else:
            body.append('%s = property(None, %s_set)' % (mp, mp))
    # 静态字段 / 静态属性
    sattrs = []
    svs, sv_names = [], []
    for m in cd['members']:
        if m['k'] == 'var' and 'static' in m['mods']:
            for (n, ty, init) in m['decls']:
                if n in STATIC_PROP_NAMES:
                    svs.append('%r: %s' % (mangle_attr(n), default_for(ty)))
                    if meta is None:
                        meta = '_M_' + mn
                    sv_names.append(n)
                else:
                    body.append('%s = %s' % (mangle_attr(n), default_for(ty)))
                if init is not None:
                    g.cur_static = True
                    g.scope = {}
                    g.types = {}
                    g.pre = []
                    tmp = []
                    t = g.expr_stmt_prefix(init, tmp, '')
                    sinit.append((tmp, '%s.%s = %s' % (mn, mangle_attr(n), g.coerce(ty, t))))
    if meta:
        mlines = ['class %s(type(%s)):' % (meta, base)]
        gs = {}
        for m in sgetters:
            gs.setdefault(m['name'], {})[m['kind']] = m
        for pn, d in gs.items():
            mp = mangle_attr(pn)
            for kind in ('get', 'set'):
                if kind in d:
                    g.cur_static = True
                    pname, sig, bl = g.gen_function(d[kind], name, True, 0, name_override=mp + '_' + kind)
                    sig2 = sig.replace('self, ', '').replace('self', '')
                    mlines.append('    def %s_%s(%s):' % (mp, kind, 'cls' + (', ' + sig2 if sig2 else '')))
                    mlines.extend('        ' + l for l in (bl or ['pass']))
            mlines.append('    %s = StaticProp(%r, %s, %s)' % (mp, mp, mp + '_get' if 'get' in d else 'None',
                                                              mp + '_set' if 'set' in d else 'None'))
        for n in sv_names:
            if n not in gs:
                mlines.append('    %s = StaticProp(%r)' % (mangle_attr(n), mangle_attr(n)))
        if svs:
            body.append('_sv = {%s}' % ', '.join(svs))
        lines.extend(mlines)
        lines.append('class %s(%s, metaclass=%s):' % (mn, base, meta))
    else:
        lines.append('class %s(%s):' % (mn, base))
    if idef:
        body.append('_idef = {%s}' % ', '.join(idef))
    lines.extend('    ' + l for l in (body or ['pass']))
    return lines, sinit


# ------------------------------------------------------------------ 目录转写
SKIP_DIRS = ('feathers', 'mx', 'starling', 'com/divinegames', 'com/playfab', 'com/kongregate', 'com/gestouch',
             'com/ironsource')
STATE_SERVICES = ('com/divinegames/service/PlayFab.as', 'com/divinegames/service/TimeServer.as')


LAST_REPAIRS = []


def convert_dir(root, skip=SKIP_DIRS, pcode_root=None):
    LAST_REPAIRS.clear()
    files = []
    for dp, dn, fn in os.walk(root):
        rel = os.path.relpath(dp, root).replace(os.sep, '/')
        skipped = rel != '.' and any(rel == s or rel.startswith(s + '/') for s in skip)
        if skipped and not any(s.startswith(rel + '/') for s in STATE_SERVICES):
            continue
        for f in fn:
            if f.endswith('.as') and (not skipped or rel + '/' + f in STATE_SERVICES):
                files.append(os.path.join(dp, f))
    parsed, errors = [], []
    for f in sorted(files):
        try:
            src = open(f, encoding='utf-8', errors='replace').read()
            if 'CDATA[' in src or '[SWF(' in src:
                continue
            if pcode_root and os.path.basename(f) == '§8G§.as':
                from client_repairs import repair_load_read
                src, evidence = repair_load_read(src, pcode_root)
                LAST_REPAIRS.append(evidence)
            pf = parse_file(src)
            if os.path.relpath(f, root).replace(os.sep, '/') in STATE_SERVICES:
                # 保留客户端的状态字段、初值和 getter/setter；服务动作不参与模拟。
                # season/serverTime 不能当作 Stub，否则 != 0 / != -1 会错误成立。
                for cd in pf['classes']:
                    for m in cd['members']:
                        if m['k'] == 'func' and m['kind'] == 'method':
                            m['body'] = ('block', [])
            parsed.append((f, pf))
        except Exception as e:  # noqa: BLE001
            if pcode_root and os.path.basename(f) in ('§8G§.as', '§#!!§.as', '§&c§.as'):
                raise
            errors.append((f, str(e)[:200]))
    return parsed, errors


BUILTIN_NAMES = {'isNaN', 'isFinite', 'parseInt', 'parseFloat', 'trace', 'getTimer', 'Math', 'Date', 'Error', 'String',
                 'Number', 'Boolean', 'Array', 'Object', 'Vector', 'int', 'uint', 'XML', 'RegExp', 'setTimeout',
                 'clearTimeout', 'setInterval', 'clearInterval', 'encodeURIComponent', 'decodeURIComponent', 'escape',
                 'unescape', 'getDefinitionByName', 'getQualifiedClassName', 'describeType', 'Dictionary', 'ByteArray'}
STATIC_PROP_NAMES = set()


def build_module(parsed, builtins):
    ci, defs = {}, []
    STATIC_PROP_NAMES.clear()
    for f, pf in parsed:
        for cd in pf['classes']:
            for m in cd['members']:
                if m['k'] == 'func' and m['kind'] in ('get', 'set') and 'static' in m['mods']:
                    STATIC_PROP_NAMES.add(m['name'])
    for f, pf in parsed:
        for cd in pf['classes']:
            if cd['kind'] != 'class':
                continue
            info = class_info(cd)
            if info['name'] in ci:
                info['dup'] = True
            ci[info['name']] = info
            defs.append((f, cd))
    # 依赖顺序：基类先
    order, seen = [], set()
    by_name = {cd['name']: cd for f, cd in defs}

    def visit(n):
        if n in seen or n not in by_name:
            return
        seen.add(n)
        e = by_name[n]['extends']
        if e:
            visit(e.split('.')[-1])
        order.append(n)
    for n in by_name:
        visit(n)
    g = Gen(ci, builtins)
    out, sinits, fails = [], [], []
    for n in order:
        cd = by_name[n]
        try:
            lines, sinit = gen_class(g, cd)
            out.extend(lines)
            out.append('')
            sinits.append((n, sinit))
        except Exception as e:  # noqa: BLE001
            import traceback
            fails.append((n, repr(e), traceback.format_exc()[-300:]))
    out.append('')
    out.append('def _static_init():')
    out.append('    _errs = []')
    for n, si in sinits:
        for pre, line in si:
            out.append('    try:')
            for l in pre:
                out.append('        ' + l)
            out.append('        ' + line)
            out.append('    except Exception as _e: _errs.append((%r, repr(_e)))' % n)
    out.append('    return _errs')
    return '\n'.join(out), fails, ci


if __name__ == '__main__':
    import argparse
    import hashlib
    import json
    from pathlib import Path
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('root')
    ap.add_argument('dst')
    ap.add_argument('--pcode', help='同一 SWF 导出的 pcode/scripts，用于校验并恢复反编译丢失的读取')
    ap.add_argument('--swf', help='记录源 SWF 的内容摘要')
    opts = ap.parse_args()
    root, dst = opts.root, opts.dst
    parsed, errors = convert_dir(root, pcode_root=opts.pcode)
    print('解析', len(parsed), '个文件，失败', len(errors))
    for f, e in errors[:10]:
        print('  ', os.path.basename(f), e)
    code, fails, ci = build_module(parsed, BUILTIN_NAMES)
    metadata = dict(schema=2, source=str(Path(root).resolve()), pcode=opts.pcode,
                    repairs=list(LAST_REPAIRS), parse_errors=errors, generation_errors=fails,
                    source_sha256=hashlib.sha256(''.join(Path(f).read_text(encoding='utf-8') for f, _ in parsed).encode()).hexdigest())
    if opts.swf:
        metadata['swf_sha256'] = hashlib.sha256(Path(opts.swf).read_bytes()).hexdigest()
    code += '\n\n_source_provenance = ' + repr(metadata) + '\n'
    open(dst, 'w', encoding='utf-8').write(code)
    Path(dst + '.manifest.json').write_text(json.dumps(metadata, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
    print('生成', len(code.splitlines()), '行；类生成失败', len(fails))
    for n, e, tb in fails[:10]:
        print('  ', n, e)
