"""as2py 转出来的代码的运行时：AS3 的数值/数组/对象语义和一堆打桩。

用法：
    from as_runtime import make_namespace
    ns = make_namespace()
    exec(code, ns)
ns 是 dict 子类，找不到的全局名返回 Stub（界面库的类、flash.* 等）。
"""
import math
import struct
import sys
import time

NaN = float('nan')
INF = float('inf')
class _Undefined:
    def __bool__(self):
        return False

    def __float__(self):
        return NaN

    def __repr__(self):
        return 'undefined'

    def __sub__(self, other):
        return NaN

    __rsub__ = __sub__
    __mul__ = __sub__
    __rmul__ = __sub__


UNDEFINED = _Undefined()
_UNSET = UNDEFINED


class ASError(Exception):
    pass


class Brk(Exception):
    def __init__(self, label=None):
        self.label = label


class Cnt(Exception):
    def __init__(self, label=None):
        self.label = label


# ------------------------------------------------------------------ 基础转换
def T(x):
    t = type(x)
    if t is bool:
        return x
    if t is float:
        return not (x == 0 or x != x)
    if t is int:
        return x != 0
    if x is None or x is UNDEFINED:
        return False
    if x is True or x is False:
        return x
    if isinstance(x, (int, float)):
        return not (x == 0 or x != x)
    if isinstance(x, str):
        return x != ''
    if isinstance(x, StubValue):
        return False
    return True


def tonum(x):
    t = type(x)
    if t is float or t is int:
        return x
    if x is UNDEFINED:
        return NaN
    if isinstance(x, bool):
        return 1 if x else 0
    if isinstance(x, (int, float)):
        return x
    if x is None:
        return 0
    if isinstance(x, str):
        s = x.strip()
        if s == '':
            return 0
        try:
            return float(s) if ('.' in s or 'e' in s.lower()) else int(s, 0) if s.lower().startswith('0x') else int(s)
        except ValueError:
            try:
                return float(s)
            except ValueError:
                return NaN
    if isinstance(x, StubValue):
        return 0
    try:
        return float(x)
    except Exception:  # noqa: BLE001
        return NaN


def toint(x):
    if type(x) is int and -2147483648 <= x <= 2147483647:
        return x
    v = tonum(x)
    if isinstance(v, int):
        return ((v + 2 ** 31) % 2 ** 32) - 2 ** 31
    if v != v or v in (INF, -INF):
        return 0
    v = int(v)
    return ((v + 2 ** 31) % 2 ** 32) - 2 ** 31


def touint(x):
    if type(x) is int and 0 <= x <= 4294967295:
        return x
    v = tonum(x)
    if isinstance(v, float):
        if v != v or v in (INF, -INF):
            return 0
        v = int(v)
    return v % 2 ** 32


def tostr(x):
    if x is UNDEFINED:
        return 'undefined'
    if x is None:
        return 'null'
    if isinstance(x, bool):
        return 'true' if x else 'false'
    if isinstance(x, float):
        if x != x:
            return 'NaN'
        if x == INF:
            return 'Infinity'
        if x == -INF:
            return '-Infinity'
        if x == int(x) and abs(x) < 1e21:
            return str(int(x))
        return repr(x)
    if isinstance(x, (list, tuple)):
        return ','.join('' if v is None or v is UNDEFINED else tostr(v) for v in x)
    if isinstance(x, dict):
        return '[object Object]'
    return str(x)


tobool = T


def to_number(x):
    if type(x) is float:
        return x
    try:
        return float(tonum(x))
    except OverflowError:
        return -INF if x < 0 else INF


def slot_string(x):
    return None if x is None or x is UNDEFINED else tostr(x)


def strict_eq(a, b):
    ta, tb = type(a), type(b)
    if (ta is int or ta is float) and (tb is int or tb is float):
        return a == b
    if ta is str and tb is str:
        return a == b
    scalar = (bool, int, float, str, type(None), _Undefined)
    if not isinstance(a, scalar) or not isinstance(b, scalar):
        return a is b
    at = 'number' if type(a) in (int, float) else type(a)
    bt = 'number' if type(b) in (int, float) else type(b)
    return at == bt and a == b


def eq(a, b):
    ta, tb = type(a), type(b)
    if (ta is int or ta is float) and (tb is int or tb is float):
        return a == b
    if ta is str and tb is str:
        return a == b
    if a is UNDEFINED or b is UNDEFINED:
        return a is b or a is None or b is None
    if strict_eq(a, b):
        return True
    if a is None or b is None:
        return False
    if isinstance(a, str) and isinstance(b, str):
        return a == b
    if isinstance(a, (bool, int, float, str)) and isinstance(b, (bool, int, float, str)):
        return tonum(a) == tonum(b)
    if isinstance(a, (list, dict)) and isinstance(b, (bool, int, float, str)):
        return eq(tostr(a), b)
    if isinstance(b, (list, dict)) and isinstance(a, (bool, int, float, str)):
        return eq(a, tostr(b))
    return False


