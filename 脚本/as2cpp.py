"""AS3 → C++ 转写器（RGA 原生计算引擎）。

语义跟 as2py.py 生成的 Python 版逐条对齐（设计见 资料/C++引擎设计（20261031）.md）。
输出到 build/native/gen/：gen.h（类声明、名字、静态区）、gen_N.cpp（方法体）、gen_meta.cpp（反射表、启动）。
"""
import os
import re
import sys
import json
import collections

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import as2py  # noqa: E402
from as2py import mangle, mangle_attr, py_unescape, is_const  # noqa: E402

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
KT = {'int': 'I', 'uint': 'U', 'Number': 'N', 'Boolean': 'B'}
CT = {'I': 'int32_t', 'U': 'uint32_t', 'N': 'double', 'B': 'bool', 'V': 'rt::Value'}
NUMK = ('N', 'I', 'U', 'B')
ET = {'Number': 'rt::E_NUM', 'int': 'rt::E_INT', 'uint': 'rt::E_UINT', 'Boolean': 'rt::E_BOOL', 'String': 'rt::E_STR'}
MATH1 = {'floor': 'rt::m_floor', 'ceil': 'rt::m_ceil', 'round': 'rt::m_round', 'abs': 'rt::m_abs',
         'sqrt': 'rt::m_sqrt', 'log': 'rt::m_log', 'exp': 'rt::m_exp', 'sin': 'rt::m_sin', 'cos': 'rt::m_cos',
         'tan': 'rt::m_tan', 'atan': 'rt::m_atan', 'asin': 'rt::m_asin', 'acos': 'rt::m_acos'}
MATHC = {'PI': 'M_PI_', 'E': 'M_E_', 'SQRT2': 'M_SQRT2_', 'LN2': 'M_LN2_'}
# 名字在 Python 命名空间里有定义的内建（其余 BUILTIN_NAMES 在 Python 版是 Stub 类）
PY_DEFINED = {'isNaN', 'isFinite', 'parseInt', 'parseFloat', 'trace', 'getTimer', 'Math', 'Date', 'Error', 'String',
              'Number', 'Boolean', 'Array', 'Object', 'Vector', 'int', 'Dictionary', 'ByteArray'}


def tk(ty):
    return KT.get(ty, 'V')


def builtin_rt_names():
    src = open(os.path.join(HERE, 'native', 'rt.h'), encoding='utf-8').read()
    i = src.index('N_length = 0')
    body = src[i:src.index('NB_BUILTIN', i)]
    return [n[2:] for n in re.findall(r'N_\w+', body)]


RT_NAMES = set(builtin_rt_names())


class E:
    """生成的表达式：C++ 代码、种类（N/I/U/B/V）、提示（('C',类) ('CLS',类) 'S' 'A' ('VEC',元素类型)）"""
    __slots__ = ('c', 'k', 'h', 'this')

    def __init__(self, c, k='V', h=None, this=False):
        self.c, self.k, self.h, self.this = c, k, h, this


def toV(e):
    if e.k == 'V':
        return e.c
    if e.k == 'N':
        return 'rt::V(%s)' % e.c
    if e.k in ('I', 'U'):
        return 'rt::V((double)(%s))' % e.c
    return 'rt::VB(%s)' % e.c


def toN(e):
    if e.k == 'N':
        return e.c
    if e.k == 'V':
        return 'rt::tonum(%s)' % e.c
    return '((double)(%s))' % e.c


def toI(e):
    return {'I': e.c, 'N': 'rt::toint_d(%s)' % e.c, 'U': '((int32_t)(%s))' % e.c, 'B': '((int32_t)(%s))' % e.c,
            'V': 'rt::toint(%s)' % e.c}[e.k]


def toU(e):
    return {'U': e.c, 'N': 'rt::touint_d(%s)' % e.c, 'I': '((uint32_t)(%s))' % e.c, 'B': '((uint32_t)(%s))' % e.c,
            'V': 'rt::touint(%s)' % e.c}[e.k]


def toB(e):
    return {'B': e.c, 'N': 'rt::truthy(%s)' % e.c, 'I': '((%s) != 0)' % e.c, 'U': '((%s) != 0u)' % e.c,
            'V': 'rt::T(%s)' % e.c}[e.k]


def pyb(e):
    return {'B': e.c, 'N': '((%s) != 0)' % e.c, 'I': '((%s) != 0)' % e.c, 'U': '((%s) != 0u)' % e.c,
            'V': 'rt::pybool(%s)' % e.c}[e.k]


def to_kind(e, k):
    return {'V': toV, 'N': toN, 'I': toI, 'U': toU, 'B': toB}[k](e)


def coerce(ty, e):
    """Python 版 Gen.coerce：只在声明了 int/uint/Number/Boolean/String 时转换"""
    k = tk(ty)
    if k != 'V':
        return E(to_kind(e, k), k)
    if ty == 'String':
        if e.k == 'V':
            return E('rt::slot_string(%s)' % e.c, 'V', 'S')
        if e.k == 'B':
            return E('rt::VS(rt::str_ascii((%s) ? "true" : "false"))' % e.c, 'V', 'S')
        return E('rt::VS(rt::tostr_d(%s))' % toN(e), 'V', 'S')
    return E(toV(e), 'V', e.h)


def default_code(ty):
    if ty == '*':
        return 'rt::UNDEF'
    k = tk(ty)
    return {'I': '0', 'U': '0u', 'N': 'NAN', 'B': 'false', 'V': 'rt::NUL'}[k]


def missing_code(ty):
    """没传、也没默认值的参数：Python 版是 _UNSET（undefined）再按类型转换"""
    k = tk(ty)
    return {'I': '0', 'U': '0u', 'N': 'NAN', 'B': 'false', 'V': 'rt::UNDEF'}[k]


def ret_default(k):
    return {'I': '0', 'U': '0u', 'N': '0.0', 'B': 'false', 'V': 'rt::NUL'}[k]


def type_hint(ty, classes):
    if not ty or ty == '*':
        return None
    if ty == 'String':
        return 'S'
    if ty == 'Array':
        return 'A'
    if ty.startswith('Vector.<'):
        return ('VEC', ty[8:-1])
    short = ty.split('.')[-1]
    if short in classes:
        return ('C', short)
    return None


def elem_hint(h, classes):
    if isinstance(h, tuple) and h[0] == 'VEC':
        return type_hint(h[1], classes)
    return None


# ------------------------------------------------------------------ 类模型
class Cls:
    def __init__(self, cd, f):
        self.cd, self.file = cd, f
        # 辅助类（脚本/native/as3）：Python 版里不是转写的类，名字解析排在类成员之后
        self.harness = os.path.normpath(os.path.join(HERE, 'native', 'as3')) in os.path.normpath(f)
        self.name = cd['name']
        self.cn = 'C_' + mangle(self.name)
        self.py = mangle(self.name)
        self.ext = cd['extends'].split('.')[-1] if cd['extends'] else None
        self.parent = None          # Cls（已知类）
        self.stub_base = False
        self.fields, self.finit = {}, []
        self.sfields, self.sinit = {}, []
        self.methods, self.smethods = {}, {}
        self.getters, self.setters, self.sgetters, self.ssetters = {}, {}, {}, {}
        self.ctor = None
        self.children = []
        for m in cd['members']:
            st = 'static' in m['mods']
            if m['k'] == 'var':
                for n, ty, init in m['decls']:
                    if st:
                        self.sfields[n] = ty
                        self.sinit.append((n, ty, init))
                    else:
                        self.fields[n] = ty
                        self.finit.append((n, ty, init))
            elif m['k'] == 'func' and m['name']:
                if m['name'] == self.name and not st and m['kind'] == 'method':
                    self.ctor = m
                    continue
                if m['kind'] == 'method':
                    (self.smethods if st else self.methods)[m['name']] = m
                elif m['kind'] == 'get':
                    (self.sgetters if st else self.getters)[m['name']] = m
                else:
                    (self.ssetters if st else self.setters)[m['name']] = m
        self.has_ctor = self.ctor is not None or bool(self.finit)

    def chain(self):
        c = self
        while c is not None:
            yield c
            c = c.parent

    def inst_kind(self, n):
        if n in self.getters or n in self.setters:
            return 'prop'
        if n in self.fields:
            return 'field'
        if n in self.methods:
            return 'method'
        return None


class Fn:
    """一个要生成的函数的上下文"""

    def __init__(self, cls, static, ret, kind):
        self.cls, self.static, self.ret, self.kind = cls, static, ret, kind
        self.locals = {}      # AS 名 -> (C++ 名, 种类, 提示, 类型)
        self.decl = []        # 顶部声明行


