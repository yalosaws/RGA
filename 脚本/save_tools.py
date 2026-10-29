"""网页「存档」栏：只读存档查看 + 法术预报（RWS）+ 遗物预测（Lara Crypt），由 build_html.py 调用。

计算部分直接用 工具/RG-tools 的库（解码 savecodec2、随机数 pmprng、util 的数据表、遗物条件 artifacts.js），
界面是 save_tools.js 重写的中文只读版。查看页的行从编辑器 edit/edit.html 里解析出来，
所以 RG-tools 更新（git pull）后重新生成网页就能跟上。
名字翻译顺序：存档译名.MANUAL → 游戏词典（rename.lookup_name）→ 存档译名 里的拼接规则 → 保留英文。
"""
import html
import json
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import rename
import 存档译名 as T

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
RG = os.path.join(ROOT, '工具', 'RG-tools')
TSV = sorted(rename.glob.glob(os.path.join(ROOT, '资料', '汉化文本（*.tsv')))[-1]
LIBS = ['lib/pako.js', 'lib/savecodec2.js', 'lib/pmprng.js', 'lib/util.js', 'arch/artifacts.js']


def read(p):
    return open(os.path.join(RG, p), encoding='utf-8').read()


def parse_editor():
    """edit.html → [{id, name, rows:[{w:widget, 属性…}|{h:小标题}]}]"""
    src = read('edit/edit.html')
    names = dict(re.findall(r"href='#(tab-[\w-]+)'[^>]*>\s*([^<]+?)\s*</a>", src))
    src = re.sub(r'<!--.*?-->', '', src, flags=re.S)
    tabs = []
    for m in re.finditer(r"<div role='tabpanel' class='tab-pane[^']*' id='(tab-[\w-]+)'>(.*?)</table>", src, re.S):
        rows = []
        for tr in re.finditer(r"<tr\b([^>]*)>(.*?)</tr>", m.group(2), re.S):
            attrs, inner = tr.group(1), tr.group(2)
            w = re.search(r"is='([\w-]+)'", attrs)
            if not w:
                b = re.search(r'<b>([^<]+)</b>', inner)
                if b and 'select' not in inner and 'streak' not in b.group(1):
                    rows.append({'h': html.unescape(b.group(1)).strip()})
                continue
            row = {'w': w.group(1)[7:]}
            for k, q, v, bare in re.findall(r"""([:\w.-]+)=(?:(['"])(.*?)\2|([^\s'">,]+))""", attrs):
                k = k.lstrip(':').replace('.sync', '')
                if k in ('is', 'colspan', 'v-show'):
                    continue
                row[k] = html.unescape(v or bare)
            show = re.search(r"v-show='([^']*)'", attrs)  # 佣兵法术按立场显示
            if show:
                row['show'] = show.group(1)
            for k in re.findall(r"\s(hide-[\w-]+|can-edit)(?=[\s>]|$)", attrs + ' '):
                row[k] = True
            rows.append(row)
        tabs.append({'id': m.group(1)[4:], 'name': names.get(m.group(1), m.group(1)), 'rows': rows})
    return tabs


def assoc_names():
    """util.js、artifacts.js 里所有 name: '…'"""
    out = []
    for p in ('lib/util.js', 'arch/artifacts.js'):
        out += [html.unescape(x.replace("\\'", "'")) for x in re.findall(r"name: *'((?:[^'\\]|\\.)*)'", read(p))]
    s = read('lib/util.js')
    out += [x.replace("\\'", "'") for x in re.findall(r"'((?:[^'\\]|\\.)*)'", s[s.index('building_names'):s.index('building_ids')])]
    return out


STATS = None


def translate(en):
    """英文 → 中文；返回 None 表示没翻出来"""
    if en in T.MANUAL:
        return T.MANUAL[en]
    g = rename.lookup_name(en)
    if g and re.search(r'[一-鿿]', g):
        return g
    if en in STATS:
        return STATS[en]
    for pat, fn in T.RULES:
        m = re.fullmatch(pat, en)
        if m:
            v = fn(m, translate)
            if v:
                return v
    return None