def slot_value(ty, value):
    f = _SLOT_CONVERT.get(ty)
    return value if f is None else f(value)


_SLOT_CONVERT = {'int': toint, 'uint': touint, 'Number': to_number, 'Boolean': tobool, 'String': slot_string}


def add(a, b):
    ta, tb = type(a), type(b)
    if (ta is int or ta is float) and (tb is int or tb is float):
        return a + b
    if isinstance(a, str) or isinstance(b, str):
        return tostr(a) + tostr(b)
    if isinstance(a, (int, float)) and isinstance(b, (int, float)):
        return a + b
    if isinstance(a, list) or isinstance(b, list):
        return tostr(a) + tostr(b)
    return tonum(a) + tonum(b)


def div(a, b):
    a, b = tonum(a), tonum(b)
    try:
        return a / b
    except ZeroDivisionError:
        if a != a or a == 0:
            return NaN
        neg = (a < 0) != (math.copysign(1, b) < 0)
        return -INF if neg else INF
    except OverflowError:
        return INF


def mod(a, b):
    a, b = tonum(a), tonum(b)
    try:
        return math.fmod(a, b)
    except (ValueError, ZeroDivisionError):
        return NaN


def cmp_lt(a, b):
    try:
        return a < b
    except TypeError:
        return tonum(a) < tonum(b)


def cmp_le(a, b):
    try:
        return a <= b
    except TypeError:
        return tonum(a) <= tonum(b)


def cmp_gt(a, b):
    try:
        return a > b
    except TypeError:
        return tonum(a) > tonum(b)


def cmp_ge(a, b):
    try:
        return a >= b
    except TypeError:
        return tonum(a) >= tonum(b)


def _i32(x):
    return toint(x)


def bitand(a, b):
    return toint(_i32(a) & _i32(b))


def bitor(a, b):
    return toint(_i32(a) | _i32(b))


def bitxor(a, b):
    return toint(_i32(a) ^ _i32(b))


def bitnot(a):
    return toint(~_i32(a))


def shl(a, b):
    return toint(_i32(a) << (toint(b) & 31))


def shr(a, b):
    return _i32(a) >> (toint(b) & 31)


def ushr(a, b):
    return (touint(a) >> (toint(b) & 31))


# ------------------------------------------------------------------ 容器
class Arr(list):
    def __bool__(self):
        return True

    def __init__(self, *args):
        if len(args) == 1 and isinstance(args[0], (list, tuple)):
            list.__init__(self, args[0])
        elif len(args) == 1 and isinstance(args[0], (int, float)) and not isinstance(args[0], bool):
            list.__init__(self, [UNDEFINED] * int(args[0]))
        else:
            list.__init__(self, args)

    @property
    def length(self):
        return len(self)

    @length.setter
    def length(self, n):
        n = int(n)
        if n < len(self):
            del self[n:]
        else:
            self.extend([UNDEFINED] * (n - len(self)))

    def __getitem__(self, i):
        if isinstance(i, slice):
            return Arr(list.__getitem__(self, i))
        if isinstance(i, float):
            if i != i:
                return UNDEFINED
            i = int(i)
        if isinstance(i, str):
            try:
                i = int(i)
            except ValueError:
                return UNDEFINED
        if i < 0 or i >= len(self):
            return UNDEFINED
        return list.__getitem__(self, i)

    def __setitem__(self, i, v):
        if isinstance(i, float):
            i = int(i)
        if isinstance(i, int):
            if i >= len(self):
                self.extend([UNDEFINED] * (i + 1 - len(self)))
            list.__setitem__(self, i, v)
        else:
            list.__setitem__(self, i, v)

    def push(self, *a):
        self.extend(a)
        return len(self)

    def pop(self, *a):
        return list.pop(self) if len(self) else None

    def shift(self):
        return list.pop(self, 0) if len(self) else None

    def unshift(self, *a):
        self[0:0] = a
        return len(self)

    def splice(self, start, count=None, *items):
        start = int(start)
        if start < 0:
            start = max(0, len(self) + start)
        if count is None:
            count = len(self) - start
        removed = Arr(list.__getitem__(self, slice(start, start + int(count))))
        self[start:start + int(count)] = list(items)
        return removed

    def slice(self, a=0, b=None):
        return Arr(list.__getitem__(self, slice(int(a), None if b is None else int(b))))

    def concat(self, *others):
        r = Arr(self)
        for o in others:
            if isinstance(o, list):
                r.extend(o)
            else:
                r.append(o)
        return r

    def indexOf(self, v, start=0):
        for i in range(int(start), len(self)):
            if list.__getitem__(self, i) == v:
                return i
        return -1

    def lastIndexOf(self, v):
        for i in range(len(self) - 1, -1, -1):
            if list.__getitem__(self, i) == v:
                return i
        return -1

    def join(self, sep=','):
        return sep.join(tostr(x) if x is not None and x is not UNDEFINED else '' for x in self)

    def reverse(self):
        list.reverse(self)
        return self

    def sort(self, fn=None, *a):
        import functools
        if callable(fn):
            list.sort(self, key=functools.cmp_to_key(lambda x, y: tonum(fn(x, y))))
        else:
            list.sort(self, key=lambda x: tostr(x))
        return self

    def sortOn(self, key, opts=0):
        # AS3 Array.sortOn：键可以是字段名数组，选项可以逐字段给（1 不分大小写、2 降序、16 按数值）
        import functools
        keys = list(key) if isinstance(key, list) else [key]
        if isinstance(opts, list):
            flags = [toint(o) for o in opts] + [0] * len(keys)
        else:
            flags = [toint(opts)] * len(keys)

        def field(o, k, f):
            v = idx_get(o, k)
            if f & 16:
                return tonum(v)
            v = tostr(v)
            return v.lower() if f & 1 else v

        def cmp(a, b):
            for i, k in enumerate(keys):
                f = flags[i]
                x, y = field(a, k, f), field(b, k, f)
                c = (x > y) - (x < y)
                if f & 2:
                    c = -c
                if c:
                    return c
            return 0
        list.sort(self, key=functools.cmp_to_key(cmp))
        return self

    def forEach(self, fn, *a):
        for i, x in enumerate(list(self)):
            fn(x, i, self)

    def map(self, fn, *a):
        return Arr([fn(x, i, self) for i, x in enumerate(self)])

    def filter(self, fn, *a):
        return Arr([x for i, x in enumerate(self) if T(fn(x, i, self))])

    def some(self, fn, *a):
        return any(T(fn(x, i, self)) for i, x in enumerate(self))

    def every(self, fn, *a):
        return all(T(fn(x, i, self)) for i, x in enumerate(self))

    def toString(self):
        return self.join(',')


