"""把综合列表和两篇攻略合成一个 HTML：攻略里的 {类:名} 专名链接到表格里对应的格子。

用法：python 脚本/build_html.py [综合列表.xlsx] [输出.html]
默认读 表格/RG综合列表（4.3.14）.xlsx，写到 RGA.html。
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
DST = sys.argv[2] if len(sys.argv) > 2 else os.path.join(ROOT, 'RGA.html')
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
# 程序版本：改了功能就加版本号，在 CHANGES 最前面写这一版改了什么
VERSION = '1.0.1'
CHANGES = [
    ('1.0.1', '2026-10-20', [
        '遗物、隐藏奖杯改成带图标的卡片列表，可以页内搜索',
        '读到存档后可以切换「全部 / 已获得 / 未获得」，带收集进度条；没获得的变灰',
    ]),
    ('1.0.0', '2026-10-20', [
        '第一个正式版本，程序名叫 RGA（Realm Grinder 助手）',
        '攻略：R0 攻略（Discord Beginner Guide 翻译）、A0 攻略要点，专名可点击跳到表格',
        '资料表：综合列表 4.3.14 的 9 个工作表，带图标，支持全表搜索',
        '我的存档：直接读取本机游戏存档，游戏保存后自动同步；只读查看各项数据',
        '法术预报、遗物预测：改写自社区工具 Realm Weather Service 和 Lara Crypt',
    ]),
]
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


def split_name(text):
    """「English中文名」→（中文名, 英文名）；中文开头的括注（「Jaw Bone（一块）下颌骨」）算进英文"""
    t = text.replace('\n', '').strip()
    m = re.match(r"^([A-Za-z0-9 '’\-,.!&:]+?)\s*/?\s*((?:[（(][^）)]*[）)])?)([一-鿿].*)$", t)
    if not m:
        return t, ''
    return m.group(3).strip(), (m.group(1) + m.group(2)).strip()


# 卡片列表（遗物、隐藏奖杯）：每张卡片 = 图标 + 名字 + 几栏说明；页内搜索；读到存档后「全部 / 已获得 / 未获得」切换，未获得变灰。
# 每个列表的根元素 .cl 带 data-ev：「我的存档」读到存档后发这个事件，内容是已获得项目的英文名（只留小写字母和数字），按卡片的 data-en 对上。
CL_JS = """<script>(function(){
  document.querySelectorAll('.cl:not([data-ok])').forEach(function(root){
    root.dataset.ok = 1;
    var q = root.querySelector('.cl-q'), seg = root.querySelector('.own-seg'), bar = root.querySelector('.own-bar');
    var cards = [].slice.call(root.querySelectorAll('.art')), heads = [].slice.call(root.querySelectorAll('.art-g'));
    var sel = '', owned = null;
    function run(){
      var k = q.value.trim().toLowerCase();
      cards.forEach(function(c){
        c.hidden = !((!k || c.textContent.toLowerCase().indexOf(k) >= 0) && (!sel || !owned || c.classList.contains('own') === (sel === '1')));
      });
      heads.forEach(function(h){ h.hidden = !cards.some(function(c){ return !c.hidden && c.dataset.g === h.dataset.g; }); });
    }
    function pick(v){ sel = v; seg.querySelectorAll('button').forEach(function(x){ x.classList.toggle('on', x.dataset.o === v); }); run(); }
    q.addEventListener('input', run);
    seg.addEventListener('click', function(e){ var b = e.target.closest('button'); if (b) pick(b.dataset.o); });
    // 胶囊离开原位、浮在内容上面时加阴影
    var home = document.createElement('div');
    bar.parentNode.insertBefore(home, bar);
    document.addEventListener('scroll', function(){
      if (!bar.hidden) bar.classList.toggle('float', bar.getBoundingClientRect().top - home.getBoundingClientRect().top > 12);
    }, true);
    window.addEventListener(root.dataset.ev, function(e){
      owned = e.detail;
      var set = {}, n = 0;
      (owned || []).forEach(function(k){ set[k] = 1; });
      cards.forEach(function(c){ var y = !!owned && c.dataset.en.split(' ').some(function(k){ return set[k]; }); c.classList.toggle('own', y); if (y) n++; });
      root.classList.toggle('has-own', !!owned);
      bar.hidden = !owned;
      var b = seg.querySelectorAll('b');
      b[0].textContent = cards.length; b[1].textContent = n; b[2].textContent = cards.length - n;
      root.querySelector('.own-prog i').style.width = (n / cards.length * 100) + '%';
      if (!owned) sel = '';
      run();
    });
    // 从别处跳到某张卡片时，先清掉筛选，免得它被藏起来（捕获阶段，赶在页面路由滚动之前）
    window.addEventListener('hashchange', function(){
      var el = document.getElementById(decodeURIComponent(location.hash.slice(1)));
      if (el && el.hidden && root.contains(el)) { q.value = ''; pick(''); }
    }, true);
    run();
  });
})();</script>"""


def merged_value(ws):
    """合并单元格读左上角那一格"""
    top = {}
    for rg in ws.merged_cells.ranges:
        for r in range(rg.min_row, rg.max_row + 1):
            for c in range(rg.min_col, rg.max_col + 1):
                top[(r, c)] = (rg.min_row, rg.min_col)
    return lambda r, c: text_of(ws.cell(*top.get((r, c), (r, c))).value).strip()


def card(cid, en, img_cell, imgs, zh, en_show, badge, fields, note='', group='', alias=''):
    esc = lambda v: '<br>'.join(html.escape(l) for l in SPLIT.split(v))
    m = re.match(r'^=_xlfn\.DISPIMG\("(ID_[0-9A-F]+)"', img_cell)
    img = '<img alt="" src="%s">' % imgs[m.group(1)] if m and m.group(1) in imgs else '<i></i>'
    body = ''.join('<div><small>%s</small>%s</div>' % (k, esc(v) if v else '<span class="nil">—</span>') for k, v in fields)
    return ('<div class="art" id="%s" data-en="%s" data-g="%s">%s<div class="art-b"><div class="art-h"><b>%s</b><span class="en">%s</span>%s%s</div>'
            '<div class="art-f" style="grid-template-columns:%s">%s</div></div></div>') % (
        cid, (re.sub(r'[^a-z0-9]', '', en.lower()) + ' ' + alias).strip(), html.escape(group), img, html.escape(zh), html.escape(en_show), badge,
        '<span class="note">%s</span>' % html.escape(note) if note else '', ' '.join(['1fr'] * (len(fields) - 1) + ['1.3fr']), body)


def card_list(ev, placeholder, items):
    return ('<div class="cl" data-ev="%s"><input class="cl-q" type="search" placeholder="%s">'
            '<div class="own-bar" hidden><div class="own-seg"><button class="on" data-o="">全部<b></b></button>'
            '<button data-o="1">已获得<b></b></button><button data-o="0">未获得<b></b></button></div>'
            '<div class="own-prog"><i></i></div></div><div class="art-list">%s</div></div>' % (ev, placeholder, ''.join(items)))


def build_artifacts(ws, imgs):
    """遗物表 → 卡片：图标 + 名字 + 发掘条件 / 概率 / 用途。卡片 id 就是原名称格（t10-B行号），攻略、存档页的链接照旧能跳过来。"""
    val = merged_value(ws)
    items, last = [], None
    for r in range(2, ws.max_row + 1):
        name = val(r, 2)
        if not name:
            continue
        kzh, ken = split_name(val(r, 1))
        if kzh != last:
            last = kzh
            items.append('<h2 class="art-g" data-g="%s">%s <span>%s</span></h2>' % (html.escape(kzh), html.escape(kzh), html.escape(ken)))
        zh, en = split_name(name)
        cond, rate, use = val(r, 4), val(r, 5), val(r, 6)
        rq = re.search(r'R(\d+)\+', cond)
        badge = ('<em>R%s+</em>' % rq.group(1) if rq else '') + ('<em class="sure">必出</em>' if '必出' in rate else '')
        items.append(card('t10-B%d' % r, en, val(r, 3), imgs, zh, en, badge, [('发掘条件', cond), ('概率', rate), ('用途', use)], group=kzh))
    return card_list('artowned', '搜索名字、条件或用途，例如：回魔、R100、佣兵', items)


# 隐藏奖杯表的行底色 → 最低进度（表头 A1:C2 的图例）
TROPHY_TIER = {None: '', 4: 'R40+', 9: 'R100+', 'FFC6A0E3': 'R160+'}
# 表里的名字和存档编辑器里的不一样（编辑器用复数）
TROPHY_ALIAS = {'madmask': 'madmasks', 'godsfinger': 'godsfingers'}


def build_trophies(ws, imgs):
    """隐藏奖杯表 → 卡片：图标 + 名字 + 目标 / 加成；行底色表示的最低进度做成标记。卡片 id 是原名称格（t7-A行号）。"""
    val = merged_value(ws)
    items = []
    for r in range(5, ws.max_row + 1):
        name = val(r, 1)
        if not name:
            continue
        parts = [p.strip() for p in re.split(r'[/\n]', name) if p.strip()]
        en, zh, note = parts[0], (parts[1] if len(parts) > 1 else ''), '　'.join(parts[2:])
        m = re.match(r'^(.*?)([（(].*)$', zh)
        if m:  # 「遁世征服（口袋妖怪的梗……）」：括注放到名字后面的小字
            zh, note = m.group(1), (m.group(2) + ' ' + note).strip()
        zh = zh or en
        f = ws.cell(r, 1).fill
        color = (f.fgColor.rgb if f.fgColor.type == 'rgb' else f.fgColor.theme) if f is not None and f.fill_type == 'solid' else None
        tier = TROPHY_TIER.get(color, '')
        badge = '<em>%s</em>' % tier if tier else ''
        items.append(card('t7-A%d' % r, en, val(r, 2), imgs, zh, '' if zh == en else en, badge, [('目标', val(r, 3)), ('加成', val(r, 4))], note,
                          alias=TROPHY_ALIAS.get(re.sub(r'[^a-z0-9]', '', en.lower()), '')))
    return card_list('trophyowned', '搜索名字、目标或加成，例如：考古、回魔、佣兵', items)


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
    # 放图标的列至少要装下 40px 的图片加内边距，否则图片会盖住右边一格的文字
    img_cols = {c.column for row in ws.iter_rows() for c in row if isinstance(c.value, str) and c.value.startswith('=_xlfn.DISPIMG')}
    cols, total = [], 0
    for c in range(1, last_c + 1):
        w = ws.column_dimensions[get_column_letter(c)].width or 9
        px = max(56 if c in img_cols else 36, min(int(w * 7.5), 420))
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
            sections[n] = build_sheet(n, ws, imgs, index, cells)  # 也用来登记名称格，供专名链接
            if n == 10:
                sections[n] = build_artifacts(ws, imgs)
            elif n == 7:
                sections[n] = build_trophies(ws, imgs)
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
    item = lambda h, label: '<a href="#%s" data-sec="%s">%s</a>' % (h, h, label)
    nav = '<div class="grp">攻略</div>' + ''.join(item(g, l) for g, l, _ in GUIDES)
    nav += '<div class="grp">资料表</div>' + ''.join(item('t%d' % n, SHEETS[n][0]) for n in sections)
    body = ''.join('<section id="sec-%s" class="guide" hidden>%s</section>' % (g, guides[g]) for g, _, _ in GUIDES)
    body += ''.join('<section id="sec-t%d" class="table" hidden><h1>%s</h1>%s</section>' % (n, SHEETS[n][1], sections[n]) for n in sections)
    body += CL_JS  # 卡片列表（遗物、隐藏奖杯）的搜索和已获得切换
    # 存档工具：只读存档查看、法术预报、遗物预测（数据和库来自 工具/RG-tools）
    save_js, save_miss = '', []
    if os.path.isdir(save_tools.RG):
        save_html, save_js, save_miss = save_tools.build(find, {'t%d-%s' % c: code for code, c in research.items()})
        nav += '<div class="grp">工具</div>' + item('save', '我的存档') + item('save/rws', '法术预报') + item('save/arch', '遗物预测')
        body += save_html
    else:
        print('没有 工具/RG-tools，跳过「我的存档」（git clone https://github.com/shadowgull/dox4242.github.io 工具/RG-tools）')
    nav += '<div class="grp">关于</div>' + item('ver', '版本 ' + VERSION)
    body += version_page()
    page = TEMPLATE.replace('%%NAV%%', nav).replace('%%BODY%%', body).replace('%%TCOLORS%%', md2html.CSS[md2html.CSS.index('.t-fa'):md2html.CSS.index('[class^')])
    page = page.replace('%%APPBAR%%', appbar()).replace('%%ICON%%', icon_img())
    page = page.replace('%%SAVEJS%%', save_js)  # 最后替换：脚本里可能有别的 %% 记号
    open(DST, 'w', encoding='utf-8').write(page)
    print('写入', DST, '%.1f MB' % (len(page.encode()) / 1e6))
    print('专名链接：%d 个没找到对应格子' % len(missing))
    for x in sorted(set(missing)):
        print('  ', x)
    if save_miss:
        print('存档工具：%d 个名字没翻译，显示英文：' % len(save_miss), '、'.join(save_miss))


def version_page():
    """「版本」页：版本号和更新记录"""
    out = ['<div class="ver-hero">%s<div><h1>RGA</h1><p>Realm Grinder 助手 · 版本 <b>%s</b></p></div></div>' % (icon_img(), VERSION)]
    out.append('<h2>更新记录</h2>')
    for v, d, items in CHANGES:
        out.append('<h3>%s <small>%s</small></h3><ul>%s</ul>' % (v, d, ''.join('<li>%s</li>' % html.escape(x) for x in items)))
    return '<section id="sec-ver" class="guide" hidden>%s</section>' % ''.join(out)


def icon_img():
    icon = os.path.join(ROOT, '应用', 'icon.png')
    return ('<img alt="" src="data:image/png;base64,%s">' % base64.b64encode(open(icon, 'rb').read()).decode()) if os.path.exists(icon) else ''


def appbar():
    """程序模式的标题栏（网页里平时隐藏）：空白的拖动区（拖动窗口）+ 最小化/最大化/关闭"""
    btn = '<button data-w="%s" title="%s"%s><svg viewBox="0 0 10 10">%s</svg></button>'
    return ('<div class="appbar"><div class="pywebview-drag-region ab-drag"></div><div class="ab-btns">' +
            btn % ('min', '最小化', '', '<path d="M0 5h10"/>') +
            btn % ('max', '最大化', '', '<rect x=".5" y=".5" width="9" height="9" rx="1.5"/>') +
            btn % ('close', '关闭', ' class="ab-close"', '<path d="M0 0l10 10M10 0L0 10"/>') +
            '</div></div><div class="grip"></div>')


TEMPLATE = r"""<!doctype html>
<html lang="zh-CN"><head><meta charset="utf-8"><meta name="viewport" content="width=device-width,initial-scale=1">
<title>RGA</title>
<style>
:root{--blue:#2563eb;--accent:#2563eb;--bg:#f3f6fb;--card:#fff;--fg:#1b2433;--muted:#6b7689;--line:#e6ebf3;--soft:#eef3fc;--head:#1b2433;--flash:#ffe58a;
  --shadow:0 4px 24px rgba(20,40,90,.06)}
