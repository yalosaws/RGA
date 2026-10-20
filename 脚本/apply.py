import re, json, zipfile, shutil, os, sys, html
from openpyxl import load_workbook
from openpyxl.utils import column_index_from_string as CI, get_column_letter as CL
from openpyxl.utils.cell import coordinate_from_string

D = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(D)
SRC = os.path.join(ROOT, '表格', '旧版', 'RG综合列表（4.2.0.1）.xlsx')
DST = os.path.join(ROOT, '表格', 'RG综合列表（4.3.14）.xlsx')

def load(n):
    ns = {}
    exec(open(os.path.join(D, n), encoding='utf-8').read(), ns)
    return ns

# ---------- 收集编辑：{sheet_index(0-based): {ref: text}} ----------
edits = {}
for idx, fn in [(0,'edits_sheet1.py'),(1,'edits_sheet2.py'),(2,'edits_sheet3.py'),(3,'edits_sheet4.py'),
                (5,'edits_sheet6.py'),(6,'edits_sheet7.py'),(7,'edits_sheet8.py'),(9,'edits_sheet10.py')]:
    edits[idx] = dict(load(fn)['E'])
# 研究表
ns = load('edits_sheet5.py'); R = ns['R']
res = json.load(open(os.path.join(D, 'research.json'), encoding='utf-8'))
bykey = {}
for d in res:
    k = d['code'] + ('@A' if d['row'] == 24 and d['code'].startswith('E1') else '')
    bykey[k] = d
e5 = {}
off = dict(name=0, code=1, fac=2, req=3, eff=4)
for k, ch in R.items():
    d = bykey[k]
    for f, v in ch.items():
        e5[f"{d['col']}{d['row'] + off[f]}"] = v
e5['A40'] = ns['NOTE']
edits[4] = e5

# ---------- 预检：合并单元格 ----------
wb = load_workbook(SRC)
problems = []
for si, ed in edits.items():
    ws = wb.worksheets[si]
    for ref in ed:
        for mr in ws.merged_cells.ranges:
            if ref in mr and ref != mr.start_cell.coordinate:
                problems.append((ws.title, ref, str(mr)))
if problems:
    print('MERGED-CELL PROBLEMS:', problems); sys.exit(1)
total = sum(len(v) for v in edits.values())
print('edits per sheet:', {k: len(v) for k, v in edits.items()}, 'total', total)

# ---------- 写入 ----------
shutil.copy2(SRC, DST)
zin = zipfile.ZipFile(SRC)
names = zin.namelist()
wbx = zin.read('xl/workbook.xml').decode('utf-8')
rels = zin.read('xl/_rels/workbook.xml.rels').decode('utf-8')
rid2t = dict(re.findall(r'Id="(rId\d+)"[^>]*Target="([^"]+)"', rels))
rid2t.update({a: b for b, a in re.findall(r'Target="([^"]+)"[^>]*Id="(rId\d+)"', rels)})
sheet_rids = re.findall(r'<sheet [^>]*r:id="(rId\d+)"', wbx)
sheet_files = ['xl/' + rid2t[r].lstrip('/').replace('xl/', '') for r in sheet_rids]

ss = zin.read('xl/sharedStrings.xml').decode('utf-8')
n_si = len(re.findall(r'<si>', ss)) + len(re.findall(r'<si/>', ss))
new_si = []

def add_string(text):
    global n_si
    t = text.replace('\r\n', '\n').replace('\r', '\n')
    new_si.append('<si><t xml:space="preserve">' + html.escape(t, quote=False) + '</t></si>')
    n_si += 1
    return n_si - 1

def col_of(ref):
    return CI(coordinate_from_string(ref)[0])

def row_of(ref):
    return coordinate_from_string(ref)[1]

cell_re_tpl = r'<c r="{ref}"(?:\s[^>]*?)?(?:/>|>.*?</c>)'