class TypedVector(Arr):
    def __init__(self, length=0, fixed=False, element_type='Number'):
        self.element_type = element_type
        self.fixed = fixed
        self.default = 0 if element_type in ('Number', 'int', 'uint') else False if element_type == 'Boolean' else None
        list.__init__(self, [self.default] * int(length))

    def __setitem__(self, key, value):
        if not isinstance(key, slice):
            value = slot_value(self.element_type, value)
        super().__setitem__(key, value)

    def push(self, *items):
        self.extend(slot_value(self.element_type, x) for x in items)
        return len(self)

    @Arr.length.setter
    def length(self, size):
        size = int(size)
        if size < len(self):
            del self[size:]
        else:
            self.extend([self.default] * (size - len(self)))


def Vec(*args, element_type='Number'):
    return TypedVector(*args, element_type=element_type)


class Obj(dict):
    def __bool__(self):
        return True

    def __getattr__(self, k):
        if k.startswith('__'):
            raise AttributeError(k)
        return self.get(k, UNDEFINED)

    def __setattr__(self, k, v):
        self[k] = v

    def hasOwnProperty(self, k):
        return k in self

    @property
    def length(self):
        return len(self)


class Dictionary(Obj):
    def __init__(self, *a):
        dict.__init__(self)
        if a and isinstance(a[0], dict):
            self.update(a[0])


def each(c):
    if c is None:
        return []
    if isinstance(c, dict):
        return list(c.values())
    if isinstance(c, (list, tuple)):
        return list(c)
    if isinstance(c, StubValue):
        return []
    try:
        return list(c)
    except TypeError:
        return []


def keys(c):
    if c is None:
        return []
    if isinstance(c, dict):
        return list(c.keys())
    if isinstance(c, list):
        return list(range(len(c)))
    return []


def idx_get(o, k):
    t = type(o)
    if (t is TypedVector or t is Arr) and type(k) is int:
        # 同 Arr.__getitem__ 的整数分支
        return list.__getitem__(o, k) if 0 <= k < len(o) else UNDEFINED
    if isinstance(o, list):
        return o[k] if not isinstance(o, Arr) else o[k]
    if isinstance(o, dict):
        if isinstance(k, float) and k == int(k):
            k = int(k)
        return o.get(k, UNDEFINED)
    if o is None:
        raise ASError('null[%r]' % (k,))
    if isinstance(o, str):
        try:
            return o[int(k)]
        except (ValueError, IndexError):
            return None
    try:
        return o[k]
    except Exception:  # noqa: BLE001
        return getattr(o, k, None) if isinstance(k, str) else None


def idx_set(o, k, v):
    if isinstance(o, list):
        if not isinstance(o, Arr):
            o[int(k)] = v
        else:
            o[k] = v
    elif isinstance(o, dict):
        if isinstance(k, float) and k == int(k):
            k = int(k)
        o[k] = v
    elif o is None:
        raise ASError('null[%r]=' % (k,))
    else:
        try:
            o[k] = v
        except Exception:  # noqa: BLE001
            try:
                setattr(o, k, v)
            except AttributeError:
                pass  # 只读静态属性：AS3 里会抛错，这里忽略
    return v


def setattr_(o, n, v):
    setattr(o, n, v)
    return v


def incdec_attr(o, n, d, pre):
    old = tonum(getattr(o, n))
    setattr(o, n, old + d)
    return old + d if pre else old