def game_stats():
    """汉化文本里「X: %0 → Y：%0」「X (This Era): %0」这类统计标签"""
    out = {}
    for line in open(TSV, encoding='utf-8'):
        if '\t' not in line:
            continue
        a, b = line.rstrip('\n').split('\t', 1)
        m = re.fullmatch(r"([A-Z][A-Za-z' ]+?)(?: \(This Era\))?: %0", a)
        n = re.fullmatch(r'(?:本纪元的?)?(.+?)：%0', b)
        if m and n:
            out.setdefault(m.group(1), n.group(1))
    return out


def collect(tabs):
    """所有要翻译的名字（含 v-for 行的后缀）"""
    names = set(assoc_names())
    for t in tabs:
        names.add(t['name'])
        for r in t['rows']:
            for k in ('name', 'h', 's_name', 'c_name', 'd_name', 'e_name', 'a_name', 'w_name', 'f_name'):
                if isinstance(r.get(k), str):
                    v = r[k]
                    m = re.fullmatch(r"""(?:i\.name *\+ *)?["'](.*)["']""", v)
                    if k == 'name' and m:  # :name='i.name + " Cast"'
                        r[k] = {'suffix': m.group(1)} if 'i.name' in v else m.group(1)
                        names.add(('suffix', m.group(1)) if 'i.name' in v else m.group(1))
                    elif k == 'name' and v == 'i.name':
                        r[k] = {'suffix': ''}
                    else:
                        names.add(v)
    return names


def id_names(section_start, section_end):
    """util.js 里 {id: N, name: '…'} → {N: 英文名}"""
    s = read('lib/util.js')
    s = s[s.index(section_start):s.index(section_end)]
    return {int(i): n.replace("\\'", "'") for i, n in re.findall(r"\{id: *(\d+), *name: *'((?:[^'\\]|\\.)*)'", s)}


def id_lists():
    """edit.js 的 trophyIDs / upgradeIDs：下拉框（奖杯系列、法术阶层）用的 id 列表"""
    s = read('edit/edit.js')
    s = s[s.index('var trophyIDs'):s.index('var allResearches')]
    return {k: [int(x) for x in v.split(',') if x.strip()] for k, v in re.findall(r'(\w+): *\[([\d,\s]+)\]', s)}