def patch_sheet(xml, ed):
    for ref, text in ed.items():
        idx = add_string(text)
        m = re.search(cell_re_tpl.format(ref=ref), xml, re.S)
        if m:
            sm = re.search(r'\ss="(\d+)"', m.group(0)[:m.group(0).find('>') + 1])
            s = f' s="{sm.group(1)}"' if sm else ''
            xml = xml[:m.start()] + f'<c r="{ref}"{s} t="s"><v>{idx}</v></c>' + xml[m.end():]
            continue
        # 单元格不存在：找样式参考（同行左侧最近的格子，否则同列上方最近的格子）
        r, c = row_of(ref), col_of(ref)
        style = ''
        rm = re.search(rf'<row r="{r}"[^>]*?(?:/>|>(.*?)</row>)', xml, re.S)
        if rm and rm.group(1):
            cands = [(col_of(x.group(1)), x.group(2)) for x in re.finditer(r'<c r="([A-Z]+\d+)"((?:\s[^>]*)?)(?:/>|>)', rm.group(1))]
            left = [s for cc, s in cands if cc < c]
            if left:
                sm = re.search(r's="(\d+)"', left[-1]); style = f' s="{sm.group(1)}"' if sm else ''
        if not style:
            for rr in range(r - 1, 0, -1):
                mm = re.search(rf'<c r="{CL(c)}{rr}"((?:\s[^>]*)?)(?:/>|>)', xml)
                if mm:
                    sm = re.search(r's="(\d+)"', mm.group(1)); style = f' s="{sm.group(1)}"' if sm else ''
                    break
        newc = f'<c r="{ref}"{style} t="s"><v>{idx}</v></c>'
        if rm:
            rowxml = rm.group(0)
            if rowxml.endswith('/>'):
                newrow = rowxml[:-2] + '>' + newc + '</row>'
            else:
                inner = rm.group(1)
                cells = list(re.finditer(r'<c r="([A-Z]+\d+)"(?:\s[^>]*?)?(?:/>|>.*?</c>)', inner, re.S))
                pos = len(inner)
                for x in cells:
                    if col_of(x.group(1)) > c:
                        pos = x.start(); break
                inner2 = inner[:pos] + newc + inner[pos:]
                head = rowxml[:rowxml.find('>') + 1]
                head = re.sub(r'\sspans="[^"]*"', '', head)
                newrow = head + inner2 + '</row>'
            xml = xml[:rm.start()] + newrow + xml[rm.end():]
        else:
            rows = list(re.finditer(r'<row r="(\d+)"', xml))
            insert_at = None
            for x in rows:
                if int(x.group(1)) > r:
                    insert_at = x.start(); break
            newrow = f'<row r="{r}">{newc}</row>'
            if insert_at is None:
                insert_at = xml.find('</sheetData>')
            xml = xml[:insert_at] + newrow + xml[insert_at:]
    # 更新 dimension
    refs = re.findall(r'<c r="([A-Z]+)(\d+)"', xml)
    if refs:
        maxc = max(CI(a) for a, b in refs); maxr = max(int(b) for a, b in refs)
        xml = re.sub(r'<dimension ref="[^"]*"/>', f'<dimension ref="A1:{CL(maxc)}{maxr}"/>', xml, count=1)
    return xml

patched = {}
for si, ed in edits.items():
    f = sheet_files[si]
    patched[f] = patch_sheet(zin.read(f).decode('utf-8'), ed)

ss2 = ss.replace('</sst>', ''.join(new_si) + '</sst>')
ss2 = re.sub(r'count="\d+"', lambda m: m.group(0), ss2, count=1)
ss2 = re.sub(r'uniqueCount="\d+"', f'uniqueCount="{n_si}"', ss2, count=1)
cnt = re.search(r'\scount="(\d+)"', ss2)
if cnt:
    ss2 = ss2.replace(cnt.group(0), f' count="{int(cnt.group(1)) + len(new_si)}"', 1)

tmp = DST + '.tmp'
with zipfile.ZipFile(tmp, 'w') as zout:
    for info in zin.infolist():
        data = zin.read(info.filename)
        if info.filename == 'xl/sharedStrings.xml':
            data = ss2.encode('utf-8')
        elif info.filename in patched:
            data = patched[info.filename].encode('utf-8')
        zout.writestr(info, data, compress_type=info.compress_type)
os.replace(tmp, DST)
print('written', DST, 'new strings', len(new_si))

# 统一成游戏内译名（汉化包），规则见 rename.py / 译名.py
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import rename
rename.main(DST, DST)
