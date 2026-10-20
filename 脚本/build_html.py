"""把综合列表和两篇攻略合成一个 HTML：攻略里的 {类:名} 专名链接到表格里对应的格子。

用法：python 脚本/build_html.py [综合列表.xlsx] [输出.html]
默认读 表格/RG综合列表（4.3.14）.xlsx，写到 Realm Grinder 资料.html。
openpyxl 只用来读取（不能用它保存这个表，见 CLAUDE.md）。
"""
import base64
import html
import os
import re
import sys
import zipfile

from openpyxl import load_workbook
from openpyxl.utils import get_column_letter

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import md2html
import save_tools

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC = sys.argv[1] if len(sys.argv) > 1 else os.path.join(ROOT, '表格', 'RG综合列表（4.3.14）.xlsx')
DST = sys.argv[2] if len(sys.argv) > 2 else os.path.join(ROOT, 'Realm Grinder 资料.html')
GUIDES = [('r0', 'R0 攻略', '攻略/Realm-Grinder-R0攻略.md'), ('a0', 'A0 攻略要点', '攻略/A0攻略要点.md')]
# 工作表序号（按工作簿顺序，从 1 起）→ 导航名、标题；9 是 WPS 隐藏的图片表
SHEETS = {1: ('阵营', '阵营升级、遗产、UB、血统、世系、契印、法术'), 2: ('传承', '传承组合（Legacy Combo）'),
          3: ('挑战', '挑战（Challenge）'), 4: ('UB 分布', 'UB 分布'), 5: ('研究', '研究（Research）'),
          6: ('建筑升级', '建筑升级（产能加成部分忽略 Ascension 惩罚）'), 7: ('隐藏奖杯', '隐藏奖杯（Secret Trophy）'),
          8: ('活动', '活动（Event）'), 10: ('遗物', '遗物（Artifact）')}
# 各类专名优先在哪些表里找
PREFER = {'阵': [1, 3], '法': [1, 8], '升': [1, 6, 3, 5, 2], '建': [6, 4, 1], '隐': [7], '奖': [7, 1, 3],
          '研': [5], '挑': [3], '遗': [10]}
ALIAS = {'TC': '征税', 'CtA': '动员令', 'HoL': '传说圣殿', 'BF': '嗜血狂热', 'NT': '暗夜眷顾', 'LS': '雷击', 'MB': '月之祝福'}
# 遗物表里阵营遗物按全阶英豪奖杯的顺序排，每个阵营两个
ART_FACTIONS = ['仙灵', '精灵', '天使', '地精', '亡灵', '恶魔', '泰坦', '德鲁伊', '无面者', '矮人', '卓尔', '佣兵']
CJK = re.compile(r'[一-鿿]')
SPLIT = re.compile(r'\r\n|\r|\n')


def cell_images(path):
    """WPS 单元格图片：ID_xxx → data URI"""
    z = zipfile.ZipFile(path)
    rels = dict(re.findall(r'Id="(rId\d+)"[^>]*Target="([^"]+)"', z.read('xl/_rels/cellimages.xml.rels').decode()))
    out = {}
    for name, rid in re.findall(r'name="(ID_[0-9A-F]+)".*?r:embed="(rId\d+)"', z.read('xl/cellimages.xml').decode(), re.S):
        target = 'xl/' + rels[rid]
        ext = target.rsplit('.', 1)[-1].lower()
        mime = 'image/jpeg' if ext in ('jpg', 'jpeg') else 'image/' + ext
        out[name] = 'data:%s;base64,%s' % (mime, base64.b64encode(z.read(target)).decode())
    return out


def text_of(v):
    if v is None:
        return ''
    if isinstance(v, float) and v.is_integer():
        return str(int(v))
    return str(v)