def build(find, cell_code):
    """返回 (section HTML, <script> 内容, 没翻出的名字)。
    find(类, 中文名) → 表格格子 id（不带 #）或 None；cell_code：研究名称格 id → 表里的新代号"""
    tabs = [t for t in parse_editor() if t['name'] != 'tab-' + t['id']]
    names = collect(tabs)
    # 法术预报里用到的名字（世系、巨灵挑战 4）
    names |= {x + ' Lineage' for x in ('Fairy', 'Elven', 'Angel', 'Goblin', 'Undead', 'Demon', 'Titan', 'Druid', 'Faceless',
                                         'Dwarven', 'Drow', 'Dragon', 'Archon', 'Djinn', 'Makers')} | {'Worldly Desires'}
    up, tr = id_names('this.upgradeIDs', 'this.researches'), id_names('this.trophyIDs', 'this.upgradeIDs')
    # util 只列出了部分固定奖杯/升级；编辑器逐项列出的条目也要纳入，供攻略按 ID 标记。
    for tab in tabs:
        for row in tab['rows']:
            if row.get('w') in ('trophy', 'upgrade') and str(row.get('id', '')).isdigit() and isinstance(row.get('name'), str):
                (tr if row['w'] == 'trophy' else up).setdefault(int(row['id']), row['name'])
    # 社区编辑器把 218440 的 W13125（Artillery）误写成重复的 W12250，util 名称表也缺此项。
    up.setdefault(218440, 'W13125: Artillery')
    zh, miss, links = {}, [], {}

    def link(kind, v):
        if v in links:
            return
        cid = find(kind, re.sub(r'[（(].*', '', v).strip())
        if cid:
            links[v] = cid
    uname, tname, research = {}, {}, {}
    for i, n in up.items():
        v = translate(n)
        if v:
            uname[i] = v
            m = re.match(r'([SCDEAWF]\d+): ', n)
            if m:
                cid = find('研', v)
                research[i] = {'zh': v, 'code': cell_code.get(cid, m.group(1))}
                if cid:
                    links[v] = cid
            else:
                link('升', v)
    for i, n in tr.items():
        v = translate(n)
        if v:
            tname[i] = v
            link('奖', v)
    for n in sorted(names, key=str):
        if isinstance(n, tuple):  # 后缀
            v = T.SUFFIX.get(n[1])
            if v is None:
                miss.append('后缀:' + n[1])
            zh['@' + n[1]] = v if v is not None else n[1]
            continue
        v = translate(n)
        if v is None:
            if re.search('[A-Za-z]{3}', n) and not re.fullmatch(r'[SCDEAWF]\d+', n):
                miss.append(n)
            continue
        zh[n] = v
        link('', v)
    # 攻略里的同名奖杯、升级不能混用链接；按类别保存目标，缩写也可通过相同目标识别。
    guide_targets = {
        'up': {i: find('升', v) for i, v in uname.items()},
        'tr': {i: find('奖', v) for i, v in tname.items()},
        'ht': {i: find('隐', v) for i, v in tname.items()},
        # 法术奖杯（法术页卡片里的 sp-…-t 块）拿到后对应的法术升级就解锁了：奖杯 id → 攻略里「升」的链接目标
        'spt': {i: t for i, t in ((i, find('升', v)) for i, v in tname.items()) if t and re.fullmatch(r'sp-\w+-t', t)},
        'rs': {i: find('研', info['code']) for i, info in research.items()},
        'names': {kind: {v: find(tag, v) for v in set(zh.values()) if v}
                  for kind, tag in [('fa', '阵'), ('sp', '法'), ('bd', '建')]},
    }
    data = {'tabs': tabs, 'zh': zh, 'links': links, 'uname': uname, 'tname': tname, 'research': research, 'ids': id_lists(),
            'guide_targets': guide_targets}
    libs = []
    for p in LIBS:
        s = read(p)
        if p.endswith('artifacts.js'):
            s = T.patch_artifacts(s, translate)
        libs.append('/* ---- RG-tools/%s ---- */\n%s' % (p, s))
    # 对社区库的修正（公式、最低 R、研究预算等），见 arch_fixes.js 开头
    libs.append(open(os.path.join(os.path.dirname(os.path.abspath(__file__)), 'arch_fixes.js'), encoding='utf-8').read())
    js = ('var jQuery = window.jQuery || null;\n' + '\n'.join(libs) +
          '\nvar SAVE_DATA = %s;\n' % json.dumps(data, ensure_ascii=False) +
          open(os.path.join(os.path.dirname(os.path.abspath(__file__)), 'save_tools.js'), encoding='utf-8').read())
    js = js.replace('</script', '<\\/script')
    section = open(os.path.join(os.path.dirname(os.path.abspath(__file__)), 'save_tools.html'), encoding='utf-8').read()
    return section, js, miss


STATS = game_stats()

if __name__ == '__main__':
    sys.stdout.reconfigure(encoding='utf-8')
    tabs = parse_editor()
    names = collect(tabs)
    miss = [n for n in names if not isinstance(n, tuple) and translate(n) is None and re.search('[A-Za-z]{3}', n)]
    sfx = [n[1] for n in names if isinstance(n, tuple) and n[1] not in T.SUFFIX]
    print(len(names), '个名字，没翻出', len(miss), '个；后缀没翻', sfx)
    for n in sorted(miss):
        print(repr(n))
