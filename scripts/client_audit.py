"""以实际安装客户端的 pcode 为基准，生成算法目录并做逐方法差分核对。

python -X utf8 -I scripts/client_audit.py build/installed-pcode/scripts build/rg_installed_game.py --save build/production-check3.sol
"""
import argparse
import hashlib
import inspect
import itertools
import json
import math
from pathlib import Path
import re
import sys

sys.path.insert(0, str(Path(__file__).resolve().parent))
import as_runtime as R
from as2py import mangle, py_unescape
from avm2_check import Interpreter, StateSnapshot, Unsupported, UNDEFINED
from pcode_sym import methods_of
import rg_sim

DECL = re.compile(r'(?:public|protected|private|internal)\s+(?:(?:static|override|final)\s+)*'
                  r'function\s+(?:(get|set)\s+)?(§[^§]*§|\w+)\((.*?)\)\s*(?::\s*([^\s{]+))?\s*\{')
ROOT = Path(__file__).resolve().parents[1]


def sha(path):
    return hashlib.sha256(Path(path).read_bytes()).hexdigest()


def read_methods(folder):
    records, member_names = [], {}
    for file in sorted(Path(folder).rglob('*.pcode')):
        text = file.read_text(encoding='utf-8')
        cm = re.search(r'public (?:final )?class (.+?)(?: extends .*)?\s*$', text, re.M)
        if not cm:
            continue
        cls = cm[1]
        decls = list(DECL.finditer(text))
        for i, decl in enumerate(decls):
            chunk = text[decl.end():decls[i + 1].start() if i + 1 < len(decls) else len(text)]
            methods = methods_of(chunk)
            if not methods:
                continue
            real, method = next(iter(methods.items()))
            method['ret'] = decl[4]
            params = []
            for p in decl[3].split(',') if decl[3].strip() else []:
                name_ty, _, default = p.partition('=')
                pname, _, ptype = name_ty.partition(':')
                params.append(dict(name=pname.strip(), type=ptype.strip(), default=default.strip() or None))
            member_names[cls + '\t' + decl[2].strip('§')] = real
            records.append(dict(cls=cls, py_class=mangle(cls), member=decl[2],
                                py_member=mangle(decl[2]), real=real, params=params,
                                ret=decl[4], kind=decl[1] or 'method', static='static ' in decl[0],
                                source=str(file.relative_to(folder)), method=method))
    return records, member_names


def owners(ns, G, g):
    all_objects = [g]
    for value in G.__dict__.values():
        if isinstance(value, list):
            all_objects.extend(x for x in value if isinstance(x, R.AsObject))
    # 相同类的一个代表状态用于其实例方法；基类按真实对象继承关系选择。
    by_class = {}
    for obj in all_objects:
        for cls in type(obj).__mro__:
            by_class.setdefault(cls.__name__, obj)
    return by_class, all_objects


def values(param, ns, objects, rec):
    typ = param['type']
    default = param['default']
    out = []
    if default is not None:
        if default in ('true', 'false'):
            out.append(default == 'true')
        elif default == 'null':
            out.append(None)
        else:
            try:
                out.append(float(default) if '.' in default else int(default))
            except ValueError:
                pass
    if typ == 'Boolean':
        out.extend([False, True])
    elif typ in ('Number', 'int', 'uint'):
        # ID 型入口只取存在的索引；100 不是当前建筑/法术/阵营的有效 ID。
        id_kind = any(x in rec['real'] for x in ('Spell', 'Building', 'ExchangeOCD'))
        out.extend([0, 1, 10] if id_kind and typ in ('int', 'uint') else [0, 1, 10, 100])
    elif typ.startswith('§'):
        cls = ns.get(mangle(typ))
        if rec['cls'] == '§ "5§' and rec['real'] == 'getSpecificBonus_special2':
            # 客户端签名接受 Upgrade，但函数体立即 as ResearchFacilityUpgrade。
            cls = ns.get(rec['py_class'])
        out.extend(x for x in objects if isinstance(cls, type) and isinstance(x, cls))
    elif typ == 'String':
        if rec['real'] in ('hasUpgradeByName', 'hasTrophyByName'):
            base = ns['S__60_6' if rec['real'] == 'hasUpgradeByName' else 'S__23__21__60_']
            out.extend(x.S_1i for x in objects if isinstance(x, base) and getattr(x, 'S_1i', None))
        else:
            out.extend(['', 'Farm', 'Production'])
    elif typ == '*' and rec['real'] == 'getResearchTypeNum':
        out.extend(list(ns['S_8G'].S__2d_s.keys())[:4])
    else:
        return out
    unique = []
    for value in out:
        if not any(value is x or type(value) in (int, float, str, bool, type(None)) and type(value) is type(x) and value == x for x in unique):
            unique.append(value)
    return unique[:4]


def serial(value):
    if value is UNDEFINED:
        return 'undefined'
    if isinstance(value, float) and not math.isfinite(value):
        return repr(value)
    if isinstance(value, (str, int, float, bool, type(None))):
        return value
    return dict(type=type(value).__name__, name=getattr(value, 'S_1i', None))