def name_of(text):
    """名称格里的中文名：「英文\\n中文名（括注）」「中文名\\n英文」「English中文名」"""
    lines = [l.strip() for l in SPLIT.split(text) if l.strip()]
    if len(lines) >= 2 and any(not CJK.search(l) for l in lines):
        zh = next((l for l in lines if CJK.search(l)), '')
        if zh.startswith(('（', '(')):  # 只有括注（glho kohhl snod）：用英文名
            return next(l for l in lines if not CJK.search(l))
    elif len(lines) == 1:
        m = re.match(r"^[A-Za-z][A-Za-z0-9 '’\-,.!&:]+?([一-鿿].*)$", lines[0])
        zh = m.group(1) if m else ''
    else:
        return None
    zh = re.split(r'[（(]', zh)[0].strip()
    zh = re.sub(r'系列$', '', zh)
    return zh if zh and len(zh) <= 16 and not re.search(r'[：:，,；;。]', zh) else None


def build_sheet(n, ws, imgs, index, cells):
    merged, covered = {}, set()
    for rg in ws.merged_cells.ranges:
        merged[(rg.min_row, rg.min_col)] = (rg.max_row - rg.min_row + 1, rg.max_col - rg.min_col + 1)
        for r in range(rg.min_row, rg.max_row + 1):
            for c in range(rg.min_col, rg.max_col + 1):
                if (r, c) != (rg.min_row, rg.min_col):
                    covered.add((r, c))
    last_r = last_c = 1
    for row in ws.iter_rows():
        for c in row:
            if c.value is not None:
                span = merged.get((c.row, c.column), (1, 1))
                last_r = max(last_r, c.row + span[0] - 1)
                last_c = max(last_c, c.column + span[1] - 1)
    cols, total = [], 0
    for c in range(1, last_c + 1):
        w = ws.column_dimensions[get_column_letter(c)].width or 9
        px = max(36, min(int(w * 7.5), 420))
        cols.append('<col style="width:%dpx">' % px)
        total += px
    rows = []
    for r in range(1, last_r + 1):
        tds = []
        for c in range(1, last_c + 1):
            if (r, c) in covered:
                continue
            cell = ws.cell(r, c)
            ref = '%s%d' % (get_column_letter(c), r)
            cid = 't%d-%s' % (n, ref)
            attrs = ' id="%s"' % cid
            span = merged.get((r, c))
            if span:
                if span[0] > 1: attrs += ' rowspan="%d"' % span[0]
                if span[1] > 1: attrs += ' colspan="%d"' % span[1]
            style = []
            if cell.fill is not None and cell.fill.fill_type == 'solid':
                rgb = cell.fill.fgColor.rgb if cell.fill.fgColor.type == 'rgb' else None
                if isinstance(rgb, str) and len(rgb) == 8 and rgb[2:].upper() not in ('FFFFFF', '000000'):
                    style.append('background:#' + rgb[2:])
            if cell.font is not None and cell.font.b:
                style.append('font-weight:600')
            if style:
                attrs += ' style="%s"' % ';'.join(style)
            v = text_of(cell.value)
            m = re.match(r'^=_xlfn\.DISPIMG\("(ID_[0-9A-F]+)"', v)
            if m:
                body = '<img alt="" src="%s">' % imgs[m.group(1)] if m.group(1) in imgs else ''
            else:
                body = '<br>'.join(html.escape(l) for l in SPLIT.split(v))
                if v:
                    cells[(n, ref)] = v
                    nm = name_of(v)
                    if nm:
                        index.setdefault(nm, []).append((n, ref))
                    # 描述里列出的升级「商贾王侯（贸易领主）：……」，排在名称格后面
                    for m2 in re.finditer(r'(?:^|[\r\n])([一-鿿·]{2,10})(?:[（(][^）)]*[）)])?[：:]', v):
                        index.setdefault('~' + m2.group(1), []).append((n, ref))
            tds.append('<td%s>%s</td>' % (attrs, body))
        rows.append('<tr>' + ''.join(tds) + '</tr>')
    # 固定列宽的表要给出总宽度，否则会被压到窗口宽
    return '<div class="wrap"><table class="sheet" style="width:%dpx"><colgroup>%s</colgroup>%s</table></div>' % (total, ''.join(cols), ''.join(rows))


