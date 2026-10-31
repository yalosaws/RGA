"""把游戏产出计算（getProductionPerTickReal）整理成「乘区 → 贡献项」的结构。

输入：
  core.as   ffdec 用 autoDeobfuscate=1,simplifyExpressions=1 导出的核心类 AS3，方法名已换成真名
  game-effects.json   game_effects.py 的输出（各升级类的公式、代号、英文名）
输出：build/prod-model.json
  groups: [{group: 乘区编号(对应 applyAscensionMultiplier 第二参数，0 = 不受 Ascension 惩罚), terms: [...]}]
  每项：{cond: 条件（混淆名已尽量换成真名）, by: 升级类（代号/英文名/公式）, how: 乘算方式}

游戏的算法（读 AS3 得到）：
  总产出 = 建筑基础产出之和 × Π 各乘区 × 宝石/RE/事件等后续乘区
  每个乘区内：拥有某升级（且满足条件）就乘 (1 + 0.01 × 该升级的 getProductionMultiplier)
  乘区 n 在最后做 applyAscensionMultiplier(乘区, n)：Ascension 次数 ≥ n 时，乘区取 (0.1)^(Ascension−(n−1)) 次幂
"""
import json
import os
import urllib.parse
import re
import sys


def match_paren(s, i):
    d = 0
    for j in range(i, len(s)):
        if s[j] == '(':
            d += 1
        elif s[j] == ')':
            d -= 1
            if d == 0:
                return j
    return -1


def body_of(src, name):
    m = re.search(r'function (?:get )?' + name + r'\(', src)
    i = src.find('{', m.end())
    d, j = 0, i
    while j < len(src):
        if src[j] == '{':
            d += 1
        elif src[j] == '}':
            d -= 1
            if d == 0:
                return src[i + 1:j]
        j += 1


def main(core, effects, dst):
    src = open(core, encoding='utf-8').read()
    eff = json.load(open(effects, encoding='utf-8'))
    byclass = {}
    for k, r in eff.items():
        byclass.setdefault(urllib.parse.unquote(re.split(r'[/\\]', k)[-1]), []).append(r)
    body = body_of(src, 'getProductionPerTickReal')
    lines = [l.strip() for l in body.splitlines()]
    # 语句序列：('mul', var, expr, cond) / ('set1', var) / ('apply', var, n)
    stmts, i = [], 0
    while i < len(lines):
        l = lines[i]
        m = re.match(r'(_loc\d+_) \*= (.*);$', l)
        m0 = re.match(r'(?:var )?_loc20_(?::Number)? = (applyAscensionMultiplier\(.*\));$', l)
        if m0:
            for a in re.finditer(r'applyAscensionMultiplier\((_loc\d+_),(\d+)\)', m0.group(1)):
                stmts.append(('apply', a.group(1), int(a.group(2))))
        elif m:
            stmts.append(('mul', m.group(1), m.group(2), None))
        elif re.match(r'(_loc\d+_) = 1;$', l):
            stmts.append(('set1', l.split()[0]))
        elif l.startswith('if(') and i + 3 < len(lines) and lines[i + 1] == '{' and lines[i + 3] == '}':
            cond = l[3:match_paren(l, 2)]
            m = re.match(r'(_loc\d+_) \*= (.*);$', lines[i + 2])
            if m:
                stmts.append(('mul', m.group(1), m.group(2), cond))
                i += 4
                continue
        i += 1
    groups, cur = [], {}
    other = []
    for s in stmts:
        if s[0] == 'set1':
            cur[s[1]] = []
        elif s[0] == 'apply':
            groups.append({'group': s[2], 'terms': cur.pop(s[1], [])})
        elif s[0] == 'mul':
            _, var, expr, cond = s
            tm = list(re.finditer(r'applyAscensionMultiplier\((_loc\d+_),[^()]*? >= 4 \? (\d+) : (\d+)\)', expr))
            if var == '_loc20_' and tm:
                # 第二批乘区：Ascension ≥ 4 时三个乘区都按第 5 档计
                for a in tm:
                    groups.append({'group': int(a.group(3)), 'ge4_group': int(a.group(2)),
                                   'terms': cur.pop(a.group(1), [])})
                continue
            am = re.match(r'applyAscensionMultiplier\((_loc\d+_)(?:,(\d+))?\)$', expr)
            if am and var == '_loc20_':
                groups.append({'group': int(am.group(2) or 1), 'terms': cur.pop(am.group(1), [])})
                continue
            cur.setdefault(var, []).append((cond, expr))
    # 未归入乘区的（直接乘在总量上）
    for var, terms in cur.items():
        other.append({'var': var, 'terms': terms})

    def term(cond, expr):
        t = {'cond': cond, 'expr': expr}
        cm = re.search(r'1 \+ 0\.01 \* (\S+?)\.(\S+?)\(\)', expr)
        if cm:
            cls = cm.group(1)
            hit = byclass.get(cls)
            if hit and len(hit) == 1:
                r = hit[0]
                t['by'] = {'code': r.get('code'), 'name': r['props'].get('1i'),
                           'formula': r['effects'].get('getProductionMultiplier')}
            else:
                t['by'] = {'class': cls, 'candidates': len(hit or [])}
        return t

    out = {'groups': [{'group': g['group'], 'terms': [term(*t) for t in g['terms']]} for g in groups],
           'unassigned': [{'var': o['var'], 'terms': [term(*t) for t in o['terms']]} for o in other]}
    with open(dst, 'w', encoding='utf-8') as f:
        json.dump(out, f, ensure_ascii=False, indent=1)
    n = sum(len(g['terms']) for g in out['groups'])
    named = sum(1 for g in out['groups'] for t in g['terms'] if 'by' in t and 'name' in t['by'])
    print('乘区', [(g['group'], len(g['terms'])) for g in out['groups']], '共', n, '项，对上升级名', named, '→', dst)


if __name__ == '__main__':
    root = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
    main(sys.argv[1], sys.argv[2] if len(sys.argv) > 2 else os.path.join(root, 'build', 'game-effects.json'),
         sys.argv[3] if len(sys.argv) > 3 else os.path.join(root, 'build', 'prod-model.json'))