def same(a, b):
    if type(a) in (int, float) and type(b) in (int, float):
        if math.isnan(a) and math.isnan(b):
            return 'exact'
        if a == b:
            return 'exact'
        if math.isclose(a, b, rel_tol=1e-12, abs_tol=1e-12):
            return 'within_tolerance'
        return 'mismatch'
    return 'exact' if type(a) is type(b) and a == b else 'mismatch'


def audit(folder, game_py, save, output, limit=0):
    records, names = read_methods(folder)
    module_hash = sha(game_py)
    ns, G, g = rg_sim.make_game(game_py, save)
    by_class, objects = owners(ns, G, g)
    vm = Interpreter(ns)
    state = StateSnapshot(ns, g)
    rows, catalog = [], []
    for rec in records:
        if rec['ret'] not in ('Number', 'int', 'uint', 'Boolean') or rec['kind'] == 'set':
            continue
        py_cls = rec['py_class']
        cls = ns.get(py_cls)
        if not isinstance(cls, type):
            continue
        # 直接计算对象/算法/判定函数，不将界面布局方法算入公式覆盖率。
        bases = {c.__name__ for c in cls.__mro__}
        domain = {'S__60_6', 'S_84', 'S__60__21__3b_', 'S__23__21__60_',
                  'S_8G', 'S__26_c', 'S__23__21__21_'}
        if not bases & domain:
            continue
        owner = cls if rec['static'] else by_class.get(py_cls)
        visible = {k: v for k, v in rec.items() if k != 'method'}
        visible['instruction_sha256'] = hashlib.sha256(json.dumps(rec['method']['code']).encode()).hexdigest()
        visible['calls'] = sorted({arg for _, op, arg in rec['method']['code'] if op in ('callproperty', 'callpropvoid')})
        catalog.append(visible)
        if rec['kind'] != 'get' and not rec['real'].startswith(('get', 'has', 'is', 'can', 'apply', 'condition', 'spoilerCondition')):
            rows.append(dict(method=rec['cls'] + '.' + rec['real'], status='not_checked_action'))
            continue
        if owner is None:
            rows.append(dict(method=rec['cls'] + '.' + rec['real'], status='unavailable_owner'))
            continue
        candidates = [values(p, ns, objects, rec) for p in rec['params']]
        if any(not vs for vs in candidates):
            rows.append(dict(method=rec['cls'] + '.' + rec['real'], status='unavailable_args'))
            continue
        arguments = itertools.islice(itertools.product(*candidates), 8) if candidates else [()]
        for args in arguments:
            row = dict(method=rec['cls'] + '.' + rec['real'], source=rec['source'], args=[serial(x) for x in args])
            try:
                state.restore()
                if rec['kind'] == 'get' and rec['static']:
                    py = getattr(cls, rec['py_member'])
                elif rec['kind'] == 'get':
                    py = inspect.getattr_static(cls, rec['py_member']).fget(owner)
                elif rec['static']:
                    py = getattr(cls, rec['py_member'])(*args)
                else:
                    py = inspect.getattr_static(cls, rec['py_member'])(owner, *args)
                state.restore()
                bc = vm.run(rec['method'], owner, args, declaring_class=cls)
                row.update(status=same(py, bc), python=serial(py), bytecode=serial(bc))
            except Unsupported as exc:
                row.update(status='unsupported', error=str(exc))
            except Exception as exc:
                row.update(status='error', error=type(exc).__name__ + ': ' + str(exc))
            rows.append(row)
        if limit and len(rows) >= limit:
            break
    from collections import Counter
    counts = dict(Counter(row['status'] for row in rows))
    state.restore()
    if module_hash != sha(game_py):
        raise RuntimeError('核对期间计算模块被改写，本轮结果作废，请重跑')
    result = dict(note='每例直接解释被测方法的字节码；子调用及 Math 使用 Python 对象/运行时。非全 VM，未支持与错误均不算通过。',
                  module_sha256=module_hash, save_sha256=sha(save), context=ns['_snapshot_context'],
                  static_initialization_errors=ns['_static_init_errors'],
                  methods_in_pcode=len(records), numeric_condition_methods=len(catalog),
                  counts=counts, cases=rows)
    output = Path(output)
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(result, ensure_ascii=False, indent=2, allow_nan=False) + '\n', encoding='utf-8')
    output.with_name('client-methods.json').write_text(json.dumps(catalog, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
    output.with_name('member-names.json').write_text(json.dumps(names, ensure_ascii=False, indent=1) + '\n', encoding='utf-8')
    print(json.dumps(dict(methods=len(catalog), counts=counts, output=str(output)), ensure_ascii=False))


if __name__ == '__main__':
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('pcode')
    ap.add_argument('game_py')
    ap.add_argument('--save', default=rg_sim.SOL)
    ap.add_argument('--output', default=str(ROOT / 'build/client-audit/results.json'))
    ap.add_argument('--limit', type=int, default=0)
    opts = ap.parse_args()
    audit(opts.pcode, opts.game_py, opts.save, opts.output, opts.limit)
