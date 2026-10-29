"""把整个游戏客户端 AS3 里的混淆名换回原名，输出一份可读副本（原导出不动）。

用法：python -X utf8 脚本/readable_client.py [pcode 目录] [AS3 目录] [输出目录]
默认：build/installed-pcode/scripts、build/installed-as3-deobf/scripts → build/installed-as3-named

名字来源（混淆是全局一致的：同一个乱码在所有类里都对应同一个原名）：
  1. 原名：pcode 里每个方法/getter/setter 的 `name "原名"`；类名取构造函数的 name。
  2. 推断：字段（变量）在字节码里没有原名。只返回/只写某个字段的 getter/setter，
     把那个字段记成 `_getter名`，在 names.json 里标 inferred。
  其余字段、包名、局部变量保持混淆名。
"""
import collections
import json
from pathlib import Path
import re
import shutil
import sys
import urllib.parse

STR = r'"((?:[^"\\]|\\.)*)"'
HEAD = re.compile(r'function (?:get |set )?(§[^§]*§)\([^\n]*\n\s*\{\s*\n\s*trait (method|getter|setter) QName\(\w+\(' + STR + r'\),' + STR + r'\)')
NAME = re.compile(r'^\s*name ' + STR + r'\s*$', re.M)
CODE = re.compile(r'^\s*code\s*$(.*?)^\s*end ; code', re.M | re.S)
QNAME = re.compile(r'QName\(\w+\(' + STR + r'\),' + STR + r'\)')
IDENT = re.compile(r'^[A-Za-z_$][\w$]*$')
TOKEN = re.compile(r'§([^§]*)§')
DECL = re.compile(r'\b(?:var|const|function(?: get| set)?) (§[^§]*§)')
SECURE = '8!+'   # 受校验数值对象的取值字段


def unesc(s):
    return re.sub(r'\\(.)', r'\1', s)


def real_name(raw):
    """pcode 的 name 可能带命名空间前缀，如 `a.b:Cls/private:init`。"""
    name = unesc(raw).rsplit('/', 1)[-1].rsplit(':', 1)[-1]
    return name if IDENT.match(name) else None


def code_of(block):
    m = CODE.search(block)
    if not m:
        return None
    rows = []
    for line in m[1].splitlines():
        line = line.strip()
        if not line or line.startswith(';'):
            continue
        op, _, arg = line.partition(' ')
        q = QNAME.search(arg)
        rows.append((op, unesc(q[2]) if q else arg))
    return rows


def backing_field(kind, rows):
    """只读写一个字段的 getter/setter 返回该字段的混淆名，否则 None。"""
    if not rows or rows[:2] != [('getlocal0', ''), ('pushscope', '')]:
        return None
    rest = rows[2:]
    if kind == 'getter' and rest and rest[0][0] == 'getlex':   # 静态字段：getlex 直接取值
        rest = [('getproperty', rest[0][1])] + rest[1:]
    elif not rest or rest[0][0] not in ('getlocal0', 'getlex'):
        return None
    else:
        rest = rest[1:]
    if kind == 'getter':
        rest = [r for r in rest if not r[0].startswith(('convert_', 'coerce'))]
        if len(rest) == 2 and rest[0][0] == 'getproperty' and rest[1][0] == 'returnvalue':
            return rest[0][1]
        if len(rest) == 3 and rest[0][0] == 'getproperty' and rest[1] == ('getproperty', SECURE) and rest[2][0] == 'returnvalue':
            return rest[0][1]
    if kind == 'setter':
        rest = [r for r in rest if not r[0].startswith(('convert_', 'coerce')) and r[0] != 'returnvoid']
        if len(rest) == 2 and rest[0] == ('getlocal1', '') and rest[1][0] in ('setproperty', 'initproperty'):
            return rest[1][1]
        if len(rest) == 3 and rest[0][0] == 'getproperty' and rest[1] == ('getlocal1', '') and rest[2] == ('setproperty', SECURE):
            return rest[0][1]
    return None


def collect(pcode_dir):
    true = collections.defaultdict(set)      # 混淆串 → 原名集合
    kinds = collections.defaultdict(set)
    guesses = collections.defaultdict(set)   # 字段混淆串 → 推断名集合
    for file in sorted(Path(pcode_dir).rglob('*.pcode')):
        text = file.read_text(encoding='utf-8')
        cls = re.search(r'public (?:final )?(?:dynamic )?(?:class|interface) (§[^§]*§)', text)
        if cls:
            m = re.search(r'function ' + re.escape(cls[1]) + r'\([^\n]*\n\s*\{\s*\n\s*method\s*\n\s*name ' + STR, text)
            if m and real_name(m[1]):
                true[cls[1][1:-1]].add(real_name(m[1]))
                kinds[cls[1][1:-1]].add('class')
        heads = list(HEAD.finditer(text))
        for i, h in enumerate(heads):
            end = heads[i + 1].start() if i + 1 < len(heads) else len(text)
            block = text[h.end():end]
            block = block[:block.find('end ; method') + 1 or None]
            n = NAME.search(block)
            name = real_name(n[1]) if n else None
            if not name:
                continue
            obf = h[1][1:-1]
            if obf != unesc(h[4]):
                continue
            true[obf].add(name)
            kinds[obf].add(h[2])
            field = backing_field(h[2], code_of(block))
            if field and field != obf:
                guesses[field].add('_' + name)
    return true, kinds, guesses


