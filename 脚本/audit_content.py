"""只读盘点 RGA 的源表、生成界面、链接和存档名称关联；输出到 build/audit。"""
from collections import Counter
from html.parser import HTMLParser
from pathlib import Path
import hashlib
import json
import re
import runpy
import subprocess
import xml.etree.ElementTree as ET
import zipfile

from openpyxl import load_workbook

ROOT = Path(__file__).resolve().parents[1]
OUT = ROOT / 'build' / 'audit'


class Page(HTMLParser):
    def __init__(self):
        super().__init__(convert_charrefs=True)
        self.ids, self.links, self.cards = [], [], []
        self.stack = []
        self.sections = Counter()
        self.images = Counter()

    def handle_starttag(self, tag, attrs):
        a = dict(attrs)
        if a.get('id'):
            self.ids.append(a['id'])
        if tag == 'a' and a.get('href', '').startswith('#'):
            self.links.append(a['href'][1:])
        if tag == 'section':
            self.sections[a.get('id', '')] += 1
        if tag == 'img':
            self.images['total'] += 1
            if a.get('src', '').startswith('data:image/'):
                self.images['embedded'] += 1
        if 'art' in a.get('class', '').split():
            self.cards.append(a)


def norm(v):
    return re.sub('[^a-z0-9]', '', str(v).lower())


