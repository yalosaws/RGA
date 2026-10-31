"""直接执行 ffdec 的 AVM2 指令，独立核对 AS3→Python 的控制流和表达式。

只解释当前被核对的方法，子调用使用已载入对象的方法；这不是完整 Flash VM。
遇到未实现的指令或外部桩立即报告，不把缺项当作通过。
"""
import ast
import inspect
import math
import re
import random

import as_runtime as R
from as2py import mangle, mangle_attr
from pcode_sym import qn
from simulation_state import StateSnapshot


class Unsupported(Exception):
    pass


class Undefined:
    def __bool__(self):
        return False


UNDEFINED = Undefined()
GLOBAL = object()


def number(x):
    if x is UNDEFINED:
        return math.nan
    if x is None:
        return 0.0
    if isinstance(x, str) and not x.strip():
        return 0.0
    try:
        return float(x)
    except (TypeError, ValueError):
        return math.nan


def truth(x):
    if x is UNDEFINED or x is None:
        return False
    if isinstance(x, (bool, int, float, str)):
        return bool(x) and not (isinstance(x, float) and math.isnan(x))
    return True


def integer(x, unsigned=False):
    x = number(x)
    n = 0 if not math.isfinite(x) else math.trunc(x) % 2**32
    return n if unsigned or n < 2**31 else n - 2**32


def equal(a, b, strict=False):
    if a is UNDEFINED or b is UNDEFINED:
        return a is b or (not strict and (a is None or b is None))
    scalar = (bool, int, float, str, type(None))
    if not isinstance(a, scalar) or not isinstance(b, scalar):
        return a is b
    if strict:
        at = 'number' if type(a) in (int, float) else type(a)
        bt = 'number' if type(b) in (int, float) else type(b)
        return at == bt and a == b
    if type(a) is type(b) or type(a) in (int, float) and type(b) in (int, float):
        return a == b
    if a is None or b is None:
        return False
    return number(a) == number(b)


def multiname(arg):
    if arg.startswith('MultinameL('):
        return None
    if arg.startswith(('Multiname(', 'RTQName(')):
        match = re.match(r'\w+\("((?:[^"\\]|\\.)*)"', arg)
        if not match:
            raise Unsupported('multiname ' + arg)
        return ast.literal_eval('"' + match[1] + '"')
    return qn(arg)