class Gen:
    def __init__(self, parsed):
        self.classes = {}
        self.order = []
        defs = []
        for f, pf in parsed:
            for cd in pf['classes']:
                if cd['kind'] != 'class':
                    continue
                defs.append((f, cd))
        for f, cd in defs:
            self.classes[cd['name']] = Cls(cd, f)    # 同名后者为准（同 Python 版）
        for c in self.classes.values():
            if c.ext:
                if c.ext in self.classes and c.ext != c.name:
                    c.parent = self.classes[c.ext]
                    c.parent.children.append(c)
                else:
                    c.stub_base = True
        seen = set()

        def visit(c):
            if c.name in seen:
                return
            seen.add(c.name)
            if c.parent:
                visit(c.parent)
            self.order.append(c)
        for c in self.classes.values():
            visit(c)
        for c in self.order:
            if c.parent and c.parent.stub_base:
                c.stub_base = True
        self.static_prop_names = set()
        for f, pf in parsed:
            for cd in pf['classes']:
                for m in cd['members']:
                    if m['k'] == 'func' and m['kind'] in ('get', 'set') and 'static' in m['mods']:
                        self.static_prop_names.add(m['name'])
        self.names = {}       # Python 属性名 -> C++ 记号
        self.name_list = []
        self.lits = {}
        self.lit_list = []
        self.uid = 0
        self.warn = collections.Counter()
        self.notes = []
        self._kinds_by_name()

    # --- 名字和字面量
    def nid(self, n):
        py = mangle_attr(n)
        t = self.names.get(py)
        if t is None:
            if py in RT_NAMES:
                t = 'rt::N_' + py
            else:
                t = 'NM_' + py
                self.name_list.append(py)
            self.names[py] = t
        return t

    def lit(self, s):
        i = self.lits.get(s)
        if i is None:
            i = self.lits[s] = len(self.lit_list)
            self.lit_list.append(s)
        return 'rt::VS(g::LS[%d])' % i

    def tmp(self, p='_t'):
        self.uid += 1
        return '%s%d' % (p, self.uid)

    # --- 继承链上的查找
    def _kinds_by_name(self):
        kinds = collections.defaultdict(set)
        for c in self.order:
            for n in set(c.fields) | set(c.getters) | set(c.setters) | set(c.methods):
                kinds[n].add(c.inst_kind(n))
        self.multi = {n for n, s in kinds.items() if len(s) > 1}
        self._conf = {}

    def conflict(self, c, n):
        if n not in self.multi:
            return False
        key = (c.name, n)
        r = self._conf.get(key)
        if r is None:
            ks = set()
            for a in c.chain():
                k = a.inst_kind(n)
                if k:
                    ks.add(k)
            stack = list(c.children)
            while stack:
                d = stack.pop()
                k = d.inst_kind(n)
                if k:
                    ks.add(k)
                stack.extend(d.children)
            r = self._conf[key] = len(ks) > 1
        return r

    def inst_lookup(self, c, n):
        """obj.n（obj 静态类型为 c）：('prop'|'field'|'method', 声明类)；没找到 None；链上有没转写的基类 'unknown'"""
        for a in c.chain():
            k = a.inst_kind(n)
            if k:
                return k, a
        return None

    def static_lookup(self, c, n):
        """Cls.n：('var'|'sprop'|'smethod', 声明类) 或 None"""
        if n in self.static_prop_names:
            for a in c.chain():
                if n in a.sfields:
                    return 'var', a
            for a in c.chain():
                if n in a.sgetters or n in a.ssetters:
                    return 'sprop', a
            return None
        for a in c.chain():
            if n in a.sfields:
                return 'var', a
            if n in a.smethods:
                return 'smethod', a
            if n in a.sgetters or n in a.ssetters:
                return 'sprop', a
        return None

    def member_lookup(self, c, n):
        """as2py.lookup_member：每层先静态后实例"""
        for a in c.chain():
            if n in a.sfields or n in a.smethods or n in a.sgetters or n in a.ssetters:
                return 'static', a
            if a.inst_kind(n):
                return 'inst', a
        if c.stub_base:
            return 'unknown', None
        return None

    def top(self, c, n, table):
        t = None
        for a in c.chain():
            if n in getattr(a, table):
                t = a
        return t

    def field_owner(self, c, n):
        t = None
        for a in c.chain():
            if n in a.fields:
                t = a
        return t

    def nearest_ctor(self, c):
        for a in c.chain():
            if a.has_ctor:
                return a
        return None

    # --- 签名
    def sig(self, f):
        return f['params'], f['rest'], f.get('ret')

    def cpp_params(self, f):
        ps = []
        for i, (n, ty, d) in enumerate(f['params']):
            ps.append('%s p%d' % (CT[tk(ty)], i))
        if f['rest']:
            ps.append('rt::Value prest')
        return ', '.join(ps)

    def method_ret(self, f):
        r = f.get('ret')
        return tk(r) if r not in (None, 'void') else 'V'

    def topdecl(self, c, n, kind):
        table = {'method': 'methods', 'get': 'getters', 'set': 'setters'}[kind]
        t = self.top(c, n, table)
        return getattr(t, table)[n], t

    # ------------------------------------------------------------------ 函数体
    def gen_body(self, cls, f, static, sigf, kind, hook=None, ctor_head=None):
        """返回函数体行。sigf：签名来源（虚函数用最上层声明）"""
        fn = Fn(cls, static, f.get('ret'), kind)
        self.fn = fn
        own_ret_k = self.method_ret(f) if kind != 'ctor' else 'V'
        fn.retk = self.method_ret(sigf) if kind not in ('ctor', 'set') else 'V'
        fn.own_ret = f.get('ret')
        lines = []
        for i, (n, ty, d) in enumerate(f['params']):
            sty = sigf['params'][i][1] if i < len(sigf['params']) else ty
            src = E('p%d' % i, tk(sty))
            v = coerce(ty, src) if (ty in KT or ty == 'String') else E(to_kind(src, tk(ty)), tk(ty))
            cname = 'l_' + mangle(n)
            fn.locals[n] = (cname, tk(ty), type_hint(ty, self.classes), ty)
            fn.decl.append('%s %s = %s;' % (CT[tk(ty)], cname, v.c))
        if f['rest']:
            cname = 'l_' + mangle(f['rest'])
            fn.locals[f['rest']] = (cname, 'V', 'A', 'Array')
            fn.decl.append('rt::Value %s = prest;' % cname)
        decls = []
        as2py.Gen({}, set()).collect_vars(f['body'], decls)
        types = {}
        for n, ty in decls:
            types[n] = ty
        for n, ty in decls:
            if n in fn.locals and n not in types:
                continue
        pnames = {p[0] for p in f['params']} | ({f['rest']} if f['rest'] else set())
        for n in dict.fromkeys(n for n, _ in decls):
            ty = types[n]
            cname = 'l_' + mangle(n)
            if n in pnames:
                # 参数被 var 重新声明：Python 版在函数顶部赋默认值（会覆盖参数）
                fn.decl.append('%s = %s;' % (cname, default_code(ty)) if tk(fn.locals[n][3]) == tk(ty)
                               else '/* 参数 %s 重新声明为 %s */' % (n, ty))
                continue
            fn.locals[n] = (cname, tk(ty), type_hint(ty, self.classes), ty)
            fn.decl.append('%s %s = %s;' % (CT[tk(ty)], cname, default_code(ty)))
        # 隐式局部：赋值给解析不到的名字（Python 版成了函数局部变量）；catch 变量
        for n in self.implicit_locals(f['body'], fn):
            cname = 'l_' + mangle(n)
            fn.locals[n] = (cname, 'V', None, None)
            fn.decl.append('rt::Value %s = rt::UNDEF;' % cname)
        body = ['    RT_FN("%s.%s");' % (cls.py, mangle_attr(f.get('name') or kind) + ('' if kind in ('method', 'ctor') else '_' + kind))]
        if hook:
            body.extend(hook)
        if ctor_head is not None:
            body.extend(ctor_head(fn))
        if f['body'] is not None:
            body.extend(self.stmt(f['body'], 1))
        if kind not in ('ctor',):
            body.append('    return %s;' % ret_default(fn.retk))
        lines.extend('    ' + d for d in fn.decl)
        lines.extend(body)
        self.fn = None
        return lines

    def implicit_locals(self, body, fn):
        out = []

        def walk(n):
            if isinstance(n, tuple) and n:
                if n[0] == 'try':
                    for (cn, ty, blk) in n[2]:
                        if cn not in fn.locals and cn not in out:
                            out.append(cn)
                if n[0] == 'assign' and isinstance(n[2], tuple) and n[2][0] == 'name':
                    nm = n[2][1]
                    if nm not in fn.locals and nm not in out and self.name_kind(nm, fn) == 'global':
                        out.append(nm)
                if n[0] == 'lambda':
                    return
                for x in n[1:]:
                    walk(x)
            elif isinstance(n, list):
                for x in n:
                    walk(x)
        walk(body)
        return out

    def name_kind(self, n, fn):
        if n in ('undefined', 'NaN', 'Infinity'):
            return 'const'
        if n in fn.locals:
            return 'local'
        if (n in self.classes and not self.classes[n].harness) or n in as2py.BUILTIN_NAMES:
            return 'class'
        if n in ('_', '_n'):
            return 'class'
        r = self.member_lookup(fn.cls, n) if fn.cls else None
        if r:
            if r[0] in ('inst', 'unknown') and fn.static:
                return 'global'
            return r[0]
        return 'global'

    # ------------------------------------------------------------------ 语句
    def stmt(self, s, d):
        pad = '    ' * d
        k = s[0]
        if k == 'block':
            out = []
            for x in s[1]:
                out.extend(self.stmt(x, d))
            return out
        if k == 'empty':
            return []
        if k == 'var':
            out = []
            for (n, ty, init) in s[1]:
                if init is not None:
                    out.append(pad + self.assign_name(n, '=', init) + ';')
            return out
        if k == 'expr':
            return [pad + self.expr_stmt(s[1]) + ';']
        if k == 'if':
            out = [pad + 'if (%s) {' % self.cond(s[1])]
            out.extend(self.stmt(s[2], d + 1))
            e = s[3]
            while e is not None:
                if e[0] == 'if':
                    out.append(pad + '} else if (%s) {' % self.cond(e[1]))
                    out.extend(self.stmt(e[2], d + 1))
                    e = e[3]
                else:
                    out.append(pad + '} else {')
                    out.extend(self.stmt(e, d + 1))
                    e = None
            out.append(pad + '}')
            return out
        if k == 'while':
            out = [pad + 'while (%s) {' % self.cond(s[1])]
            out.extend(self.stmt(s[2], d + 1))
            out.append(pad + '}')
            return out
        if k == 'dowhile':
            out = [pad + 'do {']
            out.extend(self.stmt(s[1], d + 1))
            out.append(pad + '} while (%s);' % self.cond(s[2]))
            return out
        if k == 'for':
            init, cnd, it, body = s[1], s[2], s[3], s[4]
            out = [pad + '{']
            if init is not None:
                out.extend(self.stmt(init, d + 1))
            c = self.cond(cnd) if cnd is not None else 'true'
            itc = ('({ %s; })' % self.expr_stmt(it)) if it is not None else ''
            out.append(pad + '    for (; %s; %s) {' % (c, itc))
            out.extend(self.stmt(body, d + 2))
            out.append(pad + '    }')
            out.append(pad + '}')
            return out
        if k == 'forin':
            each, init, coll, body = s[1], s[2], s[3], s[4]
            vname = init[1][0][0] if init[0] == 'var' else None
            lst = self.tmp('_lst')
            x = self.tmp('_x')
            ce = self.expr(coll)
            out = [pad + '{', pad + '    std::vector<rt::Value> %s;' % lst,
                   pad + '    rt::%s(%s, %s);' % ('each' if each else 'keys', toV(ce), lst),
                   pad + '    for (const rt::Value& %s : %s) {' % (x, lst)]
            if vname is not None:
                out.append(pad + '        ' + self.store_name_raw(vname, E(x, 'V')) + ';')
            else:
                out.append(pad + '        ' + self.store_target_raw(init[1], E(x, 'V')) + ';')
            out.extend(self.stmt(body, d + 2))
            out.append(pad + '    }')
            out.append(pad + '}')
            return out
        if k == 'label':
            self.warn['label'] += 1
            return self.stmt(s[2], d)
        if k == 'switch':
            return self.switch(s, d)
        if k == 'return':
            fn = self.fn
            if s[1] is None:
                return [pad + 'return %s;' % ret_default(fn.retk) if fn.kind != 'ctor' else pad + 'return;']
            e = self.expr(s[1])
            if fn.kind == 'ctor':
                return [pad + '(void)(%s);' % e.c, pad + 'return;']
            if fn.own_ret not in (None, 'void'):
                e = coerce(fn.own_ret, e)
            return [pad + 'return %s;' % to_kind(e, fn.retk)]
        if k in ('break', 'continue'):
            if s[1]:
                self.warn['labeled jump'] += 1
            return [pad + k + ';']
        if k == 'throw':
            return [pad + 'throw rt::Thrown{%s};' % toV(self.expr(s[1]))]
        if k == 'try':
            body, catches, fin = s[1], s[2], s[3]
            out = []
            if fin is not None:
                out.append(pad + 'try {')
                inner = self.try_catch(body, catches, d + 1)
                out.extend(inner)
                fl = self.stmt(fin, d + 1)
                out.append(pad + '} catch (...) {')
                out.extend(fl)
                out.append(pad + '    throw;')
                out.append(pad + '}')
                out.extend(self.stmt(fin, d))
                return out
            return self.try_catch(body, catches, d)
        if k == 'funcdecl':
            self.warn['funcdecl'] += 1
            return [pad + '/* 嵌套函数声明（未转写） */']
        raise NotImplementedError('stmt ' + k)

    def try_catch(self, body, catches, d):
        pad = '    ' * d
        out = [pad + 'try {']
        out.extend(self.stmt(body, d + 1))
        if catches:
            n, ty, blk = catches[0]
            cname = self.fn.locals[n][0]
            out.append(pad + '} catch (...) {')
            out.append(pad + '    %s = rt::cur_exc();' % cname)
            out.extend(self.stmt(blk, d + 1))
            out.append(pad + '}')
        else:
            out.append(pad + '} catch (...) { throw; }')
        return out

    def switch(self, s, d):
        pad = '    ' * d
        sel = self.tmp('_sw')
        ent = self.tmp('_c')
        out = [pad + '{', pad + '    rt::Value %s = %s;' % (sel, toV(self.expr(s[1]))),
               pad + '    int %s = -1;' % ent]
        default_idx = None
        for i, (test, body) in enumerate(s[2]):
            if test is None:
                default_idx = i
                continue
            out.append(pad + '    if (%s == -1 && rt::strict_eq(%s, %s)) %s = %d;' % (
                ent, sel, toV(self.expr(test)), ent, i))
        out.append(pad + '    if (%s == -1) %s = %d;' % (ent, ent, default_idx if default_idx is not None else len(s[2])))
        out.append(pad + '    switch (%s) {' % ent)
        for i, (test, body) in enumerate(s[2]):
            out.append(pad + '    case %d: {' % i)
            for st in body:
                out.extend(self.stmt(st, d + 2))
            out.append(pad + '    }')
        out.append(pad + '    default: break;')
        out.append(pad + '    }')
        out.append(pad + '}')
        return out

    def cond(self, e):
        k = e[0]
        if k == 'paren':
            return self.cond(e[1])
        if k == 'un' and e[1] == '!':
            return '(!%s)' % self.cond(e[2])
        if k == 'bin' and e[1] == '&&':
            a = self.expr(e[2])
            return '(%s && %s)' % (pyb(a), self.cond(e[3]))
        if k == 'bin' and e[1] == '||':
            a = self.expr(e[2])
            if a.k == 'B':
                return '(%s || %s)' % (a.c, self.cond(e[3]))
            t = self.tmp()
            return '({ %s %s = %s; %s ? %s : %s; })' % (CT[a.k], t, a.c, pyb(E(t, a.k)), toB(E(t, a.k)),
                                                       self.cond(e[3]))
        return toB(self.expr(e))

    # ------------------------------------------------------------------ 表达式语句、赋值
    def expr_stmt(self, e):
        k = e[0]
        if k == 'paren':
            return self.expr_stmt(e[1])
        if k == 'comma':
            return '%s; %s' % (self.expr_stmt(e[1]), self.expr_stmt(e[2]))
        if k == 'assign':
            return self.assign(e[1], e[2], e[3])
        if k in ('post', 'pre'):
            return self.assign(('+=' if e[1] == '++' else '-='), e[2], ('num', '1'))
        if k == 'un' and e[1] == 'delete':
            tgt = e[2]
            if tgt[0] == 'index':
                return 'rt::delete_(%s, %s)' % (toV(self.expr(tgt[1])), toV(self.expr(tgt[2])))
            if tgt[0] == 'member':
                return 'rt::delete_(%s, %s)' % (toV(self.expr(tgt[1])), self.lit(mangle(tgt[2])))
            return '(void)0'
        return '(void)(%s)' % self.expr(e).c

    def binop(self, op, a, b):
        """Python 版 binop_text 的语义"""
        if op == '+':
            if a.k in NUMK and b.k in NUMK:
                return E('(%s + %s)' % (toN(a), toN(b)), 'N')
            h = 'S' if 'S' in (a.h, b.h) else None
            return E('rt::add(%s, %s)' % (toV(a), toV(b)), 'V', h)
        if op in ('-', '*'):
            return E('(%s %s %s)' % (toN(a), op, toN(b)), 'N')
        if op == '/':
            return E('(%s / %s)' % (toN(a), toN(b)), 'N')
        if op == '%':
            return E('rt::mod(%s, %s)' % (toN(a), toN(b)), 'N')
        if op in ('&', '|', '^'):
            f = {'&': 'bitand_', '|': 'bitor_', '^': 'bitxor_'}[op]
            return E('rt::%s(%s, %s)' % (f, toN(a), toN(b)), 'I')
        if op in ('<<', '>>'):
            return E('rt::%s(%s, %s)' % ('shl' if op == '<<' else 'shr', toN(a), toN(b)), 'I')
        if op == '>>>':
            return E('rt::ushr(%s, %s)' % (toN(a), toN(b)), 'N')
        if op in ('&&', '||'):
            return self.andor(op, a, b)
        raise NotImplementedError(op)

    def andor(self, op, a, b):
        t = self.tmp()
        if a.k == b.k and (a.k != 'V' or True):
            k = a.k
            h = a.h if a.h == b.h else None
            av, bv = a.c, b.c
        else:
            k, h, av, bv = 'V', None, toV(a), toV(b)
        tv = E(t, k)
        if op == '&&':
            return E('({ %s %s = %s; %s ? (%s)(%s) : %s; })' % (CT[k], t, av, pyb(tv), CT[k], bv, t), k, h)
        return E('({ %s %s = %s; %s ? %s : (%s)(%s); })' % (CT[k], t, av, pyb(tv), t, CT[k], bv), k, h)

    def assign(self, op, l, r, as_expr=False):
        """赋值；as_expr 时返回值（E），否则返回语句文本"""
        if l[0] == 'paren':
            return self.assign(op, l[1], r, as_expr)
        base = op[:-1] if op != '=' else None
        if l[0] == 'name':
            return self.assign_name(l[1], op, r, as_expr)
        if l[0] == 'member':
            return self.assign_member(l[1], l[2], base, r, as_expr)
        if l[0] == 'index':
            o = self.expr(l[1])
            if base:
                to, ti = self.tmp('_o'), self.tmp('_i')
                rv = self.expr(r)
                pre = 'rt::Value %s = %s; rt::Value %s = %s; ' % (to, toV(o), ti, toV(self.expr(l[2])))
                cur = E('rt::idx_get(%s, %s)' % (to, ti), 'V')
                nv = self.binop(base, cur, rv)
                tv = self.tmp('_v')
                code = '({ %srt::Value %s = %s; rt::idx_set(%s, %s, %s); %s; })' % (pre, tv, toV(nv), to, ti, tv, tv)
                return E(code, 'V') if as_expr else code
            rv = self.expr(r)
            if as_expr:
                tv = self.tmp('_v')
                return E('({ rt::Value %s = %s; rt::idx_set(%s, %s, %s); %s; })' % (
                    tv, toV(rv), toV(o), toV(self.expr(l[2])), tv, tv), 'V', rv.h)
            # Python：先算右边（rv），再算对象和下标
            tv = self.tmp('_v')
            return '({ rt::Value %s = %s; rt::idx_set(%s, %s, %s); })' % (tv, toV(rv), toV(o), toV(self.expr(l[2])), tv)
        raise NotImplementedError('assign to ' + l[0])

    def assign_name(self, n, op, r, as_expr=False):
        base = op[:-1] if op != '=' else None
        fn = self.fn
        if n in fn.locals:
            cname, k, h, ty = fn.locals[n]
            rv = self.expr(r) if not isinstance(r, E) else r
            if base:
                rv = self.binop(base, E(cname, k, h), rv)
            v = coerce(ty, rv)
            code = '(%s = %s)' % (cname, to_kind(v, k))
            return E(code, k, h) if as_expr else code
        kind = self.name_kind(n, fn)
        rv = self.expr(r) if not isinstance(r, E) else r
        if kind == 'static':
            _, a = self.member_lookup(fn.cls, n)
            return self.static_store(a, n, base, rv, as_expr)
        if kind == 'inst':
            return self.assign_member_obj(E('rt::VO(this)', 'V', ('C', fn.cls.name), this=True), n, base, rv, as_expr)
        if kind == 'unknown':
            return self.assign_member_obj(E('rt::VO(this)', 'V', None, this=True), n, base, rv, as_expr)
        self.warn['assign global ' + n] += 1
        return E(rv.c, rv.k) if as_expr else '(void)(%s)' % rv.c

    def store_name_raw(self, n, e):
        """for-in 循环变量：Python 版不转换类型"""
        fn = self.fn
        if n in fn.locals:
            cname, k, h, ty = fn.locals[n]
            return '%s = %s' % (cname, to_kind(e, k))
        return self.assign_name(n, '=', e)

    def store_target_raw(self, t, e):
        if t[0] == 'name':
            return self.store_name_raw(t[1], e)
        if t[0] == 'member':
            return self.assign_member(t[1], t[2], None, e)
        return '(void)0'

    def static_store(self, a, n, base, rv, as_expr):
        if n in a.sfields and (n in self.static_prop_names or not (n in a.sgetters or n in a.ssetters)):
            ty = a.sfields[n]
            tgt = 'g::SV.%s__%s' % (a.cn, mangle_attr(n))
            if base:
                rv = self.binop(base, E(tgt, tk(ty), type_hint(ty, self.classes)), rv)
            v = coerce(ty, rv)
            code = '(%s = %s)' % (tgt, to_kind(v, tk(ty)))
            return E(code, tk(ty), v.h) if as_expr else code
        if n in a.ssetters:
            sf = a.ssetters[n]
            pty = sf['params'][0][1] if sf['params'] else None
            if base:
                rv = self.binop(base, self.static_read(a, n), rv)
            t = self.tmp('_v')
            code = '({ %s %s = %s; %s::ss_%s(%s); %s; })' % (CT[rv.k], t, rv.c, a.cn, mangle_attr(n),
                                                            to_kind(E(t, rv.k), tk(pty)), t)
            return E(code, rv.k, rv.h) if as_expr else code
        self.warn['static store ' + n] += 1
        return E(rv.c, rv.k) if as_expr else '(void)(%s)' % rv.c

    def assign_member(self, objn, n, base, r, as_expr=False):
        rv = self.expr(r) if not isinstance(r, E) else r
        if objn[0] == 'super':
            objn = ('this',)
        if objn[0] == 'name' and self.is_classname(objn[1]):
            c = self.classes.get(objn[1])
            if c:
                hit = self.static_lookup(c, n)
                if hit and hit[0] in ('var', 'sprop'):
                    return self.static_store(hit[1], n, base, rv, as_expr)
        o = self.expr(objn)
        return self.assign_member_obj(o, n, base, rv, as_expr)

    def assign_member_obj(self, o, n, base, rv, as_expr):
        nid = self.nid(n)
        if n == 'length' and not (o.h and o.h[0] == 'C'):
            # Arr.length 的 setter
            pass
        if isinstance(o.h, tuple) and o.h[0] == 'C':
            c = self.classes[o.h[1]]
            hit = self.inst_lookup(c, n)
            if hit and hit[0] in ('field', 'prop') and not self.conflict(c, n):
                kind, a = hit
                if kind == 'field':
                    own = self.field_owner(c, n)
                    ty = own.fields[n]
                    k = tk(ty)

                    def rd(p):
                        return E('%s->f_%s' % (p, mangle_attr(n)), k, type_hint(ty, self.classes))

                    def wr(p, v):
                        return '%s->f_%s = %s' % (p, mangle_attr(n), to_kind(coerce(ty, v), k))
                elif n in a.setters or self.top(c, n, 'setters'):
                    sa = None
                    for x in c.chain():
                        if n in x.setters:
                            sa = x
                            break
                    if sa is None:
                        return self.dyn_store(o, nid, base, rv, as_expr)
                    sf, _ = self.topdecl(sa, n, 'set')
                    pty = sf['params'][0][1] if sf['params'] else None
                    ga = None
                    for x in c.chain():
                        if n in x.getters:
                            ga = x
                            break

                    def rd(p):
                        if ga is None:
                            return E('rt::dget(rt::VO(%s), %s)' % (p, nid), 'V')
                        gf, _ = self.topdecl(ga, n, 'get')
                        return E('%s->g_%s()' % (p, mangle_attr(n)), self.method_ret(gf),
                                 type_hint(gf.get('ret'), self.classes))

                    def wr(p, v):
                        return '%s->s_%s(%s)' % (p, mangle_attr(n), to_kind(v, tk(pty)))
                else:
                    return self.dyn_store(o, nid, base, rv, as_expr)
                if o.this:
                    p = 'this'
                    pre = ''
                else:
                    to, p = self.tmp('_o'), self.tmp('_p')
                    pre = 'rt::Value %s = %s; %s* %s = rt::as_ptr<%s>(%s); ' % (to, o.c, c.cn, p, c.cn, to)
                tv = self.tmp('_v')
                if base:
                    cur = rd(p)
                    if not o.this:
                        cur = E('(%s ? %s : %s)' % (p, cur.c, to_kind(E('rt::dget(%s, %s)' % (to, nid), 'V'), cur.k)),
                                cur.k, cur.h)
                    nv = self.binop(base, cur, rv)
                else:
                    nv = rv
                if o.this:
                    code = '({ %s %s = %s; %s; %s; })' % (CT[nv.k], tv, nv.c, wr(p, E(tv, nv.k)), tv)
                    if not base:
                        # Python 版先算右边：右边已在 nv 里先算
                        pass
                else:
                    if base:
                        code = '({ %s%s %s = %s; if (%s) %s; else rt::dset(%s, %s, %s); %s; })' % (
                            pre, CT[nv.k], tv, nv.c, p, wr(p, E(tv, nv.k)), to, nid, toV(E(tv, nv.k)), tv)
                    else:
                        tv0 = tv
                        code = '({ %s %s = %s; rt::Value %s = %s; %s* %s = rt::as_ptr<%s>(%s); if (%s) %s; else rt::dset(%s, %s, %s); %s; })' % (
                            CT[nv.k], tv0, nv.c, to, o.c, c.cn, p, c.cn, to, p, wr(p, E(tv0, nv.k)), to, nid,
                            toV(E(tv0, nv.k)), tv0)
                return E(code, nv.k, nv.h) if as_expr else code
        return self.dyn_store(o, nid, base, rv, as_expr)

    def dyn_store(self, o, nid, base, rv, as_expr):
        tv = self.tmp('_v')
        if base:
            to = self.tmp('_o')
            nv = self.binop(base, E('rt::dget(%s, %s)' % (to, nid), 'V'), rv)
            code = '({ rt::Value %s = %s; rt::Value %s = %s; rt::dset(%s, %s, %s); %s; })' % (
                to, toV(o), tv, toV(nv), to, nid, tv, tv)
            return E(code, 'V') if as_expr else code
        code = '({ rt::Value %s = %s; rt::dset(%s, %s, %s); %s; })' % (tv, toV(rv), toV(o), nid, tv, tv)
        return E(code, 'V', rv.h) if as_expr else code

    # ------------------------------------------------------------------ 表达式
    def expr(self, e):
        if isinstance(e, E):
            return e
        m = getattr(self, 'e_' + e[0], None)
        if m is None:
            raise NotImplementedError('expr ' + e[0])
        return m(e)

    def e_num(self, e):
        v = e[1]
        if v.lower().startswith('0x'):
            x = float(int(v, 16))
        else:
            x = float(v)
        r = repr(x)
        if r == 'inf':
            return E('INFINITY', 'N')
        if 'e' not in r and '.' not in r:
            r += '.0'
        return E(r, 'N')

    def e_str(self, e):
        return E(self.lit(py_unescape(e[1][1:-1])), 'V', 'S')

    def e_regex(self, e):
        s = e[1]
        j = s.rindex('/')
        return E('rt::new_regexp(%s.s, %s.s)' % (self.lit(s[1:j]), self.lit(s[j + 1:])), 'V')

    def e_true(self, e):
        return E('true', 'B')

    def e_false(self, e):
        return E('false', 'B')

    def e_null(self, e):
        return E('rt::NUL', 'V')

    def e_this(self, e):
        if self.fn.static:
            return E('rt::NUL', 'V')
        return E('rt::VO(this)', 'V', ('C', self.fn.cls.name), this=True)

    def e_super(self, e):
        return self.e_this(e)

    def e_paren(self, e):
        x = self.expr(e[1])
        return E('(%s)' % x.c, x.k, x.h, x.this)

    def is_classname(self, n):
        return self.resolves_class(n, self.fn)

    def resolves_class(self, n, fn):
        if n in fn.locals:
            return False
        c = self.classes.get(n)
        if c is None:
            return False
        return not c.harness or self.name_kind(n, fn) == 'global'

    def classref(self, n):
        return E('rt::VO(%s::CI.ref)' % self.classes[n].cn, 'V', ('CLS', n))

    def e_name(self, e):
        n = e[1]
        fn = self.fn
        if n == 'undefined':
            return E('rt::UNDEF', 'V')
        if n == 'NaN':
            return E('NAN', 'N')
        if n == 'Infinity':
            return E('INFINITY', 'N')
        if n in fn.locals:
            cname, k, h, ty = fn.locals[n]
            return E(cname, k, h)
        if self.resolves_class(n, fn):
            return self.classref(n)
        if n in as2py.BUILTIN_NAMES or n in ('_', '_n'):
            self.warn['builtin value ' + n] += 1
            return E('rt::VO(rt::STUBCLASS)', 'V')
        kind = self.name_kind(n, fn)
        if kind == 'static':
            _, a = self.member_lookup(fn.cls, n)
            return self.static_read(a, n)
        if kind == 'inst':
            return self.member_read(E('rt::VO(this)', 'V', ('C', fn.cls.name), this=True), n)
        if kind == 'unknown':
            return E('rt::dget(rt::VO(this), %s)' % self.nid(n), 'V')
        if n == 'SharedObject':
            return E('rt::VO(rt::STUBCLASS)', 'V', ('SO',))
        return E('rt::VO(rt::STUBCLASS)', 'V')

    def static_read(self, a, n):
        if n in a.sfields and (n in self.static_prop_names or not (n in a.sgetters)):
            ty = a.sfields[n]
            return E('g::SV.%s__%s' % (a.cn, mangle_attr(n)), tk(ty), type_hint(ty, self.classes))
        if n in a.sgetters:
            f = a.sgetters[n]
            return E('%s::sg_%s()' % (a.cn, mangle_attr(n)), self.method_ret(f), type_hint(f.get('ret'), self.classes))
        if n in a.smethods:
            return E('rt::dget(rt::VO(%s::CI.ref), %s)' % (a.cn, self.nid(n)), 'V')
        if n in a.ssetters:
            return E('rt::NUL', 'V')    # 只有 setter：Python StaticProp 没有 fget 返回 None
        return E('rt::dget(rt::VO(%s::CI.ref), %s)' % (a.cn, self.nid(n)), 'V')

    def member_read(self, o, n):
        """o.n 读取"""
        nid = self.nid(n)
        if isinstance(o.h, tuple) and o.h[0] == 'CLS':
            c = self.classes[o.h[1]]
            hit = self.static_lookup(c, n)
            if hit:
                return self.static_read(hit[1], n)
            return E('rt::dget(%s, %s)' % (o.c, nid), 'V')
        if n == 'length':
            if isinstance(o.h, tuple) and o.h[0] == 'C':
                c = self.classes[o.h[1]]
                hit = self.inst_lookup(c, 'length')
                if not hit:
                    return E('rt::alen(%s)' % toV(o), 'N')
            else:
                return E('rt::alen(%s)' % toV(o), 'N')
        if isinstance(o.h, tuple) and o.h[0] == 'C':
            c = self.classes[o.h[1]]
            hit = self.inst_lookup(c, n)
            if hit and not self.conflict(c, n):
                kind, a = hit
                if kind == 'field':
                    own = self.field_owner(c, n)
                    ty = own.fields[n]
                    acc = '->f_%s' % mangle_attr(n)
                    rk, rh = tk(ty), type_hint(ty, self.classes)
                elif kind == 'prop':
                    ga = None
                    for x in c.chain():
                        if n in x.getters:
                            ga = x
                            break
                    if ga is None:
                        return E('rt::dget(%s, %s)' % (toV(o), nid), 'V')
                    gf, _ = self.topdecl(ga, n, 'get')
                    acc = '->g_%s()' % mangle_attr(n)
                    rk, rh = self.method_ret(gf), type_hint(gf.get('ret'), self.classes)
                else:
                    if o.this:
                        return E('rt::VO(rt::new_bound(rt::VO(this), %s))' % nid, 'V')
                    return E('rt::dget(%s, %s)' % (toV(o), nid), 'V')
                if o.this:
                    return E('this' + acc, rk, rh)
                to, p = self.tmp('_o'), self.tmp('_p')
                code = '({ rt::Value %s = %s; %s* %s = rt::as_ptr<%s>(%s); %s ? %s%s : %s; })' % (
                    to, o.c, c.cn, p, c.cn, to, p, p, acc, to_kind(E('rt::dget(%s, %s)' % (to, nid), 'V'), rk))
                return E(code, rk, rh)
        if o.this:
            return E('rt::dget(rt::VO(this), %s)' % nid, 'V')
        return E('rt::dget(%s, %s)' % (toV(o), nid), 'V')

    def e_member(self, e):
        obj, n = e[1], e[2]
        if obj[0] == 'super':
            return self.super_read(n)
        if obj[0] == 'name' and obj[1] not in self.fn.locals:
            b = obj[1]
            if b == 'Math' and n in MATHC:
                return E('rt::%s' % MATHC[n], 'N')
            if b in as2py.BUILTIN_NAMES and b not in self.classes:
                self.warn['builtin member %s.%s' % (b, n)] += 1
                return E('rt::VO(rt::STUB)', 'V')
        o = self.expr(obj)
        return self.member_read(o, n)

    def super_read(self, n):
        c = self.fn.cls.parent
        if c is None:
            return E('rt::dget(rt::VO(this), %s)' % self.nid(n), 'V')
        hit = self.inst_lookup(c, n)
        if hit:
            kind, a = hit
            if kind == 'prop' and n in a.getters:
                gf, _ = self.topdecl(a, n, 'get')
                return E('this->%s::g_%s()' % (a.cn, mangle_attr(n)), self.method_ret(gf),
                         type_hint(gf.get('ret'), self.classes))
            if kind == 'field':
                own = self.field_owner(c, n)
                return E('this->f_%s' % mangle_attr(n), tk(own.fields[n]), type_hint(own.fields[n], self.classes))
        return E('rt::dget(rt::VO(this), %s)' % self.nid(n), 'V')

    def e_index(self, e):
        o = self.expr(e[1])
        k = self.expr(e[2])
        eh = elem_hint(o.h, self.classes)
        if (o.h == 'A' or (isinstance(o.h, tuple) and o.h[0] == 'VEC')) and k.k in NUMK:
            return E('rt::arr_at(%s, %s)' % (toV(o), toN(k)), 'V', eh)
        return E('rt::idx_get(%s, %s)' % (toV(o), toV(k)), 'V', eh)

    def e_typeapp(self, e):
        return self.expr(e[1])

    # --- 调用
    def args_for(self, f, args, decl_cls, prefix):
        """按函数声明转换实参；缺的补默认值"""
        ps, rest = f['params'], f['rest']
        out = []
        for i, (n, ty, d) in enumerate(ps):
            if i < len(args):
                out.append(to_kind(self.expr(args[i]), tk(ty)))
            elif d is not None:
                out.append('%s::d%s_%d()' % (decl_cls.cn, prefix, i))
            else:
                out.append(missing_code(ty))
        if rest:
            extra = [toV(self.expr(a)) for a in args[len(ps):]]
            out.append('rt::arr_lit({%s})' % ', '.join(extra))
        elif len(args) > len(ps):
            for a in args[len(ps):]:
                self.warn['extra arg'] += 1
        return out

    def boxed(self, args):
        return [toV(self.expr(a)) for a in args]

    def callv(self, fcode, args):
        b = self.boxed(args)
        return E('rt::callv(%s%s)' % (fcode, ''.join(', ' + x for x in b)), 'V')

    def dcallv(self, ocode, n, args):
        b = self.boxed(args)
        return E('rt::dcallv(%s, %s%s)' % (ocode, self.nid(n), ''.join(', ' + x for x in b)), 'V')

    def ret_of(self, f):
        return self.method_ret(f), type_hint(f.get('ret'), self.classes)

    def e_call(self, e):
        f, args = e[1], e[2]
        fn = self.fn
        if f[0] == 'super':
            return self.super_ctor_call(args)
        if f[0] == 'member' and f[1][0] == 'super':
            return self.super_method_call(f[2], args)
        if f[0] == 'paren':
            f = f[1] if f[1][0] in ('name', 'member') else f
        if f[0] == 'name':
            n = f[1]
            if n in fn.locals:
                return self.callv(toV(self.expr(f)), args)
            if n in as2py.CAST_FUNCS:
                return self.cast_call(n, args)
            if self.resolves_class(n, fn):
                return self.construct(self.classes[n], args)
            if n in ('_', '_n'):
                b = self.boxed(args)
                return E('rt::%s(%s)' % ('trv' if n == '_' else 'tr_nv', ', '.join(b)), 'V', 'S')
            if n in as2py.BUILTIN_NAMES:
                return self.builtin_call(n, args)
            kind = self.name_kind(n, fn)
            if kind == 'static':
                _, a = self.member_lookup(fn.cls, n)
                return self.static_call(a, n, args)
            if kind == 'inst':
                return self.method_call(E('rt::VO(this)', 'V', ('C', fn.cls.name), this=True), n, args)
            if kind == 'unknown':
                return self.dcallv('rt::VO(this)', n, args)
            # 没转写的全局：Python 版是 Stub 类，调用得到 Stub 实例
            for a in args:
                self.expr(a)
            self.warn['call global ' + n] += 1
            return E('rt::new_stubinst()', 'V')
        if f[0] == 'member':
            obj, n = f[1], f[2]
            if obj[0] == 'name' and obj[1] not in fn.locals:
                b = obj[1]
                if b == 'Math' and b not in self.classes:
                    return self.math_call(n, args)
                if b == 'String' and n == 'fromCharCode':
                    return E('rt::str_from_char_codev(%s)' % ', '.join(self.boxed(args)), 'V', 'S')
                if b == 'Date' and n == 'UTC':
                    return E('rt::date_utcv(%s)' % ', '.join(self.boxed(args)), 'V')
                if b == 'SharedObject' and n == 'getLocal':
                    return E('rt::shared_object_get_local(nullptr, 0)', 'V')
                if b in as2py.BUILTIN_NAMES and b not in self.classes:
                    self.warn['builtin call %s.%s' % (b, n)] += 1
                    for a in args:
                        self.expr(a)
                    return E('rt::VO(rt::STUB)', 'V')
            o = self.expr(obj)
            if isinstance(o.h, tuple) and o.h[0] == 'CLS':
                return self.static_call(self.classes[o.h[1]], n, args, via=o)
            return self.method_call(o, n, args)
        if f[0] == 'typeapp':
            base = f[1]
            if base[0] == 'name' and base[1] == 'Vector':
                self.warn['Vector() call'] += 1
                return E('rt::new_vectorv(%s%s)' % (ET.get(f[2], 'rt::E_ANY'), ''.join(', ' + x for x in self.boxed(args))), 'V',
                         ('VEC', f[2]))
        return self.callv(toV(self.expr(f)), args)

    def cast_call(self, n, args):
        a = [self.expr(x) for x in args]
        if n == 'int':
            return E(toI(a[0]) if a else '0', 'I')
        if n == 'uint':
            return E(toU(a[0]) if a else '0u', 'U')
        if n == 'Number':
            return E(toN(a[0]) if a else '0.0', 'N')
        if n == 'String':
            return E('rt::VS(rt::tostr(%s))' % (toV(a[0]) if a else 'rt::UNDEF'), 'V', 'S')
        if n == 'Boolean':
            return E(toB(a[0]) if a else 'false', 'B')
        if n == 'Array':
            return E('rt::new_arrayv(%s)' % ', '.join(toV(x) for x in a), 'V', 'A')
        if n == 'Object':
            return E('rt::as_object(%s)' % (toV(a[0]) if a else 'rt::NUL'), 'V')
        if n == 'parseInt':
            return E('rt::parseInt(%s, %s)' % (toV(a[0]), toV(a[1]) if len(a) > 1 else 'rt::V(10)'), 'V')
        if n == 'parseFloat':
            return E('rt::parseFloat(%s)' % toV(a[0]), 'N')
        raise NotImplementedError(n)

    def builtin_call(self, n, args):
        a = [self.expr(x) for x in args]
        if n == 'isNaN':
            return E('rt::isNaN(%s)' % toV(a[0]), 'B')
        if n == 'isFinite':
            return E('rt::isFinite(%s)' % toV(a[0]), 'B')
        if n == 'trace':
            return E('rt::NUL', 'V')
        if n == 'getTimer':
            return E('rt::getTimer()', 'N')
        if n in PY_DEFINED:
            self.warn['builtin call ' + n] += 1
            return E('rt::VO(rt::STUB)', 'V')
        self.warn['builtin stub call ' + n] += 1
        return E('rt::new_stubinst()', 'V')

    def math_call(self, n, args):
        a = [self.expr(x) for x in args]
        if n in MATH1:
            return E('%s(%s)' % (MATH1[n], toN(a[0]) if a else 'NAN'), 'N')
        if n == 'pow':
            return E('rt::m_pow(%s, %s)' % (toN(a[0]), toN(a[1])), 'N')
        if n == 'atan2':
            return E('rt::m_atan2(%s, %s)' % (toN(a[0]), toN(a[1])), 'N')
        if n == 'random':
            return E('rt::m_random()', 'N')
        if n in ('max', 'min'):
            if len(a) == 2:
                return E('rt::m_%s2(%s, %s)' % (n, toN(a[0]), toN(a[1])), 'N')
            return E('rt::m_%sv(%s)' % (n, ', '.join(toV(x) for x in a)), 'N')
        self.warn['Math.' + n] += 1
        return E('rt::VO(rt::STUB)', 'V')

    def construct(self, c, args):
        a = self.nearest_ctor(c)
        t = self.tmp('_n')
        if a is None:
            for x in args:
                self.expr(x)
            return E('rt::VO(%s::alloc_())' % c.cn, 'V', ('C', c.name))
        f = a.ctor or {'params': [], 'rest': None}
        av = self.args_for(f, args, a, 'ctor')
        return E('({ %s* %s = %s::alloc_(); %s->%s::ctor_(%s); rt::VO(%s); })' % (
            c.cn, t, c.cn, t, a.cn, ', '.join(av), t), 'V', ('C', c.name))

    def super_ctor_call(self, args):
        p = self.fn.cls.parent
        a = self.nearest_ctor(p) if p else None
        if a is None:
            for x in args:
                self.expr(x)
            return E('rt::NUL', 'V')
        f = a.ctor or {'params': [], 'rest': None}
        av = self.args_for(f, args, a, 'ctor')
        return E('(this->%s::ctor_(%s), rt::NUL)' % (a.cn, ', '.join(av)), 'V')

    def super_method_call(self, n, args):
        p = self.fn.cls.parent
        if p is not None:
            for a in p.chain():
                if n in a.methods:
                    tf, tc = self.topdecl(a, n, 'method')
                    own = a.methods[n]
                    av = self.args_for(tf, args, a, 'm_' + mangle_attr(n)) if False else self.args_for_decl(tf, own, args, a, n)
                    k, h = self.ret_of(tf)
                    return E('this->%s::m_%s(%s)' % (a.cn, mangle_attr(n), ', '.join(av)), k, h)
                if a.inst_kind(n):
                    break
        return self.dcallv('rt::VO(this)', n, args)

    def args_for_decl(self, sigf, own, args, decl, n, static=False):
        """虚函数：实参按最上层签名转换；默认值取被调用的声明"""
        ps, rest = sigf['params'], sigf['rest']
        out = []
        pre = ('sm_' if static else 'm_') + mangle_attr(n)
        for i, (pn, ty, d) in enumerate(ps):
            if i < len(args):
                out.append(to_kind(self.expr(args[i]), tk(ty)))
            else:
                od = own['params'][i][2] if i < len(own['params']) else None
                if od is not None:
                    out.append(to_kind(E('%s::d%s_%d()' % (decl.cn, pre, i), tk(own['params'][i][1])), tk(ty)))
                else:
                    oty = own['params'][i][1] if i < len(own['params']) else ty
                    out.append(to_kind(E(missing_code(oty), tk(oty)), tk(ty)))
        if rest:
            extra = [toV(self.expr(a)) for a in args[len(ps):]]
            out.append('rt::arr_lit({%s})' % ', '.join(extra))
        elif len(args) > len(ps):
            self.warn['extra arg'] += 1
            for a in args[len(ps):]:
                self.expr(a)
        return out

    def static_call(self, c, n, args, via=None):
        hit = self.static_lookup(c, n)
        if hit is None:
            ref = via.c if via is not None else 'rt::VO(%s::CI.ref)' % c.cn
            return self.dcallv(ref, n, args)
        kind, a = hit
        if kind == 'smethod':
            f = a.smethods[n]
            av = self.args_for_decl(f, f, args, a, n, static=True)
            k, h = self.ret_of(f)
            return E('%s::sm_%s(%s)' % (a.cn, mangle_attr(n), ', '.join(av)), k, h)
        return self.callv(toV(self.static_read(a, n)), args)

    def method_call(self, o, n, args):
        if isinstance(o.h, tuple) and o.h[0] == 'C':
            c = self.classes[o.h[1]]
            hit = self.inst_lookup(c, n)
            if hit and not self.conflict(c, n):
                kind, a = hit
                if kind == 'method':
                    tf, tc = self.topdecl(a, n, 'method')
                    own = a.methods[n]
                    av = self.args_for_decl(tf, own, args, a, n)
                    k, h = self.ret_of(tf)
                    call = '->m_%s(%s)' % (mangle_attr(n), ', '.join(av))
                    if o.this:
                        return E('this' + call, k, h)
                    to, p = self.tmp('_o'), self.tmp('_p')
                    b = self.boxed(args)
                    dyn = to_kind(E('rt::dcallv(%s, %s%s)' % (to, self.nid(n), ''.join(', ' + x for x in b)), 'V'), k)
                    code = '({ rt::Value %s = %s; %s* %s = rt::as_ptr<%s>(%s); %s ? %s%s : %s; })' % (
                        to, o.c, c.cn, p, c.cn, to, p, p, call, dyn)
                    return E(code, k, h)
                if kind in ('field', 'prop'):
                    return self.callv(toV(self.member_read(o, n)), args)
            elif hit is None and not c.stub_base:
                # 实例上找不到：可能是类的静态方法（Python 通过实例能取到类属性）
                sh = self.static_lookup(c, n)
                if sh and sh[0] == 'smethod':
                    self.warn['static via instance'] += 1
        if o.this:
            return self.dcallv('rt::VO(this)', n, args)
        return self.dcallv(toV(o), n, args)

    def e_new(self, e):
        tgt, args = e[1], e[2]
        if tgt[0] == 'typeapp':
            base = tgt[1]
            if base[0] == 'name' and base[1] == 'Vector':
                b = self.boxed(args)
                return E('rt::new_vectorv(%s%s)' % (ET.get(tgt[2], 'rt::E_ANY'), ''.join(', ' + x for x in b)), 'V',
                         ('VEC', tgt[2]))
            tgt = base
        if tgt[0] == 'name' and tgt[1] not in self.fn.locals:
            n = tgt[1]
            if self.resolves_class(n, self.fn):
                return self.construct(self.classes[n], args)
            b = self.boxed(args)
            bs = ', '.join(b)
            if n == 'Array':
                return E('rt::new_arrayv(%s)' % bs, 'V', 'A')
            if n == 'Object':
                return E('rt::VO(rt::new_dict())', 'V')
            if n == 'Dictionary':
                return E('rt::new_dictionaryv(%s)' % bs, 'V')
            if n == 'ByteArray':
                return E('rt::new_bytearray()', 'V')
            if n == 'Date':
                return E('rt::new_datev(%s)' % bs, 'V')
            if n == 'Error':
                return E('rt::new_errorv(%s)' % bs, 'V')
            if n == 'Vector':
                return E('rt::new_vectorv(rt::E_NUM%s)' % ''.join(', ' + x for x in b), 'V')
            if n == 'SharedObject':
                return E('rt::new_stubinst()', 'V')
            kind = self.name_kind(n, self.fn)
            if kind in ('global', 'class'):
                self.warn['new stub ' + n] += 1
                return E('rt::new_stubinst()', 'V')
        return self.callv(toV(self.expr(tgt)), args)

    def e_array(self, e):
        return E('rt::arr_lit({%s})' % ', '.join(toV(self.expr(x)) for x in e[1]), 'V', 'A')

    def e_object(self, e):
        items = []
        for ((kk, key), v) in e[1]:
            if kk == 'str':
                ks = self.lit(py_unescape(key[1:-1]))
            elif kk == 'num':
                ks = toV(self.e_num(('num', key)))
            else:
                ks = self.lit(mangle_attr(key))
            items.append('{%s, %s}' % (ks, toV(self.expr(v))))
        return E('rt::dict_lit({%s})' % ', '.join(items), 'V')

    def e_lambda(self, e):
        self.warn['lambda'] += 1
        return E('rt::VO(rt::NOOP)', 'V')

    def e_un(self, e):
        op, a = e[1], e[2]
        if op == '!':
            return E('(!%s)' % self.cond(a), 'B')
        x = self.expr(a)
        if op == '-':
            return E('(-%s)' % toN(x), 'N')
        if op == '+':
            return E(toN(x), 'N')
        if op == '~':
            return E('rt::bitnot_(%s)' % toN(x), 'I')
        if op == 'typeof':
            return E('rt::typeof_(%s)' % toV(x), 'V', 'S')
        if op == 'void':
            return E('rt::NUL', 'V')
        if op == 'delete':
            if a[0] == 'index':
                return E('rt::delete_(%s, %s)' % (toV(self.expr(a[1])), toV(self.expr(a[2]))), 'B')
            return E('true', 'B')
        raise NotImplementedError(op)

    def is_code(self, xv, t):
        if t == '*':
            return '((void)(%s), true)' % xv
        if t == 'Number':
            return 'rt::is_number(%s)' % xv
        if t == 'int':
            return 'rt::is_int(%s)' % xv
        if t == 'String':
            return 'rt::is_string(%s)' % xv
        if t == 'Boolean':
            return 'rt::is_bool(%s)' % xv
        if t == 'Array':
            return 'rt::is_array(%s)' % xv
        if t in ('Object', 'Dictionary'):
            return 'rt::is_dict(%s)' % xv
        if t == 'ByteArray':
            return 'rt::is_kind(%s, rt::K_BYTES)' % xv
        if t == 'Date':
            return 'rt::is_kind(%s, rt::K_DATE)' % xv
        if t == 'Error':
            return 'rt::is_kind(%s, rt::K_ERROR)' % xv
        if t.startswith('Vector'):
            return '((void)(%s), false)' % xv
        short = t.split('.')[-1]
        if short in self.classes:
            return 'rt::is_class(%s, %s::CI)' % (xv, self.classes[short].cn)
        return 'rt::is_stubtype(%s)' % xv

    def e_bin(self, e):
        op, a, b = e[1], e[2], e[3]
        if op == 'is':
            return E(self.is_code(toV(self.expr(a)), b[1]), 'B')
        if op == 'as':
            x = self.expr(a)
            t = b[1]
            if t == '*' or t.startswith('Vector'):
                return E(toV(x), 'V', type_hint(t, self.classes))
            tv = self.tmp()
            return E('({ rt::Value %s = %s; %s ? %s : rt::NUL; })' % (tv, toV(x), self.is_code(tv, t), tv), 'V',
                     type_hint(t, self.classes))
        if op == 'instanceof':
            return E('rt::instance_of(%s, %s)' % (toV(self.expr(a)), toV(self.expr(b))), 'B')
        if op == 'in':
            return E('rt::in_(%s, %s)' % (toV(self.expr(a)), toV(self.expr(b))), 'B')
        if op in ('&&', '||'):
            return self.andor(op, self.expr(a), self.expr(b))
        ea, eb = self.expr(a), self.expr(b)
        if op in ('==', '===', '!=', '!=='):
            neg = op.startswith('!')
            strict = len(op) == 3
            if ea.k in ('N', 'I', 'U') and eb.k in ('N', 'I', 'U'):
                c = '(%s == %s)' % (toN(ea), toN(eb))
            elif ea.k == 'B' and eb.k == 'B':
                c = '(%s == %s)' % (ea.c, eb.c)
            else:
                c = 'rt::%s(%s, %s)' % ('strict_eq' if strict else 'eq', toV(ea), toV(eb))
            return E('(!%s)' % c if neg else c, 'B')
        if op in ('<', '<=', '>', '>='):
            if ea.k in NUMK and eb.k in NUMK:
                return E('(%s %s %s)' % (toN(ea), op, toN(eb)), 'B')
            f = {'<': 'lt', '<=': 'le', '>': 'gt', '>=': 'ge'}[op]
            return E('rt::%s(%s, %s)' % (f, toV(ea), toV(eb)), 'B')
        return self.binop(op, ea, eb)

    def e_cond(self, e):
        c = self.cond(e[1])
        a, b = self.expr(e[2]), self.expr(e[3])
        if a.k == b.k:
            return E('(%s ? %s : %s)' % (c, a.c, b.c), a.k, a.h if a.h == b.h else None)
        if a.k in NUMK and b.k in NUMK and 'B' not in (a.k, b.k):
            return E('(%s ? %s : %s)' % (c, toN(a), toN(b)), 'N')
        return E('(%s ? %s : %s)' % (c, toV(a), toV(b)), 'V')

    def e_comma(self, e):
        a = self.expr_stmt(e[1])
        b = self.expr(e[2])
        return E('({ %s; %s; })' % (a, b.c), b.k, b.h)

    def e_assign(self, e):
        return self.assign(e[1], e[2], e[3], as_expr=True)

    def e_pre(self, e):
        return self.incdec(e, True)

    def e_post(self, e):
        return self.incdec(e, False)

    def incdec(self, e, pre):
        d = '1.0' if e[1] == '++' else '-1.0'
        t = e[2]
        if t[0] == 'paren':
            t = t[1]
        tv = self.tmp('_old')
        if t[0] == 'name' and t[1] in self.fn.locals:
            cname, k, h, ty = self.fn.locals[t[1]]
            old = toN(E(cname, k))
            nv = E('(%s + %s)' % (tv, d), 'N')
            return E('({ double %s = %s; %s = %s; %s; })' % (tv, old, cname, to_kind(nv, k), nv.c if pre else tv), 'N')
        if t[0] in ('name', 'member'):
            # Python incdec_attr：old = tonum(读)，写 old+d（经字段类型转换）
            cur = self.expr(t)
            cv = E(tv, 'N')
            st = self.assign(('='), t, E('(%s + %s)' % (tv, d), 'N'))
            return E('({ double %s = %s; %s; %s; })' % (tv, toN(cur), st, ('(%s + %s)' % (tv, d)) if pre else tv), 'N')
        if t[0] == 'index':
            o, i = self.tmp('_o'), self.tmp('_i')
            return E('({ rt::Value %s = %s; rt::Value %s = %s; double %s = rt::tonum(rt::idx_get(%s, %s)); '
                     'rt::idx_set(%s, %s, rt::V(%s + %s)); %s; })' % (
                         o, toV(self.expr(t[1])), i, toV(self.expr(t[2])), tv, o, i, o, i, tv, d,
                         ('(%s + %s)' % (tv, d)) if pre else tv), 'N')
        raise NotImplementedError('incdec ' + t[0])