def incdec_idx(o, k, d, pre):
    old = tonum(idx_get(o, k))
    idx_set(o, k, old + d)
    return old + d if pre else old


def delete_(o, k):
    if isinstance(o, dict):
        o.pop(k, None)
    elif isinstance(o, list):
        if isinstance(k, (int, float)) and 0 <= int(k) < len(o):
            list.__setitem__(o, int(k), None)
    return True


def in_(k, o):
    if isinstance(o, dict):
        return k in o
    if isinstance(o, list):
        return isinstance(k, (int, float)) and 0 <= k < len(o)
    return hasattr(o, k)


# ------------------------------------------------------------------ 字符串/数字方法、length
_STR_METHODS = {'toString', 'toFixed', 'toPrecision', 'toExponential', 'substring', 'substr', 'slice', 'indexOf',
                'lastIndexOf', 'charAt', 'charCodeAt', 'toUpperCase', 'toLowerCase', 'split', 'replace', 'concat',
                'match', 'search', 'localeCompare', 'valueOf', 'toLocaleString', 'toLocaleUpperCase',
                'toLocaleLowerCase'}


def _fmt_num_str(x, radix=10):
    if radix == 10:
        return tostr(x)
    n = int(x)
    digs = '0123456789abcdefghijklmnopqrstuvwxyz'
    if n == 0:
        return '0'
    s, neg = '', n < 0
    n = abs(n)
    while n:
        s = digs[n % radix] + s
        n //= radix
    return ('-' if neg else '') + s


def mcall(o, name, *a):
    if isinstance(o, bool) or isinstance(o, (int, float)):
        if name == 'toString' or name == 'toLocaleString':
            return _fmt_num_str(o, int(a[0]) if a else 10)
        if name == 'toFixed':
            d = int(a[0]) if a else 0
            if o != o:
                return 'NaN'
            if o in (INF, -INF):
                return 'Infinity' if o > 0 else '-Infinity'
            return '%.*f' % (d, o)
        if name == 'toPrecision':
            return '%.*g' % (int(a[0]), o) if a else tostr(o)
        if name == 'toExponential':
            return '%.*e' % (int(a[0]) if a else 6, o)
        if name == 'valueOf':
            return o
    if isinstance(o, str):
        if name in ('toString', 'valueOf'):
            return o
        if name == 'substring':
            s = max(0, int(a[0])) if a else 0
            e = len(o) if len(a) < 2 or a[1] is None else max(0, int(a[1]))
            if s > e:
                s, e = e, s
            return o[s:e]
        if name == 'substr':
            s = int(a[0])
            if s < 0:
                s = max(0, len(o) + s)
            n = len(o) - s if len(a) < 2 or a[1] is None else int(a[1])
            return o[s:s + n]
        if name == 'slice':
            s = int(a[0]) if a else 0
            e = None if len(a) < 2 or a[1] is None else int(a[1])
            return o[s:e]
        if name == 'indexOf':
            return o.find(tostr(a[0]), int(a[1]) if len(a) > 1 else 0)
        if name == 'lastIndexOf':
            return o.rfind(tostr(a[0]))
        if name == 'charAt':
            i = int(a[0]) if a else 0
            return o[i] if 0 <= i < len(o) else ''
        if name == 'charCodeAt':
            i = int(a[0]) if a else 0
            return ord(o[i]) if 0 <= i < len(o) else NaN
        if name in ('toUpperCase', 'toLocaleUpperCase'):
            return o.upper()
        if name in ('toLowerCase', 'toLocaleLowerCase'):
            return o.lower()
        if name == 'split':
            if not a or a[0] is None:
                return Arr([o])
            sep = a[0]
            if isinstance(sep, RegExp_):
                r = sep.re.split(o)
            else:
                r = o.split(sep) if sep != '' else list(o)
            if len(a) > 1 and a[1] is not None:
                r = r[:int(a[1])]
            return Arr(r)
        if name == 'replace':
            if isinstance(a[0], RegExp_):
                rx = a[0]
                rep = a[1]
                if callable(rep):
                    return rx.re.sub(lambda m: tostr(rep(m.group(0))), o, 0 if rx.g else 1)
                return rx.re.sub(lambda m: tostr(rep), o, 0 if rx.g else 1)
            return o.replace(tostr(a[0]), tostr(a[1]), 1)
        if name == 'concat':
            return o + ''.join(tostr(x) for x in a)
        if name == 'localeCompare':
            return (o > a[0]) - (o < a[0])
        if name in ('match', 'search'):
            if isinstance(a[0], RegExp_):
                rx = a[0]
                if name == 'search':
                    m = rx.re.search(o)
                    return m.start() if m else -1
                if rx.g:
                    r = rx.re.findall(o)
                    return Arr([x if isinstance(x, str) else x[0] for x in r]) if r else None
                return rx.exec(o)
            i = o.find(tostr(a[0]))
            return i if name == 'search' else (Arr([a[0]]) if i >= 0 else None)
    f = getattr(o, name)
    return f(*a)


