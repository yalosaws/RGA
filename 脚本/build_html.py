"""把综合列表和两篇攻略合成一个 HTML：攻略里的 {类:名} 专名链接到表格里对应的格子。

用法：python 脚本/build_html.py [综合列表.xlsx] [输出.html]
默认读 表格/RG综合列表（4.3.14）.xlsx，写到 build/RGA.html（程序界面，打包时装进 exe；不进 git）。
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
DST = sys.argv[2] if len(sys.argv) > 2 else os.path.join(ROOT, 'build', 'RGA.html')
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
VERSION = '0.3.7'  # 还没到正式发布，用 0.x（用户要求）
AUTHOR = 'Yalosaws'
CHANGES = [
    ('0.3.7', '2026-10-22', [
        '资料表恢复 21 处被译名处理吞掉的说明（时流涌动、几项研究的解锁条件、活动的等级要求和新图标奖励等）',
        '遗物：补上灼痕拉之面具；日曜之力 12:00～17:59 一档改为提升产能；胡须毛发等三个显赫遗物改为 R110，矮人铁砧等三个改为 R235；粗糙石头对应的研究代号改为 D270',
        '研究页、挑战页顶部加上适用说明；受雇佣兵的前置改为 S2900；隐藏奖杯的收集进度不再计入已改成阵营 / 法术奖杯的 5 项',
        'A0 攻略：A480 改为 A450；占卜机器要在不加入任何阵营时才能挖到',
        '遗物预测：修正法力织机、工厂、战场、固态云算不出概率的问题，以及第二 / 第三晶片、第二石片、毒药瓶、第三铁片的概率和 8 个遗物的最低 R',
        '遗物预测：神话按用得最多的法术计算，被遗忘的遗物按新研究代号算已花研究点数，噩梦残片用新的脑波起步时间',
        '遗物预测：用到存档里没有的数值的 14 个遗物只显示需要达到的数值，不再直接显示「获得」',
        '有限祈愿预报：恒常混沌起步改为 500 次，加成按 4.3 的产能 / 非产能公式估算',
    ]),
    ('0.3.6', '2026-10-21', [
        '去掉攻略中已解锁链接前的小色块，仅保留灰色文字和点击跳转',
    ]),
    ('0.3.5', '2026-10-21', [
        '两篇攻略的颜色图例末尾新增「已解锁变灰」开关，设置同步并保存在本机',
        '开启后已解锁的链接显示灰色，保留类别颜色块，仍可点击查看资料',
    ]),
    ('0.3.4', '2026-10-21', [
        '研究资料页改为跟踪已解锁状态，已解锁但未购买的研究也计入进度和筛选',
        '研究进度按当前版本代号匹配，修复部分改号研究无法标记的问题',
    ]),
    ('0.3.3', '2026-10-21', [
        '新增自动点击工具：默认 F8 全局启停，可设置快捷键、组合键和点击间隔',
        '连点设置保存在本机；只在游戏前台且鼠标位于游戏内时点击，关闭程序自动停止',
    ]),
    ('0.3.2', '2026-10-21', [
        '两篇攻略分别记住上次阅读的位置，切换页面或重新打开程序后自动恢复',
    ]),
    ('0.3.1', '2026-10-21', [
        '挑战页的「法术强化」标签改用紫色',
        '挑战卡片的条件说明去掉重复的重生要求，保留顶部 R 标签',
        '「亡灵挑战1」等引用整体按挑战着色并链接，名称和编号保持在一起',
        '「仙灵和亡灵挑战1」等共用编号的引用展开为各自的挑战链接',
        '挑战页阵营标题去掉立场文字',
    ]),
    ('0.3.0', '2026-10-20', [
        '内测版正式发布',
        '修复若干问题',
    ]),
    ('0.2.3', '2026-10-20', [
        '修复建筑升级页鼠标移上去整块变色（和存档页的样式重名）',
    ]),
    ('0.2.2', '2026-10-20', [
        '建筑升级页改成顶上选建筑、下面只列这个建筑的升级（数量、升级名、产能加成），不再是 50 多列的大表；记住上次看的建筑',
        '传说圣殿下面列出独特建筑升级',
    ]),
    ('0.2.1', '2026-10-20', [
        '研究、挑战、隐藏奖杯、遗物页的说明文字里，专名按攻略的九类上色，点一下跳到对应的格子或卡片',
        '研究页的「已购买 / 未购买」改叫「已解锁 / 未解锁」',
        'R0 攻略去掉「之后（R1 以后）用什么 build？」一节',
    ]),
    ('0.2.0', '2026-10-20', [
        '挑战页改成按阵营分组的卡片：条件、目标、效果分栏，阵营法术强化放在阵营标题下面',
        '研究页改成按分支分组的卡片，按实际解锁 R 排序（4.3.9 改号的研究按新 R 排），带代号和绑定阵营',
        '读到存档后，挑战页可以切换「已完成 / 未完成」，研究页可以切换「已购买 / 未购买」',
    ]),
    ('0.1.3', '2026-10-20', [
        '侧栏「工具」放到最上面，去掉「法术预报」「遗物预测」两项（在存档页里切换）',
        '遗物、隐藏奖杯页的搜索框挪到这一行的右边',
    ]),
    ('0.1.2', '2026-10-20', [
        '去掉各页标题；攻略的颜色图例改成悬浮小胶囊，去掉开头的来源说明框',
        '遗物、隐藏奖杯的搜索框和「已获得」切换并排成两个小胶囊，往下滚时一起浮着',
        '攻略里鼠标放在专名上，图例胶囊会点亮它属于的那一类',
    ]),
    ('0.1.1', '2026-10-20', [
        '遗物、隐藏奖杯改成带图标的卡片列表，可以页内搜索',
        '读到存档后可以切换「全部 / 已获得 / 未获得」，带收集进度条；没获得的变灰',
    ]),
    ('0.1.0', '2026-10-20', [
        '第一个测试版本，程序名叫 RGA（Realm Grinder 助手）',
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
    var q = root.querySelector('.cl-q'), seg = root.querySelector('.own-seg'), bar = root.querySelector('.own-bar'), top = root.querySelector('.cl-top');
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
    // 两个胶囊离开原位、浮在内容上面时加阴影
    var home = document.createElement('div');
    top.parentNode.insertBefore(home, top);
    document.addEventListener('scroll', function(){
      top.classList.toggle('float', top.getBoundingClientRect().top - home.getBoundingClientRect().top > 12);
    }, true);
    window.addEventListener(root.dataset.ev, function(e){
      owned = e.detail;
      var set = {}, n = 0, total = 0;
      (owned || []).forEach(function(k){ set[k] = 1; });
      cards.forEach(function(c){
        var y = !!owned && c.dataset.en.split(' ').some(function(k){ return set[k]; });
        c.classList.toggle('own', y);
        if (!c.dataset.skip) { total++; if (y) n++; }  // data-skip：列着但不算进进度
      });
      root.classList.toggle('has-own', !!owned);
      bar.hidden = !owned;
      var b = seg.querySelectorAll('b');
      b[0].textContent = total; b[1].textContent = n; b[2].textContent = total - n;
      root.querySelector('.own-prog i').style.width = (n / total * 100) + '%';
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
    """合并单元格读左上角那一格；.covered 是被合并盖住（不是左上角）的格子"""
    top = {}
    for rg in ws.merged_cells.ranges:
        for r in range(rg.min_row, rg.max_row + 1):
            for c in range(rg.min_col, rg.max_col + 1):
                top[(r, c)] = (rg.min_row, rg.min_col)
    val = lambda r, c: text_of(ws.cell(*top.get((r, c), (r, c))).value).strip()
    val.covered = {k for k, v in top.items() if k != v}
    return val


class Terms:
    """卡片页（研究、挑战、隐藏奖杯、遗物）说明文字里的专名染色，颜色和攻略的九类一样，并链接到对应的格子 / 卡片。
    专名来自表格里的名称格（各列是哪一类见 main()）、卡片名、攻略里标过的专名，再加上 UD1、DMC1、E300 这类代号。
    研究名、建筑升级名大多是「统治」「灌溉」这样的普通词，两个字的不染（阵营、法术、攻略里标过的除外）。"""
    ORDER = '阵法遗隐挑研建升奖'  # 同名时优先的类别

    def __init__(self):
        self.names, self.codes, self.rx, self.challenge_rx = {}, {}, None, None

    def add(self, kind, name, target, short=False):
        name = name.strip()
        if not name or name.startswith('~') or not CJK.search(name) or (len(name) < 3 and not short):
            return
        old = self.names.get(name)
        if not old or self.ORDER.index(kind) < self.ORDER.index(old[0]):
            self.names[name] = (kind, target)

    def ready(self):
        alts = sorted(self.names, key=len, reverse=True)
        self.rx = re.compile('(%s)|(?<![A-Za-z0-9])([A-Z]{1,2}C?\\d+)(?![A-Za-z0-9])' % '|'.join(map(re.escape, alts)))
        factions = {m.group(1) for name, (kind, _) in self.names.items()
                    if kind == '挑' and (m := re.fullmatch(r'(.+)挑战\s*\d+', name))}
        if factions:
            faction = '(?:%s)' % '|'.join(map(re.escape, sorted(factions, key=len, reverse=True)))
            self.challenge_rx = re.compile(r'(%s(?:\s*[、和及与]\s*%s)+)\s*挑战\s*(\d+)' % (faction, faction))

    def render(self, text, self_id=''):
        """纯文本 → 染好色的 HTML（换行变 <br>）；指向卡片自己的专名不加链接"""
        def expand_challenges(m):
            parts = re.split(r'(\s*[、和及与]\s*)', m.group(1))
            names = [name + '挑战' + m.group(2) for name in parts[::2]]
            if not all(self.names.get(name, (None,))[0] == '挑' for name in names):
                return m.group(0)
            parts[::2] = names
            return ''.join(parts)

        if self.challenge_rx:
            text = self.challenge_rx.sub(expand_challenges, text)
        out, last = [], 0
        for m in self.rx.finditer(text) if self.rx else ():
            kind, target = self.names[m.group(1)] if m.group(1) else self.codes.get(m.group(2), (None, None))
            if not kind:
                continue
            out.append(html.escape(text[last:m.start()]))
            cls, s = md2html.TAGS[kind][0], html.escape(m.group(0))
            out.append('<a class="t-%s" href="#%s">%s</a>' % (cls, target, s) if target and target != self_id else '<span class="t-%s">%s</span>' % (cls, s))
            last = m.end()
        out.append(html.escape(text[last:]))
        return re.sub(r'\r\n|\r|\n', '<br>', ''.join(out))


TERMS = Terms()


def card(cid, en, img_cell, imgs, zh, en_show, badge, fields, note='', group='', alias='', kind=''):
    """img_cell 为 None 时不放图标（挑战、研究）；kind 是这一页的专名类别，卡片名登记进 TERMS"""
    if kind:
        TERMS.add(kind, zh, cid)
    esc = lambda v: TERMS.render(v, cid)
    if img_cell is None:
        img = ''
    else:
        m = re.match(r'^=_xlfn\.DISPIMG\("(ID_[0-9A-F]+)"', img_cell)
        img = '<img alt="" src="%s">' % imgs[m.group(1)] if m and m.group(1) in imgs else '<i></i>'
    body = ''.join('<div><small>%s</small>%s</div>' % (k, esc(v) if v else '<span class="nil">—</span>') for k, v in fields)
    return ('<div class="art%s" id="%s" data-en="%s" data-g="%s">%s<div class="art-b"><div class="art-h"><b>%s</b><span class="en">%s</span>%s%s</div>'
            '<div class="art-f" style="grid-template-columns:%s">%s</div></div></div>') % (
        '' if img else ' noimg', cid, (re.sub(r'[^a-z0-9]', '', en.lower()) + ' ' + alias).strip(), html.escape(group), img, html.escape(zh), html.escape(en_show), badge,
        '<span class="note">%s</span>' % html.escape(note) if note else '', ' '.join(['1fr'] * (len(fields) - 1) + ['1.3fr']), body)


def card_list(ev, placeholder, items, got='获得', note=''):
    return ('<div class="cl" data-ev="%s"><div class="cl-top">'
            '<div class="own-bar" hidden><div class="own-seg"><button class="on" data-o="">全部<b></b></button>'
            '<button data-o="1">已%s<b></b></button><button data-o="0">未%s<b></b></button></div>'
            '<div class="own-prog"><i></i></div></div><input class="cl-q" type="search" placeholder="%s"></div>'
            '%s<div class="art-list">%s</div></div>' % (ev, got, got, placeholder,
                                                        '<p class="cl-note">%s</p>' % TERMS.render(note) if note else '', ''.join(items)))


def build_artifacts(ws, imgs):
    """遗物表 → 卡片：图标 + 名字 + 发掘条件 / 概率 / 用途。卡片 id 就是原名称格（t10-B行号），攻略、存档页的链接照旧能跳过来。"""
    val = merged_value(ws)
    groups = {}  # 同一类的遗物放在一起（表末尾补的探索遗物归到前面的探索遗物里）
    for r in range(2, ws.max_row + 1):
        name = val(r, 2)
        if not name:
            continue
        kzh, ken = split_name(val(r, 1))
        g = groups.setdefault(kzh, ['<h2 class="art-g" data-g="%s">%s <span>%s</span></h2>' % (html.escape(kzh), html.escape(kzh), html.escape(ken))])
        zh, en = split_name(name)
        cond, rate, use = val(r, 4), val(r, 5), val(r, 6)
        rq = re.search(r'R(\d+)\+', cond)
        badge = ('<em>R%s+</em>' % rq.group(1) if rq else '') + ('<em class="sure">必出</em>' if '必出' in rate else '')
        g.append(card('t10-B%d' % r, en, val(r, 3), imgs, zh, en, badge, [('发掘条件', cond), ('概率', rate), ('用途', use)], group=kzh, kind='遗'))
    return card_list('artowned', '搜索名字、条件或用途', [x for g in groups.values() for x in g])


# 隐藏奖杯表的行底色 → 最低进度（表头 A1:C2 的图例）
TROPHY_TIER = {None: '', 4: 'R40+', 9: 'R100+', 'FFC6A0E3': 'R160+'}
# 表里的名字和存档编辑器里的不一样（编辑器用复数）
TROPHY_ALIAS = {'madmask': 'madmasks', 'godsfinger': 'godsfingers'}


def build_trophies(ws, imgs):
    """隐藏奖杯表 → 卡片：图标 + 名字 + 目标 / 加成；行底色表示的最低进度做成标记。卡片 id 是原名称格（t7-A行号）。"""
    val = merged_value(ws)
    items, moved = [], 0
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
        c = card('t7-A%d' % r, en, val(r, 2), imgs, zh, '' if zh == en else en, badge, [('目标', val(r, 3)), ('加成', val(r, 4))], note,
                 alias=TROPHY_ALIAS.get(re.sub(r'[^a-z0-9]', '', en.lower()), ''), kind='隐')
        if re.search(r'改为(阵营|法术)奖杯', note):  # 4.3 起已不是隐藏奖杯：照样列出，不算进收集进度
            c = c.replace('<div class="art', '<div data-skip="1" class="art', 1)
            moved += 1
        items.append(c)
    return card_list('trophyowned', '搜索名字、目标或加成', items,
                     note='标着「4.3起改为阵营奖杯 / 法术奖杯」的 %d 项现在已不算隐藏奖杯，不计入收集进度。' % moved if moved else '')


def strip_label(v, label):
    """「条件：R2，……」→「R2，……」"""
    return re.sub(r'^%s[：:]\s*' % label, '', v)


def build_challenges(ws):
    """挑战表 → 按阵营分组的卡片：每个挑战一张（条件 / 目标 / 效果），阵营标题下面是这个阵营的法术强化。
    卡片 id 是原挑战名称格（t3-C2 这样），法术强化是 t3-I行号，专名链接照旧。"""
    val = merged_value(ws)
    items = []
    for r in range(2, ws.max_row + 1, 5):
        fac = val(r, 2) or val(r, 1)  # 佣兵的立场、阵营合并成一格
        if not fac or not val(r, 3):
            continue
        fzh, fen = (SPLIT.split(fac) + [''])[:2]
        sp = val(r, 9)
        sp_html = ''
        if sp:
            szh, sen = split_name(sp)
            sp_html = ('<div class="ch-sp" id="t3-I%d"><em>法术强化</em><b>%s</b><span class="en">%s</span><p>%s</p></div>' % (
                r, html.escape(szh), html.escape(sen), TERMS.render(val(r + 2, 9))))
        items.append('<div class="art-g ch-g" id="t3-%s%d" data-g="%s"><h2>%s <span>%s</span></h2>%s</div>' % (
            'B' if val(r, 2) else 'A', r, html.escape(fzh), html.escape(fzh), html.escape(fen), sp_html))
        for k in range(6):
            c = 3 + k
            if (r, c) in val.covered or not ws.cell(r, c).value:
                continue
            zh, en = split_name(val(r, c))
            cid = 't3-%s%d' % (get_column_letter(c), r)
            for label in ('%s挑战%d', '%s挑战 %d'):
                TERMS.add('挑', label % (fzh, k + 1), cid)
            cond = strip_label(val(r + 2, c), '条件')
            rq = re.match(r'R(\d+)', cond)
            badge = '<em class="no">挑战 %d</em>' % (k + 1) + ('<em>R%s</em>' % rq.group(1) if rq else '')
            if rq:
                cond = cond[rq.end():].lstrip('，, \t\r\n')
            combo = strip_label(val(r + 1, c), '生效组合')
            items.append(card(cid, en, None, None, zh, en, badge,
                              [('条件', cond), ('目标', strip_label(val(r + 3, c), '目标')), ('效果', strip_label(val(r + 4, c), '效果'))],
                              note='生效组合：' + combo if combo else '', group=fzh, kind='挑'))
    m = re.search(r'[（(](.+)[）)]', val(1, 9))  # 「法术强化效果（4.3起挑战效果均不受Ascension产能惩罚）」
    return card_list('challengeowned', '搜索名字、条件、目标或效果', items, '完成', note=m.group(1) + '。' if m else '')


def build_research(ws):
    """研究表 → 按分支分组的卡片（名字、代号、解锁 R、绑定阵营 / 解锁条件 / 效果），同一分支按解锁 R 排。
    4.3.9 改号的研究：代号格写着「新代号（原旧代号，……解锁晚 n 个 R）」，R 按列头加上 n。卡片 id 是原名称格（t5-C4 这样）；
    data-en 是代号（和存档编辑器研究行里的代号对上，改号的再带上旧代号）。"""
    val = merged_value(ws)
    head = {}  # 列 → (Ascension, R)
    last = ('', '')
    for c in range(3, ws.max_column + 1):
        a, rr = val(1, c) or last[0], val(2, c) or last[1]
        head[c] = last = (a, rr)
    items = []
    for r in range(4, ws.max_row + 1, 5):
        if val(r + 1, 2) != '代号':
            continue
        bzh, ben = (SPLIT.split(val(r, 1)) + [''])[1], SPLIT.split(val(r, 1))[0]
        cards = []
        for c in range(3, ws.max_column + 1):
            if (r, c) in val.covered or not ws.cell(r, c).value:
                continue
            zh, en = split_name(val(r, c))
            code_lines = SPLIT.split(val(r + 1, c))
            code, note = code_lines[0].strip(), ''.join(code_lines[1:]).strip()
            rr = head[c][1]
            m = re.match(r'^(\d+)$', rr)
            sort_r = int(re.match(r'\d+', rr).group()) if re.match(r'\d+', rr) else 0
            d = re.search(r'解锁(晚|早)(\d+)个R', note)
            if m and d:
                sort_r = int(rr) + (1 if d.group(1) == '晚' else -1) * int(d.group(2))
                rr = str(sort_r)
            fac = val(r + 2, c)
            badge = '<em class="no">%s</em><em>R%s</em>' % (html.escape(code), html.escape(rr)) + (
                '<em class="fac">%s</em>' % html.escape(fac) if fac else '')
            cid = 't5-%s%d' % (get_column_letter(c), r)
            cards.append((sort_r, c, card(cid, code, None, None, zh, en, badge,
                                          [('解锁条件', val(r + 3, c)), ('效果', val(r + 4, c))], note=note, group=bzh,
                                          kind='研')))
        items.append('<h2 class="art-g" data-g="%s">%s <span>%s</span></h2>' % (html.escape(bzh), html.escape(bzh), html.escape(ben)))
        items += [x[2] for x in sorted(cards)]
    note = re.sub(r'^说明[（(][^）)]*[）)][：:]\s*', '', val(40, 1))  # A40 的总说明（A3 起移除低点数研究等）
    return card_list('researchowned', '搜索名字、代号或效果', items, '解锁', note=note)


def build_buildings(ws):
    """建筑升级表 → 顶上选建筑，下面只列这个建筑的升级（数量 / 升级名 / 产能加成）。25 个建筑每个 23 个升级，
    加成按建筑层级重复（表里第 4 层起的加成格是合并的，merged_value 读出来每行都有）。
    建筑面板 id 是原建筑名格（t6-B2），升级行 id 是原升级名格（t6-B4），专名链接照旧；传说圣殿下面再列独特建筑升级。"""
    val = merged_value(ws)
    rows = [r for r in range(4, ws.max_row + 1) if val(r, 1) and re.match(r'\d', val(r, 1))]
    tabs, panels, tier = [], [], ''
    for c in range(2, ws.max_column + 1, 2):
        if not val(2, c) or val(3, c) != '升级名称':
            continue
        tier = val(1, c) or tier
        bzh = SPLIT.split(val(2, c))[-1].strip()
        ben = SPLIT.split(val(2, c))[0].strip()
        cid = 't6-%s2' % get_column_letter(c)
        tabs.append('<button data-p="%s">%s</button>' % (cid, html.escape(bzh)))
        out = ['<div class="bd-h"><b>%s</b><span class="en">%s</span><em>第 %s 层建筑</em></div>' % (html.escape(bzh), html.escape(ben), html.escape(tier)),
               '<div class="bd-r bd-th"><span>数量</span><span>升级</span><span>产能加成</span></div>']
        for r in rows:
            name = val(r, c)
            if not name:
                continue
            lines = SPLIT.split(val(r, 1))
            req = re.search(r'R\d+\+', val(r, 1))
            zh, en = SPLIT.split(name)[-1].strip(), SPLIT.split(name)[0].strip()
            out.append('<div class="bd-r" id="t6-%s%d"><span class="bd-n">%s%s</span><span><b>%s</b><small>%s</small></span><span>%s</span></div>' % (
                get_column_letter(c), r, html.escape(lines[0].strip()), '<em>%s</em>' % req.group() if req else '',
                html.escape(zh), html.escape(en), TERMS.render(val(r, c + 1), 't6-%s%d' % (get_column_letter(c), r)) or '<span class="nil">—</span>'))
        # 传说圣殿右边的独特建筑升级
        if c + 2 <= ws.max_column and val(3, c + 2) == '独特建筑升级':
            out.append('<div class="bd-sub">独特建筑升级</div>')
            for r in range(4, ws.max_row + 1):
                v = val(r, c + 2)
                if not v:
                    continue
                en, zh = SPLIT.split(v)[0].strip(), SPLIT.split(v)[-1].strip()
                m = re.match(r'^(.*?)[（(](.*)[）)]$', zh)
                zh, need = (m.group(1), m.group(2)) if m else (zh, '')
                out.append('<div class="bd-r bd-ub" id="t6-%s%d"><span class="bd-n">%s</span><span><b>%s</b><small>%s</small></span><span>%s</span></div>' % (
                    get_column_letter(c + 2), r, html.escape(need), html.escape(zh), html.escape(en), TERMS.render(val(r, c + 3))))
        panels.append('<div class="bd-p" id="%s" hidden>%s</div>' % (cid, ''.join(out)))
    note = next((val(r, 1) for r in range(rows[-1] + 1, ws.max_row + 1) if val(r, 1)), '')
    return ('<div class="bd-page"><div class="bd-tabs">%s</div>%s%s</div>' % (''.join(tabs), ''.join(panels),
            '<p class="bd-note">%s</p>' % TERMS.render(note) if note else '') + BD_JS)


# 建筑升级页：点建筑切换面板，记住上次看的建筑；从别处跳到某个升级时先切到它所在的建筑（捕获阶段，赶在页面路由滚动之前）
BD_JS = """<script>(function(){
  var root = document.querySelector('.bd-page'), btns = [].slice.call(root.querySelectorAll('.bd-tabs button'));
  function pick(id){
    btns.forEach(function(b){ b.classList.toggle('on', b.dataset.p === id); });
    root.querySelectorAll('.bd-p').forEach(function(p){ p.hidden = p.id !== id; });
    try { localStorage.setItem('rg-bd', id); } catch (e) {}
  }
  root.querySelector('.bd-tabs').addEventListener('click', function(e){ var b = e.target.closest('button'); if (b) pick(b.dataset.p); });
  function follow(){
    var el = document.getElementById(decodeURIComponent(location.hash.slice(1)));
    var p = el && root.contains(el) && (el.classList.contains('bd-p') ? el : el.closest('.bd-p'));
    if (p && p.hidden) pick(p.id);
  }
  window.addEventListener('hashchange', follow, true);
  var last = null; try { last = localStorage.getItem('rg-bd'); } catch (e) {}
  pick(document.getElementById(last) ? last : btns[0].dataset.p);
  follow();
})();</script>"""


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
        if n == 3 and col in ('A', 'B'):
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
    research, upgrade, challenge, artifact = code_maps(cells)
    # 卡片页的专名染色：表格名称格按所在列分类（阵营表 C 列阵营、AF/AJ 列法术、D–L/S–U 列阵营升级；UB 分布表都是建筑；
    # 建筑升级表第 2 行是建筑、往下是升级）
    up_cols = set('DEFGHIJKLSTU')
    for name, places in index.items():
        for n, ref in places:
            col, row = re.match(r'([A-Z]+)(\d+)', ref).groups()
            row, tid = int(row), 't%d-%s' % (n, ref)
            if n == 1 and col == 'C':
                for x in name.split('\\'):
                    TERMS.add('阵', x, tid, short=True)
            elif n == 1 and col in ('AF', 'AJ') and row >= 3:
                TERMS.add('法', name, tid, short=True)
            elif n == 1 and col in up_cols and row >= 3:
                TERMS.add('升', name, tid)
            elif n == 4:
                TERMS.add('建', name, tid)
            elif n == 6:
                TERMS.add('建' if row == 2 else '升', name, tid)
    for code, (n, ref) in research.items():
        TERMS.codes[code] = ('研', 't%d-%s' % (n, ref))
    for code, (n, ref) in upgrade.items():
        TERMS.codes[code] = ('升', 't%d-%s' % (n, ref))
    for code, (n, ref) in challenge.items():
        if re.fullmatch(r'[A-Z]{2}C\d', code):
            TERMS.codes[code] = ('挑', 't%d-%s' % (n, ref))
    card_pages = {10: lambda ws: build_artifacts(ws, imgs), 7: lambda ws: build_trophies(ws, imgs), 3: build_challenges, 5: build_research, 6: build_buildings}
    for n, f in card_pages.items():
        sections[n] = f(wb.worksheets[n - 1])  # 第一遍只登记卡片名（还没染色）
    # 攻略里标过的专名（两个字的也算）；指向卡片页的等卡片 id 定下来以后再登记，见下面 find
    guide_tags = set()
    for _, _, path in GUIDES:
        guide_tags |= set(re.findall(r'\{(%s):([^{}]+)\}' % '|'.join(md2html.TAGS), open(os.path.join(ROOT, path), encoding='utf-8').read()))
    # 改成卡片的工作表只留下有卡片（或阵营标题、法术强化）的格子，表头之类的格子不再能链接过去
    shown = set(re.findall(r'id="(t\d+-[A-Z]+\d+)"', ''.join(sections.values())))
    for k in list(index):
        index[k] = [p for p in index[k] if 't%d-%s' % p in shown]
        if not index[k]:
            del index[k]
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

    for kind, name in guide_tags:
        hit = find(kind, name)
        if hit:
            TERMS.add(kind, name, hit, short=True)
    TERMS.ready()
    for n, f in card_pages.items():
        sections[n] = f(wb.worksheets[n - 1])  # 第二遍：说明文字里的专名染色
    guides = {}
    for gid, label, path in GUIDES:
        title, body = md2html.convert(open(os.path.join(ROOT, path), encoding='utf-8').read(), link)
        # 网页里不要开头的来源说明框（和紧跟的分隔线），PDF 里保留
        body = re.sub(r'<h1>.*?</h1>\s*', '', body, count=1, flags=re.S)  # 网页里不要标题（用户要求）
        guides[gid] = re.sub(r'(<p class="legend">.*?</p>)\s*<blockquote>.*?</blockquote>\s*(<hr>)?', lambda m: m.group(1), body, count=1, flags=re.S)
    item = lambda h, label: '<a href="#%s" data-sec="%s">%s</a>' % (h, h, label)
    nav = '<div class="grp">攻略</div>' + ''.join(item(g, l) for g, l, _ in GUIDES)
    nav += '<div class="grp">资料表</div>' + ''.join(item('t%d' % n, SHEETS[n][0]) for n in sections)
    body = ''.join('<section id="sec-%s" class="guide" hidden>%s</section>' % (g, guides[g]) for g, _, _ in GUIDES)
    body += ''.join('<section id="sec-t%d" class="table" hidden>%s</section>' % (n, sections[n]) for n in sections)
    body += CL_JS  # 卡片列表（遗物、隐藏奖杯）的搜索和已获得切换
    body += open(os.path.join(ROOT, '脚本', 'guide_progress.html'), encoding='utf-8').read()
    # 攻略图例离开原位、浮在内容上面时加阴影
    body += """<script>document.querySelectorAll('.guide .legend').forEach(function(el){
  var home = document.createElement('div'); el.parentNode.insertBefore(home, el);
  document.addEventListener('scroll', function(){ el.classList.toggle('float', el.getBoundingClientRect().top - home.getBoundingClientRect().top > 12); }, true);
  // 鼠标放在专名上：图例里点亮这一类，其余变淡
  var sec = el.closest('section'), cur = null;
  function show(c){
    if (c === cur) return; cur = c;
    el.querySelectorAll('span').forEach(function(x){ x.classList.toggle('hl', !!c && x.classList.contains(c)); });
    el.classList.toggle('act', !!c && !!el.querySelector('.hl'));
  }
  sec.addEventListener('mouseover', function(e){
    var t = e.target.closest('[class^="t-"]');
    show(t && !el.contains(t) ? t.className.split(' ')[0] : null);
  });
  sec.addEventListener('mouseleave', function(){ show(null); });
});</script>"""
    # 存档工具：只读存档查看、法术预报、遗物预测（数据和库来自 工具/RG-tools）
    save_js, save_miss = '', []
    if os.path.isdir(save_tools.RG):
        save_html, save_js, save_miss = save_tools.build(find, {'t%d-%s' % c: code for code, c in research.items()})
        nav = item('save', '我的存档') + nav  # 法术预报、遗物预测在存档页里切换
        body += save_html
    else:
        print('没有 工具/RG-tools，跳过「我的存档」（git clone https://github.com/shadowgull/dox4242.github.io 工具/RG-tools）')
    nav = ('<div class="grp">工具</div>' + nav).replace('<div class="grp">攻略</div>',
            item('click', '自动点击') + '<div class="grp">攻略</div>', 1)
    body += open(os.path.join(ROOT, '脚本', 'auto_click.html'), encoding='utf-8').read()
    nav += '<div class="grp">关于</div>' + item('ver', '版本 ' + VERSION)
    body += version_page()
    page = TEMPLATE.replace('%%NAV%%', nav).replace('%%BODY%%', body).replace('%%TCOLORS%%', md2html.CSS[md2html.CSS.index('.t-fa'):md2html.CSS.index('[class^')])
    page = page.replace('%%APPBAR%%', appbar()).replace('%%ICON%%', icon_img())
    page = page.replace('%%SAVEJS%%', save_js)  # 最后替换：脚本里可能有别的 %% 记号
    os.makedirs(os.path.dirname(DST), exist_ok=True)
    open(DST, 'w', encoding='utf-8').write(page)
    print('写入', DST, '%.1f MB' % (len(page.encode()) / 1e6))
    print('专名链接：%d 个没找到对应格子' % len(missing))
    for x in sorted(set(missing)):
        print('  ', x)
    if save_miss:
        print('存档工具：%d 个名字没翻译，显示英文：' % len(save_miss), '、'.join(save_miss))


def version_page():
    """「版本」页：版本号和更新记录"""
    out = ['<div class="ver-hero">%s<div><h1>RGA</h1><p>Realm Grinder 助手 · 版本 <b>%s</b></p><p class="ver-by">作者 %s</p></div></div>' % (icon_img(), VERSION, AUTHOR)]
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
main{margin-left:264px;padding:16px 24px 80px 16px;overflow-anchor:none}
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
.ver-hero p{margin:0;color:var(--muted)} .ver-hero b{color:var(--blue)} .ver-hero .ver-by{font-size:13px;margin-top:2px}
#sec-ver h3 small{font-weight:normal;color:var(--muted);font-size:13px;margin-left:8px}
%%TCOLORS%%
[class^="t-"]{font-weight:600}
a[class^="t-"]{text-decoration:underline dotted;text-underline-offset:3px}
a[class^="t-"]:hover{text-decoration-style:solid}
/* 攻略的图例：小胶囊，往下滚时浮在内容上面（和遗物页的已获得胶囊一样） */
.legend{position:sticky;top:6px;z-index:3;width:max-content;max-width:100%;margin:0 0 16px;padding:5px 16px;font-size:13px;
  background:#e6ecf5;border-radius:999px;transition:box-shadow .25s,background .25s}
.legend.float{background:rgba(255,255,255,.92);backdrop-filter:blur(8px);box-shadow:0 8px 28px rgba(20,40,90,.16),0 0 0 1px rgba(20,40,90,.05)}
.legend span{display:inline-block;margin:0 1px;padding:1px 7px;border-radius:999px;white-space:nowrap;transition:background .15s,opacity .15s}
.legend span.hl{background:color-mix(in srgb,currentColor 16%,transparent)}
.legend.act span:not(.hl){opacity:.35}
.legend span::before{content:"";display:inline-block;width:10px;height:10px;border-radius:3px;background:currentColor;margin-right:4px}
section.table h1{font-size:20px;margin:0 0 14px}
.wrap{overflow:auto;max-height:calc(100vh - 110px);border:1px solid var(--line);border-radius:14px}
table.sheet{border-collapse:collapse;table-layout:fixed;font-size:13px;line-height:1.5}
table.sheet td{border:1px solid var(--line);padding:4px 7px;vertical-align:top;overflow-wrap:anywhere;scroll-margin:80px}
table.sheet img{width:40px;height:40px;object-fit:contain;display:block;margin:0 auto}
td.flash{outline:3px solid #f59e0b;outline-offset:-2px;background:var(--flash)!important;transition:background 1.5s}
/* 遗物：卡片列表 */
/* 顶上并排两个小胶囊（已获得切换、搜索框），往下滚时浮在内容上面 */
.cl-top{position:sticky;top:6px;z-index:3;display:flex;flex-wrap:wrap;align-items:center;gap:10px;max-width:100%}
.cl-top{pointer-events:none}.cl-top>*{pointer-events:auto}  /* 两个胶囊中间的空白不挡下面的卡片 */
.cl-q{width:320px;max-width:100%;margin-left:auto;height:36px;box-sizing:border-box;padding:0 16px;border:1px solid transparent;border-radius:999px;font:inherit;font-size:13px;
  background:#e6ecf5;transition:box-shadow .25s,background .25s}
.cl-q:focus{outline:none;border-color:#bcd0f7;background:#fff}
.cl-top.float .cl-q,.cl-top.float .own-bar{background:rgba(255,255,255,.92);backdrop-filter:blur(8px);box-shadow:0 8px 28px rgba(20,40,90,.16),0 0 0 1px rgba(20,40,90,.05)}
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
.art-f .t-ch{white-space:nowrap}
.cl-note{margin:12px 2px 0;padding:9px 14px;border-radius:14px;background:var(--soft);font-size:13px;color:#526079;line-height:1.7}
.art.flash{background:var(--flash);border-color:#f59e0b}
/* 挑战、研究：没有图标的卡片 */
.art.noimg{padding:12px 16px}
.art.noimg.own::before{left:auto;right:14px;top:12px}
.art-h em.no{color:#fff;background:var(--blue)}
.art-h em.fac{color:#6b4fa0;background:#f2edfb}
.has-own .art.noimg:not(.own) .art-h em.no{background:#aab4c4}
.ch-g h2{font-size:16px;margin:0}.ch-g h2 span{font-size:12px;font-weight:normal;color:#9aa5b8;margin-left:6px}
.ch-g{margin:22px 2px 8px;scroll-margin:80px}
.ch-sp{margin-top:8px;padding:9px 14px;border-radius:14px;background:var(--soft);font-size:13.5px;color:#3d4a5f;scroll-margin:80px;transition:background 1.5s}
.ch-sp em{font-style:normal;font-size:11.5px;color:#6b4fa0;background:#f2edfb;border-radius:6px;padding:0 7px;margin-right:8px}
.ch-sp b{font-size:14px;color:var(--fg)}.ch-sp .en{font-size:12px;color:#9aa5b8;margin-left:8px}
.ch-sp p{margin:4px 0 0}
.ch-sp.flash{background:var(--flash)}
/* 建筑升级：选建筑看一列 */
.bd-tabs{display:flex;flex-wrap:wrap;gap:6px;margin-bottom:18px}
.bd-tabs button{font:inherit;font-size:13px;border:none;background:#e6ecf5;color:#3d4a5f;padding:4px 13px;border-radius:999px;cursor:pointer;transition:background .15s,color .15s}
.bd-tabs button:hover{background:#d9e2f0}
.bd-tabs button.on{background:var(--blue);color:#fff;box-shadow:0 4px 12px rgba(37,99,235,.25)}
.bd-p:not([hidden]){animation:rg-in .3s cubic-bezier(.2,.8,.2,1)}
.bd-h{display:flex;align-items:baseline;gap:10px;margin:0 2px 10px}
.bd-h b{font-size:17px}.bd-h .en{font-size:12.5px;color:#9aa5b8}
.bd-h em,.bd-n em{font-style:normal;font-size:11.5px;color:#1d4ed8;background:var(--soft);border-radius:6px;padding:0 7px}
.bd-r{display:grid;grid-template-columns:120px minmax(0,1fr) minmax(0,1.4fr);gap:16px;align-items:baseline;padding:8px 12px;border-bottom:1px solid var(--line);font-size:13.5px;color:#3d4a5f;scroll-margin:80px;transition:background 1.5s}
.bd-r b{color:var(--fg);font-weight:600;margin-right:8px}.bd-r small{font-size:12px;color:#9aa5b8}
.bd-n{font-weight:600;color:var(--fg);display:flex;gap:6px;align-items:baseline;flex-wrap:wrap}
.bd-th{font-size:11.5px;color:#9aa5b8;padding-top:0}
.bd-r.flash{background:var(--flash)}
.bd-ub .bd-n{font-weight:normal;font-size:12.5px;color:var(--muted)}
.bd-sub{font-size:15px;font-weight:600;margin:24px 2px 6px}
.bd-note{margin:18px 2px 0;font-size:12.5px;color:var(--muted)}
.bd-page .nil{color:#c9d1dd}
/* 已获得 / 未获得（读到存档后才出现）：已获得图标描蓝边带勾，未获得变灰，鼠标移上去恢复 */
/* 一个小胶囊，往下滚时浮在内容上面（带阴影），不占满整行 */
.own-bar{display:flex;align-items:center;gap:14px;height:36px;box-sizing:border-box;padding:0 16px 0 4px;
  background:#e6ecf5;border-radius:999px;transition:box-shadow .25s,background .25s}
.own-seg{display:inline-flex;gap:2px}
.own-seg button{font:inherit;font-size:13px;border:none;background:none;color:var(--muted);padding:4px 14px;border-radius:999px;cursor:pointer;transition:background .15s}
.own-seg button.on{background:#fff;color:var(--fg);font-weight:600;box-shadow:0 2px 8px rgba(20,40,90,.1)}
.cl-top.float .own-seg button.on{background:var(--blue);color:#fff;box-shadow:none}
.cl-top.float .own-seg button.on b{color:#fff}
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
  // 每页独立记位置；两篇攻略还要保存到本机，关掉程序后也能接着读。
  var cur = null, pos = {}, fromLink = false, restoring = false, frame = 0;
  if ('scrollRestoration' in history) history.scrollRestoration = 'manual';
  var guideIds = ['r0', 'a0'];
  try {
    var saved = JSON.parse(localStorage.getItem('rg-guide-pos') || '{}');
    guideIds.forEach(function(id){
      if (saved && typeof saved[id] === 'number' && Number.isFinite(saved[id]) && saved[id] >= 0) pos[id] = saved[id];
    });
  } catch (e) {}
  // 网页里滚动的是整页，程序里（html.app）滚动的是 main
  window.rgScroller = function(){ return document.documentElement.classList.contains('app') ? document.querySelector('main') : document.scrollingElement; };
  function remember(){
    if (!cur || restoring) return;
    pos[cur] = rgScroller().scrollTop;
    if (guideIds.indexOf(cur) < 0) return;
    var saved = {};
    guideIds.forEach(function(id){ if (pos[id] !== undefined) saved[id] = pos[id]; });
    try { localStorage.setItem('rg-guide-pos', JSON.stringify(saved)); } catch (e) {}
  }
  function show(){
    // 隐藏旧页面会使滚动位置归零，必须在切换前保存，并忽略恢复期间的滚动事件。
    remember();
    restoring = true;
    cancelAnimationFrame(frame);
    var h = decodeURIComponent(location.hash.slice(1)) || 'r0';
    var sec = h.split(/[-\/]/)[0], sub = h.indexOf('/') > 0 ? h.split('/')[1] : '';  // 「save/rws」：存档栏里的子页
    if (!document.getElementById('sec-' + sec)) { sec = 'r0'; h = 'r0'; sub = ''; }
    secs.forEach(function(s){ s.hidden = s.id !== 'sec-' + sec; });
    navs.forEach(function(a){ a.classList.toggle('on', a.dataset.sec === sec); });  // 存档子页（save/rws）也算「我的存档」
    slide();
    if (sub) h = sec;
    window.dispatchEvent(new CustomEvent('subpage', {detail: {sec: sec, sub: sub}}));
    var el = h !== sec && document.getElementById(h);
    if (el) {
      el.classList.add('flash');
      setTimeout(function(){ el.classList.remove('flash'); }, 2500);
    }
    var y = pos[sec] || 0;
    frame = requestAnimationFrame(function(){
      if (el) el.scrollIntoView({block:'center', inline:'center'});
      else rgScroller().scrollTop = y;  // 盖过浏览器自己的锚点滚动
      frame = requestAnimationFrame(function(){ restoring = false; });
    });
    back.hidden = !(fromLink && el);
    if (!el) fromLink = false;
    cur = sec;
  }
  document.addEventListener('scroll', function(e){
    if (e.target === document || e.target === rgScroller()) remember();
  }, true);
  window.addEventListener('pagehide', remember);
  document.addEventListener('visibilitychange', function(){ if (document.hidden) remember(); });
  document.addEventListener('click', function(e){
    var a = e.target.closest('a[href^="#t"]');
    if (a && a.closest('section.guide, section.table, section.savesec, #res')) fromLink = true;
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
  window.addEventListener('rgappmode', function(){ restoring = true; show(); });
  show();
  // 全表搜索
  var q = document.getElementById('q'), res = document.getElementById('res'), timer;
  var tds = Array.prototype.slice.call(document.querySelectorAll('table.sheet td[id], .art[id], .ch-sp[id], .bd-r[id]'));
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