def build_map(true, kinds, guesses):
    names, conflicts = {}, {}
    for obf, reals in true.items():
        if len(reals) == 1:
            names[obf] = dict(name=next(iter(reals)), source='bytecode', kind=sorted(kinds[obf]))
        else:
            conflicts[obf] = sorted(reals)
    used = {v['name'] for v in names.values()}
    counts = collections.Counter(next(iter(g)) for g in guesses.values() if len(g) == 1)
    for obf, guess in guesses.items():
        if obf in names or obf in conflicts or len(guess) != 1:
            continue
        guess = next(iter(guess))
        if guess in used or counts[guess] > 1:
            continue
        names[obf] = dict(name=guess, source='inferred', kind=['field'])
    return names, conflicts


def rename_text(text, names):
    return TOKEN.sub(lambda m: names[m[1]]['name'] if m[1] in names else m[0], text)


def rename_part(part, names):
    """文件名里的特殊字符被导出工具编码过（`?` → `%3F`），解码后再查。"""
    m = TOKEN.fullmatch(urllib.parse.unquote(part))
    return names[m[1]]['name'] if m and m[1] in names else part


def check_file(text, names):
    """同一文件里，两个不同的混淆名不能换成同一个名字，推断名也不能撞上文件里已有的普通标识符。"""
    bad = set()
    by_name = collections.defaultdict(set)
    for m in DECL.finditer(text):
        raw = m[1][1:-1]
        if raw in names:
            by_name[names[raw]['name']].add(raw)
    plain = set(re.findall(r'(?<![§\w$])[A-Za-z_$][\w$]*', TOKEN.sub(' ', text)))
    for name, raws in by_name.items():
        inferred = any(names[r]['source'] == 'inferred' for r in raws)
        if len(raws) > 1 or (inferred and name in plain):
            bad |= raws
    return bad


def main(pcode_dir='build/installed-pcode/scripts', as3_dir='build/installed-as3-deobf/scripts',
         out_dir='build/installed-as3-named'):
    true, kinds, guesses = collect(pcode_dir)
    names, conflicts = build_map(true, kinds, guesses)
    sources = {p: p.read_text(encoding='utf-8') for p in sorted(Path(as3_dir).rglob('*.as'))}
    # 撞名的推断名整体丢掉再查；原名撞名只记录，不改动
    clashes = collections.defaultdict(list)
    while True:
        dropped = False
        clashes.clear()
        for path, text in sources.items():
            for raw in check_file(text, names):
                clashes[raw].append(str(path.relative_to(as3_dir)))
                if names.get(raw, {}).get('source') == 'inferred':
                    del names[raw]
                    dropped = True
        if not dropped:
            break
    out = Path(out_dir)
    if out.exists():
        shutil.rmtree(out)
    seen = {}
    tokens = collections.Counter()
    for path, text in sources.items():
        for m in TOKEN.finditer(text):
            tokens['bytecode' if names.get(m[1], {}).get('source') == 'bytecode' else
                   'inferred' if m[1] in names else 'obfuscated'] += 1
        rel = path.relative_to(as3_dir)
        parts = [rename_part(p, names) for p in rel.parent.parts] + [rename_part(rel.stem, names) + '.as']
        target = out.joinpath('scripts', *parts)
        if target in seen:   # 改名后路径重复就保留原文件名
            target = out.joinpath('scripts', *rel.parts)
        seen[target] = path
        target.parent.mkdir(parents=True, exist_ok=True)
        target.write_text(rename_text(text, names), encoding='utf-8')
    distinct = {m for text in sources.values() for m in TOKEN.findall(text)}
    summary = dict(
        note='bytecode=字节码里的原名；inferred=按只读写该字段的 getter/setter 推断；其余保持混淆名',
        files=len(sources),
        distinct_obfuscated=len(distinct),
        renamed_bytecode=sum(1 for t in distinct if names.get(t, {}).get('source') == 'bytecode'),
        renamed_inferred=sum(1 for t in distinct if names.get(t, {}).get('source') == 'inferred'),
        left_obfuscated=sum(1 for t in distinct if t not in names),
        occurrences=dict(tokens),
        classes=sum(1 for v in names.values() if 'class' in v['kind']),
        name_conflicts=conflicts,
        clashes_kept_obfuscated={k: v for k, v in clashes.items() if k not in names},
        clashes_true_names={k: v for k, v in clashes.items() if k in names},
    )
    (out / 'names.json').write_text(json.dumps({'§' + k + '§': v for k, v in sorted(names.items())},
                                               ensure_ascii=False, indent=1) + '\n', encoding='utf-8')
    (out / 'summary.json').write_text(json.dumps(summary, ensure_ascii=False, indent=1) + '\n', encoding='utf-8')
    print(json.dumps({k: v for k, v in summary.items() if not isinstance(v, dict) or k == 'occurrences'},
                     ensure_ascii=False))
    print('冲突', len(conflicts), '推断撞名丢弃', len(summary['clashes_kept_obfuscated']),
          '原名撞名', len(summary['clashes_true_names']))


if __name__ == '__main__':
    main(*sys.argv[1:])