def alen(o):
    if isinstance(o, (str, list, dict, tuple)):
        return len(o)
    if o is None:
        raise ASError('null.length')
    return o.length


class RegExp_:
    def __init__(self, pattern, flags=''):
        import re
        self.pattern, self.flags = pattern, flags
        f = 0
        if 'i' in flags:
            f |= re.I
        if 's' in flags:
            f |= re.S
        if 'm' in flags:
            f |= re.M
        self.g = 'g' in flags
        self.re = re.compile(pattern, f)
        self.lastIndex = 0

    def test(self, s):
        return self.re.search(tostr(s)) is not None

    def exec(self, s):
        m = self.re.search(tostr(s))
        if not m:
            return None
        return Arr([m.group(0)] + [g for g in m.groups()])


# ------------------------------------------------------------------ 类型检查
class _TMeta(type):
    def __instancecheck__(cls, x):
        return cls._chk(x)


class Number_(metaclass=_TMeta):
    @staticmethod
    def _chk(x):
        return isinstance(x, (int, float)) and not isinstance(x, bool)

    MAX_VALUE = 1.7976931348623157e308
    MIN_VALUE = 5e-324
    NaN = NaN
    POSITIVE_INFINITY = INF
    NEGATIVE_INFINITY = -INF


class int_(metaclass=_TMeta):
    @staticmethod
    def _chk(x):
        return isinstance(x, int) and not isinstance(x, bool)

    MAX_VALUE = 2147483647
    MIN_VALUE = -2147483648


class uint_(int_):
    MAX_VALUE = 4294967295
    MIN_VALUE = 0


class String_(metaclass=_TMeta):
    @staticmethod
    def _chk(x):
        return isinstance(x, str)

    @staticmethod
    def fromCharCode(*a):
        return ''.join(chr(int(c)) for c in a)


class Boolean_(metaclass=_TMeta):
    @staticmethod
    def _chk(x):
        return isinstance(x, bool)


def is_(x, t):
    try:
        return isinstance(x, t)
    except TypeError:
        return False


def as_(x, t):
    try:
        return x if isinstance(x, t) else None
    except TypeError:
        return x


def typeof(x):
    if x is UNDEFINED:
        return 'undefined'
    if x is None:
        return 'object'
    if isinstance(x, bool):
        return 'boolean'
    if isinstance(x, (int, float)):
        return 'number'
    if isinstance(x, str):
        return 'string'
    if callable(x):
        return 'function'
    return 'object'


# ------------------------------------------------------------------ 类基础
class StaticProp:
    """元类上的静态属性：AS3 的静态 getter 不被子类继承，子类可以声明同名的普通静态变量（存在类的 _sv 字典里）。"""

    def __init__(self, name, fget=None, fset=None):
        self.name, self.fget, self.fset = name, fget, fset
        self._owner = {}

    def _store(self, cls):
        try:
            return self._owner[cls]
        except KeyError:
            store = None
            for c in cls.__mro__:
                sv = c.__dict__.get('_sv')
                if sv is not None and self.name in sv:
                    store = sv
                    break
            self._owner[cls] = store
            return store

    def __get__(self, cls, meta=None):
        try:
            sv = self._owner[cls]
        except KeyError:
            if cls is None:
                return self
            sv = self._store(cls)
        if sv is not None:
            return sv[self.name]
        if self.fget is None:
            return None
        return self.fget(cls)

    def __set__(self, cls, v):
        sv = self._store(cls)
        if sv is not None:
            sv[self.name] = v
            return
        if self.fset is not None:
            self.fset(cls, v)


def _class_cache(cls):
    # 每个类自己的查找缓存（随这份游戏副本一起释放）；存的是类定义里固定的表项。
    cache = cls.__dict__.get('_lookup_cache')
    if cache is None:
        cache = {}
        type.__setattr__(cls, '_lookup_cache', cache)
    return cache


def _type_of(cls, name, table):
    cache = _class_cache(cls)
    key = (table, name)
    try:
        return cache[key]
    except KeyError:
        ty = None
        for base in cls.__mro__:
            ty = base.__dict__.get(table, {}).get(name)
            if ty is not None:
                break
        cache[key] = ty
        return ty


class AsMeta(type):
    def __setattr__(cls, name, value):
        ty = _type_of(cls, name, '_stypes')
        if ty is not None:
            value = slot_value(ty, value)
        super().__setattr__(name, value)

    def hasOwnProperty(cls, n):
        return any(n in c.__dict__ for c in cls.__mro__)


def _idef_lookup(obj, n):
    cls = type(obj)
    cache = _class_cache(cls)
    key = ('_idef', n)
    try:
        d = cache[key]
    except KeyError:
        d = None
        for c in cls.__mro__:
            table = c.__dict__.get('_idef')
            if table is not None and n in table:
                d = table
                break
        cache[key] = d
    if d is None:
        return False, None
    return True, d[n]


