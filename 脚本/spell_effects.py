"""保留条件、循环和调用顺序，导出法术 onEffect 原文与可读名版本。

python -X utf8 -I 脚本/spell_effects.py build/installed-as3-deobf/scripts 资料/法术施放动作（客户端4.3.14）.json
这是施放动作索引，辅助方法仍需按来源继续查；不是未来收益预测表。
"""
import json
from pathlib import Path
import re
import sys

sys.path.insert(0, str(Path(__file__).resolve().parent))
from as2py import tokenize, py_unescape


def body(src, method, kind=None):
    tokens = tokenize(src)
    for i in range(len(tokens) - 1):
        if tokens[i].v != 'function':
            continue
        at = i + 1
        if tokens[at].v in ('get', 'set'):
            if kind is not None and tokens[at].v != kind:
                continue
            at += 1
        elif kind in ('get', 'set'):
            continue
        if tokens[at].v != method:
            continue
        j = at + 1
        while tokens[j].v != '{':
            j += 1
        start, depth = tokens[j].pos, 0
        for t in tokens[j:]:
            if t.k == 'op' and t.v == '{':
                depth += 1
            elif t.k == 'op' and t.v == '}':
                depth -= 1
                if depth == 0:
                    return src[start:t.pos + 1]
    raise ValueError('找不到方法：' + method)


def main(source, dst):
    root = Path(__file__).resolve().parents[1]
    members = json.loads((root / 'build/client-audit/member-names.json').read_text(encoding='utf-8'))
    unique = {}
    for k, real in members.items():
        _, obf = k.split('\t')
        unique.setdefault('§' + obf + '§', set()).add(real)
    names = {'§8G§': 'Game', '§&c§': 'Stats', '§#!!§': 'Core'}
    sources = []
    for file in sorted(Path(source).rglob('*.as')):
        src = file.read_text(encoding='utf-8')
        cls = re.search(r'public class (\S+)', src)
        name = re.search(r'§1i§\s*=\s*_\("((?:[^"\\]|\\.)*)"\)', src)
        if cls and name:
            names[cls[1]] = 'U<' + py_unescape(name[1]) + '>'
        if 'function onEffect(' in src and (name or file.name == '§84§.as'):
            sources.append((file, src, py_unescape(name[1]) if name else '法术公共基类'))

    def readable(src):
        def replace_member(m):
            vals = unique.get(m[0])
            return next(iter(vals)) if vals and len(vals) == 1 else m[0]
        # 仅替换点号后的成员，避免把同名的类名误换成成员。
        src = re.sub(r'(?<=\.)§[^§]+§', replace_member, src)
        return re.sub(r'§[^§]+§', lambda m: names.get(m[0], m[0]), src)

    records = []
    for file, src, name in sources:
        raw = body(src, 'onEffect')
        records.append(dict(name=name, source=str(file.relative_to(source)),
                            on_effect=raw, readable=readable(raw)))
    result = dict(note='保留原条件、循环和调用顺序；super.onEffect 见公共基类；辅助调用未递归展开。',
                  fields={'§23§': '是否激活', "§'!X§": '已经激活的 tick 数',
                          '§0n§': '本次持续时间 tick', '§4"I§': '初始持续时间 tick',
                          '§2-§': '本局施放次数', '§`r§': '激活层级（从 0 开始）'},
                  spells=records)
    Path(dst).write_text(json.dumps(result, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
    print(len(records), '个施放动作（含公共基类）→', dst)


if __name__ == '__main__':
    main(sys.argv[1], sys.argv[2])