def code_maps(cells):
    """研究代号、阵营升级代号、挑战代号、阵营遗物 → 格子"""
    research, upgrade, challenge, artifact = {}, {}, {}, {}
    for (n, ref), v in cells.items():
        col, row = re.match(r'([A-Z]+)(\d+)', ref).groups()
        row = int(row)
        if n == 5 and cells.get((5, 'B%d' % row)) == '代号':
            m = re.match(r'([SCDEAWF]\d+)', v)
            if m:
                research.setdefault(m.group(1), (5, '%s%d' % (col, row - 1)))
        if n == 1 and col == 'C':
            m = re.search(r'[（(]([A-Z]{2})[）)]', v)
            if m:
                for k, c in enumerate('DEFGHIJKL STU'.replace(' ', '')):
                    upgrade['%s%d' % (m.group(1), k + 1)] = (1, '%s%d' % (c, row))
        if n == 3 and col == 'B':
            m = re.search(r'[（(]([A-Z]{2})[）)]', v)
            if m:
                fname = SPLIT.split(v)[0].strip()
                for k, c in enumerate('CDEFGH'):
                    if (3, '%s%d' % (c, row)) in cells:
                        challenge['%sC%d' % (m.group(1), k + 1)] = (3, '%s%d' % (c, row))
                        challenge['%s挑战 %d' % (fname, k + 1)] = (3, '%s%d' % (c, row))
    for k, f in enumerate(ART_FACTIONS):
        for j in (1, 2):
            artifact['%s %d' % (f, j)] = (10, 'B%d' % (31 + 2 * k + j - 1))
    return research, upgrade, challenge, artifact


def main():
    wb = load_workbook(SRC)
    imgs = cell_images(SRC)
    index, cells, sections = {}, {}, {}
    for n, ws in enumerate(wb.worksheets, 1):
        if n in SHEETS:
            sections[n] = build_sheet(n, ws, imgs, index, cells)
    research, upgrade, challenge, artifact = code_maps(cells)
    missing = []

    def find(kind, name):
        key = ALIAS.get(name, name)
        hit = None
        # 攻略按 4.3.9 改号后的新代号写；表里只有「原 xxx」注记的旧代号不算
        if kind == '研': hit = research.get(key)
        elif kind == '挑': hit = challenge.get(key)
        elif kind == '遗': hit = artifact.get(key)
        if not hit and re.fullmatch(r'[A-Z]{2}\d+', key): hit = upgrade.get(key)
        for k in (key, '~' + key):  # 先找名称格，再找描述里列出的名称
            if not hit and k in index:
                places = index[k]
                hit = next((p for s in PREFER.get(kind, []) for p in places if p[0] == s), places[0])
        return 't%d-%s' % hit if hit else None

    def link(kind, name):
        hit = find(kind, name)
        if not hit:
            missing.append('%s:%s' % (kind, name))
            return None
        return '#' + hit

    guides = {}
    for gid, label, path in GUIDES:
        title, body = md2html.convert(open(os.path.join(ROOT, path), encoding='utf-8').read(), link)
        guides[gid] = body
    nav = ''.join('<a href="#%s" data-sec="%s">%s</a>' % (g, g, l) for g, l, _ in GUIDES)
    nav += '<span class="sep"></span>' + ''.join('<a href="#t%d" data-sec="t%d">%s</a>' % (n, n, SHEETS[n][0]) for n in sections)
    body = ''.join('<section id="sec-%s" class="guide" hidden>%s</section>' % (g, guides[g]) for g, _, _ in GUIDES)
    body += ''.join('<section id="sec-t%d" class="table" hidden><h1>%s</h1>%s</section>' % (n, SHEETS[n][1], sections[n]) for n in sections)
    # 存档工具：只读存档查看、法术预报、遗物预测（数据和库来自 工具/RG-tools）
    save_js, save_miss = '', []
    if os.path.isdir(save_tools.RG):
        save_html, save_js, save_miss = save_tools.build(find, {'t%d-%s' % c: code for code, c in research.items()})
        nav += '<span class="sep"></span><a href="#save" data-sec="save">我的存档</a>'
        body += save_html
    else:
        print('没有 工具/RG-tools，跳过「我的存档」（git clone https://github.com/shadowgull/dox4242.github.io 工具/RG-tools）')
    page = TEMPLATE.replace('%%NAV%%', nav).replace('%%BODY%%', body).replace('%%TCOLORS%%', md2html.CSS[md2html.CSS.index('.t-fa'):md2html.CSS.index('[class^')])
    page = page.replace('%%SAVEJS%%', save_js)  # 最后替换：脚本里可能有别的 %% 记号
    open(DST, 'w', encoding='utf-8').write(page)
    print('写入', DST, '%.1f MB' % (len(page.encode()) / 1e6))
    print('专名链接：%d 个没找到对应格子' % len(missing))
    for x in sorted(set(missing)):
        print('  ', x)
    if save_miss:
        print('存档工具：%d 个名字没翻译，显示英文：' % len(save_miss), '、'.join(save_miss))