class AsObject(metaclass=AsMeta):
    def __init__(self, *a, **k):
        pass

    def __setattr__(self, name, value):
        ty = _type_of(type(self), name, '_itypes')
        if ty is not None:
            value = slot_value(ty, value)
        object.__setattr__(self, name, value)

    def __getattr__(self, n):
        # 未赋值的实例字段取类里声明的默认值；常见情况直接查本类缓存
        cache = type(self).__dict__.get('_lookup_cache')
        if cache is not None:
            d = cache.get(('_idef', n))
            if d is not None:
                return d[n]
        if n.startswith('__'):
            raise AttributeError(n)
        ok, v = _idef_lookup(self, n)
        if ok:
            return v
        raise AttributeError("%s has no attribute %r" % (type(self).__name__, n))

    @property
    def constructor(self):
        return type(self)

    class _HOP:
        def __get__(self, obj, typ):
            if obj is None:
                return lambda n: any(n in c.__dict__ for c in typ.__mro__)
            return lambda n: n in obj.__dict__ or hasattr(type(obj), n)

    hasOwnProperty = _HOP()


def as_object(x=None, *a):
    return Obj() if x is None else x


class StubValue:
    """界面库等未转写的东西：随便调用、随便取属性，都得到自己；当作假值。"""

    def __call__(self, *a, **k):
        return self

    def __getattr__(self, n):
        if n.startswith('__'):
            raise AttributeError(n)
        return self

    def __bool__(self):
        return False

    def __iter__(self):
        return iter(())

    def __len__(self):
        return 0

    def __float__(self):
        return 0.0

    def __int__(self):
        return 0

    def __add__(self, o):
        return o

    __radd__ = __add__

    def __mul__(self, o):
        return 0

    __rmul__ = __mul__

    def __sub__(self, o):
        return -o if isinstance(o, (int, float)) else 0

    def __rsub__(self, o):
        return o

    def __truediv__(self, o):
        return 0

    def __lt__(self, o):
        return False

    __le__ = __gt__ = __ge__ = __lt__

    def __getitem__(self, k):
        return self

    def __setitem__(self, k, v):
        pass

    def __repr__(self):
        return '<Stub>'


STUB = StubValue()


class StubMeta(AsMeta):
    def __getattr__(cls, n):
        if n.startswith('__'):
            raise AttributeError(n)
        return STUB


class Stub(AsObject, metaclass=StubMeta):
    def __init__(self, *a, **k):
        pass

    def __getattr__(self, n):
        if n.startswith('__'):
            raise AttributeError(n)
        ok, v = _idef_lookup(self, n)
        if ok:
            return v
        return STUB


def _super_get(base, obj, name):
    for k in type(obj).__mro__:
        pass
    # 找 base 上的属性/属性描述符
    attr = None
    for c in base.__mro__:
        if name in c.__dict__:
            attr = c.__dict__[name]
            break
    if isinstance(attr, property):
        return attr.fget(obj)
    if attr is not None:
        return attr.__get__(obj, type(obj)) if hasattr(attr, '__get__') else attr
    return getattr(obj, name, None)


# ------------------------------------------------------------------ 内建对象
class _Math:
    PI = math.pi
    E = math.e
    SQRT2 = math.sqrt(2)
    LN2 = math.log(2)

    @staticmethod
    def floor(x):
        x = tonum(x)
        if isinstance(x, int):
            return x
        if x != x or x in (INF, -INF):
            return x
        return math.floor(x)

    @staticmethod
    def ceil(x):
        x = tonum(x)
        if isinstance(x, int):
            return x
        if x != x or x in (INF, -INF):
            return x
        return math.ceil(x)

    @staticmethod
    def round(x):
        x = tonum(x)
        if isinstance(x, int):
            return x
        if x != x or x in (INF, -INF):
            return x
        return math.floor(x + 0.5)

    @staticmethod
    def abs(x):
        return abs(tonum(x))

    @staticmethod
    def pow(a, b):
        a, b = tonum(a), tonum(b)
        try:
            r = math.pow(a, b)
            return r
        except OverflowError:
            return INF if a > 0 or (b % 2 == 0) else -INF
        except (ValueError, ZeroDivisionError):
            if a == 0 and b < 0:
                return INF
            return NaN

    @staticmethod
    def sqrt(x):
        x = tonum(x)
        return math.sqrt(x) if x >= 0 else NaN

    @staticmethod
    def log(x):
        x = tonum(x)
        if x != x or x < 0:
            return NaN
        if x == 0:
            return -INF
        if x == INF:
            return INF
        return math.log(x)

    @staticmethod
    def exp(x):
        try:
            return math.exp(tonum(x))
        except OverflowError:
            return INF

    @staticmethod
    def max(*a):
        a = [tonum(x) for x in a]
        if any(x != x for x in a):
            return NaN
        return max(a) if a else -INF

    @staticmethod
    def min(*a):
        a = [tonum(x) for x in a]
        if any(x != x for x in a):
            return NaN
        return min(a) if a else INF

    @staticmethod
    def random():
        import random
        return random.random()

    @staticmethod
    def sin(x):
        return math.sin(tonum(x))

    @staticmethod
    def cos(x):
        return math.cos(tonum(x))

    @staticmethod
    def tan(x):
        return math.tan(tonum(x))

    @staticmethod
    def atan(x):
        return math.atan(tonum(x))

    @staticmethod
    def atan2(y, x):
        return math.atan2(tonum(y), tonum(x))

    @staticmethod
    def asin(x):
        try:
            return math.asin(tonum(x))
        except ValueError:
            return NaN

    @staticmethod
    def acos(x):
        try:
            return math.acos(tonum(x))
        except ValueError:
            return NaN


