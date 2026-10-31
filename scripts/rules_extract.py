"""把 readable_core.py 生成的可读 AS3 里的每个函数拆成「条件 → 运算」规则表。

用法：python scripts/rules_extract.py <readable.as> <输出 json>
每个函数输出：参数、规则列表。规则 = {cond, var, op, expr, group, refs}
  cond：从外到里所有 if / else if / else 条件用 && 连起来（else 用 !(…)；循环写成 FOR…）
  var op expr：被赋值的变量、运算符（*=、+=、-=、=）、右边表达式
  group：如果这个变量后面被 applyAscensionMultiplier(var, n) 收口，就是 n（Ascension ≥ n 时该乘区会被压缩）
  refs：条件和表达式里提到的升级/类（U<英文名>）
return 语句也记成规则（var = return）。
"""
import json
import re
import sys

APPLY = re.compile(r'applyAscensionMultiplier\(\s*(_loc\d+_|[A-Za-z_]\w*)\s*,\s*([^()]*?)\s*\)')


def parse_block(lines, i):
    """从 lines[i] 开始解析到匹配的 }，返回 (节点列表, 下一行下标)。节点：('s', text) / ('if', cond, then, else) / ('loop', head, body)"""
    nodes = []
    while i < len(lines):
        l = lines[i]
        if l == '}':
            return nodes, i + 1
        if l == '{':
            sub, i = parse_block(lines, i + 1)
            nodes.append(('blk', sub))
            continue
        m = re.match(r'(?:\}\s*)?(if|while|for each|for)\((.*)\)$', l)
        if m and m.group(1) in ('if',):
            cond = m.group(2)
            body, i = parse_one(lines, i + 1)
            els = []
            if i < len(lines) and lines[i].startswith('else if('):
                els_node, i = parse_chain(lines, i)
                els = [els_node]
            elif i < len(lines) and lines[i] == 'else':
                els, i = parse_one(lines, i + 1)
            nodes.append(('if', cond, body, els))
            continue
        if m:
            body, i = parse_one(lines, i + 1)
            nodes.append(('loop', m.group(1) + '(' + m.group(2) + ')', body))
            continue
        nodes.append(('s', l.rstrip(';')))
        i += 1
    return nodes, i


def parse_chain(lines, i):
    """else if(...) 链"""
    cond = lines[i][len('else if('):-1]
    body, i = parse_one(lines, i + 1)
    els = []
    if i < len(lines) and lines[i].startswith('else if('):
        n, i = parse_chain(lines, i)
        els = [n]
    elif i < len(lines) and lines[i] == 'else':
        els, i = parse_one(lines, i + 1)
    return ('if', cond, body, els), i


def parse_one(lines, i):
    """一条语句或一个 {} 块"""
    if lines[i] == '{':
        return parse_block(lines, i + 1)
    n, j = parse_block_single(lines, i)
    return n, j


def parse_block_single(lines, i):
    l = lines[i]
    m = re.match(r'(if|while|for each|for)\((.*)\)$', l)
    if m:
        # 单语句 if/loop：借用 parse_block 解析一个节点
        nodes, j = parse_block(lines[:i] + lines[i:], i)
        return nodes[:1], j  # 不精确，但这种写法 ffdec 基本不用
    return [('s', l.rstrip(';'))], i + 1


def flatten(nodes, conds, out):
    for n in nodes:
        if n[0] == 'blk':
            flatten(n[1], conds, out)
        elif n[0] == 's':
            out.append((list(conds), n[1]))
        elif n[0] == 'if':
            flatten(n[2], conds + [n[1]], out)
            if n[3]:
                flatten(n[3], conds + ['!(' + n[1] + ')'], out)
        elif n[0] == 'loop':
            flatten(n[2], conds + ['FOR ' + n[1]], out)


def function_bodies(src):
    res = []
    for m in re.finditer(r'^\s*(?:public |private |static |override |final )*function (?:get |set )?(\w+)\((.*?)\)\s*(?::\s*\S+)?\s*$', src, re.M):
        j = src.find('{', m.end())
        if j < 0:
            continue
        d, k = 0, j
        while k < len(src):
            c = src[k]
            if c == '{':
                d += 1
            elif c == '}':
                d -= 1
                if d == 0:
                    break
            k += 1
        res.append((m.group(1), m.group(2), src[j + 1:k]))
    return res


def extract(src):
    out = {}
    for name, params, body in function_bodies(src):
        lines = [x.strip() for x in body.splitlines() if x.strip()]
        try:
            nodes, _ = parse_block(lines, 0)
        except Exception as e:  # noqa: BLE001
            out[name] = {'params': params, 'error': str(e)}
            continue
        flat = []
        flatten(nodes, [], flat)
        rules, events = [], []
        for conds, st in flat:
            m = re.match(r'(?:var )?([\w.§]+?)(?::[\w.*]+)? (\*=|\+=|-=|/=|=) (.*)$', st)
            if st.startswith('return'):
                rules.append({'cond': ' && '.join(conds), 'var': 'return', 'op': '=', 'expr': st[6:].strip()})
            elif m:
                rules.append({'cond': ' && '.join(conds), 'var': m.group(1), 'op': m.group(2), 'expr': m.group(3)})
            else:
                continue
            for a in APPLY.finditer(rules[-1]['expr']):
                events.append((len(rules) - 1, a.group(1), a.group(2)))
        # 乘区编号：变量之后第一次被收口的位置
        for idx, r in enumerate(rules):
            for ev_idx, var, n in events:
                if ev_idx >= idx and var == r['var'] and r['op'] != '=':
                    r['group'] = n
                    break
            refs = sorted(set(re.findall(r'U<([^>]+)>', r['cond'] + ' ' + r['expr'])))
            if refs:
                r['refs'] = refs
        out[name] = {'params': params, 'rules': rules}
    return out


if __name__ == '__main__':
    src = open(sys.argv[1], encoding='utf-8').read()
    res = extract(src)
    with open(sys.argv[2], 'w', encoding='utf-8') as f:
        json.dump(res, f, ensure_ascii=False, indent=1)
    print(len(res), '个函数', sum(len(v.get('rules', [])) for v in res.values()), '条规则 →', sys.argv[2])