TEMPLATE = r"""<!doctype html>
<html lang="zh-CN"><head><meta charset="utf-8"><meta name="viewport" content="width=device-width,initial-scale=1">
<title>Realm Grinder 资料</title>
<style>
:root{--bg:#fff;--fg:#222;--muted:#666;--line:#d6d6d6;--head:#5a2fa8;--accent:#7a4bd0;--soft:#f4f0fb;--flash:#ffe58a}
*{box-sizing:border-box}
body{margin:0;background:var(--bg);color:var(--fg);font:15px/1.65 "Microsoft YaHei","PingFang SC",sans-serif}
header{position:sticky;top:0;z-index:5;background:#fff;border-bottom:2px solid var(--accent);display:flex;align-items:center;gap:8px;padding:6px 12px}
header b{color:var(--head);white-space:nowrap}
nav{display:flex;gap:2px;overflow-x:auto;flex:1;scrollbar-width:thin}
nav a{padding:4px 10px;border-radius:6px;color:var(--fg);text-decoration:none;white-space:nowrap;font-size:14px}
nav a.on{background:var(--accent);color:#fff}
nav .sep{border-left:1px solid var(--line);margin:4px 6px}
#q{width:180px;padding:4px 8px;border:1px solid var(--line);border-radius:6px;font:inherit;font-size:14px}
#res{position:fixed;right:12px;top:48px;width:min(460px,calc(100vw - 24px));max-height:70vh;overflow:auto;background:#fff;border:1px solid var(--line);border-radius:8px;box-shadow:0 6px 24px rgba(0,0,0,.15);z-index:6}
#res a{display:block;padding:6px 10px;border-bottom:1px solid #eee;color:var(--fg);text-decoration:none;font-size:13px}
#res a:hover{background:var(--soft)} #res small{color:var(--muted);margin-right:6px}
main{padding:12px 16px 80px}
section.guide{max-width:920px;margin:0 auto}
.guide h1{font-size:24px;border-bottom:3px solid var(--accent);padding-bottom:6px;margin:8px 0 12px}
.guide h2{font-size:19px;color:var(--head);margin:22px 0 8px;border-left:5px solid var(--accent);padding-left:8px}
.guide h3{font-size:16px;margin:16px 0 6px}
.guide blockquote{margin:0 0 12px;padding:8px 12px;background:var(--soft);border-left:4px solid #b9a3e3;color:#444;font-size:14px}
.guide hr{border:none;border-top:1px solid #ddd;margin:16px 0}
.guide code{font-family:Consolas,monospace;background:#eee;padding:1px 4px;border-radius:3px}
.guide table{border-collapse:collapse;margin:8px 0 12px;width:100%}
.guide th,.guide td{border:1px solid #ccc;padding:5px 8px;text-align:left;vertical-align:top}
.guide th{background:#ede6f8}
.guide ul,.guide ol{padding-left:24px}
%%TCOLORS%%
[class^="t-"]{font-weight:600}
a[class^="t-"]{text-decoration:underline dotted;text-underline-offset:3px}
a[class^="t-"]:hover{text-decoration-style:solid}
.legend{font-size:13px}.legend span{margin-right:14px;white-space:nowrap}
.legend span::before{content:"";display:inline-block;width:10px;height:10px;border-radius:2px;background:currentColor;margin-right:4px}
section.table h1{font-size:19px;color:var(--head);margin:4px 0 10px}
.wrap{overflow:auto;max-height:calc(100vh - 120px);border:1px solid var(--line)}
table.sheet{border-collapse:collapse;table-layout:fixed;font-size:13px;line-height:1.5}
table.sheet td{border:1px solid var(--line);padding:3px 6px;vertical-align:top;overflow-wrap:anywhere;scroll-margin:80px}
table.sheet img{width:40px;height:40px;object-fit:contain;display:block}
td.flash{outline:3px solid #f0a000;outline-offset:-2px;background:var(--flash)!important;transition:background 1.5s}
#back{position:fixed;left:16px;bottom:16px;padding:8px 14px;border:none;border-radius:20px;background:var(--accent);color:#fff;font:inherit;box-shadow:0 2px 8px rgba(0,0,0,.25);cursor:pointer}
@media (max-width:640px){header{flex-wrap:wrap}#q{width:100%}main{padding:10px 12px 80px}body{font-size:14px}}
</style></head><body>
<header><b>Realm Grinder 资料</b><nav>%%NAV%%</nav><input id="q" type="search" placeholder="搜表格…"></header>
<div id="res" hidden></div>
<main>%%BODY%%</main>
<button id="back" hidden>← 返回</button>
<script>
(function(){
  var secs = document.querySelectorAll('main > section'), navs = document.querySelectorAll('nav a'), back = document.getElementById('back');
  // 每个页面各自记住滚动位置：从表格返回攻略时回到原来读的地方
  var cur = null, pos = {}, fromLink = false;
  function show(){
    var h = decodeURIComponent(location.hash.slice(1)) || 'r0';
    var sec = h.indexOf('-') > 0 ? h.split('-')[0] : h;
    if (!document.getElementById('sec-' + sec)) { sec = 'r0'; h = 'r0'; }
    secs.forEach(function(s){ s.hidden = s.id !== 'sec-' + sec; });
    navs.forEach(function(a){ a.classList.toggle('on', a.dataset.sec === sec); });
    var el = h !== sec && document.getElementById(h);
    if (el) {
      el.scrollIntoView({block:'center', inline:'center'});
      el.classList.add('flash');
      setTimeout(function(){ el.classList.remove('flash'); }, 2500);
    } else {
      var y = pos[sec] || 0;
      requestAnimationFrame(function(){ window.scrollTo(0, y); });  // 盖过浏览器自己的锚点滚动
    }
    back.hidden = !(fromLink && el);
    if (!el) fromLink = false;
    cur = sec;
  }
  window.addEventListener('scroll', function(){ if (cur && !(location.hash.indexOf('-') > 0)) pos[cur] = window.scrollY; });
  document.addEventListener('click', function(e){
    var a = e.target.closest('a[href^="#t"]');
    if (a && a.closest('section.guide, section.savesec, #res')) fromLink = true;
  });
  back.addEventListener('click', function(){ history.back(); });
  window.addEventListener('hashchange', show);
  show();
  // 全表搜索
  var q = document.getElementById('q'), res = document.getElementById('res'), timer;
  var tds = Array.prototype.slice.call(document.querySelectorAll('table.sheet td[id]'));
  var names = {}; navs.forEach(function(a){ names[a.dataset.sec] = a.textContent; });
  q.addEventListener('input', function(){
    clearTimeout(timer);
    timer = setTimeout(function(){
      var k = q.value.trim().toLowerCase();
      if (!k) { res.hidden = true; return; }
      var out = [];
      for (var i = 0; i < tds.length && out.length < 80; i++) {
        var t = tds[i].textContent;
        var p = t.toLowerCase().indexOf(k);
        if (p < 0) continue;
        var s = t.slice(Math.max(0, p - 20), p + 50);
        var a = document.createElement('a');
        a.href = '#' + tds[i].id;
        a.innerHTML = '<small></small>';
        a.firstChild.textContent = names[tds[i].id.split('-')[0]] + ' ' + tds[i].id.split('-')[1];
        a.appendChild(document.createTextNode(s));
        out.push(a);
      }
      res.innerHTML = '';
      if (!out.length) res.textContent = '没有找到';
      out.forEach(function(a){ res.appendChild(a); });
      res.hidden = false;
    }, 200);
  });
  res.addEventListener('click', function(e){ if (e.target.closest('a')) res.hidden = true; });
  document.addEventListener('keydown', function(e){ if (e.key === 'Escape') res.hidden = true; });
})();
</script>
<script>
%%SAVEJS%%
</script>
</body></html>
"""

if __name__ == '__main__':
    main()