*{box-sizing:border-box}
body{margin:0;background:var(--bg);color:var(--fg);font:15px/1.65 "Microsoft YaHei UI","Microsoft YaHei","PingFang SC",sans-serif}
a{color:var(--blue)}
/* 左侧悬浮侧栏 */
aside.side{position:fixed;left:16px;top:16px;bottom:16px;width:232px;z-index:5;background:var(--card);border-radius:20px;box-shadow:0 10px 40px rgba(20,40,90,.07);padding:16px 12px 12px;display:flex;flex-direction:column}
.brand{display:flex;align-items:center;gap:10px;font-weight:700;font-size:15px;padding:0 8px 14px}
.brand img{width:26px;height:26px}
#q{width:100%;padding:7px 12px;border:1px solid transparent;border-radius:12px;background:var(--soft);font:inherit;font-size:13.5px;color:var(--fg)}
#q:focus{outline:none;border-color:#bcd0f7;background:#fff}
nav{flex:1;overflow-y:auto;margin:6px -4px 0;padding:0 4px;scrollbar-width:none;position:relative}
nav::-webkit-scrollbar{display:none}
nav .grp{font-size:11px;color:#9aa5b8;letter-spacing:.12em;margin:12px 10px 4px}
nav a{display:block;position:relative;z-index:1;padding:6px 14px;margin:1px 0;border-radius:12px;color:#3d4a5f;font-size:13.5px;text-decoration:none;transition:background .15s,color .25s}
nav a:hover{background:var(--soft)}
nav a.on{background:var(--blue);color:#fff;box-shadow:0 6px 16px rgba(37,99,235,.28)}
/* 选中块：滑到当前项（有 .ind 时选中项本身不再画底色） */
nav .ind{position:absolute;left:4px;right:4px;top:0;border-radius:12px;background:var(--blue);box-shadow:0 6px 16px rgba(37,99,235,.28);
  transition:transform .32s cubic-bezier(.2,.8,.2,1),height .32s cubic-bezier(.2,.8,.2,1),opacity .2s;pointer-events:none}
nav.slide a.on{background:none;box-shadow:none}
/* 切换页面、子页、分页时淡入上移 */
@keyframes rg-in{from{opacity:0;transform:translateY(8px)}to{opacity:1;transform:none}}
main>section:not([hidden]),#sv-view:not([hidden]),#sv-rws:not([hidden]),#sv-arch:not([hidden]),.sv-vt:not([hidden]){animation:rg-in .3s cubic-bezier(.2,.8,.2,1)}
@media (prefers-reduced-motion:reduce){nav .ind{transition:none}main>section,#sv-view,#sv-rws,#sv-arch,.sv-vt{animation:none!important}}
#res{position:fixed;left:264px;top:16px;width:min(480px,calc(100vw - 290px));max-height:75vh;overflow:auto;background:#fff;border-radius:16px;box-shadow:0 12px 40px rgba(20,40,90,.16);z-index:6}
#res a{display:block;padding:8px 14px;border-bottom:1px solid var(--line);color:var(--fg);text-decoration:none;font-size:13px}
#res a:hover{background:var(--soft)} #res small{color:var(--muted);margin-right:6px}
main{margin-left:264px;padding:16px 24px 80px 16px}
main>section{background:var(--card);border-radius:20px;box-shadow:var(--shadow);padding:24px 30px}
section.guide{max-width:960px;margin:0 auto}
.guide h1{font-size:26px;margin:4px 0 12px}
.guide h2{font-size:19px;margin:28px 0 10px;padding-left:12px;border-left:4px solid var(--blue);border-radius:2px}
.guide h3{font-size:16px;margin:18px 0 6px}
.guide blockquote{margin:0 0 14px;padding:10px 14px;background:var(--soft);border-radius:12px;color:#44506a;font-size:14px}
.guide hr{border:none;border-top:1px solid var(--line);margin:18px 0}
.guide code{font-family:Consolas,monospace;background:var(--soft);padding:1px 5px;border-radius:5px}
.guide table{border-collapse:separate;border-spacing:0;margin:8px 0 14px;width:100%;border:1px solid var(--line);border-radius:12px;overflow:hidden}
.guide th,.guide td{border-bottom:1px solid var(--line);padding:6px 10px;text-align:left;vertical-align:top}
.guide tr:last-child td{border-bottom:none}
.guide th{background:var(--soft);font-weight:600}
.guide ul,.guide ol{padding-left:24px}
.ver-hero{display:flex;align-items:center;gap:18px;margin:4px 0 8px}
.ver-hero img{width:64px;height:64px;image-rendering:pixelated}
.ver-hero h1{margin:0;font-size:30px;letter-spacing:.02em}
.ver-hero p{margin:0;color:var(--muted)} .ver-hero b{color:var(--blue)}
#sec-ver h3 small{font-weight:normal;color:var(--muted);font-size:13px;margin-left:8px}
%%TCOLORS%%
[class^="t-"]{font-weight:600}
a[class^="t-"]{text-decoration:underline dotted;text-underline-offset:3px}
a[class^="t-"]:hover{text-decoration-style:solid}
.legend{font-size:13px}.legend span{margin-right:14px;white-space:nowrap}
.legend span::before{content:"";display:inline-block;width:10px;height:10px;border-radius:3px;background:currentColor;margin-right:4px}
section.table h1{font-size:20px;margin:0 0 14px}
.wrap{overflow:auto;max-height:calc(100vh - 150px);border:1px solid var(--line);border-radius:14px}
table.sheet{border-collapse:collapse;table-layout:fixed;font-size:13px;line-height:1.5}
table.sheet td{border:1px solid var(--line);padding:4px 7px;vertical-align:top;overflow-wrap:anywhere;scroll-margin:80px}
table.sheet img{width:40px;height:40px;object-fit:contain;display:block;margin:0 auto}
td.flash{outline:3px solid #f59e0b;outline-offset:-2px;background:var(--flash)!important;transition:background 1.5s}
/* 遗物：卡片列表 */
.cl-q{width:420px;max-width:100%;padding:7px 16px;border:1px solid var(--line);border-radius:999px;font:inherit;font-size:13.5px;background:var(--soft);margin:0 0 4px}
.cl-q:focus{outline:none;border-color:#bcd0f7;background:#fff}
.art-list{margin-top:14px}
.art-g{font-size:16px;margin:22px 2px 8px}.art-g span{font-size:12px;font-weight:normal;color:#9aa5b8;margin-left:6px}
.art{display:flex;gap:16px;padding:14px 16px;border-radius:16px;border:1px solid var(--line);margin-bottom:10px;scroll-margin:80px;transition:background 1.5s,border-color .2s}
.art:hover{border-color:#cdd9ee}
.art>img,.art>i{width:48px;height:48px;flex:none;object-fit:contain;border-radius:10px;background:var(--soft)}
.art-b{flex:1;min-width:0}
.art-h{display:flex;align-items:baseline;flex-wrap:wrap;gap:4px 10px;margin-bottom:6px}
.art-h b{font-size:15.5px}.art-h .en{font-size:12.5px;color:#9aa5b8}.art-h .note{font-size:12px;color:#b0b9c8}
.art-h em{font-style:normal;font-size:11.5px;color:#1d4ed8;background:var(--soft);border-radius:6px;padding:0 7px}
.art-h em.sure{color:#15803d;background:#e8f7ee}
.art-f{display:grid;grid-template-columns:1fr 1fr 1.3fr;gap:6px 18px;font-size:13.5px;color:#3d4a5f}
.art-f small{display:block;font-size:11.5px;color:#9aa5b8}
.art-f .nil{color:#c9d1dd}
.art.flash{background:var(--flash);border-color:#f59e0b}
/* 已获得 / 未获得（读到存档后才出现）：已获得图标描蓝边带勾，未获得变灰，鼠标移上去恢复 */
/* 一个小胶囊，往下滚时浮在内容上面（带阴影），不占满整行 */
.own-bar{position:sticky;top:6px;z-index:3;display:flex;align-items:center;gap:14px;width:max-content;margin:10px 0 2px;padding:4px 16px 4px 4px;
  background:#e6ecf5;border-radius:999px;transition:box-shadow .25s,background .25s}
.own-bar.float{background:rgba(255,255,255,.92);backdrop-filter:blur(8px);box-shadow:0 8px 28px rgba(20,40,90,.16),0 0 0 1px rgba(20,40,90,.05)}
.own-seg{display:inline-flex;gap:2px}
.own-seg button{font:inherit;font-size:13px;border:none;background:none;color:var(--muted);padding:4px 14px;border-radius:999px;cursor:pointer;transition:background .15s}
.own-seg button.on{background:#fff;color:var(--fg);font-weight:600;box-shadow:0 2px 8px rgba(20,40,90,.1)}
.own-bar.float .own-seg button.on{background:var(--blue);color:#fff;box-shadow:none}
.own-bar.float .own-seg button.on b{color:#fff}
.own-seg b{font-weight:600;margin-left:5px;color:var(--blue)}
.own-prog{width:120px;height:6px;background:rgba(20,40,90,.08);border-radius:99px;overflow:hidden}
.own-prog i{display:block;height:100%;width:0;background:var(--blue);border-radius:99px;transition:width .5s cubic-bezier(.2,.8,.2,1)}
.art{position:relative}
.art.own>img{box-shadow:0 0 0 2px var(--blue)}
.art.own::before{content:"✓";position:absolute;left:56px;top:10px;width:18px;height:18px;border-radius:50%;background:var(--blue);color:#fff;font-size:11px;font-weight:700;display:flex;align-items:center;justify-content:center;box-shadow:0 0 0 2px #fff}
.has-own .art:not(.own)>img{filter:grayscale(1) brightness(1.15);opacity:.45;transition:filter .2s,opacity .2s}
.has-own .art:not(.own) .art-b{opacity:.55;transition:opacity .2s}
.has-own .art:not(.own):hover>img{filter:none;opacity:1}
.has-own .art:not(.own):hover .art-b{opacity:1}
@media (max-width:900px){.art-f{grid-template-columns:1fr!important}}
#back{position:fixed;left:280px;bottom:20px;padding:9px 20px;border:none;border-radius:999px;background:var(--fg);color:#fff;font:inherit;font-size:14px;box-shadow:0 6px 20px rgba(20,40,90,.25);cursor:pointer}
::-webkit-scrollbar{width:10px;height:10px}
::-webkit-scrollbar-thumb{background:#cfd8e6;border-radius:10px;border:2px solid transparent;background-clip:padding-box}
::-webkit-scrollbar-thumb:hover{background:#b3c0d4;background-clip:padding-box}
::-webkit-scrollbar-track{background:transparent}
@media (max-width:760px){
  aside.side{position:static;width:auto;margin:10px;max-height:none}
  nav .ind{display:none}nav.slide a.on{background:var(--blue)}
  nav{display:flex;flex-wrap:wrap;gap:4px;overflow:visible}nav .grp{width:100%;margin:8px 4px 2px}nav a{padding:5px 10px}
  main{margin-left:0;padding:0 10px 80px}main>section{padding:16px}#res{left:10px;width:calc(100vw - 20px)}#back{left:16px}body{font-size:14px}}
/* 程序模式（RGA.exe）：网页自己画标题栏 */
.appbar{display:none}
html.app body{height:100vh;overflow:hidden}
/* 程序里只让内容区滚动，滚动条从标题栏下面开始，不和关闭按钮并排 */
html.app main{position:fixed;top:40px;left:0;right:0;bottom:0;overflow-y:auto;margin:0;padding:8px 24px 80px 280px}
html.app .appbar{display:flex;position:fixed;top:0;left:0;right:0;z-index:8;height:40px;align-items:center;background:var(--bg);user-select:none}
html.app aside.side{top:48px}
html.app #res{top:48px}
html.app .brand{display:none}
.ab-drag{flex:1;height:100%}
.ab-btns{display:flex;height:100%}
.ab-btns button{width:46px;height:100%;border:none;background:none;color:#4b5569;cursor:pointer;display:flex;align-items:center;justify-content:center}
.ab-btns button:hover{background:#e4eaf4}
.ab-btns button.ab-close:hover{background:#e81123;color:#fff}
.ab-btns svg{width:11px;height:11px;stroke:currentColor;fill:none;stroke-width:1.2}
.grip{display:none}
html.app .grip{display:block;position:fixed;right:0;bottom:0;width:18px;height:18px;cursor:nwse-resize;z-index:9}  /* 看不见，鼠标移到角上才变成调整大小 */
html.app.max .grip{display:none}
</style></head><body>
%%APPBAR%%
<aside class="side"><div class="brand">%%ICON%%RGA</div><input id="q" type="search" placeholder="搜索表格…"><nav>%%NAV%%</nav></aside>
<div id="res" hidden></div>
<main>%%BODY%%</main>
<button id="back" hidden>← 返回</button>
<script>
(function(){
  var secs = document.querySelectorAll('main > section'), navs = document.querySelectorAll('nav a'), back = document.getElementById('back');
  // 每个页面各自记住滚动位置：从表格返回攻略时回到原来读的地方
  var cur = null, pos = {}, fromLink = false;
  // 网页里滚动的是整页，程序里（html.app）滚动的是 main
  window.rgScroller = function(){ return document.documentElement.classList.contains('app') ? document.querySelector('main') : document.scrollingElement; };
  function show(){
    var h = decodeURIComponent(location.hash.slice(1)) || 'r0';
    var sec = h.split(/[-\/]/)[0], sub = h.indexOf('/') > 0 ? h.split('/')[1] : '';  // 「save/rws」：存档栏里的子页
    if (!document.getElementById('sec-' + sec)) { sec = 'r0'; h = 'r0'; sub = ''; }
    secs.forEach(function(s){ s.hidden = s.id !== 'sec-' + sec; });
    navs.forEach(function(a){ a.classList.toggle('on', a.dataset.sec === (sub ? sec + '/' + sub : sec)); });
    slide();
    if (sub) h = sec;
    window.dispatchEvent(new CustomEvent('subpage', {detail: {sec: sec, sub: sub}}));
    var el = h !== sec && document.getElementById(h);
    if (el) {
      el.scrollIntoView({block:'center', inline:'center'});
      el.classList.add('flash');
      setTimeout(function(){ el.classList.remove('flash'); }, 2500);
    } else {
      var y = pos[sec] || 0;
      requestAnimationFrame(function(){ rgScroller().scrollTop = y; });  // 盖过浏览器自己的锚点滚动
    }
    back.hidden = !(fromLink && el);
    if (!el) fromLink = false;
    cur = sec;
  }
  document.addEventListener('scroll', function(){ if (cur && !(location.hash.indexOf('-') > 0)) pos[cur] = rgScroller().scrollTop; }, true);
  document.addEventListener('click', function(e){
    var a = e.target.closest('a[href^="#t"]');
    if (a && a.closest('section.guide, section.savesec, #res')) fromLink = true;
  });
  back.addEventListener('click', function(){ history.back(); });
  // 侧栏选中块从上一项滑到当前项
  var navEl = document.querySelector('nav'), ind = document.createElement('div'), slid = false;
  ind.className = 'ind'; navEl.insertBefore(ind, navEl.firstChild);
  function slide(){
    var a = navEl.querySelector('a.on');
    if (!a || !a.offsetHeight) { ind.style.opacity = 0; navEl.classList.remove('slide'); return; }
    if (!slid) ind.style.transition = 'none';  // 第一次直接放到位，不从顶上滑下来
    ind.style.opacity = 1; ind.style.height = a.offsetHeight + 'px'; ind.style.transform = 'translateY(' + a.offsetTop + 'px)';
    navEl.classList.add('slide');
    if (!slid) { void ind.offsetHeight; ind.style.transition = ''; slid = true; }
  }
  window.addEventListener('resize', function(){ slid = false; slide(); });
  window.addEventListener('hashchange', show);
  show();
  // 全表搜索
  var q = document.getElementById('q'), res = document.getElementById('res'), timer;
  var tds = Array.prototype.slice.call(document.querySelectorAll('table.sheet td[id], .art[id]'));
  var names = {}; navs.forEach(function(a){ names[a.dataset.sec] = a.textContent.trim(); });
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