def isNaN(x):
    x = tonum(x)
    return x != x


def isFinite(x):
    x = tonum(x)
    return x == x and x not in (INF, -INF)


def parseInt(s, base=10):
    try:
        return int(str(s).strip(), int(base) if base else 10)
    except ValueError:
        import re
        m = re.match(r'\s*-?\d+', str(s))
        return int(m.group(0)) if m else NaN


def parseFloat(s):
    import re
    m = re.match(r'\s*[-+]?(\d+\.?\d*|\.\d+)([eE][-+]?\d+)?', str(s))
    return float(m.group(0)) if m else NaN


def getTimer():
    return int((time.time() - _T0) * 1000)


_T0 = time.time()


def trace(*a):
    pass


def _(s, *a):
    """翻译函数：原样返回，%0 %1 …按位置替换"""
    s = tostr(s)
    for i, v in enumerate(a):
        s = s.replace('%' + str(i), tostr(v))
    return s


def _n(s1, s2, n, *a):
    return _(s1 if tonum(n) == 1 else s2, *a)


class ByteArray:
    """只读够用：读存档字节"""

    def __init__(self, data=b''):
        self.data = bytearray(data)
        self.position = 0
        self.endian = 'bigEndian'

    @property
    def length(self):
        return len(self.data)

    @length.setter
    def length(self, n):
        n = int(n)
        if n < len(self.data):
            del self.data[n:]
        else:
            self.data.extend(b'\0' * (n - len(self.data)))

    @property
    def bytesAvailable(self):
        return len(self.data) - self.position

    def _r(self, fmt, size):
        v = struct.unpack_from('>' + fmt, self.data, self.position)[0]
        self.position += size
        return v

    def readByte(self):
        return self._r('b', 1)

    def readUnsignedByte(self):
        return self._r('B', 1)

    def readBoolean(self):
        return self._r('B', 1) != 0

    def readShort(self):
        return self._r('h', 2)

    def readUnsignedShort(self):
        return self._r('H', 2)

    def readInt(self):
        return self._r('i', 4)

    def readUnsignedInt(self):
        return self._r('I', 4)

    def readDouble(self):
        return self._r('d', 8)

    def readFloat(self):
        return self._r('f', 4)

    def _w(self, fmt, v, size):
        if self.position + size > len(self.data):
            self.data.extend(b'\0' * (self.position + size - len(self.data)))
        struct.pack_into('>' + fmt, self.data, self.position, v)
        self.position += size

    def writeByte(self, v):
        self._w('B', toint(v) & 0xff, 1)

    def writeBoolean(self, v):
        self._w('B', 1 if T(v) else 0, 1)

    def writeShort(self, v):
        self._w('h', ((toint(v) + 32768) % 65536) - 32768, 2)

    def writeInt(self, v):
        self._w('i', toint(v), 4)

    def writeUnsignedInt(self, v):
        self._w('I', touint(v), 4)

    def writeDouble(self, v):
        self._w('d', float(tonum(v)), 8)

    def writeUTFBytes(self, s):
        b = tostr(s).encode('utf-8')
        if self.position + len(b) > len(self.data):
            self.data.extend(b'\x00' * (self.position + len(b) - len(self.data)))
        self.data[self.position:self.position + len(b)] = b
        self.position += len(b)

    def writeUTF(self, s):
        b = tostr(s).encode('utf-8')
        self.writeShort(len(b))
        self.writeUTFBytes(s)

    def writeBytes(self, src, offset=0, length=0):
        offset = int(offset)
        b = bytes(src.data[offset:offset + int(length)] if length else src.data[offset:])
        if self.position + len(b) > len(self.data):
            self.data.extend(b'\x00' * (self.position + len(b) - len(self.data)))
        self.data[self.position:self.position + len(b)] = b
        self.position += len(b)

    def readBytes(self, dst, offset=0, length=0):
        n = int(length) if length else len(self.data) - self.position
        b = bytes(self.data[self.position:self.position + n])
        self.position += n
        offset = int(offset)
        dst.data[offset:offset + n] = b

    def clear(self):
        self.data = bytearray()
        self.position = 0

    def compress(self, *a):
        import zlib
        self.data = bytearray(zlib.compress(bytes(self.data)))
        self.position = 0

    def readUTFBytes(self, n):
        s = bytes(self.data[self.position:self.position + int(n)]).decode('utf-8', 'replace')
        self.position += int(n)
        return s

    def readUTF(self):
        n = self.readUnsignedShort()
        return self.readUTFBytes(n)

    def uncompress(self, *a):
        import zlib
        self.data = bytearray(zlib.decompress(bytes(self.data)))
        self.position = 0

    def __getitem__(self, i):
        return self.data[int(i)]

    def __setitem__(self, i, v):
        self.data[int(i)] = int(v) & 0xff


