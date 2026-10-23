"""A0 模板库页：用户游戏里导入的 A0 模板（资料/A0-build-templates.json），按佣兵 / 研究分开列卡片。
升级、研究、法术直接显示中文名并链接到表格；程序里能读游戏的模板文件，把缺的模板加进去（应用/template_store.py）。"""
import html
import json
import re
from pathlib import Path
import rename

ROOT = Path(__file__).resolve().parent.parent
FACTIONS = dict(zip(['FR', 'EL', 'AN', 'GB', 'UD', 'DM', 'TT', 'DD', 'FC', 'DN', 'DW'],
                    ['仙灵', '精灵', '天使', '地精', '亡灵', '恶魔', '泰坦', '德鲁伊', '无面者', '矮人', '卓尔']))
ALIGN = {'E': '邪恶', 'G': '善良', 'N': '中立'}
BRANCHES = [('S', '法术学'), ('C', '工艺'), ('D', '神圣'), ('E', '经济学'), ('A', '炼金术'), ('W', '战术')]
# 佣兵模板：攻略（攻略/A0攻略要点.md）里的叫法和用途
MERC = {
    'S N CoinPillage/ManaWaste/Harlequin (+ KYE Artifact in R12)': ('横征暴敛', '进中立佣兵先跑它：顺带解锁炫彩杂耍者，多待几分钟攒宝石，买到 1500 个皇家贸易令拿贸易领主。R12 进佣兵时也先跑它拿新遗物。'),
    'S E Lucifer': ('光暗悖逆', '拿光暗悖逆奖杯。'),
    'S N Autocast Trophies': ('自动施法', '拿齐自动施法系列奖杯，一直到高效自动施法，大约半小时。'),
    'P G FC Mana Fairies low gem': ('Mana Fairies · 低宝石', '佣兵阶段刷宝石，刚进佣兵时低宝石版就够用。'),
    'P G FC Mana Fairies high gem': ('Mana Fairies · 高宝石', '佣兵阶段刷宝石用。'),
    'P N FR Necro Lightning (5m offline & building buff needed)': ('Necro Lightning', 'R12 前后 Mana Fairies 变慢，高宝石阶段换它。每个 R 先离线约 5 分钟加强商贾王侯，再快速跑一下邪恶建筑加成，提高 UD2 和 DW5 的数值。'),
    'S E GB building buff': ('邪恶建筑加成', '给 Necro Lightning 提高 UD2、DW5 的数值；也用来挖巫毒娃娃遗物。'),
}
VARIANT = [('with Flame', '有火焰'), ('no Flame', '无火焰'), ('low gem', '低宝石'), ('prod/S400 buff', '产能 / S400 加成'), ('+ C200 if available', '能买就加 C200')]
# 研究模板的标题和说明（没有血统+阵营组合的）
RES = {
    'R18 ANC3': ('天使挑战 3', '刷到 e80 宝石做天使挑战 3。挑战里不能买天堂圣域，很多研究没用，只带这 20 个。'),
}
# 研究里 S1 占位的两条是提醒，不是配置
REMIND = {
    'R26-28: get 3.2e6 mana with mercs': '用佣兵累计产出 320 万法力。',
    'R24+ Note: maxing excavs? use E270!': '要把考古次数挖满时，换上 E270。',
}


def stage(name):
    m = re.match(r'R(\d+)(?:-(\d+))?(\+)?', name)
    if not m:
        return None, None, ''
    return int(m[1]), (99 if m[3] else int(m[2] or m[1])), m[0].replace('-', '–')


def load():
    """模板按页面上的顺序排：佣兵照原顺序，研究按 R"""
    data = json.loads((ROOT / '资料/A0-build-templates.json').read_text(encoding='utf-8'))
    for category, templates in data.items():
        order = sorted(templates.items(), key=lambda kv: (stage(kv[0])[0] or 0, stage(kv[0])[1] or 0)) if category == 'research' else templates.items()
        yield category, list(order)


def ids():
    """模板原名（佣兵还有攻略里的叫法）→ 卡片 id，攻略里的 {模:…} 链接用"""
    out, i = {}, 0
    for _, order in load():
        for name, _ in order:
            out[name] = 'builds-%d' % i
            if name in MERC:
                out[MERC[name][0]] = out[MERC[name][0] + ' build'] = out[name]
            i += 1
    return out


