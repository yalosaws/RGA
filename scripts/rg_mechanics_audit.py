"""完整索引客户端机制，保留原始方法、条件、写操作和未解析项；不改游戏或计算资源。

这是一份静态审计，不把语法调用图冒充完整数据依赖图，也不据此删除搜索候选。
python -X utf8 scripts/rg_mechanics_audit.py
"""
import argparse
import collections
import hashlib
import html
import json
from pathlib import Path
import re

import research_formulas as RF

ROOT = Path(__file__).resolve().parents[1]
HEADER = re.compile(r'^      (.*?)function (?:(get|set) )?([^\s(]+)\((.*?)\)\s*(?::\s*(\S+))?\s*$')
CLASS = re.compile(r'public (?:final |dynamic )*(class|interface) (\S+)(?: extends (\S+))?')
CALL = re.compile(r'\b([A-Z]\w*)\.(\w+|§[^§]+§)\(')
READ = re.compile(r'\b([A-Z]\w*)\.(\w+|§[^§]+§)')
LOCAL_CALL = re.compile(r'(?<![.\w])([A-Za-z_]\w*|§[^§]+§)\(')
NUMERIC = {'Number', 'int', 'uint'}
UI = {'getDescription', 'getHint', 'getTooltip', 'getAssistantTooltip', 'description', 'progress',
      'getPercentage', 'getDescription2', 'spoilerCondition'}
SKIP_LOCAL = {'if', 'for', 'while', 'switch', 'catch', 'function', 'super'}


def methods(text):
    lines = text.splitlines()
    out = []
    i = 0
    while i < len(lines):
        m = HEADER.match(lines[i])
        if m and i + 1 < len(lines) and lines[i + 1] == '      {':
            j = i + 2
            while j < len(lines) and lines[j] != '      }':
                j += 1
            if j == len(lines):
                raise ValueError('未闭合方法：' + lines[i])
            body = '\n'.join(lines[i + 2:j])
            out.append(dict(name=m[3], kind=m[2] or 'method', modifiers=m[1].strip(), params=m[4],
                            returns=m[5], line=i + 1, body=body))
            i = j
        i += 1
    return out


def label(cls, text):
    m = re.search(r'§1i§ = (?:_\()?"((?:[^"\\]|\\.)*)"', text)
    en = m[1] if m else cls
    return en, RF.ZH.get(en, en)