class Interpreter:
    def __init__(self, ns):
        self.ns = ns
        self.alias = {'Math': R._Math, 'int': integer, 'uint': lambda x: integer(x, True),
                      'Number': number, 'Boolean': truth, 'String': R.tostr,
                      'Object': R.Obj, 'Array': R.Arr, 'Vector': R.Vec,
                      'isNaN': lambda x: math.isnan(number(x)), 'isFinite': lambda x: math.isfinite(number(x)),
                      'parseInt': R.parseInt, 'parseFloat': R.parseFloat, '_': R._}

    def global_get(self, name):
        if name in self.alias:
            return self.alias[name]
        for key in (name, mangle('§' + name + '§'), mangle(name)):
            if key in self.ns:
                return self.ns[key]
        raise Unsupported('缺失全局 ' + name)

    @staticmethod
    def attribute(obj, name):
        # 不走 getattr 的 Stub 回退。普通名称和混淆名称由实际声明确定。
        if isinstance(obj, R.StubValue) or obj is R.Stub:
            raise Unsupported('调用外部桩 ' + name)
        for attr in (mangle_attr(name), mangle('§' + name + '§')):
            try:
                inspect.getattr_static(obj, attr)
                return attr
            except AttributeError:
                pass
            cls = obj if isinstance(obj, type) else type(obj)
            for base in cls.__mro__:
                if attr in base.__dict__.get('_sv', {}) or attr in base.__dict__.get('_idef', {}):
                    return attr
        raise Unsupported('缺失成员 %s.%s' % (getattr(obj, '__name__', type(obj).__name__), name))

    def get(self, obj, name):
        if obj is GLOBAL:
            return self.global_get(name)
        if isinstance(obj, (list, dict, tuple, str)):
            if name == 'length':
                return len(obj)
            if isinstance(obj, dict):
                if name in obj:
                    return obj[name]
                try:
                    inspect.getattr_static(type(obj), name)
                    return getattr(obj, name)
                except AttributeError:
                    return UNDEFINED
            try:
                index = int(name)
                return obj[index] if 0 <= index < len(obj) else UNDEFINED
            except (ValueError, TypeError):
                return getattr(obj, name)
        if obj is None or obj is UNDEFINED:
            raise Unsupported('读取 null/undefined.' + str(name))
        return getattr(obj, self.attribute(obj, name))

    def put(self, obj, name, value):
        if isinstance(obj, list):
            obj[int(name)] = value
        elif isinstance(obj, dict):
            obj[name] = value
        else:
            setattr(obj, self.attribute(obj, name), value)

    def call(self, obj, name, args):
        if isinstance(obj, (str, int, float, bool)) and name in R._STR_METHODS:
            return R.mcall(obj, name, *args)
        fn = self.get(obj, name)
        if isinstance(fn, R.StubValue):
            raise Unsupported('调用外部桩 ' + name)
        return fn(*args)

    def run(self, method, owner, args=(), maxsteps=500000, declaring_class=None):
        code = method['code']
        labels = {label: i for i, (label, _, _) in enumerate(code) if label}
        locals_ = {0: owner, **{i + 1: v for i, v in enumerate(args)}}
        stack, pc, steps = [], 0, 0
        while pc < len(code):
            steps += 1
            if steps > maxsteps:
                raise Unsupported('执行步数超限')
            _, op, arg = code[pc]
            pc += 1
            if op in ('label', 'nop', 'debugline', 'debugfile', 'debug', 'coerce_a', 'coerce', 'popscope'):
                continue
            if op == 'pushscope':
                stack.pop()
            elif op.startswith('getlocal'):
                index = int(arg) if op == 'getlocal' else int(op[8:])
                stack.append(locals_.get(index, UNDEFINED))
            elif op.startswith('setlocal'):
                index = int(arg) if op == 'setlocal' else int(op[8:])
                locals_[index] = stack.pop()
            elif op == 'kill':
                locals_[int(arg)] = UNDEFINED
            elif op in ('pushbyte', 'pushshort', 'pushint', 'pushuint'):
                stack.append(int(arg))
            elif op == 'pushdouble':
                stack.append(float(arg))
            elif op == 'pushstring':
                stack.append(ast.literal_eval(arg))
            elif op in ('pushnull', 'pushundefined', 'pushtrue', 'pushfalse', 'pushnan'):
                stack.append({'pushnull': None, 'pushundefined': UNDEFINED, 'pushtrue': True,
                              'pushfalse': False, 'pushnan': math.nan}[op])
            elif op == 'dup':
                stack.append(stack[-1])
            elif op == 'pop':
                stack.pop()
            elif op == 'swap':
                stack[-1], stack[-2] = stack[-2], stack[-1]
            elif op == 'getlex':
                name = multiname(arg)
                try:
                    value = self.get(owner, name)
                except Unsupported:
                    value = self.global_get(name)
                stack.append(value)
            elif op in ('findpropstrict', 'findproperty'):
                try:
                    self.attribute(owner, multiname(arg))
                    stack.append(owner)
                except Unsupported:
                    stack.append(GLOBAL)
            elif op == 'getglobalscope':
                stack.append(GLOBAL)
            elif op == 'getproperty':
                name = multiname(arg)
                if name is None:
                    name = stack.pop()
                stack.append(self.get(stack.pop(), name))
            elif op in ('getsuper', 'callsuper', 'callsupervoid'):
                prop, count = arg.rsplit(',', 1) if op != 'getsuper' else (arg, 0)
                params = [stack.pop() for _ in range(int(count))][::-1]
                obj = stack.pop()
                base = declaring_class.__mro__[1]
                name = multiname(prop)
                attr = self.attribute(base, name)
                member = R._super_get(base, obj, attr)
                result = member(*params) if op != 'getsuper' else member
                if op != 'callsupervoid':
                    stack.append(result)
            elif op in ('setproperty', 'initproperty'):
                value = stack.pop()
                name = multiname(arg)
                if name is None:
                    name = stack.pop()
                self.put(stack.pop(), name, value)
            elif op in ('callproperty', 'callpropvoid', 'constructprop'):
                prop, count = arg.rsplit(',', 1)
                count = int(count)
                params = [stack.pop() for _ in range(count)][::-1]
                name = multiname(prop)
                if name is None:
                    name = stack.pop()
                result = self.call(stack.pop(), name, params)
                if op != 'callpropvoid':
                    stack.append(result)
            elif op == 'call':
                params = [stack.pop() for _ in range(int(arg))][::-1]
                stack.pop()  # receiver
                stack.append(stack.pop()(*params))
            elif op == 'construct':
                params = [stack.pop() for _ in range(int(arg))][::-1]
                stack.append(stack.pop()(*params))
            elif op == 'applytype':
                for _ in range(int(arg)):
                    stack.pop()
            elif op in ('convert_i', 'convert_u', 'convert_d', 'convert_b', 'convert_s', 'coerce_s'):
                value = stack.pop()
                fn = {'convert_i': integer, 'convert_u': lambda x: integer(x, True),
                      'convert_d': number, 'convert_b': truth, 'convert_s': R.tostr,
                      'coerce_s': lambda x: None if x is None or x is UNDEFINED else R.tostr(x)}[op]
                stack.append(fn(value))
            elif op in ('not', 'negate', 'negate_i', 'bitnot', 'increment', 'decrement'):
                value = stack.pop()
                stack.append({'not': lambda: not truth(value), 'negate': lambda: -number(value),
                              'negate_i': lambda: integer(-number(value)), 'bitnot': lambda: ~integer(value),
                              'increment': lambda: number(value) + 1, 'decrement': lambda: number(value) - 1}[op]())
            elif op in ('inclocal', 'declocal', 'inclocal_i', 'declocal_i'):
                index = int(arg)
                value = number(locals_.get(index, UNDEFINED)) + (1 if op.startswith('inc') else -1)
                locals_[index] = integer(value) if op.endswith('_i') else value
            elif op in ('equals', 'strictequals', 'lessthan', 'lessequals', 'greaterthan', 'greaterequals',
                        'add', 'subtract', 'multiply', 'divide', 'modulo', 'add_i', 'subtract_i', 'multiply_i',
                        'bitand', 'bitor', 'bitxor', 'lshift', 'rshift', 'urshift'):
                b, a = stack.pop(), stack.pop()
                if op in ('equals', 'strictequals'):
                    value = equal(a, b, op == 'strictequals')
                elif op in ('lessthan', 'lessequals', 'greaterthan', 'greaterequals'):
                    x, y = (a, b) if isinstance(a, str) and isinstance(b, str) else (number(a), number(b))
                    value = {'lessthan': lambda: x < y, 'lessequals': lambda: x <= y,
                             'greaterthan': lambda: x > y, 'greaterequals': lambda: x >= y}[op]()
                elif op == 'add' and (isinstance(a, str) or isinstance(b, str)):
                    value = R.tostr(a) + R.tostr(b)
                elif op in ('bitand', 'bitor', 'bitxor', 'lshift', 'rshift', 'urshift'):
                    x, y = integer(a), integer(b)
                    value = {'bitand': lambda: x & y, 'bitor': lambda: x | y, 'bitxor': lambda: x ^ y,
                             'lshift': lambda: integer(x << (y & 31)), 'rshift': lambda: x >> (y & 31),
                             'urshift': lambda: integer(a, True) >> (y & 31)}[op]()
                else:
                    x, y = number(a), number(b)
                    try:
                        value = {'add': lambda: x + y, 'subtract': lambda: x - y, 'multiply': lambda: x * y,
                                 'divide': lambda: x / y, 'modulo': lambda: math.fmod(x, y),
                                 'add_i': lambda: integer(x + y), 'subtract_i': lambda: integer(x - y),
                                 'multiply_i': lambda: integer(x * y)}[op]()
                    except ZeroDivisionError:
                        value = math.nan if x == 0 or op == 'modulo' else math.copysign(math.inf, x * math.copysign(1, y))
                    except ValueError:
                        value = math.nan
                stack.append(value)
            elif op in ('iftrue', 'iffalse'):
                take = truth(stack.pop()) == (op == 'iftrue')
                if take:
                    pc = labels[arg]
            elif op.startswith('if'):
                b, a = stack.pop(), stack.pop()
                x, y = (a, b) if isinstance(a, str) and isinstance(b, str) else (number(a), number(b))
                take = {'ifeq': lambda: equal(a, b), 'ifne': lambda: not equal(a, b),
                        'ifstricteq': lambda: equal(a, b, True), 'ifstrictne': lambda: not equal(a, b, True),
                        'iflt': lambda: x < y, 'ifle': lambda: x <= y, 'ifgt': lambda: x > y, 'ifge': lambda: x >= y,
                        'ifnlt': lambda: not x < y, 'ifnle': lambda: not x <= y,
                        'ifngt': lambda: not x > y, 'ifnge': lambda: not x >= y}.get(op)
                if take is None:
                    raise Unsupported(op)
                if take():
                    pc = labels[arg]
            elif op == 'jump':
                pc = labels[arg]
            elif op == 'lookupswitch':
                targets = re.findall(r'ofs\w+', arg)
                index = integer(stack.pop())
                pc = labels[targets[index + 1] if 0 <= index < len(targets) - 1 else targets[0]]
            elif op in ('astypelate', 'istypelate'):
                typ, value = stack.pop(), stack.pop()
                yes = isinstance(value, typ)
                stack.append(yes if op == 'istypelate' else value if yes else None)
            elif op == 'newarray':
                stack.append(R.Arr([stack.pop() for _ in range(int(arg))][::-1]))
            elif op == 'newobject':
                result = R.Obj()
                entries = []
                for _ in range(int(arg)):
                    value, key = stack.pop(), stack.pop()
                    entries.append((key, value))
                result.update(reversed(entries))
                stack.append(result)
            elif op == 'hasnext2':
                oi, ii = [int(x) for x in arg.split(',')]
                obj = locals_.get(oi, UNDEFINED)
                keys = list(obj) if isinstance(obj, dict) else list(range(len(obj))) if isinstance(obj, (list, tuple)) else []
                index = integer(locals_.get(ii, 0))
                locals_[ii] = index + 1
                stack.append(index < len(keys))
            elif op in ('nextvalue', 'nextname'):
                index, obj = integer(stack.pop()) - 1, stack.pop()
                keys = list(obj) if isinstance(obj, dict) else list(range(len(obj)))
                key = keys[index]
                stack.append(key if op == 'nextname' else obj[key])
            elif op == 'returnvalue':
                value = stack.pop()
                ret = method.get('ret')
                return {'int': integer, 'uint': lambda x: integer(x, True),
                        'Number': number, 'Boolean': truth}.get(ret, lambda x: x)(value)
            elif op == 'returnvoid':
                return None
            else:
                raise Unsupported('未实现指令 ' + op)
        raise Unsupported('执行落空')