def build(find, code_name, render):
    rows, cards = [], {'mercenary': [], 'research': []}

    def item(kind, code, label, cls):
        target = find(kind, code if kind != '法' else label)
        inner = ('<code>%s</code>' % code if code else '') + html.escape(label)
        tag = 'a href="#%s"' % target if target else 'span'
        return '<%s class="bt-i %s" data-c="%s">%s</%s>' % (tag, cls, html.escape(code or label), inner, tag.split()[0])

    def head(title, tags, name, reminder=False):
        return ('<div class="art-h"><b>%s</b>%s%s</div><div class="bt-en">%s</div>' % (
            html.escape(title), ''.join(tags),
            '' if reminder else '<span class="bt-act"><span class="bt-state" aria-live="polite"></span>'
            '<button class="bt-btn" data-action="copy">复制代码</button><button class="bt-btn pri" data-action="add" hidden>添加到游戏</button></span>',
            html.escape(name)))

    for category, order in load():
        for name, t in order:
            code = t['tp']
            low, high, rtxt = stage(name)
            i = len(rows)
            rows.append({'category': category, 'name': name, 'code': code, 'low': low, 'high': high})
            search = [name, code]
            if category == 'mercenary':
                parts = name.split()
                title, note = MERC.get(name, (name, ''))
                tags = ['<em>%s佣兵</em>' % ALIGN.get(parts[1], '')]
                if parts[2] in FACTIONS:
                    tags.append('<em class="fac">%s血统</em>' % FACTIONS[parts[2]])
                ups = [x for x in code.split(',') if not x.startswith('SP:')]
                sps = [rename.GAME.get(x[3:].lower(), x[3:]) for x in code.split(',') if x.startswith('SP:')]
                names = [code_name(x) or x for x in ups]
                search += [title] + names + sps
                body = ('<div class="bt-m"><div><small>阵营升级 · %d</small><div class="bt-ups">%s</div></div>'
                        '<div><small>阵营法术</small><div class="bt-sps">%s</div></div></div>') % (
                    len(ups), ''.join(item('升', x, n, 't-up') for x, n in zip(ups, names)),
                    ''.join(item('法', '', s, 't-sp') for s in sps))
                html_note = '<p class="bt-note">%s</p>' % render(note) if note else ''
                cards['mercenary'].append('<article class="art noimg bt-card" id="builds-%d" data-i="%d" data-q="%s"><div class="art-b">%s%s%s</div></article>' % (
                    i, i, html.escape(' '.join(search).lower(), quote=True), head(title, tags, name), html_note, body))
                continue
            tags = ['<em class="no">%s</em>' % rtxt] if rtxt else []
            if name in REMIND:
                cards['research'].append('<article class="art noimg bt-card bt-remind" id="builds-%d" data-i="%d" data-q="%s"><div class="art-b"><div class="art-h"><b>提醒</b>%s</div><p class="bt-note">%s</p><div class="bt-en">%s</div></div></article>' % (
                    i, i, html.escape((name + ' 提醒 ' + REMIND[name]).lower(), quote=True), ''.join(tags), render(REMIND[name]), html.escape(name)))
                rows[-1]['reminder'] = True
                continue
            combo = re.search(r'\b([A-Z]{2})([A-Z]{2})\b', name)
            title, note = RES.get(name, (name, ''))
            if name in RES:
                search.append(title)
            elif combo and combo[1] in FACTIONS and combo[2] in FACTIONS:
                title = '%s血统 · %s' % (FACTIONS[combo[1]], FACTIONS[combo[2]])
                search.append(title)
            for en, zh in VARIANT:
                if en in name:
                    tags.append('<em class="fac">%s</em>' % zh)
                    search.append(zh)
            toks = code.split(',')
            cols = []
            for b, bname in BRANCHES:
                mine = [x for x in toks if x[0] == b]
                names = [code_name(x) or '' for x in mine]
                search += names
                cols.append('<div class="bt-br"><small>%s <span>%d</span></small>%s</div>' % (
                    bname, len(mine), ''.join(item('研', x, n, 't-rs') for x, n in zip(mine, names)) or '<span class="bt-nil">—</span>'))
            tags.append('<em class="bt-cnt">%d 项</em>' % len(toks))
            cards['research'].append('<article class="art noimg bt-card" id="builds-%d" data-i="%d" data-q="%s"><div class="art-b">%s%s<div class="bt-rs">%s</div></div></article>' % (
                i, i, html.escape(' '.join(search).lower(), quote=True), head(title, tags, name), '<p class="bt-note">%s</p>' % render(note) if note else '', ''.join(cols)))
    page = (ROOT / '脚本/build_templates.html').read_text(encoding='utf-8')
    return (page.replace('%%MERC%%', ''.join(cards['mercenary'])).replace('%%RES%%', ''.join(cards['research']))
            .replace('%%NM%%', str(len(cards['mercenary']))).replace('%%NR%%', str(sum(1 for r in rows if r['category'] == 'research' and not r.get('reminder'))))
            .replace('%%DATA%%', json.dumps(rows, ensure_ascii=False).replace('<', '\\u003c')))