def audit(destination):
    destination.mkdir(parents=True, exist_ok=True)
    research = json.loads((ROOT / 'docs/客户端研究对照.json').read_text(encoding='utf-8'))
    research_by_class = {r['class']: r for r in research}
    classes, nodes, unindexed, duplicates = {}, {}, [], []
    for cls, path in sorted(RF.FILES.items()):
        raw = path.read_bytes()
        text = raw.decode('utf-8')
        m = CLASS.search(text)
        if not m:
            unindexed.append(str(path.relative_to(ROOT)))
            continue
        en, zh = label(cls, text)
        ms = methods(text)
        entry = dict(name=cls, parent=m[3], kind=m[1], english=en, chinese=zh,
                     path=path.relative_to(ROOT).as_posix(), sha256=hashlib.sha256(raw).hexdigest(),
                     methods=ms)
        if cls in research_by_class:
            entry['research'] = research_by_class[cls]['code']
        classes[cls] = entry
        for f in ms:
            key = cls + '.' + ('%s:' % f['kind'] if f['kind'] != 'method' else '') + f['name']
            if key in nodes:
                duplicates.append(dict(key=key, line=f['line']))
                key += '@' + str(f['line'])
            f['key'] = key
            nodes[key] = f

    def ancestry(cls):
        seen = set()
        while cls and cls not in seen:
            seen.add(cls)
            cls = classes.get(cls, {}).get('parent')
        return sorted(seen)

    def resolve(cls, member):
        seen = set()
        while cls and cls not in seen:
            seen.add(cls)
            for suffix in (member, 'get:' + member, 'set:' + member):
                if cls + '.' + suffix in nodes:
                    return cls + '.' + suffix
            cls = classes.get(cls, {}).get('parent')
        return None

    getters_with_writes = []
    numeric, one_return, parsed, opaque = 0, 0, 0, []
    for cls, item in classes.items():
        a = item['ancestry'] = ancestry(cls)
        item['category'] = next((x for x in ('ResearchUpgrade', 'Spell', 'Building', 'Upgrade', 'Trophy') if x in a), 'other')
        for f in item['methods']:
            body = f['body']
            refs = sorted(set(READ.findall(body)))
            f['class_references'] = sorted({c for c, _ in refs if c in classes})
            calls = set(CALL.findall(body))
            calls |= {(cls, n) for n in LOCAL_CALL.findall(body) if n not in SKIP_LOCAL}
            f['calls'] = sorted({t for c, n in calls if (t := resolve(c, n))})
            f['unresolved_calls'] = sorted(c + '.' + n for c, n in calls if not resolve(c, n))
            f['property_reads'] = sorted({t for c, n in refs if (t := resolve(c, n)) and '.get:' in t})
            # 保守列出可能写状态的原文；局部变量赋值不算，不把它当完整副作用证明。
            f['state_write_lines'] = [line.strip() for line in body.splitlines()
                if re.search(r'(?:§[^§]+§|\.[A-Za-z_]\w*|\])\s*(?:\+\+|--|[+*/-]?=(?!=))', line)
                and not re.match(r'\s*(?:var )?_loc\d+_(?::\w+)?\s*=', line)]
            f['uses_rng'] = bool(re.search(r'Math\.random\(|\.next(?:IntRange|Double|Int|Boolean)\(', body))
            f['uses_power'] = 'Math.pow(' in body
            f['uses_log'] = 'Math.log(' in body
            if cls in ('Formulas', 'Utilities') and (f['name'].startswith('get') or f['kind'] == 'get') and f['state_write_lines']:
                getters_with_writes.append(dict(key=f['key'], line=f['line'], writes=f['state_write_lines']))
            if f['returns'] in NUMERIC and f['name'] not in UI and f['name'] != cls:
                numeric += 1
                ret = re.fullmatch(r'\s*return ([^;]+);\s*', body, re.S)
                if ret:
                    one_return += 1
                    try:
                        f['expression_ast'] = RF.Parser(ret[1]).parse()
                        parsed += 1
                    except Exception as error:
                        opaque.append(dict(key=f['key'], reason=str(error)))
                else:
                    opaque.append(dict(key=f['key'], reason='多语句方法，原文完整保留'))

    categories = dict(collections.Counter(c['category'] for c in classes.values()))
    gameplay_gets = [f for c in classes.values() if c['category'] in ('Upgrade', 'ResearchUpgrade', 'Spell')
                     for f in c['methods'] if f['returns'] in NUMERIC and f['name'].startswith('get')]
    summary = dict(classes=len(classes), methods=len(nodes), categories=categories,
                   research_entries=len(research), research_classes_found=sum(r['class'] in classes for r in research),
                   numeric_methods=numeric, single_return_methods=one_return, parsed_expression_methods=parsed,
                   remaining_numeric_methods=len(opaque), unindexed_files=unindexed, duplicate_signatures=duplicates,
                   random_methods=sum(f['uses_rng'] for f in nodes.values()),
                   query_methods_with_possible_writes=len(getters_with_writes),
                   gameplay_numeric_get_methods=len(gameplay_gets),
                   gameplay_parsed_get_expressions=sum('expression_ast' in f for f in gameplay_gets))
    # 无深度上限的语法调用闭包。它仅用于发现漏掉的依赖，不作候选排除依据。
    closures = {}
    for root in ('Formulas.getManaPerTickReal', 'Formulas.getMaxManaReal', 'Formulas.getAssistantsNumReal',
                 'Formulas.getProductionPerTickReal', 'Game.advanceTicks', 'Game.buyUpgrade', 'Game.buyBuilding',
                 'FactionExchangeUpgrade.get:costMultiplier'):
        todo, seen, refs = [root], set(), set()
        while todo:
            key = todo.pop()
            if key in seen:
                continue
            seen.add(key)
            f = nodes[key]
            refs.update(f['class_references'])
            todo.extend(k for k in f['calls'] + f['property_reads'] if k not in seen)
        closures[root] = dict(methods=sorted(seen), classes=sorted(refs),
                              research=sorted(c['research'] for c in classes.values()
                                              if c.get('research') and c['name'] in refs))
    report = dict(note='语法审计；动态调用、别名、属性读写尚不构成完整数据流证明。原始方法和未解析项全部保留。',
                  summary=summary, getters_with_writes=getters_with_writes, opaque_numeric_methods=opaque,
                  root_closures=closures, classes=classes)
    (destination / 'mechanics.json').write_text(json.dumps(report, ensure_ascii=False, indent=1), encoding='utf-8')
    lines = ['# 客户端机制全集审计', '', '此索引不是公式重写器；未解析、多行、条件和副作用不被省略。', '',
             '```json', json.dumps(summary, ensure_ascii=False, indent=2), '```', '']
    for cls, c in classes.items():
        if c['category'] not in ('ResearchUpgrade', 'Upgrade', 'Spell', 'Building'):
            continue
        lines += ['## %s %s %s' % (c.get('research', ''), c['chinese'], cls), '',
                  '继承：%s；源码：%s' % (c['parent'], c['path']), '']
        for f in c['methods']:
            if f['name'] in UI or f['name'] == cls:
                continue
            lines += ['### %s(%s) : %s [%s:%d]' % (f['name'], f['params'], f['returns'], f['kind'], f['line']),
                      '', '```actionscript', f['body'], '```', '']
    (destination / 'methods.md').write_text('\n'.join(lines), encoding='utf-8')
    formulas = json.loads((ROOT / 'docs/研究公式（客户端）.json').read_text(encoding='utf-8'))['formulas']
    brief = []
    for r in research:
        fs = formulas.get(r['code'], [])
        brief.append('%s %s: %s' % (r['code'], r['name'], ' ; '.join(
            '%s=%s%s%s' % (x['label'] or x['method'], html.unescape(re.sub(r'<[^>]+>', '', x['html'])),
                            x.get('unit') or '', ' [A%s折算]' % x['asc'] if x.get('asc') else '') for x in fs)
            or '无已提取公式，查原始方法'))
    (destination / 'research-brief.txt').write_text('\n'.join(brief), encoding='utf-8')
    print(json.dumps(summary, ensure_ascii=False, indent=2))


if __name__ == '__main__':
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument('--output', type=Path, default=ROOT / 'build/mechanics-audit')
    audit(p.parse_args().output)