# ------------------------------------------------------------------ 输出
def cstr16(s):
    out = []
    for ch in s:
        o = ord(ch)
        if o > 0xffff:
            o -= 0x10000
            out.extend([0xd800 + (o >> 10), 0xdc00 + (o & 0x3ff)])
        else:
            out.append(o)
    return out


class Emitter:
    def __init__(self, gen, hooks):
        self.g = gen
        self.hooks = hooks        # {(类名, 方法名): [行]}
        self.errors = []

    def fdecl_params(self, f):
        return self.g.cpp_params(f)

    def class_decl(self, c):
        g = self.g
        base = c.parent.cn if c.parent else 'rt::Inst'
        L = ['struct %s : %s {' % (c.cn, base), '    static rt::ClassInfo CI;']
        for n, ty in c.fields.items():
            if g.field_owner(c, n) is c:
                init = None
                for (fn_, fty, fi) in c.finit:
                    if fn_ == n:
                        init = fi
                L.append('    %s f_%s = %s;' % (CT[tk(ty)], mangle_attr(n), self.field_default(c, n, ty, init)))
        if c.has_ctor:
            f = c.ctor or {'params': [], 'rest': None}
            L.append('    void ctor_(%s);' % g.cpp_params(f))
            for i, p in enumerate(f['params']):
                if p[2] is not None:
                    L.append('    static %s dctor_%d();' % (CT[tk(p[1])], i))
        for n, f in c.methods.items():
            tf, _ = g.topdecl(c, n, 'method')
            L.append('    virtual %s m_%s(%s);' % (CT[g.method_ret(tf)], mangle_attr(n), g.cpp_params(tf)))
            for i, p in enumerate(f['params']):
                if p[2] is not None:
                    L.append('    static %s dm_%s_%d();' % (CT[tk(p[1])], mangle_attr(n), i))
        for n, f in c.getters.items():
            tf, _ = g.topdecl(c, n, 'get')
            L.append('    virtual %s g_%s();' % (CT[g.method_ret(tf)], mangle_attr(n)))
        for n, f in c.setters.items():
            tf, _ = g.topdecl(c, n, 'set')
            L.append('    virtual rt::Value s_%s(%s);' % (mangle_attr(n), g.cpp_params(tf)))
        for n, f in c.smethods.items():
            L.append('    static %s sm_%s(%s);' % (CT[g.method_ret(f)], mangle_attr(n), g.cpp_params(f)))
            for i, p in enumerate(f['params']):
                if p[2] is not None:
                    L.append('    static %s dsm_%s_%d();' % (CT[tk(p[1])], mangle_attr(n), i))
        for n, f in c.sgetters.items():
            L.append('    static %s sg_%s();' % (CT[g.method_ret(f)], mangle_attr(n)))
        for n, f in c.ssetters.items():
            L.append('    static rt::Value ss_%s(%s);' % (mangle_attr(n), g.cpp_params(f)))
        L.append('    static %s* alloc_();' % c.cn)
        L.append('    static rt::Value mk_(rt::Value* a, int n);')
        L.append('    static bool sget_(int id, rt::Value& out);')
        L.append('    static bool sset_(int id, rt::Value v);')
        L.append('    static bool scall_(int id, rt::Value* a, int n, rt::Value& out);')
        L.append('    bool dget(int id, rt::Value& out) override;')
        L.append('    bool dset(int id, rt::Value v) override;')
        L.append('    bool dcall(int id, rt::Value* a, int n, rt::Value& out) override;')
        L.append('    bool dmeth(int id) override;')
        L.append('    static bool smeth_(int id);')
        L.append('    size_t osize() const override { return sizeof(%s); }' % c.cn)
        L.append('};')
        return L

    def field_default(self, c, n, ty, init):
        g = self.g
        if init is not None and is_const(init):
            g.fn = Fn(c, True, None, 'init')
            g.fn.retk = 'V'
            v = coerce(ty, g.expr(init))
            g.fn = None
            return to_kind(v, tk(ty))
        return default_code(ty)

    def default_fn(self, c, name, f, i):
        g = self.g
        n, ty, d = f['params'][i]
        g.fn = Fn(c, True, None, 'init')
        g.fn.retk = 'V'
        v = coerce(ty, g.expr(d)) if (ty in KT or ty == 'String') else g.expr(d)
        g.fn = None
        return ['%s %s::%s_%d() { return %s; }' % (CT[tk(ty)], c.cn, name, i, to_kind(v, tk(ty)))]

    def ctor_def(self, c):
        g = self.g
        f = c.ctor or {'params': [], 'rest': None, 'body': ('block', []), 'name': c.name, 'ret': None}
        L = []
        for i, p in enumerate(f['params']):
            if p[2] is not None:
                L.extend(self.default_fn(c, 'dctor', f, i))

        def head(fn):
            out = []
            pre = []
            for (n, ty, init) in c.finit:
                if init is not None and not is_const(init):
                    pre.append('    ' + g.assign_member_obj(E('rt::VO(this)', 'V', ('C', c.name), this=True), n, None,
                                                            g.expr(init), False) + ';')
            has_super = self.has_super_call(f.get('body'))
            if c.parent is not None or c.stub_base:
                if not has_super:
                    a = g.nearest_ctor(c.parent) if c.parent else None
                    if a is not None:
                        af = a.ctor or {'params': [], 'rest': None}
                        av = g.args_for(af, [], a, 'ctor')
                        out.append('    this->%s::ctor_(%s);' % (a.cn, ', '.join(av)))
            return out + pre
        body = g.gen_body(c, f, False, f, 'ctor', ctor_head=head)
        L.append('void %s::ctor_(%s) {' % (c.cn, g.cpp_params(f)))
        L.extend(body)
        L.append('}')
        return L

    def has_super_call(self, body):
        found = [False]

        def walk(n):
            if isinstance(n, tuple) and n:
                if n[0] == 'call' and n[1] == ('super',):
                    found[0] = True
                    return
                for x in n[1:]:
                    walk(x)
            elif isinstance(n, list):
                for x in n:
                    walk(x)
        walk(body)
        return found[0]

    def method_def(self, c, n, f, kind, static):
        g = self.g
        mn = mangle_attr(n)
        L = []
        hook = self.hooks.get((c.name, n, kind))
        if kind == 'method' and not static:
            tf, _ = g.topdecl(c, n, 'method')
            for i, p in enumerate(f['params']):
                if p[2] is not None:
                    L.extend(self.default_fn(c, 'dm_' + mn, f, i))
            head = '%s %s::m_%s(%s)' % (CT[g.method_ret(tf)], c.cn, mn, g.cpp_params(tf))
        elif kind == 'method':
            tf = f
            for i, p in enumerate(f['params']):
                if p[2] is not None:
                    L.extend(self.default_fn(c, 'dsm_' + mn, f, i))
            head = '%s %s::sm_%s(%s)' % (CT[g.method_ret(f)], c.cn, mn, g.cpp_params(f))
        elif kind == 'get':
            tf = g.topdecl(c, n, 'get')[0] if not static else f
            head = '%s %s::%s_%s()' % (CT[g.method_ret(tf)], c.cn, 'sg' if static else 'g', mn)
        else:
            tf = g.topdecl(c, n, 'set')[0] if not static else f
            head = 'rt::Value %s::%s_%s(%s)' % (c.cn, 'ss' if static else 's', mn, g.cpp_params(tf))
        body = g.gen_body(c, f, static, tf, kind, hook=hook)
        L.append(head + ' {')
        L.extend(body)
        L.append('}')
        return L

    def reflect_def(self, c):
        g = self.g
        base = c.parent.cn if c.parent else 'rt::Inst'
        L = []
        # alloc_：子类重新声明字段的常量初值
        L.append('%s* %s::alloc_() {' % (c.cn, c.cn))
        L.append('    %s* o = rt::make<%s>();' % (c.cn, c.cn))
        for a in reversed(list(c.chain())):
            for (n, ty, init) in a.finit:
                own = g.field_owner(c, n)
                if own is not a:
                    L.append('    o->f_%s = %s;' % (mangle_attr(n),
                                                     to_kind(E(self.field_default(a, n, ty, init), tk(ty)), tk(own.fields[n]))))
        L.append('    return o;')
        L.append('}')
        # mk_
        L.append('rt::Value %s::mk_(rt::Value* a, int n) {' % c.cn)
        L.append('    %s* o = alloc_();' % c.cn)
        a = g.nearest_ctor(c)
        if a is not None:
            f = a.ctor or {'params': [], 'rest': None}
            L.append('    o->%s::ctor_(%s);' % (a.cn, ', '.join(self.dyn_args(a, f, 'dctor'))))
        L.append('    return rt::VO(o);')
        L.append('}')
        # dget
        L.append('bool %s::dget(int id, rt::Value& out) {' % c.cn)
        L.append('    switch (id) {')
        for n in c.getters:
            tf, _ = g.topdecl(c, n, 'get')
            L.append('    case %s: out = %s; return true;' % (g.nid(n), toV(E('g_%s()' % mangle_attr(n), g.method_ret(tf)))))
        for n, ty in c.fields.items():
            if n in c.getters or n in c.setters:
                continue
            own = g.field_owner(c, n)
            if own is c:
                L.append('    case %s: out = %s; return true;' % (g.nid(n), toV(E('f_%s' % mangle_attr(n), tk(ty)))))
        for n in c.methods:
            if n in c.getters or n in c.fields:
                continue
            L.append('    case %s: out = rt::VO(rt::new_bound(rt::VO(this), id)); return true;' % g.nid(n))
        L.append('    default: break;')
        L.append('    }')
        L.append('    return %s::dget(id, out);' % base)
        L.append('}')
        # dset
        L.append('bool %s::dset(int id, rt::Value v) {' % c.cn)
        L.append('    switch (id) {')
        for n, ty in c.fields.items():
            if n in c.getters or n in c.setters:
                continue
            own = g.field_owner(c, n)
            if own is c:
                L.append('    case %s: f_%s = %s; return true;' % (g.nid(n), mangle_attr(n),
                                                                 to_kind(coerce(ty, E('v', 'V')), tk(ty))))
        for n in c.setters:
            tf, _ = g.topdecl(c, n, 'set')
            pty = tf['params'][0][1] if tf['params'] else None
            L.append('    case %s: s_%s(%s); return true;' % (g.nid(n), mangle_attr(n), to_kind(E('v', 'V'), tk(pty))))
        for n in c.getters:
            if n not in c.setters:
                L.append('    case %s: return false;' % g.nid(n))
        L.append('    default: break;')
        L.append('    }')
        L.append('    return %s::dset(id, v);' % base)
        L.append('}')
        # dcall
        L.append('bool %s::dcall(int id, rt::Value* a, int n, rt::Value& out) {' % c.cn)
        L.append('    switch (id) {')
        for n, f in c.methods.items():
            if n in c.getters or n in c.fields:
                continue
            tf, _ = g.topdecl(c, n, 'method')
            args = self.dyn_args(c, f, 'dm_' + mangle_attr(n), sigf=tf)
            L.append('    case %s: out = %s; return true;' % (g.nid(n), toV(E('m_%s(%s)' % (mangle_attr(n), ', '.join(args)),
                                                                                   g.method_ret(tf)))))
        for n in c.getters:
            L.append('    case %s: { rt::Value f = %s; out = rt::call_value(f, a, n); return true; }' % (
                g.nid(n), toV(E('g_%s()' % mangle_attr(n), g.method_ret(g.topdecl(c, n, 'get')[0])))))
        for n, ty in c.fields.items():
            if g.field_owner(c, n) is c and n not in c.getters:
                L.append('    case %s: { rt::Value f = %s; out = rt::call_value(f, a, n); return true; }' % (
                    g.nid(n), toV(E('f_%s' % mangle_attr(n), tk(ty)))))
        L.append('    default: break;')
        L.append('    }')
        L.append('    return %s::dcall(id, a, n, out);' % base)
        L.append('}')
        L.append('bool %s::dmeth(int id) {' % c.cn)
        L.append('    switch (id) {')
        for n in c.methods:
            if n in c.getters or n in c.fields:
                continue
            L.append('    case %s: return true;' % g.nid(n))
        for n in dict.fromkeys(list(c.getters) + list(c.setters) + [f for f in c.fields if g.field_owner(c, f) is c]):
            if n not in c.methods:
                L.append('    case %s: return false;' % g.nid(n))
        L.append('    default: break;')
        L.append('    }')
        L.append('    return %s::dmeth(id);' % base)
        L.append('}')
        L.append('bool %s::smeth_(int id) {' % c.cn)
        L.append('    switch (id) {')
        for n in c.smethods:
            if n in c.sfields or n in c.sgetters:
                continue
            L.append('    case %s: return true;' % g.nid(n))
        L.append('    default: return false;')
        L.append('    }')
        L.append('}')
        # 静态
        L.append('bool %s::sget_(int id, rt::Value& out) {' % c.cn)
        L.append('    switch (id) {')
        for n, ty in c.sfields.items():
            L.append('    case %s: out = %s; return true;' % (g.nid(n), toV(E('g::SV.%s__%s' % (c.cn, mangle_attr(n)), tk(ty)))))
        for n, f in c.sgetters.items():
            if n in c.sfields:
                continue
            L.append('    case %s: out = %s; return true;' % (g.nid(n), toV(E('sg_%s()' % mangle_attr(n), g.method_ret(f)))))
        for n in c.smethods:
            if n in c.sfields or n in c.sgetters:
                continue
            L.append('    case %s: out = rt::VO(rt::new_bound(rt::VO(CI.ref), id)); return true;' % g.nid(n))
        L.append('    default: return false;')
        L.append('    }')
        L.append('}')
        L.append('bool %s::sset_(int id, rt::Value v) {' % c.cn)
        L.append('    switch (id) {')
        for n, ty in c.sfields.items():
            L.append('    case %s: g::SV.%s__%s = %s; return true;' % (g.nid(n), c.cn, mangle_attr(n),
                                                                      to_kind(coerce(ty, E('v', 'V')), tk(ty))))
        for n, f in c.ssetters.items():
            if n in c.sfields:
                continue
            pty = f['params'][0][1] if f['params'] else None
            L.append('    case %s: ss_%s(%s); return true;' % (g.nid(n), mangle_attr(n), to_kind(E('v', 'V'), tk(pty))))
        L.append('    default: return false;')
        L.append('    }')
        L.append('}')
        L.append('bool %s::scall_(int id, rt::Value* a, int n, rt::Value& out) {' % c.cn)
        L.append('    switch (id) {')
        for n, f in c.smethods.items():
            if n in c.sfields or n in c.sgetters:
                continue
            args = self.dyn_args(c, f, 'dsm_' + mangle_attr(n))
            L.append('    case %s: out = %s; return true;' % (g.nid(n), toV(E('sm_%s(%s)' % (mangle_attr(n), ', '.join(args)),
                                                                                   g.method_ret(f)))))
        L.append('    default: return false;')
        L.append('    }')
        L.append('}')
        return L

    def dyn_args(self, c, f, dprefix, sigf=None):
        sigf = sigf or f
        out = []
        for i, (n, ty, d) in enumerate(sigf['params']):
            own = f['params'][i] if i < len(f['params']) else (n, ty, None)
            if own[2] is not None:
                dflt = to_kind(E('%s::%s_%d()' % (c.cn, dprefix, i), tk(own[1])), tk(ty))
            else:
                dflt = to_kind(E(missing_code(own[1]), tk(own[1])), tk(ty))
            out.append('rt::arg<%s>(a, n, %d, %s)' % (CT[tk(ty)], i, dflt))
        if sigf['rest']:
            out.append('rt::rest_arr(a, n, %d)' % len(sigf['params']))
        return out

    def class_defs(self, c):
        L = []
        try:
            if c.has_ctor:
                L.extend(self.ctor_def(c))
            for n, f in c.methods.items():
                L.extend(self.method_def(c, n, f, 'method', False))
            for n, f in c.getters.items():
                L.extend(self.method_def(c, n, f, 'get', False))
            for n, f in c.setters.items():
                L.extend(self.method_def(c, n, f, 'set', False))
            for n, f in c.smethods.items():
                L.extend(self.method_def(c, n, f, 'method', True))
            for n, f in c.sgetters.items():
                L.extend(self.method_def(c, n, f, 'get', True))
            for n, f in c.ssetters.items():
                L.extend(self.method_def(c, n, f, 'set', True))
            L.extend(self.reflect_def(c))
        except Exception as e:  # noqa: BLE001
            import traceback
            self.errors.append((c.name, repr(e), traceback.format_exc()[-800:]))
            raise
        return L

    def static_init(self, c):
        g = self.g
        L = []
        for (n, ty, init) in c.sinit:
            if init is None:
                continue
            g.fn = Fn(c, True, None, 'init')
            g.fn.retk = 'V'
            st = g.static_store(c, n, None, g.expr(init), False)
            g.fn = None
            L.append('    try { %s; } catch (...) { errs.push_back(std::string("%s.%s: ") + rt::exc_text()); }' % (
                st, c.py, mangle_attr(n)))
        return L


