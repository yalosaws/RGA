"""从同一 SWF 的 pcode 声明生成 32 位 AVM2 槽布局候选；须与运行时槽元数据核对。"""
import argparse
import hashlib
import json
from pathlib import Path
import re
from urllib.parse import unquote

ROOT = Path(__file__).resolve().parents[1]
FIELD = re.compile(r'^\s*(?:public|private|protected|internal)\s+(static\s+)?(var|const)\s+(§[^§]+§|\w+)\s*:\s*((?:§[^§]+§|[^;=])+)')


def storage(kind):
    return {'int': 4, 'uint': 5, 'Boolean': 6, 'Number': 7, 'String': 1,
            'Object': 0, '*': 0, 'Namespace': 2}.get(kind, 3)


def declarations(folder):
    classes = {}
    for path in Path(folder).rglob('*.pcode'):
        text = path.read_text(encoding='utf-8')
        match = re.search(r'\bclass\s+(§[^§]+§|\w+)(?:\s+extends\s+(§[^§]+§|[\w.]+))?', text)
        if not match:
            continue
        # Only top-level trait declarations; method bodies can contain local declarations.
        fields = []
        for line in text.splitlines():
            if re.match(r'^\s{6}(?:public |private |protected |internal )?(?:override |final )?(?:static )?function\b', line):
                break
            found = FIELD.match(line)
            if found:
                static, declaration, name, kind = found.groups()
                fields.append(dict(name=name.strip('§'), type=kind.strip().replace('§', ''),
                                   static=bool(static), constant=declaration == 'const', obfuscated=name.startswith('§'),
                                   storage=storage(kind.strip().replace('§', ''))))
        name = match[1].strip('§')
        classes[name] = dict(base=(match[2] or 'Object').strip('§'), fields=fields,
                             source=str(path.relative_to(folder)),
                             sha256=hashlib.sha256(text.encode()).hexdigest())
    return classes


def pack(fields, start, align_double=True):
    ints = [field for field in fields if field['storage'] in (4, 5, 6)]
    pointers = [field for field in fields if field['storage'] <= 3]
    doubles = [field for field in fields if field['storage'] == 7]
    offsets = [start, start + len(ints) * 4, start + (len(ints) + len(pointers)) * 4]
    if doubles and align_double:
        offsets[2] = (offsets[2] + 7) & ~7
    result = []
    for field in fields:
        group = 0 if field['storage'] in (4, 5, 6) else 2 if field['storage'] == 7 else 1
        result.append(dict(field, offset=offsets[group]))
        offsets[group] += 8 if group == 2 else 4
    return result, max(offsets)


def layouts(classes):
    pending = set(classes)
    while pending:
        progress = False
        for name in list(pending):
            definition = classes[name]
            base = definition['base']
            if base == 'Object':
                start = 16
            elif base in classes and 'instance_end' in classes[base]:
                start = classes[base]['instance_end']
            else:
                continue
            definition['instance'], definition['instance_end'] = pack([f for f in definition['fields'] if not f['static']], start)
            pending.remove(name)
            progress = True
        if not progress:
            break
    for name, definition in classes.items():
        definition['static'], definition['static_end'] = pack([f for f in definition['fields'] if f['static']], 24)
    return classes


def generate(folder=None):
    folder = Path(folder or ROOT / 'build/installed-pcode/scripts')
    provenance = json.loads((ROOT / 'build/rg_installed_game.py.manifest.json').read_text(encoding='utf-8'))
    return dict(schema=1, swf_sha256=provenance['swf_sha256'], classes=layouts(declarations(folder)))


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--folder', type=Path, default=ROOT / 'build/installed-pcode/scripts')
    parser.add_argument('--output', type=Path, default=ROOT / 'build/live-layout-candidates.json')
    args = parser.parse_args()
    classes = layouts(declarations(args.folder))
    args.output.write_text(json.dumps(classes, ensure_ascii=False, indent=2), encoding='utf-8')
    print(json.dumps({f['name']: (f['type'], hex(f['offset'])) for f in classes['8G']['static']}, ensure_ascii=False))


if __name__ == '__main__':
    main()