class Date:
    def __init__(self, *a):
        if len(a) <= 1:
            self._t = time.time() if not a else float(a[0]) / 1000
        else:
            defaults = [0, 0, 1, 0, 0, 0, 0]
            y, m, d, hh, mm, ss, ms = (list(a) + defaults[len(a):])[0:7]
            y = int(y) + 1900 if 0 <= int(y) <= 99 else int(y)
            self._t = time.mktime((y, int(m) + 1, int(d), int(hh), int(mm), int(ss), 0, 0, -1)) + ms / 1000

    @property
    def time(self):
        return self.getTime()

    @time.setter
    def time(self, value):
        self._t = tonum(value) / 1000

    def getTime(self):
        return self._t * 1000

    def getFullYear(self):
        return time.localtime(self._t).tm_year

    def getMonth(self):
        return time.localtime(self._t).tm_mon - 1

    def getDate(self):
        return time.localtime(self._t).tm_mday

    def getDay(self):
        return (time.localtime(self._t).tm_wday + 1) % 7

    def getHours(self):
        return time.localtime(self._t).tm_hour

    def getUTCFullYear(self):
        return time.gmtime(self._t).tm_year

    def getUTCMonth(self):
        return time.gmtime(self._t).tm_mon - 1

    def getUTCDate(self):
        return time.gmtime(self._t).tm_mday

    def getUTCHours(self):
        return time.gmtime(self._t).tm_hour

    def getUTCDay(self):
        return (time.gmtime(self._t).tm_wday + 1) % 7

    fullYear = property(getFullYear)
    month = property(getMonth)
    date = property(getDate)
    day = property(getDay)
    hours = property(getHours)
    fullYearUTC = property(getUTCFullYear)
    monthUTC = property(getUTCMonth)
    dateUTC = property(getUTCDate)
    dayUTC = property(getUTCDay)
    hoursUTC = property(getUTCHours)

    @staticmethod
    def UTC(*a):
        import datetime as dt
        y, m = int(a[0]), int(a[1])
        y = y + 1900 if 0 <= y <= 99 else y
        y, m = y + m // 12, m % 12 + 1
        base = dt.datetime(y, m, 1, tzinfo=dt.timezone.utc)
        values = list(a[2:])
        values += [1, 0, 0, 0, 0][len(values):]
        d, hh, mm, ss, ms = values[:5]
        value = base + dt.timedelta(days=d - 1, hours=hh, minutes=mm, seconds=ss, milliseconds=ms)
        return value.timestamp() * 1000


class _NS(dict):
    def __missing__(self, k):
        import builtins
        if k.startswith('__') or hasattr(builtins, k):
            if hasattr(builtins, k):
                return getattr(builtins, k)
            raise KeyError(k)
        return Stub


def make_namespace(extra=None):
    ns = _NS()
    import builtins
    ns['__builtins__'] = builtins
    g = globals()
    for k in ('NaN', 'INF', '_UNSET', 'UNDEFINED', 'ASError', 'Brk', 'Cnt', 'T', 'tonum', 'to_number', 'slot_string', 'eq', 'strict_eq', 'toint', 'touint', 'tostr', 'tobool', 'add',
              'div', 'mod', 'cmp_lt', 'cmp_le', 'cmp_gt', 'cmp_ge', 'bitand', 'bitor', 'bitxor', 'bitnot', 'shl',
              'shr', 'ushr', 'Arr', 'Vec', 'TypedVector', 'Obj', 'Dictionary', 'each', 'keys', 'idx_get', 'idx_set', 'setattr_',
              'incdec_attr', 'incdec_idx', 'delete_', 'in_', 'Number_', 'int_', 'uint_', 'String_', 'Boolean_',
              'is_', 'as_', 'typeof', 'mcall', 'alen', 'RegExp_', 'AsMeta', 'AsObject', 'StaticProp', 'as_object', 'Stub', '_super_get', 'isNaN', 'isFinite', 'parseInt',
              'parseFloat', 'getTimer', 'trace', '_', '_n', 'ByteArray', 'Date'):
        ns[k] = g[k]
    ns['A__'] = _
    ns['A__n'] = _n
    ns['Math'] = _Math
    ns['A_Math'] = _Math
    ns['Number'] = Number_
    ns['String'] = String_
    ns['Boolean'] = Boolean_
    ns['A_int'] = int_
    ns['Array'] = Arr
    ns['Object'] = Obj
    ns['Vector'] = Vec
    ns['Error'] = ASError
    ns['Infinity'] = INF
    ns['A_isNaN'] = isNaN
    ns['A_isFinite'] = isFinite
    ns['A_trace'] = trace
    ns['A_getTimer'] = getTimer
    if extra:
        ns.update(extra)
    return ns