def generate(parsed, out_dir, hooks=None, ntu=24):
    g = Gen(parsed)
    em = Emitter(g, hooks or {})
    os.makedirs(out_dir, exist_ok=True)
    # 先生成方法体（收集名字和字面量），再写头文件
    tus = [[] for _ in range(ntu)]
    sinit_tu = [[] for _ in range(ntu)]
    sizes = [0] * ntu
    per = (len(g.order) + ntu - 1) // ntu
    for i, c in enumerate(g.order):
        t = min(i // per, ntu - 1)
        body = em.class_defs(c)
        tus[t].extend(body)
        sinit_tu[t].extend(em.static_init(c))
        sizes[t] += len(body)
    # 类声明（也会登记名字）
    decls = []
    for c in g.order:
        decls.extend(em.class_decl(c))
    for c in g.order:
        for n in list(c.fields) + list(c.methods) + list(c.getters) + list(c.setters) + list(c.sfields) + \
                list(c.smethods) + list(c.sgetters) + list(c.ssetters):
            g.nid(n)
    H = ['// 由 脚本/as2cpp.py 生成，不要手改', '#pragma once', '#include "rt.h"', 'namespace g {',
         'extern bool HOOK_no_timewarp, HOOK_no_save;',
         'extern const rt::Str* LS[];', 'enum : int {']
    for i, py in enumerate(g.name_list):
        H.append('    NM_%s = rt::NB_BUILTIN + %d,' % (py, i))
    H.append('    NM__COUNT = rt::NB_BUILTIN + %d' % len(g.name_list))
    H.append('};')
    for c in g.order:
        H.append('struct %s;' % c.cn)
    H.extend(decls)
    H.append('struct ST {')
    for c in g.order:
        for n, ty in c.sfields.items():
            H.append('    %s %s__%s;' % (CT[tk(ty)], c.cn, mangle_attr(n)))
    H.append('    int _end;')
    H.append('};')
    H.append('extern ST SV;')
    H.append('void boot_init();')
    H.append('void static_init(std::vector<std::string>& errs);')
    H.append('}  // namespace g')
    open(os.path.join(out_dir, 'gen.h'), 'w', encoding='utf-8').write('\n'.join(H) + '\n')
    for t in range(ntu):
        L = ['// 由 脚本/as2cpp.py 生成', '#include "gen.h"', 'namespace g {']
        L.extend(tus[t])
        L.append('void static_init_%d(std::vector<std::string>& errs) {' % t)
        L.extend(sinit_tu[t])
        L.append('}')
        L.append('}  // namespace g')
        write_if_changed(os.path.join(out_dir, 'gen_%d.cpp' % t), '\n'.join(L) + '\n')
    # meta
    M = ['// 由 脚本/as2cpp.py 生成', '#include "gen.h"', 'namespace g {',
         'bool HOOK_no_timewarp = false, HOOK_no_save = false;', 'ST SV;']
    for c in g.order:
        M.append('rt::ClassInfo %s::CI;' % c.cn)
    for t in range(ntu):
        M.append('void static_init_%d(std::vector<std::string>& errs);' % t)
    M.append('void static_init(std::vector<std::string>& errs) {')
    for t in range(ntu):
        M.append('    static_init_%d(errs);' % t)
    M.append('}')
    # 字面量
    blob, offs = [], []
    for s in g.lit_list:
        u = cstr16(s)
        offs.append((len(blob), len(u)))
        blob.extend(u)
    M.append('static const char16_t LIT_BLOB[] = {%s};' % ','.join(str(x) for x in (blob or [0])))
    M.append('static const uint32_t LIT_OFF[][2] = {%s};' % ','.join('{%d,%d}' % o for o in (offs or [(0, 0)])))
    M.append('const rt::Str* LS[%d];' % max(1, len(g.lit_list)))
    M.append('static const char* const NAMES[] = {%s};' % ','.join(json.dumps(n) for n in (g.name_list or ['_'])))
    M.append('void boot_init() {')
    M.append('    rt::register_names(NAMES, %d);' % len(g.name_list))
    M.append('    for (int i = 0; i < %d; i++) LS[i] = rt::str_lit(LIT_BLOB + LIT_OFF[i][0], LIT_OFF[i][1]);' % len(g.lit_list))
    for c in g.order:
        M.append('    %s::CI.name = %s; %s::CI.parent = %s; %s::CI.kind = rt::K_INST; %s::CI.stub_base = %s;' % (
            c.cn, json.dumps(c.py), c.cn, '&%s::CI' % c.parent.cn if c.parent else '&rt::CI_INST', c.cn, c.cn,
            'true' if c.stub_base else 'false'))
        M.append('    %s::CI.sget = &%s::sget_; %s::CI.sset = &%s::sset_; %s::CI.scall = &%s::scall_; %s::CI.make = &%s::mk_; %s::CI.smeth = &%s::smeth_;' % (
            c.cn, c.cn, c.cn, c.cn, c.cn, c.cn, c.cn, c.cn, c.cn, c.cn))
        M.append('    rt::class_init(%s::CI); %s::CI.ref = rt::new_classref(&%s::CI);' % (c.cn, c.cn, c.cn))
    # 静态默认值
    for c in g.order:
        for n, ty in c.sfields.items():
            M.append('    SV.%s__%s = %s;' % (c.cn, mangle_attr(n), default_code(ty)))
    M.append('    rt::register_statics(&SV, sizeof(SV));')
    M.append('    rt::register_classes(%s);' % 'nullptr')
    M.append('}')
    M.append('}  // namespace g')
    M.append('#include <unordered_map>')
    M.append('#include <string>')
    M.append('const rt::ClassInfo* find_class(const char* n) {')
    M.append('    static std::unordered_map<std::string, const rt::ClassInfo*> m;')
    M.append('    if (m.empty()) {')
    for c in g.order:
        M.append('        m[%s] = &g::%s::CI;' % (json.dumps(c.py), c.cn))
    M.append('    }')
    M.append('    auto it = m.find(n);')
    M.append('    return it == m.end() ? nullptr : it->second;')
    M.append('}')
    write_if_changed(os.path.join(out_dir, 'gen_meta.cpp'), '\n'.join(M) + '\n')
    info = dict(classes=len(g.order), names=len(g.name_list), literals=len(g.lit_list), tus=ntu,
                tu_lines=sizes, warnings=dict(g.warn.most_common()), errors=em.errors,
                class_names={c.name: c.py for c in g.order})
    json.dump(info, open(os.path.join(out_dir, 'gen_info.json'), 'w', encoding='utf-8'), ensure_ascii=False, indent=1)
    return g, info


def write_if_changed(path, text):
    try:
        if open(path, encoding='utf-8').read() == text:
            return
    except OSError:
        pass
    open(path, 'w', encoding='utf-8').write(text)


def load_sources(root=None, pcode=None, extra_dir=None):
    root = root or os.path.join(ROOT, 'build', 'installed-as3-deobf', 'scripts')
    pcode = pcode or os.path.join(ROOT, 'build', 'installed-pcode', 'scripts')
    parsed, errors = as2py.convert_dir(root, pcode_root=pcode)
    extra_dir = extra_dir or os.path.join(HERE, 'native', 'as3')
    if os.path.isdir(extra_dir):
        for fn in sorted(os.listdir(extra_dir)):
            if fn.endswith('.as'):
                p = os.path.join(extra_dir, fn)
                parsed.append((p, as2py.parse_file(open(p, encoding='utf-8').read())))
    return parsed, errors


GAME_HOOKS = {
    ('§8G§', '§&P§', 'method'): ['    if (g::HOOK_no_timewarp) return rt::NUL;'],   # timeWarp
    ('§8G§', '§ 2§', 'method'): ['    if (g::HOOK_no_save) return true;'],   # save
}


if __name__ == '__main__':
    parsed, errors = load_sources()
    out = os.path.join(ROOT, 'build', 'native', 'gen')
    g, info = generate(parsed, out, GAME_HOOKS)
    print('类', info['classes'], '名字', info['names'], '字面量', info['literals'])
    print('警告', list(info['warnings'].items())[:40])
