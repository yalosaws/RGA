"""活动表（第 8 张，活动（Event））的译名补正：rename.py 对这些词按全表规则跳过或用了旧叫法，这里按游戏译名
（docs/汉化文本（PC_20261019）.tsv）逐条改。只动活动表的格子：改动的格子在 sharedStrings 末尾追加新串并指过去，
别的表共用的旧串不动。可重复跑（已改过的格子不再匹配）。

用法：python scripts/fix_event_names.py [xlsx]（默认 sheets/RG综合列表（4.3.14）.xlsx）；apply.py 生成 4.3.14 版后自动调用。
"""
import html
import os
import re
import sys
import zipfile

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SHEET = '活动（Event）'

# 名称格（「英文\n中文」）：整格对照
NAMES = {
    'Ghost\n鬼': 'Ghost\n幽灵',
    'Blood\n鲜血': 'Blood\n血液',
    'Egg\n复活节彩蛋': 'Egg\n彩蛋',
    'Unique Egg Upgrade\n特殊彩蛋同名升级': 'Unique Egg Upgrade\n独特彩蛋同名升级',
    'Monstrous\r怪异之物': 'Monstrous\r骇人怪物',
    'Unholidays\n(unholy-day)渎圣之日': 'Unholidays\n暗夜佳节',
    'Spare Green Hands\n': 'Spare Green Hands\n多余绿手',
    'Asmodean\n恶魔之王（邪恶/中立）': 'Asmodean\n阿斯莫汀（邪恶/中立）',
    'Asmodean\n恶魔之王系列': 'Asmodean\n阿斯莫汀系列',
    'Summeraan\n酷暑（400炽炎宝珠解锁）': 'Summeraan\n盛夏族（400炽炎宝珠解锁）',
    'Winterly\n凛冬（400霜凛宝珠解锁）': 'Winterly\n凛冬族（400霜凛宝珠解锁）',
    'Order Remnant\n秩序印记/秩序立场': 'Order Remnant\n秩序印记（秩序立场）',
    'Chaos Remnant\n混乱印记/混乱立场': 'Chaos Remnant\n混乱印记（混乱立场）',
    'Balance Remnant\n平衡印记/平衡立场': 'Balance Remnant\n平衡印记（平衡立场）',
    'Order Remnant Perk\n秩序残骸加成': 'Order Remnant Perk\n秩序印记特权',
    'Chaos Remnant Perk\n混乱残骸加成': 'Chaos Remnant Perk\n混乱印记特权',
    'Balance Remnant Perk\n平衡残骸加成': 'Balance Remnant Perk\n平衡印记特权',
}
# 说明格（不含换行）：按顺序替换
DESC = [
    (r'Unique Egg（独特彩蛋）', '独特彩蛋'), (r'Unique Egg', '独特彩蛋'), (r'特殊彩蛋', '独特彩蛋'), (r'(?<=个)Egg\b', '彩蛋'),
    (r'Asmodean', '阿斯莫汀'), (r'Summeraan', '盛夏族'), (r'Winterly', '凛冬族'),
    (r'(秩序|混乱|平衡|本)残骸', r'\1印记'), (r'(秩序|混乱|平衡)印记 Perk (\d)', r'\1印记特权\2'),
    (r'Vampire', '吸血鬼'), (r'Ghost', '幽灵'), (r'Skeleton', '骷髅'), (r'Cannibalize', '同类相噬'),
    (r'(?<![A-Za-z])Blood(?![A-Za-z])', '血液'), (r'(?<![A-Za-z])Bone(?![A-Za-z])', '骨头'), (r'Christmas Present', '圣诞节礼物'),
]


def fix(v):
    if v in NAMES:
        return NAMES[v]
    if '\n' in v or '\r' in v:
        return v
    for a, b in DESC:
        v = re.sub(a, b, v)
    return v


def text_of(si):
    return html.unescape(''.join(re.findall(r'<t(?:\s[^>]*)?>(.*?)</t>', si, re.S)))


def main(path):
    zin = zipfile.ZipFile(path)
    wb = zin.read('xl/workbook.xml').decode('utf-8')
    rid = re.search(r'<sheet name="%s"[^>]*r:id="(rId\d+)"' % re.escape(SHEET), wb).group(1)
    rels = zin.read('xl/_rels/workbook.xml.rels').decode('utf-8')
    target = re.search(r'Id="%s"[^>]*Target="([^"]+)"' % rid, rels) or re.search(r'Target="([^"]+)"[^>]*Id="%s"' % rid, rels)
    sheet = 'xl/' + target.group(1).lstrip('/').replace('xl/', '')
    ss = zin.read('xl/sharedStrings.xml').decode('utf-8')
    sis = re.findall(r'<si>.*?</si>|<si/>', ss, re.S)
    xml = zin.read(sheet).decode('utf-8')
    new, changed = [], []

    def repl(m):
        head, idx = m.group(1), int(m.group(2))
        old = text_of(sis[idx])
        v = fix(old)
        if v == old:
            return m.group(0)
        changed.append((re.search(r'r="([A-Z]+\d+)"', head).group(1), old, v))
        new.append('<si><t xml:space="preserve">%s</t></si>' % html.escape(v, quote=False).replace('\r', '&#13;'))
        return '%s<v>%d</v>' % (head, len(sis) + len(new) - 1)
    xml2 = re.sub(r'(<c r="[A-Z]+\d+"[^>]*\st="s"[^>]*>)<v>(\d+)</v>', repl, xml)
    if not new:
        print('活动表译名：没有要改的格子')
        return
    ss2 = ss.replace('</sst>', ''.join(new) + '</sst>')
    ss2 = re.sub(r'uniqueCount="\d+"', 'uniqueCount="%d"' % (len(sis) + len(new)), ss2, count=1)
    c = re.search(r'\scount="(\d+)"', ss2)
    if c:
        ss2 = ss2.replace(c.group(0), ' count="%d"' % (int(c.group(1)) + len(new)), 1)
    tmp = path + '.tmp'
    with zipfile.ZipFile(tmp, 'w') as zout:
        for info in zin.infolist():
            data = zin.read(info.filename)
            if info.filename == 'xl/sharedStrings.xml':
                data = ss2.encode('utf-8')
            elif info.filename == sheet:
                data = xml2.encode('utf-8')
            zout.writestr(info, data, compress_type=info.compress_type)
    zin.close()
    os.replace(tmp, path)
    for ref, a, b in changed:
        print('%s\t%r → %r' % (ref, a, b))
    print('活动表译名：改了 %d 格' % len(changed))


if __name__ == '__main__':
    main(sys.argv[1] if len(sys.argv) > 1 else os.path.join(ROOT, 'sheets', 'RG综合列表（4.3.14）.xlsx'))
