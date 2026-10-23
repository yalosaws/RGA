"""把综合列表和两篇攻略合成一个 HTML：攻略里的 {类:名} 专名链接到表格里对应的格子。

用法：python 脚本/build_html.py [综合列表.xlsx] [输出.html]
默认读 表格/RG综合列表（4.3.14）.xlsx，写到 build/RGA.html（程序界面，打包时装进 exe；不进 git）。
openpyxl 只用来读取（不能用它保存这个表，见 CLAUDE.md）。
"""
import base64
import html
import json
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
BARE_SHEETS = {2, 4, 8}  # 不套滚动框的表格页
# 各类专名优先在哪些表里找
PREFER = {'阵': [1, 3], '法': [1, 8], '升': [1, 6, 3, 5, 2], '建': [6, 4, 1], '隐': [7], '奖': [7, 1, 3],
          '研': [5], '挑': [3], '遗': [10]}
ALIAS = {'TC': '征税', 'CtA': '动员令', 'HoL': '传说圣殿', 'BF': '嗜血狂热', 'NT': '暗夜眷顾', 'LS': '雷击', 'MB': '月之祝福'}
# 遗物表里阵营遗物按全阶英豪奖杯的顺序排，每个阵营两个
ART_FACTIONS = ['仙灵', '精灵', '天使', '地精', '亡灵', '恶魔', '泰坦', '德鲁伊', '无面者', '矮人', '卓尔', '佣兵']
# 程序版本：改了功能就加版本号，在 CHANGES 最前面写这一版改了什么
VERSION = '0.3.5'  # 还没到正式发布，用 0.x（用户要求）
AUTHOR = 'Yalosaws'
CHANGES = [
    ('0.3.5', '2026-10-22', [
        '研究页重做：时间线（按最早能解锁的 R 排，七个分支各一列，标出「你在这里」）和星盘两种看法，铺满整个宽度；研究点数一条进度条显示这个 R 的上限 / 当前 Ascension 的上限',
        '研究页读到存档后按存档的 R 标出已解锁、可解锁（点数够了）、本局已购买；点研究在原地变大：同一行的其他研究被挤到两边、下面的往下让开，显示解锁条件、绑定阵营（和你现在用的阵营对比）、组合研究的前置和后续；前置（橙）和后续（蓝）用连线连上并加强调，其余变淡',
        '新布局：侧栏和内容区贴着窗口边、互相挨着，外侧的角和窗口圆角贴合；窗口按钮做成小胶囊放在卡片右上角，和顶上的浮动胶囊对齐',
        '拖动窗口：侧栏和菜单的空白处、内容区顶上一条都能拖，双击最大化；滚动条从窗口按钮下面开始',
        '侧栏菜单项间距加大，选中块的阴影改小改淡，不再压到相邻一项',
        '内容区是一整张圆角卡片，往下滚时顶部渐隐，文字从浮动胶囊下面淡出，不再露出直角或半行字',
        '传承、UB 分布、活动页去掉表格外面的滚动框：上下跟着页面滚，活动表太宽时只在表格里左右滚',
        '研究已解锁标记按游戏客户端核对，全部 264 项对上（含 4.3.9 改号的 45 项）；修正四组互相点错的研究：合成（A150）/ 爆炸物（A270）、转换（E150）/ 投资（E400）、成圣（D245）/ 撕裂灵魂（D1375）、庄园（E3300）/ 受雇佣兵（E3250）',
    ]),
    ('0.3.4', '2026-10-22', [
        '攻略和资料里的奖杯专名改用黄色',
        '移除自动点击页面；自动点击固定用 F8 启停、每 35 毫秒点一次，暂不支持修改',
        '攻略表格第一列不再自动换行',
        '攻略里的挑战统一叫「阵营挑战 n」（如卓尔挑战 1），不再用 DWC1 这类代号',
        '挑战页的条件去掉「使用本阵营」，「使用恶魔血统的恶魔」写成「使用恶魔血统」',
        '我的存档：存档查看去掉挑战、阵营升级、阵营币分页和隐藏奖杯、遗物两段（已在对应资料页标出），自动施法分页暂时下线',
        '隐藏奖杯页去掉 4.3 起改成阵营奖杯 / 法术奖杯的 5 项（驯龙高手、系谱学家、墨翎之艺、精英面具、神圣狂热）',
        '攻略图例的「已解锁变灰」开关改成「已解锁」小胶囊：去掉开关和分隔线（保留前面的小灰块），点一下选中，已解锁的链接从上到下依次变灰',
        '攻略已解锁标记：阵营解锁后，它的阵营升级 1–9 都算已解锁（只花金币就能买）；10–12、遗产、高级遗产仍按存档记录',
        '攻略已解锁标记：拿到法术奖杯后，同名的法术升级（日耀祝福、雷暴、横征暴敛等）也变灰；链接指向的资料卡片已获得时一律变灰',
    ]),
    ('0.3.3', '2026-10-22', [
        '资料表恢复 21 处被译名处理吞掉的说明（时流涌动、几项研究的解锁条件、活动的等级要求和新图标奖励等）',
        '遗物：补上灼痕拉之面具；日曜之力 12:00～17:59 一档改为提升产能；胡须毛发等三个显赫遗物改为 R110，矮人铁砧等三个改为 R235；粗糙石头对应的研究代号改为 D270',
        '研究页、挑战页顶部加上适用说明；受雇佣兵的前置改为 S2900；隐藏奖杯的收集进度不再计入已改成阵营 / 法术奖杯的 5 项',
        'A0 攻略：A480 改为 A450；占卜机器要在不加入任何阵营时才能挖到',
        '遗物预测：修正法力织机、工厂、战场、固态云算不出概率的问题，以及第二 / 第三晶片、第二石片、毒药瓶、第三铁片的概率和 8 个遗物的最低 R',
        '遗物预测：神话按用得最多的法术计算，被遗忘的遗物按新研究代号算已花研究点数，噩梦残片用新的脑波起步时间',
        '遗物预测：用到存档里没有的数值的 14 个遗物只显示需要达到的数值，不再直接显示「获得」',
        '有限祈愿预报：恒常混沌起步改为 500 次，加成按 4.3 的产能 / 非产能公式估算',
    ]),
    ('0.3.2', '2026-10-21', [
        '两篇攻略分别记住上次阅读的位置，切换页面或重新打开程序后自动恢复',
        '新增自动点击工具：默认 F8 全局启停，可设置快捷键、组合键和点击间隔',
        '连点设置保存在本机；只在游戏前台且鼠标位于游戏内时点击，关闭程序自动停止',
        '研究资料页改为跟踪已解锁状态，已解锁但未购买的研究也计入进度和筛选',
        '研究进度按当前版本代号匹配，修复部分改号研究无法标记的问题',
        '两篇攻略的颜色图例末尾新增「已解锁变灰」开关，设置同步并保存在本机；开启后已解锁的链接显示灰色，仍可点击查看资料',
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
        total++; if (y) n++;
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
        if re.search(r'改为(阵营|法术)(奖杯|成就)', note):  # 4.3 起已不是隐藏奖杯，不列出
            continue
        f = ws.cell(r, 1).fill
        color = (f.fgColor.rgb if f.fgColor.type == 'rgb' else f.fgColor.theme) if f is not None and f.fill_type == 'solid' else None
        tier = TROPHY_TIER.get(color, '')
        badge = '<em>%s</em>' % tier if tier else ''
        c = card('t7-A%d' % r, en, val(r, 2), imgs, zh, '' if zh == en else en, badge, [('目标', val(r, 3)), ('加成', val(r, 4))], note,
                 alias=TROPHY_ALIAS.get(re.sub(r'[^a-z0-9]', '', en.lower()), ''), kind='隐')
        items.append(c)
    return card_list('trophyowned', '搜索名字、目标或加成', items)


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
            # 卡片已按阵营分组，「使用恶魔，」不用再写；「使用恶魔血统的恶魔」只留血统
            cond = re.sub(r'^使用%s，' % re.escape(fzh), '', cond)
            cond = re.sub(r'^使用(%s血统)的%s，' % ((re.escape(fzh),) * 2), r'使用\1，', cond)
            combo = strip_label(val(r + 1, c), '生效组合')
            items.append(card(cid, en, None, None, zh, en, badge,
                              [('条件', cond), ('目标', strip_label(val(r + 3, c), '目标')), ('效果', strip_label(val(r + 4, c), '效果'))],
                              note='生效组合：' + combo if combo else '', group=fzh, kind='挑'))
    m = re.search(r'[（(](.+)[）)]', val(1, 9))  # 「法术强化效果（4.3起挑战效果均不受Ascension产能惩罚）」
    return card_list('challengeowned', '搜索名字、条件、目标或效果', items, '完成', note=m.group(1) + '。' if m else '')


def rs_cap(r):
    """R 时每个分支最多能有的研究点数（A0/A1 是 R(R+1)/2，A2 封顶 5000，A3 每 R +125 到 7000，A4 是 125(R-134) 到 14000）"""
    if r < 16: return 0
    if r < 100: return r * (r + 1) // 2
    if r < 175: return 5000
    if r < 220: return min(5000 + 125 * (r - 174), 7000)
    return min(125 * (r - 134), 14000)


def build_research(ws):
    """研究表 → 研究页：时间线（按最早能解锁的 R 排，七个分支一列一个）和星盘，点研究在原地展开成详情卡。
    代号的数字就是需要的研究点数，最早的 R 按每个分支的点数上限算（和表头的 R、「解锁晚 n 个 R」都对得上）。
    组合研究（解锁条件里写了别的研究代号）：前置都解锁、点数到位就自动解锁；绑定阵营的还要正在用那个阵营。
    格子 id 是原名称格（t5-C4 这样），专名链接和全表搜索照旧跳过来；读到存档后用 researchsave 事件里的 R、阵营、点数和已解锁记录。"""
    val = merged_value(ws)
    items = []
    for r in range(4, ws.max_row + 1, 5):
        if val(r + 1, 2) != '代号':
            continue
        for c in range(3, ws.max_column + 1):
            if (r, c) in val.covered or not ws.cell(r, c).value:
                continue
            zh, en = split_name(val(r, c))
            lines = SPLIT.split(val(r + 1, c))
            code, note = lines[0].strip(), ''.join(lines[1:]).strip()
            old = re.search(r'原([SCDEAWF]\d+)', note)
            n = int(re.sub(r'\D', '', code))
            cid = 't5-%s%d' % (get_column_letter(c), r)
            TERMS.add('研', zh, cid)
            cond, eff = val(r + 3, c), val(r + 4, c)
            items.append(dict(id=cid, b=code[0], code=code, old=old.group(1) if old else '', n=n, zh=zh, en=en, fac=val(r + 2, c),
                              r=next(x for x in range(16, 300) if rs_cap(x) >= n), cond=cond, eff=eff,
                              ch=TERMS.render(cond, cid), eh=TERMS.render(eff, cid), note=re.sub(r'^[（(]|[）)]$', '', note)))
    codes = {x['code']: x['code'] for x in items}
    codes.update({x['old']: x['code'] for x in items if x['old']})
    for x in items:  # 解锁条件里提到的研究代号（旧代号换成新的）就是前置
        pre = []
        for m in re.finditer(r'(?<![A-Za-z0-9])([SCDEAWF]\d+)(?!\d)', x['cond']):
            k = codes.get(m.group(1))
            if k and k != x['code'] and k not in pre:
                pre.append(k)
        x['pre'] = pre
        x['q'] = ' '.join([x['code'], x['old'], x['zh'], x['en'], x['cond'], x['eff']]).lower()
        del x['cond'], x['eff']
    data = json.dumps(items, ensure_ascii=False, separators=(',', ':')).replace('</', '<\\/')
    # 全表搜索用的隐藏索引（格子是脚本画的，换视图、筛选时会不见）
    idx = ''.join('<i class="rs-s" data-id="%s">%s %s %s</i>' % (x['id'], x['code'], html.escape(x['zh']), html.escape(x['en'])) for x in items)
    return RS_HTML.replace('%%IDX%%', idx).replace('%%DATA%%', data)


RS_HTML = """<div class="cl rs" data-ok="1"><div class="cl-top">
<div class="own-bar tight"><div class="own-seg" id="rs-views"><button data-v="lane" class="on">时间线</button><button data-v="dial">星盘</button></div></div>
<input class="cl-q" id="rs-q" type="search" placeholder="搜索名字、代号或效果"></div>
<div class="rs-rp"><div class="rs-rp-h"><b>研究点数</b><span id="rs-rpn"></span></div><div class="rs-rp-bar"><i id="rs-rpbar"></i></div></div>
<div class="rs-view on" id="rs-v-lane"></div>
<div class="rs-view" id="rs-v-dial"><div class="rs-dial" id="rs-dial"></div></div>
<div class="rs-tip" id="rs-tip"></div><div hidden>%%IDX%%</div></div>
<script>window.RS_DATA = %%DATA%%;</script>
"""

# 研究页的脚本：时间线、星盘、详情，读到存档后按 researchsave 事件标状态
RS_JS = r"""<script>(function(){
  var root = document.querySelector('.rs'); if (!root) return;
  var DATA = window.RS_DATA;
  var BR = [['S','法术学'],['C','工艺'],['D','神圣'],['E','经济学'],['A','炼金术'],['W','战术'],['F','禁忌']];
  var BN = {}; BR.forEach(function(b){ BN[b[0]] = b[1]; });
  var HEX = {S:'#7c5cd6',C:'#d0622b',D:'#c9930a',E:'#1f9d55',A:'#0e8aa8',W:'#d9434b',F:'#5b6b82'};
  var FNAME = ['仙灵','精灵','天使','地精','亡灵','恶魔','泰坦','德鲁伊','无面者','矮人','卓尔','佣兵'];
  var ERA = [[16,'ASCENSION 0'],[40,'ASCENSION 1'],[100,'ASCENSION 2'],[160,'ASCENSION 3'],[220,'ASCENSION 4']];
  var byCode = {}; DATA.forEach(function(x){ byCode[x.code] = x; x.post = []; });
  DATA.forEach(function(x){ x.pre.forEach(function(p){ if (byCode[p]) byCode[p].post.push(x.code); }); });
  function cap(r){ return r < 16 ? 0 : r < 100 ? r * (r + 1) / 2 : r < 175 ? 5000 : r < 220 ? Math.min(5000 + 125 * (r - 174), 7000) : Math.min(125 * (r - 134), 14000); }
  function ascOf(r){ return r < 40 ? 0 : r < 100 ? 1 : r < 160 ? 2 : r < 220 ? 3 : 4; }
  function hash(s){ var h = 7; for (var i = 0; i < s.length; i++) h = (h * 31 + s.charCodeAt(i)) >>> 0; return h; }
  function esc(s){ return String(s).replace(/[&<>"]/g, function(c){ return {'&':'&amp;','<':'&lt;','>':'&gt;','"':'&quot;'}[c]; }); }
  function $(id){ return document.getElementById('rs-' + id); }
  function each(list, f){ return list.map(f).join(''); }
  function uniqR(list){ var rs = []; list.forEach(function(x){ if (rs.indexOf(x.r) < 0) rs.push(x.r); }); return rs.sort(function(a, b){ return a - b; }); }
  var SAVE = null, MYF = [], R = 16, VIEW = 'lane', SEL = null, Q = '', ST = {}, RP = {};
  try { VIEW = localStorage.getItem('rg-rs-view') === 'dial' ? 'dial' : 'lane'; } catch (e) {}
  function own(c){ return !!SAVE && c in SAVE.own; }
  function bought(c){ return !!SAVE && SAVE.own[c] === true; }
  function facBad(x){ return !!x.fac && MYF.length > 0 && x.fac.split('+').some(function(f){ return FNAME.indexOf(f) >= 0 && MYF.indexOf(f) < 0; }); }

  // 状态：gone A3 起移除（400 点及以下），own 存档里已解锁，can 点数够、R 也到了，no 还不行
  function compute(){
    var A = ascOf(R), c = cap(R), atSave = SAVE && R === SAVE.r;
    BR.forEach(function(b){
      var k = b[0], s = SAVE ? SAVE.rp[k] || 0 : 0;
      RP[k] = atSave ? s : (k === 'F' && R < 180 ? 0 : Math.max(s, c));
    });
    DATA.forEach(function(x){
      ST[x.code] = A >= 3 && x.n <= 400 ? 'gone' : own(x.code) ? 'own' : (x.n <= RP[x.b] && R >= x.r && !(x.b === 'F' && R < 180)) ? 'can' : 'no';
    });
  }
  function visible(x){ return ST[x.code] !== 'gone'; }
  function match(x){ return !Q || x.q.indexOf(Q) >= 0; }

  // 研究点数：这个 R 每个分支最多能有的点数 / 这个 Ascension 的上限
  function renderRP(){
    var A = ascOf(R), c = cap(R), top = [780, 4950, 5000, 7000, 14000][A];
    $('rpn').innerHTML = '<b>' + c.toLocaleString() + '</b> / ' + top.toLocaleString();
    $('rpbar').style.width = (c / top * 100) + '%';
  }
  function cell(x){
    return '<div class="rs-c st-' + ST[x.code] + (bought(x.code) ? ' bought' : '') + '" id="' + x.id + '" data-c="' + x.code + '"><div class="rs-cd"><em>' + x.code + '</em>' +
      (x.pre.length ? '<span>组合</span>' : '') + '</div><div class="rs-nm">' + esc(x.zh) + '</div></div>';
  }
  // 时间线：一行一个 R（最早能解锁的 R），七个分支一列一个；R 不单独标，看 Ascension 分隔线和「你在这里」
  function renderLane(){
    var list = DATA.filter(function(x){ return visible(x) && match(x); }), rs = uniqR(list);
    var h = '<div class="rs-lh">' + each(BR, function(b){ return '<span><i class="rs-dot" style="background:' + HEX[b[0]] + '"></i>' + b[1] + '</span>'; }) + '</div>';
    var era = -1, placed = false, here = '<div class="rs-here"><span>你在这里 · R' + R + '</span></div>';
    rs.forEach(function(r){
      var e = ERA.filter(function(z){ return r >= z[0]; }).length - 1;
      if (!placed && r > R) { placed = true; h += here; }
      if (e !== era) { era = e; h += '<div class="rs-era">' + ERA[e][1] + '</div>'; }
      h += '<div class="rs-lr">' + each(BR, function(b){
        return '<div class="rs-col">' + each(list.filter(function(x){ return x.b === b[0] && x.r === r; }).sort(function(a, c){ return a.n - c.n; }), cell) + '</div>';
      }) + '</div>';
    });
    if (!placed) h += here;
    if (!rs.length) h += '<div class="rs-empty">没有符合的研究</div>';
    $('v-lane').innerHTML = '<svg class="rs-lsvg"></svg>' + h;
  }
  function station(x, cx, cy, r){
    var st = ST[x.code], c = HEX[x.b];
    return '<g class="rs-st" data-c="' + x.code + '" data-t="' + x.code + ' ' + esc(x.zh) + ' · R' + x.r + '" opacity="' + (match(x) ? 1 : .18) + '">' +
      '<circle class="p" cx="' + cx + '" cy="' + cy + '" r="' + r + '" fill="' + (st === 'own' ? c : '#fff') + '" stroke="' + (st === 'no' ? '#d5dce7' : c) + '" stroke-width="2"/>' +
      (x.pre.length ? '<circle cx="' + cx + '" cy="' + cy + '" r="2" fill="' + (st === 'own' ? '#fff' : c) + '" pointer-events="none"/>' : '') + '</g>';
  }
  // 星盘：七个分支各占一块扇区，越往外 R 越大；浅蓝圆是现在的 R
  var dialPos = {}, dialPath = null;
  function renderDial(){
    var items = DATA.filter(visible), rs = uniqR(items);
    var S = 640, C = S / 2, R0 = 66, R1 = C - 40;
    var rad = function(r){ return R0 + (R1 - R0) * Math.sqrt(rs.indexOf(r) / (rs.length - 1 || 1)); };
    var radAt = function(r){ var k = rs.filter(function(z){ return z <= r; }).length; if (!k) return R0 - 10; return k >= rs.length ? R1 + 10 : (rad(rs[k - 1]) + rad(rs[k])) / 2; };
    var sec = 2 * Math.PI / BR.length, pos = {};
    BR.forEach(function(b, i){
      var groups = {};
      items.filter(function(x){ return x.b === b[0]; }).forEach(function(x){ (groups[x.r] = groups[x.r] || []).push(x); });
      Object.keys(groups).forEach(function(k0){ var g = groups[k0]; g.forEach(function(x, k){
        var step = Math.min(0.11, sec * 0.78 / g.length), jit = g.length === 1 ? ((hash(x.code) % 100) / 100 - .5) * sec * .55 : 0;
        var a = -Math.PI / 2 + i * sec + sec / 2 + (k - (g.length - 1) / 2) * step + jit, rr = rad(x.r) + (g.length > 3 ? (k % 2) * 7 : 0);
        pos[x.code] = [C + rr * Math.cos(a), C + rr * Math.sin(a)];
      }); });
    });
    var s = '<svg viewBox="0 0 ' + S + ' ' + S + '" font-family="Microsoft YaHei UI">';
    s += '<circle cx="' + C + '" cy="' + C + '" r="' + radAt(R) + '" fill="#eef3fc" stroke="#bcd0f7" stroke-width="1.5"/>';
    ERA.forEach(function(z){ var r = rs.filter(function(r){ return r >= z[0]; })[0]; if (r === undefined) return; var rr = rad(r) - 6;
      if (z[0] > 16) s += '<circle cx="' + C + '" cy="' + C + '" r="' + rr + '" fill="none" stroke="#e6ebf3"/><text x="' + (C + 4) + '" y="' + (C - rr + 13) + '" font-size="10" fill="#9aa5b8">' + z[1].replace('ASCENSION ', 'A') + '</text>'; });
    BR.forEach(function(b, i){ var a = -Math.PI / 2 + i * sec, am = a + sec / 2;
      s += '<line x1="' + (C + R0 * .7 * Math.cos(a)) + '" y1="' + (C + R0 * .7 * Math.sin(a)) + '" x2="' + (C + (R1 + 22) * Math.cos(a)) + '" y2="' + (C + (R1 + 22) * Math.sin(a)) + '" stroke="#eef1f6"/>';
      s += '<text x="' + (C + (R1 + 26) * Math.cos(am)) + '" y="' + (C + (R1 + 26) * Math.sin(am) + 4) + '" font-size="13" fill="#3d4a5f" text-anchor="middle">' + b[1] + '</text>'; });
    s += '<g class="rs-links"></g>';
    var no = items.filter(function(x){ return ST[x.code] === 'own'; }).length, nc = items.filter(function(x){ return ST[x.code] === 'can'; }).length;
    s += '<text x="' + C + '" y="' + (C - 2) + '" font-size="24" font-weight="700" fill="#2563eb" text-anchor="middle">R' + R + '</text>' +
      '<text x="' + C + '" y="' + (C + 18) + '" font-size="11.5" fill="#6b7689" text-anchor="middle">' + (SAVE ? '已解锁 ' + no + ' · ' : '') + '可解锁 ' + nc + '</text>';
    items.forEach(function(x){ s += station(x, pos[x.code][0], pos[x.code][1], x.pre.length ? 6 : 5); });
    $('dial').innerHTML = s + '</svg>';
    dialPos = pos;
    dialPath = function(a, b){ return 'M' + a[0] + ' ' + a[1] + ' Q' + (C + ((a[0] + b[0]) / 2 - C) * .35) + ' ' + (C + ((a[1] + b[1]) / 2 - C) * .35) + ' ' + b[0] + ' ' + b[1]; };
  }
  // 星盘上选中的研究：橙线连前置，蓝线连后续
  function drawLinks(){
    var g = root.querySelector('.rs-links'); if (!g) return;
    var s = '', pos = dialPos;
    if (SEL && pos[SEL]) {
      var x = byCode[SEL];
      x.pre.forEach(function(p){ if (pos[p]) s += '<path class="rs-lnk" d="' + dialPath(pos[p], pos[SEL]) + '" fill="none" stroke="#f59e0b" stroke-width="2.2"/>'; });
      x.post.forEach(function(p){ if (pos[p]) s += '<path class="rs-lnk" d="' + dialPath(pos[SEL], pos[p]) + '" fill="none" stroke="#2563eb" stroke-width="2.2"/>'; });
      s += '<circle cx="' + pos[SEL][0] + '" cy="' + pos[SEL][1] + '" r="11" fill="#ffe58a" fill-opacity=".6" stroke="#f59e0b" stroke-width="2"/>';
    }
    g.innerHTML = s;
  }
  // 详情：时间线里在格子本身展开（inCell），星盘上是点旁边的卡片
  function detHtml(x, inCell){
    var st = ST[x.code];
    var stt = {own: ['已解锁', 'no'], can: ['可解锁', ''], no: ['还没到', 'gray'], gone: ['A3 起已移除', 'gray']}[st];
    var chip = function(c){ var y = byCode[c]; return '<span class="rs-pc st-' + ST[c] + '" data-c="' + c + '"><i class="rs-dot" style="background:' + HEX[y.b] + '"></i>' + c + ' ' + esc(y.zh) +
      (SAVE ? '<i>' + (ST[c] === 'own' ? '已解锁' : '未解锁') + '</i>' : '') + '</span>'; };
    var bad = facBad(x) && st !== 'own';
    return (inCell ? '<div class="en">' + esc(x.en) + ' · ' + BN[x.b] + ' ' + x.n.toLocaleString() + ' 点</div>' :
      '<button class="rs-x" title="收起"><svg viewBox="0 0 10 10"><path d="M0 0l10 10M10 0L0 10"/></svg></button>' +
      '<div class="rs-top"><span class="rs-dot" style="background:' + HEX[x.b] + '"></span>' + BN[x.b] + ' · ' + x.n.toLocaleString() + ' 点</div>' +
      '<h3>' + esc(x.zh) + '</h3><div class="en">' + esc(x.en) + '</div>') +
      '<div class="rs-tags"><em class="' + stt[1] + '">' + stt[0] + '</em>' + (bought(x.code) ? '<em class="no">本局已购买</em>' : '') + (inCell ? '' : '<em>' + x.code + '</em>') + '<em>R' + x.r + '</em>' +
      (x.fac ? '<em class="fac">' + esc(x.fac) + '</em>' : '') + '</div>' +
      '<div class="rs-f"><small>解锁条件</small>' + (x.ch || '<span class="nil">—</span>') + '</div>' +
      (x.fac ? '<div class="rs-f"><small>阵营</small>需要使用' + esc(x.fac) + (MYF.length ? ' <em class="' + (bad ? 'warn' : 'gray') + '">你现在是' + MYF.join('+') + '</em>' : '') + '</div>' : '') +
      (x.pre.length ? '<div class="rs-f"><small>前置</small>' + each(x.pre, chip) + '<div class="rs-hint">前置都解锁、点数到 ' + x.n + (x.fac ? '、用着' + esc(x.fac) : '') + '就自动解锁</div></div>' : '') +
      (x.post.length ? '<div class="rs-f"><small>后续（需要它的研究）</small>' + each(x.post, chip) + '</div>' : '') +
      '<div class="rs-f"><small>效果</small>' + (x.eh || '—') + '</div>' +
      (x.note ? '<div class="rs-f"><small>备注</small><span class="rs-mut">' + esc(x.note) + '</span></div>' : '');
  }

  // 时间线：选中的格子以中心为基准原地变大（向上下左右同时长）。表格本身不重排：
  // 放大的卡片是盖在原位上的一张（原格子留着占位），同一列上面的格子往上让、下面的往下让（先用掉原有的空隙），
  // 别的列里挨着卡片的格子被挤窄、往两边让开，所以卡片旁边不会空出一块。位置和大小都是 CSS 过渡，连线逐帧跟着重画。
  var big = null;
  function slotEl(c){ return c ? $('v-lane').querySelector('.rs-col .rs-c[data-c="' + c + '"]') : null; }
  function laneEl(c){ return !c ? null : big && big.dataset.c === c && big.isConnected ? big : slotEl(c); }
  function bigHtml(x){
    // 内容包一层 rs-bi 来裁剪（高度过渡时不漏出来），卡片本身不裁，角上的勾才能一直露在外面
    return '<div class="rs-bi"><div class="rs-cd"><em>' + x.code + '</em>' + (x.pre.length ? '<span>组合</span>' : '') +
      '<button class="rs-x" title="收起"><svg viewBox="0 0 10 10"><path d="M0 0l10 10M10 0L0 10"/></svg></button></div>' +
      '<div class="rs-nm">' + esc(x.zh) + '</div><div class="rs-det">' + detHtml(x, true) + '</div></div>';
  }
  function place(el, x, y, w, h){ el.style.left = x + 'px'; el.style.top = y + 'px'; el.style.width = w + 'px'; el.style.height = h + 'px'; }
  // 收起：缩回原格子。原格子这时可能正被新展开的卡片推开，所以缩到它推开后的位置和宽度（moves 里有），不然缩完会跳一下
  function closeBig(b, anim, moves){
    var slot = slotEl(b.dataset.c), m = slot && moves.get(slot) || {};
    b.classList.remove('open', 'sel');
    b.classList.add('closing');  // 压在新卡片下面
    var done = function(){ b.remove(); if (slot) slot.classList.remove('rs-hide'); };
    if (!anim || !slot) { done(); return; }
    place(b, slot.offsetLeft + (m.x || 0), slot.offsetTop + (m.y || 0), m.w || slot.offsetWidth, slot.offsetHeight);
    setTimeout(done, 460);
  }
  function ci(c){ return [].indexOf.call(c.parentNode.parentNode.children, c.parentNode); }  // 格子在第几列
  function openCell(prev, anim){
    var lane = $('v-lane'), slot = slotEl(SEL), still = !anim;
    if (big && !big.isConnected) big = null;  // 时间线重画过
    if (still) lane.classList.add('rs-still');
    var closing = big && big.dataset.c !== SEL ? big : null;
    if (closing) big = null;
    var cells = [].slice.call(lane.querySelectorAll('.rs-col .rs-c'));
    var moves = new Map();
    if (SEL && slot) {
      var x = byCode[SEL], i = BR.map(function(b){ return b[0]; }).indexOf(x.b), g = 8;
      var bw = slot.parentNode.offsetWidth, colX = BR.map(function(b, k){ return k * (bw + g); });
      var x0 = colX[i], t0 = slot.offsetTop, h0 = slot.offsetHeight, W = lane.clientWidth;
      // 宽度：以格子为中心向两边撑开，每边被挤的格子最窄 60px，一边让不动了由另一边让
      var G = g;  // 放大的卡片和四周格子的间距
      var Wo = Math.min(Math.max(300, bw * 2.2), W * .5), mn = Math.min(bw, 60), capL = i * (bw - mn), capR = (6 - i) * (bw - mn);
      Wo = Math.max(bw, Math.min(Wo, bw + capL + capR));  // 窗口很窄时也不比原格子小
      var L = Math.max(x0 - capL, Math.min(x0 + bw / 2 - Wo / 2, x0 + bw + capR - Wo)), eL = x0 - L, eR = L + Wo - x0 - bw;
      // 高度：按放大后的宽度先量一次
      var ms = document.createElement('div');
      ms.className = 'rs-c rs-big open'; ms.style.cssText = 'visibility:hidden;transition:none;height:auto;width:' + Wo + 'px';
      ms.innerHTML = bigHtml(x); lane.appendChild(ms);
      var Ho = ms.offsetHeight; ms.remove();
      var T = Math.max(0, t0 + h0 / 2 - Ho / 2);
      // 同一列：上面的往上推、下面的往下推，碰到原有的空隙就停；推到顶了就让卡片整体往下挪一点
      var col = cells.filter(function(c){ return c !== slot && ci(c) === i; });
      var up = col.filter(function(c){ return c.offsetTop < t0; }).sort(function(a, b){ return b.offsetTop - a.offsetTop; });
      var dn = col.filter(function(c){ return c.offsetTop > t0; }).sort(function(a, b){ return a.offsetTop - b.offsetTop; });
      for (var pass = 0; pass < 2; pass++) {
        var lim = T - G, minTop = 0; moves.clear();
        up.forEach(function(c){ var t = c.offsetTop, h = c.offsetHeight, nb = Math.min(t + h, lim); if (nb < t + h) moves.set(c, {y: nb - t - h}); lim = Math.min(t, nb - h) - g; minTop = Math.min(minTop, nb - h); });
        if (minTop >= 0) break;
        T -= minTop;
      }
      var lim2 = T + Ho + G;
      dn.forEach(function(c){ var t = c.offsetTop, h = c.offsetHeight, nt = Math.max(t, lim2); if (nt > t) moves.set(c, {y: nt - t}); lim2 = nt + h + g; });
      // 别的列：和卡片上下有重叠的格子挤窄、往两边让
      cells.forEach(function(c){
        var k = ci(c);
        if (k === i || c.offsetTop >= T + Ho + G || c.offsetTop + c.offsetHeight <= T - G) return;
        var s = k < i ? (eL + G - g) / i : (eR + G - g) / (6 - i); if (!(s > 0.5)) return;
        var nl = k < i ? colX[0] + k * (bw - s + g) : L + Wo + G + (k - i - 1) * (bw - s + g);
        moves.set(c, {x: nl - colX[k], w: bw - s});
      });
      // 放大的卡片
      if (!big) {
        big = document.createElement('div');
        big.className = 'rs-c rs-big st-' + ST[x.code] + (bought(x.code) ? ' bought' : '') + ' sel';
        big.dataset.c = x.code;
        big.innerHTML = bigHtml(x);
        lane.appendChild(big);
        place(big, x0, t0, bw, h0);
        slot.classList.add('rs-hide');
        if (!still) void big.offsetWidth;  // 从原格子的位置和大小开始过渡
        big.classList.add('open');
      }
      place(big, L, T, Wo, Ho);
    }
    if (closing) closeBig(closing, anim && prev !== SEL, moves);
    cells.forEach(function(c){
      var m = moves.get(c);
      c.style.transform = m ? 'translate(' + (m.x || 0) + 'px,' + (m.y || 0) + 'px)' : '';
      c.style.width = m && m.w ? m.w + 'px' : '';
      c.classList.toggle('sq', !!(m && m.w));
    });
    if (still) { void lane.offsetWidth; lane.classList.remove('rs-still'); }
    // 连线每帧重画；淡入只在整层上做一次，跟着卡片一起长出来
    var svg = lane.querySelector('.rs-lsvg');
    if (anim && SEL && SEL !== prev && svg && svg.animate) svg.animate([{opacity: 0}, {opacity: 1}], {duration: 280, easing: 'ease-out'});
    animLinks(anim ? 620 : 0);
    if (big && anim && anim !== 'jump') setTimeout(function(){
      if (!big) return;
      var r = big.getBoundingClientRect(), h = innerHeight;
      if (r.top < 60 || r.bottom > h - 8) big.scrollIntoView({block: r.height > h - 120 ? 'start' : 'nearest', behavior: 'smooth'});  // 放大后超出屏幕才挪
    }, 480);
  }
  var linkRaf = 0;
  function animLinks(ms){
    cancelAnimationFrame(linkRaf);
    var end = performance.now() + ms;
    (function f(){ drawLaneLinks(); if (performance.now() < end) linkRaf = requestAnimationFrame(f); })();
  }
  // 连线：两头接在格子边的中点，每头各自选朝向对方中心的那条边，曲线沿那条边的法线方向出去、进来。
  // 只避开高亮的格子（放大的卡片和它的前置、后续）：默认那条曲线会穿过它们时，换别的边、换弯曲程度再试，
  // 挑一条不穿过的；变淡的格子不用管。
  function side(r, cx, cy){
    var dx = (cx - (r.l + r.w / 2)) / (r.w / 2), dy = (cy - (r.t + r.h / 2)) / (r.h / 2);
    return Math.abs(dx) > Math.abs(dy) ? (dx > 0 ? 'r' : 'l') : (dy > 0 ? 'b' : 't');
  }
  var NORM = {l: [-1, 0], r: [1, 0], t: [0, -1], b: [0, 1]}, SIDES = ['l', 'r', 't', 'b'];
  function node(r, sd){ return sd === 'l' ? [r.l, r.t + r.h / 2] : sd === 'r' ? [r.l + r.w, r.t + r.h / 2] : sd === 't' ? [r.l + r.w / 2, r.t] : [r.l + r.w / 2, r.t + r.h]; }
  function curve(B, sb, A, sa, m, off){
    var p = node(B, sb), q = node(A, sa);
    if (off) { if (sa === 'l' || sa === 'r') q[1] += off; else q[0] += off; }
    var k = Math.max(28, Math.hypot(q[0] - p[0], q[1] - p[1]) * m);
    return {sa: sa, sb: sb, m: m, p: p, q: q, c1: [p[0] + NORM[sb][0] * k, p[1] + NORM[sb][1] * k], c2: [q[0] + NORM[sa][0] * k, q[1] + NORM[sa][1] * k]};
  }
  function hits(o, c, W){
    var n = Math.max(24, Math.ceil(Math.hypot(c.q[0] - c.p[0], c.q[1] - c.p[1]) / 6));
    for (var k = 1; k < n; k++) {
      var t = k / n, u = 1 - t;
      var x = u*u*u*c.p[0] + 3*u*u*t*c.c1[0] + 3*u*t*t*c.c2[0] + t*t*t*c.q[0], y = u*u*u*c.p[1] + 3*u*u*t*c.c1[1] + 3*u*t*t*c.c2[1] + t*t*t*c.q[1];
      if (x < -12 || x > W + 12) return true;  // 不要甩出时间线左右两边
      for (var i = 0; i < o.length; i++) { var r = o[i]; if (x > r.l && x < r.l + r.w && y > r.t && y < r.t + r.h) return true; }
    }
    return false;
  }
  function drawLaneLinks(){
    var lane = $('v-lane'), svg = lane.querySelector('.rs-lsvg'); if (!svg) return;
    var el = laneEl(SEL), s = '';
    if (el) {
      var lr = lane.getBoundingClientRect(), x = byCode[SEL];
      var box = function(e){ var r = e.getBoundingClientRect(); return {l: r.left - lr.left, t: r.top - lr.top, w: r.width, h: r.height, el: e}; };
      var A = box(el), acx = A.l + A.w / 2, acy = A.t + A.h / 2;
      var inA = {l: A.l + 3, t: A.t + 3, w: A.w - 6, h: A.h - 6};  // 曲线不能穿过卡片本身（接在边上的那一头不算）
      var hl = [].slice.call(lane.querySelectorAll('.rs-col .rs-c.rel-pre, .rs-col .rs-c.rel-post')).map(box);
      var used = {};  // 卡片每条边上已经接了几条线：后来的沿边错开一点，别和前一条落在同一个点
      var one = function(c, color){
        var e = laneEl(c); if (!e || e === el) return;
        var B = box(e), sb = side(B, acx, acy), sa = side(A, B.l + B.w / 2, B.t + B.h / 2);
        var obs = hl.filter(function(r){ return r.el !== e; }).concat([inA]);
        var best = curve(B, sb, A, sa, .45);
        var LW = lane.clientWidth;
        if (hits(obs, best, LW)) {
          // 换弯曲程度、换边：先试默认的两条边，再按两头距离从近到远试别的组合
          var tries = [], found = null;
          [.7, 1, 1.4].forEach(function(m){ tries.push([sb, sa, m]); });
          var pairs = [];
          SIDES.forEach(function(b){ SIDES.forEach(function(a){ if (b !== sb || a !== sa) { var p = node(B, b), q = node(A, a); pairs.push([b, a, Math.hypot(q[0] - p[0], q[1] - p[1])]); } }); });
          pairs.sort(function(u, v){ return u[2] - v[2]; }).forEach(function(pr){ [.45, .7, 1, 1.4].forEach(function(m){ tries.push([pr[0], pr[1], m]); }); });
          tries.some(function(t){ var cv = curve(B, t[0], A, t[1], t[2]); if (!hits(obs, cv, LW)) { found = cv; return true; } return false; });
          if (found) best = found;
        }
        var nUsed = used[best.sa] || 0; used[best.sa] = nUsed + 1;
        if (nUsed) best = curve(B, best.sb, A, best.sa, best.m, (nUsed % 2 ? 1 : -1) * Math.ceil(nUsed / 2) * 18);
        var d = 'M' + best.p[0] + ' ' + best.p[1] + ' C' + best.c1[0] + ' ' + best.c1[1] + ',' + best.c2[0] + ' ' + best.c2[1] + ',' + best.q[0] + ' ' + best.q[1];
        s += '<path class="rs-lnk" d="' + d + '" fill="none" stroke="' + color + '" stroke-width="2.2"/>' +
          '<circle cx="' + best.p[0] + '" cy="' + best.p[1] + '" r="3.5" fill="' + color + '"/><circle cx="' + best.q[0] + '" cy="' + best.q[1] + '" r="3.5" fill="' + color + '"/>';
      };
      x.pre.forEach(function(c){ one(c, '#f59e0b'); });
      x.post.forEach(function(c){ one(c, '#2563eb'); });
    }
    svg.innerHTML = s;
  }

  var pop = null;
  function openPop(anim){
    if (pop) { pop.remove(); pop = null; }
    if (!SEL || VIEW !== 'dial') return;
    var box = $('dial'), a = box.querySelector('.rs-st[data-c="' + SEL + '"] circle.p');
    if (!a) return;
    var br = box.getBoundingClientRect(), r = a.getBoundingClientRect(), W = Math.min(340, br.width);
    pop = document.createElement('div');
    pop.className = 'rs-pop';
    pop.innerHTML = detHtml(byCode[SEL]);
    pop.style.width = W + 'px';
    box.appendChild(pop);
    // 放在点朝外的一侧（连线都往圆心走），放不下再换另一侧
    var H = pop.offsetHeight, cx = r.left + r.width / 2 - br.left, roomR = br.width - (r.right - br.left) - 14 >= W, roomL = r.left - br.left - 14 >= W;
    var side = cx < br.width / 2 ? (roomL ? -1 : 1) : (roomR ? 1 : -1);
    var x0 = side > 0 ? r.right - br.left + 14 : r.left - br.left - 14 - W, y0 = r.top - br.top - 40;
    var L = Math.max(0, Math.min(x0, br.width - W)), T = Math.max(0, Math.min(y0, br.height - H));
    pop.style.left = L + 'px'; pop.style.top = T + 'px';
    if (!anim || !pop.animate || matchMedia('(prefers-reduced-motion:reduce)').matches) return;
    pop.style.transformOrigin = (side > 0 ? '0' : '100%') + ' ' + (r.top + r.height / 2 - br.top - T) + 'px';
    pop.animate([{opacity: 0, transform: 'scale(.6)'}, {opacity: 1, transform: 'none'}], {duration: 300, easing: 'cubic-bezier(.2,.8,.2,1)'});
  }
  // 选中的、前置（橙）、后续（蓝）加强调，其余变淡
  function highlight(){
    var x = SEL && byCode[SEL], pre = {}, post = {};
    if (x) { x.pre.forEach(function(k){ pre[k] = 1; }); x.post.forEach(function(k){ post[k] = 1; }); }
    root.querySelectorAll('.rs-c, .rs-st').forEach(function(e){
      var c = e.dataset.c;
      e.classList.toggle('sel', c === SEL); e.classList.toggle('rel-pre', !!pre[c]); e.classList.toggle('rel-post', !!post[c]);
    });
    $('v-lane').classList.toggle('focus', !!SEL);
    $('dial').classList.toggle('focus', !!SEL);
    if (VIEW === 'dial') drawLinks();
  }
  function render(){
    compute();
    renderRP();
    if (VIEW === 'lane') renderLane(); else renderDial();
    highlight();
    if (VIEW === 'lane') openCell(null, false); else openPop(false);
  }
  function select(c, keep){
    var prev = SEL;
    SEL = !c || (SEL === c && !keep) ? null : c;
    highlight();
    if (VIEW === 'lane') openCell(prev, keep === 'jump' ? 'jump' : true); else openPop(true);
  }
  function setView(v){
    VIEW = v;
    $('views').querySelectorAll('button').forEach(function(x){ x.classList.toggle('on', x.dataset.v === v); });
    root.querySelectorAll('.rs-view').forEach(function(x){ x.classList.toggle('on', x.id === 'rs-v-' + v); });
    try { localStorage.setItem('rg-rs-view', v); } catch (e) {}
  }
  // 点格子展开 / 收起；点详情里的前置、后续换成那一个；点空白处、叉或按 Esc 收起
  root.addEventListener('click', function(e){
    if (e.target.closest('.rs-x')) { select(null); return; }
    var chip = e.target.closest('.rs-pc');
    if (chip) { select(chip.dataset.c, true); return; }
    if (e.target.closest('.rs-det, .rs-pop')) return;  // 详情里的文字、链接
    var t = e.target.closest('[data-c]');
    if (t) { select(t.dataset.c); return; }
    if (SEL && e.target.closest('.rs-view')) select(null);
  });
  document.addEventListener('keydown', function(e){ if (e.key === 'Escape' && SEL && !root.closest('section').hidden) select(null); });
  window.addEventListener('resize', function(){ if (VIEW === 'dial') { if (pop) openPop(false); } else drawLaneLinks(); });
  var tip = $('tip');
  root.addEventListener('mousemove', function(e){ var t = e.target.closest('[data-t]'); if (!t) { tip.style.display = 'none'; return; }
    tip.textContent = t.dataset.t; tip.style.display = 'block'; tip.style.left = (e.clientX + 12) + 'px'; tip.style.top = (e.clientY + 16) + 'px'; });
  root.addEventListener('mouseleave', function(){ tip.style.display = 'none'; });
  $('q').addEventListener('input', function(e){ Q = e.target.value.trim().toLowerCase(); render(); });
  function seg(id, fn){ $(id).addEventListener('click', function(e){ var b = e.target.closest('button'); if (!b) return;
    $(id).querySelectorAll('button').forEach(function(x){ x.classList.toggle('on', x === b); }); fn(b); }); }
  seg('views', function(b){ setView(b.dataset.v); render(); });
  // 胶囊离开原位、浮在内容上面时加阴影（和其他卡片页一样）
  var top = root.querySelector('.cl-top'), home = document.createElement('div');
  top.parentNode.insertBefore(home, top);
  document.addEventListener('scroll', function(){ top.classList.toggle('float', top.getBoundingClientRect().top - home.getBoundingClientRect().top > 12); }, true);
  // 读到存档：按存档的 R、点数和已解锁记录标状态（没有存档时按 R16 的点数上限）
  window.addEventListener('researchsave', function(e){
    var d = e.detail;
    SAVE = d;
    MYF = d ? d.fac.map(function(i){ return FNAME[i]; }).filter(Boolean) : [];
    R = d ? d.r : 16;
    render();
  });
  // 从别处链接到某个研究：清掉筛选、切到时间线并选中它（捕获阶段，赶在页面路由滚动之前把格子画出来）
  function jump(){
    var id = decodeURIComponent(location.hash.slice(1)), x = DATA.filter(function(y){ return y.id === id; })[0];
    if (!x) return;
    Q = ''; $('q').value = '';
    setView('lane'); render(); select(x.code, 'jump');
  }
  window.addEventListener('hashchange', jump, true);
  setView(VIEW);
  render(); jump();
})();</script>"""


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
    # 传承、UB 分布、活动不套带边框的滚动框：上下跟着页面滚，表格太宽时只在表格这一块里左右滚（用户要求）
    wrap = 'wrap bare' if n in BARE_SHEETS else 'wrap'
    return '<div class="%s"><table class="sheet" style="width:%dpx"><colgroup>%s</colgroup>%s</table></div>' % (wrap, total, ''.join(cols), ''.join(rows))


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
    body += CL_JS + RS_JS  # 卡片列表（遗物、隐藏奖杯）的搜索和已获得切换
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
    nav = '<div class="grp">工具</div>' + nav
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
    return ('<div class="appbar"><div class="pywebview-drag-region ab-drag"></div><div class="pywebview-drag-region ab-drag ab-top"></div><div class="ab-btns">' +
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
nav a{display:block;position:relative;z-index:1;padding:6px 14px;margin:4px 0;border-radius:12px;color:#3d4a5f;font-size:13.5px;text-decoration:none;transition:background .15s,color .25s}
nav a:hover{background:var(--soft)}
nav a.on{background:var(--blue);color:#fff;box-shadow:0 2px 8px rgba(37,99,235,.22)}
/* 选中块：滑到当前项（有 .ind 时选中项本身不再画底色） */
nav .ind{position:absolute;left:4px;right:4px;top:0;border-radius:12px;background:var(--blue);box-shadow:0 2px 8px rgba(37,99,235,.22);
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
.guide th:first-child,.guide td:first-child{white-space:nowrap}
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
.wrap.bare{max-height:none;overflow:auto hidden;border:0;border-radius:0;width:max-content;max-width:100%}
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
/* 研究：时间线 / 星盘 + 右边详情 */
.rs .cl-q{width:220px}  /* 顶上多一个视图胶囊，1280 宽的窗口里也排得下一行 */
.rs .own-bar.tight{padding:0 4px}
.rs-dot{width:8px;height:8px;border-radius:50%;flex:none;display:inline-block}
.rs-rp{margin:18px 2px 18px}
.rs-rp-h{display:flex;align-items:center;justify-content:space-between;margin-bottom:8px}
.rs-rp-h>b{font-size:16px}
.rs-rp-h span{font-size:13px;color:var(--muted);font-variant-numeric:tabular-nums}
.rs-rp-h span b{font-size:15px;color:var(--blue)}
.rs-rp-bar{height:8px;background:rgba(20,40,90,.08);border-radius:99px;overflow:hidden}
.rs-rp-bar i{display:block;height:100%;background:var(--blue);border-radius:99px;transition:width .5s cubic-bezier(.2,.8,.2,1)}
.rs-c{position:relative;border:1px solid var(--line);border-radius:12px;padding:5px 9px 6px;cursor:pointer;font-size:12.5px;line-height:1.45;color:#3d4a5f;background:#fff;
  scroll-margin:90px;transition:border-color .2s,background 1.5s,opacity .25s,box-shadow .3s,padding .45s cubic-bezier(.2,.8,.2,1),transform .45s cubic-bezier(.2,.8,.2,1),width .45s cubic-bezier(.2,.8,.2,1)}
.rs-c:hover{border-color:#cdd9ee}
.rs-cd{display:flex;align-items:center;gap:4px;margin-bottom:1px}
.rs-cd em{font-style:normal;font-size:11px;color:#1d4ed8;background:var(--soft);border-radius:6px;padding:0 6px;white-space:nowrap}
.rs-cd span{font-size:10.5px;color:#9aa5b8;margin-left:auto;white-space:nowrap}
.rs-c.bought .rs-cd em{color:#fff;background:var(--blue)}
.rs-c.st-own::after{content:"✓";position:absolute;right:-5px;top:-5px;width:15px;height:15px;border-radius:50%;background:var(--blue);color:#fff;font-size:9px;font-weight:700;display:flex;align-items:center;justify-content:center;box-shadow:0 0 0 2px #fff}
.rs-c.st-can{border-color:#bcd0f7;background:#f8faff}
.rs-c.st-no{opacity:.5}
.rs-c.st-no:hover{opacity:1}
.rs-c.flash{background:var(--flash);border-color:#f59e0b}
/* 放大的卡片：盖在原格子上，从原格子的位置和大小过渡到放大后的；名字放大，详情淡入 */
.rs-nm{transition:font-size .45s cubic-bezier(.2,.8,.2,1),color .3s}
.rs-det{min-height:0;overflow:hidden;opacity:0;transition:opacity .2s}
.rs-c.open{cursor:default;opacity:1;background:#fff;border-color:var(--blue);padding:10px 14px 14px;z-index:1;box-shadow:0 10px 30px rgba(20,40,90,.16),0 0 0 3px rgba(37,99,235,.12)}
.rs-c.open .rs-nm{font-size:18px;font-weight:600;color:var(--fg);margin-top:4px}
.rs-c.open .rs-det{opacity:1;transition:opacity .3s .15s}
.rs-c .rs-x{position:static;flex:none;width:22px;height:22px;margin-left:6px;display:none}
.rs-c:not(.st-own) .rs-x{margin-right:0}
.rs-c.open .rs-x{display:flex}
.rs-c.open .rs-cd span{margin-left:auto}
.rs-c.open .rs-cd em{font-size:12px}
.rs-c.open.st-own::after{right:-6px;top:-6px}
.rs-col .rs-c{box-sizing:border-box;width:100%}
.rs-c.rs-hide{visibility:hidden}
.rs-big{position:absolute;margin:0;box-sizing:border-box;z-index:3;
  transition:left .45s cubic-bezier(.2,.8,.2,1),top .45s cubic-bezier(.2,.8,.2,1),width .45s cubic-bezier(.2,.8,.2,1),height .45s cubic-bezier(.2,.8,.2,1),padding .45s cubic-bezier(.2,.8,.2,1),box-shadow .3s,border-color .2s}
.rs-still .rs-c{transition:none!important}
.rs-big.closing{z-index:2}
.rs-bi{height:100%;overflow:hidden}
.rs-c.sq .rs-nm{white-space:nowrap;overflow:hidden;text-overflow:ellipsis}
.rs-c.sq .rs-cd span{display:none}
/* 前置橙、后续蓝；其余变淡 */
.rs-c.rel-pre{opacity:1;border-color:#f59e0b;box-shadow:0 0 0 3px rgba(245,158,11,.2)}
.rs-c.rel-post{opacity:1;border-color:var(--blue);box-shadow:0 0 0 3px rgba(37,99,235,.15)}
.rs-view.focus .rs-c:not(.sel):not(.rel-pre):not(.rel-post){opacity:.28}
.rs-lsvg{position:absolute;left:0;top:0;width:100%;height:100%;overflow:visible;pointer-events:none}
.rs-lsvg .rs-lnk{animation:rs-dash .6s linear infinite}
.rs-lh,.rs-lr{display:grid;grid-template-columns:var(--cols,1fr 1fr 1fr 1fr 1fr 1fr 1fr);gap:8px;transition:grid-template-columns .45s cubic-bezier(.2,.8,.2,1)}
.rs-lh{font-size:12px;color:var(--muted);padding:0 0 8px;border-bottom:1px solid var(--line);margin-bottom:8px}
.rs-lh span{display:flex;align-items:center;gap:6px;white-space:nowrap}
.rs-lr{padding:4px 0}
.rs-col{display:flex;flex-direction:column;gap:6px;min-width:0}
.rs-era{margin:14px 0 6px;font-size:11px;color:#9aa5b8;letter-spacing:.12em;display:flex;align-items:center;gap:10px}
.rs-era:after{content:"";flex:1;height:1px;background:var(--line)}
.rs-here{display:flex;align-items:center;gap:10px;margin:8px 0}
.rs-here span{font-size:12px;font-weight:600;color:#fff;background:var(--blue);border-radius:999px;padding:1px 12px;box-shadow:0 4px 12px rgba(37,99,235,.25)}
.rs-here:after{content:"";flex:1;height:2px;border-radius:2px;background:var(--blue);opacity:.35}
.rs-dial{position:relative;border:1px solid var(--line);border-radius:16px;padding:10px;display:flex;justify-content:center}
.rs-dial svg{display:block;width:100%;max-width:760px;height:auto}
.rs-st{cursor:pointer}
.rs-st circle.p{transition:r .15s cubic-bezier(.2,.8,.2,1)}
.rs-st:hover circle.p{r:8}
.rs-st.rel-pre circle.p{stroke:#f59e0b;stroke-width:3;r:7}
.rs-st.rel-post circle.p{stroke:var(--blue);stroke-width:3;r:7}
.rs-st{transition:opacity .25s}
.rs-dial.focus .rs-st:not(.sel):not(.rel-pre):not(.rel-post){opacity:.25}
.rs-lnk{stroke-dasharray:5 4;animation:rs-dash .6s linear infinite}
@keyframes rs-dash{to{stroke-dashoffset:-9}}
.rs-view{display:none;position:relative}
.rs-view.on{display:block;animation:rg-in .3s cubic-bezier(.2,.8,.2,1)}
.rs-pop{position:absolute;z-index:4;box-sizing:border-box;background:#fff;border:1px solid #cdd9ee;border-radius:16px;padding:12px 16px 14px;box-shadow:0 8px 28px rgba(20,40,90,.16),0 0 0 1px rgba(20,40,90,.05)}
.rs-x{position:absolute;top:10px;right:10px;width:26px;height:26px;border:none;border-radius:999px;background:#e6ecf5;color:#4b5569;cursor:pointer;display:flex;align-items:center;justify-content:center;transition:background .15s}
.rs-x:hover{background:#d8e0ec}
.rs-pop .rs-top{padding-right:30px}
.rs-x svg{width:9px;height:9px;stroke:currentColor;fill:none;stroke-width:1.4}
.rs-top{display:flex;align-items:center;gap:8px;font-size:12px;color:#9aa5b8}
.rs-pop h3,.rs-det h3{margin:4px 0 0;font-size:17px}
.rs-pop .en,.rs-det .en{font-size:12.5px;color:#9aa5b8}
.rs-det .en{margin-top:2px}
.rs-det .rs-tags{margin-top:6px}
.rs-tags{display:flex;flex-wrap:wrap;gap:5px;margin:8px 0 4px}
.rs-pop em,.rs-det em{font-style:normal;font-size:11.5px;color:#1d4ed8;background:var(--soft);border-radius:6px;padding:0 7px;white-space:nowrap}
.rs-pop em.no,.rs-det em.no{color:#fff;background:var(--blue)}
.rs-pop em.fac,.rs-det em.fac{color:#6b4fa0;background:#f2edfb}
.rs-pop em.warn,.rs-det em.warn{color:#b45309;background:#fdf3e1}
.rs-pop em.gray,.rs-det em.gray{color:var(--muted);background:#f1f4f8}
.rs-f{margin-top:10px;font-size:13.5px;color:#3d4a5f}
.rs-f small{display:block;font-size:11.5px;color:#9aa5b8}
.rs-f .nil{color:#c9d1dd}
.rs-hint{font-size:12px;color:#9aa5b8;margin-top:4px}
.rs-mut{font-size:12.5px;color:var(--muted)}
.rs-pc{display:inline-flex;align-items:center;gap:5px;border:1px solid var(--line);border-radius:999px;padding:1px 10px;margin:3px 4px 0 0;cursor:pointer;font-size:12.5px;background:#fff;transition:border-color .2s}
.rs-pc:hover{border-color:#cdd9ee}
.rs-pc i{font-style:normal;font-size:11.5px;color:#9aa5b8}
.rs-pc.st-own i{color:var(--blue)}
.rs-empty{border:1px dashed var(--line);border-radius:16px;padding:28px 16px;text-align:center;color:#9aa5b8;font-size:13px}
.rs-tip{position:fixed;pointer-events:none;background:var(--fg);color:#fff;font-size:12px;padding:3px 10px;border-radius:999px;z-index:50;display:none;white-space:nowrap;box-shadow:0 6px 20px rgba(20,40,90,.25)}
@media (prefers-reduced-motion:reduce){.rs-view.on,.rs-lnk,.rs-lsvg .rs-lnk{animation:none}.rs-c,.rs-nm,.rs-det{transition:none!important}}
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
/* 程序里：侧栏和内容区贴着窗口边、互相挨着、中间不画线，外侧的角和窗口圆角（8px）一样。只让内容区滚动，内容区本身就是白色圆角卡片，滚动时内容在圆角里裁掉 */
html.app main{position:fixed;top:0;left:248px;right:0;bottom:0;overflow-y:auto;margin:0;padding:0 0 60px;
  background:var(--card);border-radius:0 8px 8px 0}
html.app.max main{border-radius:0}
html.app main>section{background:none;border-radius:0;box-shadow:none;padding-top:68px}  /* 顶上留出窗口按钮胶囊的位置 */
html.app main>section.savesec{padding:68px 24px 20px}
/* 顶上就是浮动胶囊（攻略图例、卡片页的筛选和搜索）的页面：胶囊和窗口按钮排在同一行，不留空 */
html.app main>section:has(>.legend),html.app main>section:has(>.cl:first-child>.cl-top){padding-top:16px}
html.app .legend,html.app .cl-top{top:16px}  /* 浮动胶囊离卡片上边 16px，和窗口按钮离右边一样 */
html.app .legend{display:flex;align-items:center;height:36px;padding-top:0;padding-bottom:0}  /* 和窗口按钮胶囊一样高，中线对齐 */
html.app main::-webkit-scrollbar-track{margin:60px 0 12px}  /* 滚动条从窗口按钮下面开始 */
/* 往下滚后卡片顶部渐隐：文字从浮动胶囊下面淡出，不会半行字被切开 */
html.app main::before{content:"";position:sticky;top:0;display:block;height:80px;margin-bottom:-80px;z-index:2;pointer-events:none;
  background:linear-gradient(var(--card) 55%,transparent);opacity:0;transition:opacity .2s}
html.app main.scrolled::before{opacity:1}
/* 浮动胶囊右边让出窗口按钮 */
html.app .cl-top{padding-right:150px}
html.app .legend{max-width:calc(100% - 150px)}
/* 标题栏：卡片顶上一条、侧栏和菜单的空白处都能拖动窗口；按钮做成小胶囊浮在卡片右上角 */
html.app .appbar{display:contents}
html.app .ab-drag{position:fixed;inset:0;z-index:0}
html.app .ab-top{inset:0 0 auto 248px;height:14px;z-index:7}
html.app .ab-btns{position:fixed;top:16px;right:16px;height:36px;z-index:8;overflow:hidden;user-select:none;border-radius:999px;
  background:#e6ecf5;transition:box-shadow .25s,background .25s}
html.app .ab-btns.float{background:rgba(255,255,255,.92);backdrop-filter:blur(8px);box-shadow:0 8px 28px rgba(20,40,90,.16),0 0 0 1px rgba(20,40,90,.05)}
html.app aside.side{top:0;left:0;bottom:0;width:248px;z-index:5;border-radius:8px 0 0 8px;box-shadow:none}
html.app.max aside.side{border-radius:0}
html.app #res{top:16px;left:248px}
html.app #back{left:264px}
html.app .brand{display:none}
.ab-drag{flex:1;height:100%}
.ab-btns{display:flex;height:100%}
.ab-btns button{width:42px;height:100%;border:none;background:none;color:#4b5569;cursor:pointer;display:flex;align-items:center;justify-content:center}
.ab-btns button:hover{background:#d9e2f0}
.ab-btns button.ab-close:hover{background:#e81123;color:#fff}
.ab-btns svg{width:11px;height:11px;stroke:currentColor;fill:none;stroke-width:1.2}
.grip{display:none}
html.app .grip{display:block;position:fixed;right:0;bottom:0;width:18px;height:18px;cursor:nwse-resize;z-index:9}  /* 看不见，鼠标移到角上才变成调整大小 */
html.app.max .grip{display:none}
</style></head><body>
%%APPBAR%%
<aside class="side pywebview-drag-region"><div class="brand">%%ICON%%RGA</div><input id="q" type="search" placeholder="搜索表格…"><nav class="pywebview-drag-region">%%NAV%%</nav></aside>
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
  // 程序里卡片往下滚后：顶部渐隐、窗口按钮胶囊浮起来（和其他浮动胶囊一样）
  (function(){
    var m = document.querySelector('main'), b = document.querySelector('.ab-btns');
    m.addEventListener('scroll', function(){ var on = m.scrollTop > 4; m.classList.toggle('scrolled', on); if (b) b.classList.toggle('float', on); }, {passive: true});
  })();
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
  var tds = Array.prototype.slice.call(document.querySelectorAll('table.sheet td[id], .art[id], .ch-sp[id], .bd-r[id], .rs-s[data-id]'));
  var names = {}; navs.forEach(function(a){ names[a.dataset.sec] = a.textContent.trim(); });
  q.addEventListener('input', function(){
    clearTimeout(timer);
    timer = setTimeout(function(){
      var k = q.value.trim().toLowerCase();
      if (!k) { res.hidden = true; return; }
      var out = [];
      for (var i = 0; i < tds.length && out.length < 80; i++) {
        var t = tds[i].textContent, tid = tds[i].id || tds[i].dataset.id;
        var p = t.toLowerCase().indexOf(k);
        if (p < 0) continue;
        var s = t.slice(Math.max(0, p - 20), p + 50);
        var a = document.createElement('a');
        a.href = '#' + tid;
        a.innerHTML = '<small></small>';
        a.firstChild.textContent = names[tid.split('-')[0]] + ' ' + tid.split('-')[1];
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