def main():
    OUT.mkdir(parents=True, exist_ok=True)
    if not (OUT / 'artifact-metadata.json').exists():
        subprocess.run(['node', str(ROOT / '脚本' / 'audit_runtime.cjs'), '--metadata-only'],check=True)
    source = ROOT / '表格' / 'RG综合列表（4.3.14）.xlsx'
    book = load_workbook(source)
    inventory = []
    for n, ws in enumerate(book.worksheets, 1):
        cells = [{'ref': c.coordinate, 'value': str(c.value)} for row in ws for c in row if c.value is not None]
        inventory.append({'n': n, 'name': ws.title, 'state': ws.sheet_state,
                          'rows': ws.max_row, 'cols': ws.max_column, 'nonempty': len(cells),
                          'merged': len(ws.merged_cells.ranges)})
        (OUT / f'sheet{n}-current.json').write_text(json.dumps(cells, ensure_ascii=False, indent=2), encoding='utf-8')
        (OUT / f'sheet{n}-current.txt').write_text('\n'.join(c['ref'] + '\t' + c['value'].replace('\r', '\n').replace('\n', ' ⏎ ') for c in cells), encoding='utf-8')
    with zipfile.ZipFile(source) as z:
        xml_errors = []
        for name in z.namelist():
            if name.endswith(('.xml', '.rels')):
                try:
                    ET.fromstring(z.read(name))
                except ET.ParseError as exc:
                    xml_errors.append([name, str(exc)])
        media = {n: hashlib.sha256(z.read(n)).hexdigest() for n in z.namelist() if n.startswith('xl/media/')}
        image_xml = z.read('xl/cellimages.xml')
    with zipfile.ZipFile(ROOT / '表格' / '旧版' / 'RG综合列表（4.2.0.1）.xlsx') as z:
        old_media = {n: hashlib.sha256(z.read(n)).hexdigest() for n in z.namelist() if n.startswith('xl/media/')}
        images_unchanged = image_xml == z.read('xl/cellimages.xml') and media == old_media
    src = (ROOT / 'build' / 'RGA.html').read_text(encoding='utf-8')
    page = Page()
    page.feed(src)
    counts = Counter(page.ids)
    special = {'save/rws', 'save/arch'}
    valid = set(page.ids) | {s.removeprefix('sec-') for s in page.sections} | special
    broken = sorted({x for x in page.links if x and x not in valid})
    match = re.search(r'var SAVE_DATA = (.*?);\s*\n/\*', src, re.S)
    if not match:
        raise ValueError('SAVE_DATA not found')
    data = json.loads(match.group(1))
    (OUT / 'save-data.json').write_text(json.dumps(data, ensure_ascii=False), encoding='utf-8')
    tabs = data['tabs']
    rows = [r for t in tabs for r in t['rows']]
    trophies = {norm(r.get('name')): r.get('id') for r in rows if r.get('w') == 'trophy'}
    challenges = {norm(re.sub(r'^[^:]*:\s*', '', r.get('name', ''))): r.get('id') for r in rows if r.get('w') == 'challenge'}
    research = {}
    for r in rows:
        if r.get('w', '').startswith('research-upgrade-row'):
            for k in 'scdeawf':
                if r.get(k + '_id'):
                    research[norm(r[k + '_name'])] = r[k + '_id']
    metadata = json.loads((OUT / 'artifact-metadata.json').read_text(encoding='utf-8'))
    art_names = {norm(a['name']): a['id'] for a in metadata}
    meta_by_name = {norm(a['name']):a for a in metadata}
    gate_conflicts=[]
    for row in range(2,book.worksheets[9].max_row+1):
        name=str(book.worksheets[9].cell(row,2).value or '')
        en=re.split('[一-鿿]',name)[0].strip()
        a=meta_by_name.get(norm(en))
        rq=re.search(r'R(\d+)\+',str(book.worksheets[9].cell(row,4).value or ''))
        if a and rq and a.get('reincarnation') and int(rq.group(1))!=a['reincarnation']:
            gate_conflicts.append({'row':row,'name':a['name'],'table_R':int(rq.group(1)),'library_R':a['reincarnation']})
    (OUT / 'artifact-gate-conflicts.json').write_text(json.dumps(gate_conflicts,ensure_ascii=False,indent=2),encoding='utf-8')
    mapped = {}
    for prefix, lookup in [('t3-', challenges), ('t5-', research), ('t7-', trophies), ('t10-', art_names)]:
        cards = [c for c in page.cards if c.get('id', '').startswith(prefix)]
        missing, collisions = [], []
        for c in cards:
            names = c.get('data-en', '').split()
            hits = [(x, lookup[x]) for x in names if x in lookup]
            if not hits:
                missing.append({'id': c['id'], 'keys': names})
            if len({v for _, v in hits}) > 1:
                collisions.append({'id': c['id'], 'hits': hits})
        mapped[prefix] = {'cards': len(cards), 'unmapped': missing, 'ambiguous': collisions}
    # Formula strings here are descriptions, not evaluated spreadsheet formulas.
    unresolved_terms = []
    for guide in (ROOT / '攻略').glob('*.md'):
        unresolved_terms += [{'guide': guide.name, 'kind': k, 'name': v}
                             for k, v in re.findall(r'\{([^{}:]+):([^{}]+)\}', guide.read_text(encoding='utf-8'))
                             if v == 'A480']
    result = {'workbook': inventory, 'xml_errors': xml_errors, 'media_files': len(media),
              'cell_image_entries': len(re.findall(rb'<(?:\w+:)?cNvPr\b', image_xml)),
              'images_unchanged_from_old': images_unchanged,
              'html': {'sections': list(page.sections), 'cards': len(page.cards), 'images': dict(page.images),
                       'duplicate_ids': {k:v for k,v in counts.items() if v > 1}, 'broken_anchor_targets': broken,
                       'save_name_links_missing': {k:v for k,v in data['links'].items() if v not in valid}},
              'save_tabs': len(tabs), 'save_row_types': dict(Counter(r.get('w', 'heading') for r in rows)),
              'card_mapping': mapped, 'stale_research_references_in_guides': unresolved_terms,
              'artifact_library_count': len(metadata), 'noncard_artifacts': [a['name'] for a in metadata if norm(a['name']) not in {norm(c.get('data-en', '')) for c in page.cards if c.get('id', '').startswith('t10-')}],
              'source_sha256': hashlib.sha256(source.read_bytes()).hexdigest()}
    (OUT / 'inventory.json').write_text(json.dumps(result, ensure_ascii=False, indent=2), encoding='utf-8')
    oldbook = load_workbook(ROOT / '表格' / '旧版' / 'RG综合列表（4.2.0.1）.xlsx')
    edits = {n:runpy.run_path(str(ROOT / '脚本' / f'edits_sheet{n}.py'))['E'] for n in [1,2,3,4,6,7,8,10]}
    ns = runpy.run_path(str(ROOT / '脚本' / 'edits_sheet5.py'))
    research_src = json.loads((ROOT / '脚本' / 'research.json').read_text(encoding='utf-8'))
    bykey = {d['code'] + ('@A' if d['row'] == 24 and d['code'].startswith('E1') else ''):d for d in research_src}
    edits[5] = {'A40':ns['NOTE']}
    offsets = dict(name=0,code=1,fac=2,req=3,eff=4)
    for k, changes in ns['R'].items():
        d = bykey[k]
        for field, text in changes.items():
            edits[5][f"{d['col']}{d['row']+offsets[field]}"] = text
    losses = []
    for n, ws in enumerate(book.worksheets, 1):
        if n == 9: continue
        refs = set(edits.get(n,{})) | {c.coordinate for row in oldbook.worksheets[n-1] for c in row if isinstance(c.value,str) and not c.value.startswith('=')}
        for ref in refs:
            pre = edits.get(n,{}).get(ref, oldbook.worksheets[n-1][ref].value)
            post = ws[ref].value
            if not isinstance(pre,str) or not isinstance(post,str) or pre == post: continue
            before_nums = re.findall(r'\d+(?:\.\d+)?(?:e[+-]?\d+)?',pre,re.I)
            after_nums = re.findall(r'\d+(?:\.\d+)?(?:e[+-]?\d+)?',post,re.I)
            lost = list((Counter(before_nums)-Counter(after_nums)).elements())
            if lost and re.search('[一-鿿]',pre):
                losses.append({'sheet':n,'cell':ref,'before':pre,'after':post,'lost_numeric_tokens':lost})
            elif re.match(r'^[A-Za-z][^\n\r]*[一-鿿]',pre) and re.search(r'新图标|触发|持续|施法|根据|达到|解锁|提升|增加|降低',pre) and not re.search(r'新图标|触发|持续|施法|根据|达到|解锁|提升|增加|降低',post):
                losses.append({'sheet':n,'cell':ref,'before':pre,'after':post,'lost_description':True})
    (OUT / 'translation-loss.json').write_text(json.dumps(losses,ensure_ascii=False,indent=2),encoding='utf-8')
    result['translation_loss_candidates'] = len(losses)
    # Independently extract the 4.3.9 movement list from the official notes.
    notes = (ROOT / '资料' / '官方4.3+补丁说明.txt').read_text(encoding='utf-8-sig')
    changes = re.findall(r'\* ([SCDEAWF]\d+) \(([^)]+)\) moved to ([SCDEAWF]\d+)',notes)
    sheet5 = book.worksheets[4]
    by_name = {}
    for row in range(4,39,5):
        for col in range(3,sheet5.max_column+1):
            name = sheet5.cell(row,col).value
            code = sheet5.cell(row+1,col).value
            if isinstance(name,str) and isinstance(code,str) and re.match('[SCDEAWF]\\d+',code):
                by_name[norm(re.split('[一-鿿]',name)[0].strip())] = (code.splitlines()[0],sheet5.cell(row,col).coordinate)
    movement_checks = []
    for old,name,new in changes:
        actual = by_name.get(norm(name))
        # The official 4.3.9 heading calls S2875 "Manipulation", while its
        # 4.3.0 section identifies S2875 as Scholarship and S3200 as Manipulation.
        if old == 'S2875':
            actual = by_name.get(norm('Scholarship'))
        movement_checks.append({'old':old,'name':name,'expected':new,'actual':actual,'ok':bool(actual and actual[0]==new),
                                'official_name_conflict':old=='S2875'})
    latest_requirements = {
        'S30':['5000'],'S50':['10000'],'S425':['50000'],'S700':['250'],'S1275':['500000'],'S1500':['500000'],
        'C700':['250'],'C1300':['100000'],'C1500':['4000'],'D135':['4000'],'D320':['12000'],'D700':['250'],
        'E50':['1250'],'E300':['1500'],'E700':['250'],'E450':['40000'],'A50':['750'],'A120':['15000'],
        'A575':['10000'],'A700':['250'],'W120':['500'],'W300':['5000'],'W700':['250'],'W3050':['1e8']}
    requirement_checks = []
    for code,numbers in latest_requirements.items():
        match = next(((r,c) for r in range(5,36,5) for c in range(3,sheet5.max_column+1)
                      if str(sheet5.cell(r,c).value).splitlines()[0]==code),None)
        text = str(sheet5.cell(match[0]+2,match[1]).value) if match else ''
        requirement_checks.append({'code':code,'expected_tokens':numbers,'actual':text,'ok':all(x in text for x in numbers)})
    (OUT / 'official-crosschecks.json').write_text(json.dumps({'research_439_movements':movement_checks,'research_4310_requirements':requirement_checks},ensure_ascii=False,indent=2),encoding='utf-8')
    valid_codes = set(x[0] for x in by_name.values())
    invalid_references=[]
    for n, ws in enumerate(book.worksheets,1):
        for row in ws:
            for cell in row:
                if not isinstance(cell.value,str) or cell.value.startswith('='): continue
                value=re.sub(r'（原[SCDEAWF]\d+[^）]*）','',cell.value)
                hits={x for x in re.findall(r'(?<![A-Za-z0-9])([SCDEAWF]\d+)',value) if x not in valid_codes and int(x[1:])>=10}
                if hits:invalid_references.append({'sheet':n,'cell':cell.coordinate,'invalid':sorted(hits),'text':cell.value})
    (OUT / 'invalid-research-references.json').write_text(json.dumps(invalid_references,ensure_ascii=False,indent=2),encoding='utf-8')
    result['official_439_code_checks'] = {'count':len(movement_checks),'passed':sum(x['ok'] for x in movement_checks)}
    result['official_4310_requirement_number_checks'] = {'count':len(requirement_checks),'passed':sum(x['ok'] for x in requirement_checks)}
    (OUT / 'inventory.json').write_text(json.dumps(result, ensure_ascii=False, indent=2), encoding='utf-8')
    print('Official renumbering checks:',len(movement_checks),'passed',sum(x['ok'] for x in movement_checks))
    print('Official 4.3.10 requirement checks:',len(requirement_checks),'passed',sum(x['ok'] for x in requirement_checks))
    print('Translation loss candidates:',len(losses))
    print(json.dumps(result, ensure_ascii=False, indent=2))


if __name__ == '__main__':
    main()
