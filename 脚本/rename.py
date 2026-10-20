"""把表格里的译名统一成游戏内译名（汉化包）。

用法：python 脚本/rename.py <输入.xlsx> <输出.xlsx> [--report 报告.txt]

只改 xl/sharedStrings.xml，其余 zip 部件逐字节照搬（WPS 单元格图片不受影响）。
规则：
- 名称格「英文\\n中文……」：中文名换成游戏译名，后面的括注保留；英文行不动。
- 纯英文的名称格（血统表）：在下一行补上游戏译名。
- 其余含中文的文字：旧术语按 译名.OLD_ZH 改成游戏用语，英文专名换成游戏译名（缩写保留）。
只能对没改过的表跑一次：再跑会把「邪恶阵营」（原「邪恶种族」）误改成「邪恶立场」。
4.3.14 版由 apply.py 末尾自动调用；血统表要从 git 里的原版重新生成。
"""
import difflib
import glob
import os
import re
import sys
import zipfile
from xml.sax.saxutils import escape

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
import 译名 as cfg

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
CJK = re.compile(r'[一-鿿]')
EN_RUN = re.compile(r"[A-Za-z][A-Za-z'’\- ]*[A-Za-z]|[A-Za-z]")


def load_game():
    tsv = sorted(glob.glob(os.path.join(ROOT, '资料', '汉化文本（*.tsv')))[-1]
    game = {}
    for line in open(tsv, encoding='utf-8').read().split('\n')[1:]:
        if '\t' not in line:
            continue
        a, b = line.split('\t', 1)
        b = b.split('\x00')[0].replace('‌', '').strip()
        b = re.sub(r'\s*[（(][A-Z]{2}\d+[）)]$', '', b)
        if not b or '%' in b or b[0] in '个次的' or chr(92) in b:
            continue
        for f in a.split('\x00'):
            f = f.strip()
            if 0 < len(f) <= 50 and '%' not in f and chr(92) not in f and not f.endswith('.'):
                game.setdefault(f.lower(), b)
    for k in list(game):  # 表格常用单数：Flame Orbs → Flame Orb
        if len(k) > 4 and k.endswith('s') and not k.endswith('ss'):
            game.setdefault(k[:-1], game[k])
    game.update(cfg.EXTRA_EN)
    return game


GAME = load_game()
KEYS = list(GAME)
log = []


def lookup_name(en):
    """名称格的英文 → 游戏译名；允许拼写小错（模糊匹配）"""
    k = en.strip().lower().replace('’', "'").replace('‘', "'").replace('？', '?').replace('！', '!')
    if k in cfg.SKIP_EN:
        return None
    if k in GAME:
        return GAME[k]
    for c in difflib.get_close_matches(k, KEYS, 3, 0.88):
        if re.sub(r'\D', '', c) == re.sub(r'\D', '', k) and abs(len(c) - len(k)) <= 3:
            return GAME[c]
    return None


def old_zh(s):
    for a, b in cfg.OLD_ZH:
        s = s.replace(a, b)
    return s


def en_terms(s):
    """把中文句子里夹的英文专名换成游戏译名"""
    def repl(m):
        run = m.group(0)
        words = run.split(' ')
        out, i = [], 0
        while i < len(words):
            for j in range(len(words), i, -1):
                k = ' '.join(words[i:j]).lower().replace('’', "'")
                if not k or k in cfg.SKIP_EN or k not in GAME:
                    continue
                # 单个词只在它单独出现时替换，避免「Mercenary Union Contrast」只换一半
                if j - i == 1 and (k not in cfg.SINGLE_OK or len(words) > 1):
                    continue
                out.append('\x02' + GAME[k] + '\x03')
                i = j
                break
            else:
                out.append(words[i])
                i += 1
        # 中文之间不留多余空格；保留英文词之间的空格
        res = ''
        for w in out:
            if res and not (CJK.search(res[-1].strip('\x02\x03')) or CJK.search(w.strip('\x02\x03')[:1] or 'a')):
                res += ' '
            res += w
        return res

    def gloss(m):  # 「新译名（旧译）」：旧译和新译名意思重复时去掉
        name, g = m.group(1), m.group(2)
        return name if g in name or len(set(g) & set(name)) >= 2 else m.group(0)
    s = EN_RUN.sub(repl, s)
    s = re.sub(r'\x02([^\x03]*)\x03\s*[（(]([一-鿿·]{1,12})[）)]', gloss, s)
    return s.replace('\x02', '').replace('\x03', '')


def free(s):
    # 先换英文再换旧术语，「Order阵营」才能变成「秩序立场」
    dup = r'([一-鿿]{2,})\1'  # 「连击连击数」「升级升级」
    t = old_zh(en_terms(s))
    return t if re.search(dup, s) else re.sub(dup, r'\1', t)


def name_part(zh, g, digits=False):
    """zh 是「旧中文名[系列][（括注）……]」时返回换成游戏译名 g 的结果，否则返回 None"""
    if not CJK.search(g):  # 游戏里也用英文的（glho kohhl snod）不动
        return None
    chars = r'[^（(\[【：:，,；;。、%％+*]' if digits else r'[^（(\[【：:，,；;。、%％+*0-9]'
    m = re.match(r'^(%s{0,16}?)(系列)?((?:[（(][^）)]*[）)])*)$' % chars, zh)  # 只有括注时在前面补名字
    if not m:
        return None
    alts = m.group(1).split('/')[1:]  # 「秩序残骸/Order阵营」：斜杠后带英文的部分保留
    keep = ''.join('/' + free(a) for a in alts if re.search('[A-Za-z]', a))
    return g + keep + (m.group(2) or '') + free(m.group(3))


def transform(text):
    # 表里换行有 \n 也有 \r，按原样保留
    parts = re.split(r'(\r\n|\r|\n)', text)
    lines, seps = parts[0::2], parts[1::2] + ['']
    out = transform_lines(lines)
    return ''.join(l + s for l, s in zip(out, seps))


def transform_lines(lines):
    text = '\n'.join(lines)
    out = []
    i = 0
    # 「英文\n中文名（括注）」
    if len(lines) >= 2 and not CJK.search(lines[0]) and re.match('[一-鿿（]', lines[1]):
        g = lookup_name(lines[0])
        n = name_part(lines[1], g, digits=True) if g else None
        if n:
            out += [lines[0], n]
            i = 2
    # 「中文名\n英文」（UB 分布表的建筑表头）；立场、表头这类由 OLD_ZH 处理
    if not out and len(lines) == 2 and CJK.search(lines[0]) and not CJK.search(lines[1]) \
            and old_zh(lines[0]) == lines[0] and not lines[0].endswith(('阵营', '立场')):
        g = lookup_name(lines[1])
        n = name_part(lines[0], g, digits=True) if g else None
        if n:
            return [n, lines[1]]
    # 「English Name中文名」（无换行）
    if not out and len(lines) == 1:
        m = re.match(r"^([A-Za-z][A-Za-z0-9 '’\-,.!&:]+?)([一-鿿].*)$", lines[0])
        if m:
            g = lookup_name(m.group(1))
            n = name_part(m.group(2), g, digits=True) if g else None
            if n:
                out.append(m.group(1) + n)
                i = 1
    # 纯英文名称格（一行）：补游戏译名
    if not out and len(lines) == 1 and not CJK.search(text) and text.strip().lower() not in cfg.HEADER_EN:
        k = text.strip().lower()
        if k in GAME and k not in cfg.SKIP_EN and CJK.search(GAME[k]):
            return [text + '\n' + GAME[k]]
    for l in lines[i:]:
        out.append(free(l) if CJK.search(l) else l)
    return out


def unescape(s):
    return s.replace('&lt;', '<').replace('&gt;', '>').replace('&quot;', '"').replace('&apos;', "'") \
            .replace('&#10;', '\n').replace('&#13;', '\r').replace('&#9;', '\t').replace('&amp;', '&')


def esc(s):
    return escape(s).replace('\n', '&#10;').replace('\r', '&#13;')


def fix_sst(xml):
    def si(m):
        body = m.group(1)
        ts = list(re.finditer(r'<t( [^>]*)?>(.*?)</t>|<t( [^>]*)?/>', body, re.S))
        if len(ts) == 1 and '<r>' not in body:
            t = ts[0]
            old = unescape(t.group(2) or '')
            new = transform(old)
            if new != old:
                log.append((old, new))
                attr = ' xml:space="preserve"' if new != new.strip() or '\n' in new else (t.group(1) or '')
                body = body[:t.start()] + '<t%s>%s</t>' % (attr, esc(new)) + body[t.end():]
            return '<si>%s</si>' % body
        # 富文本：逐段只做术语替换
        def run(t):
            if t.group(2) is None:
                return t.group(0)
            old = unescape(t.group(2))
            new = free(old) if CJK.search(old) else old
            if new != old:
                log.append((old, new))
            return '<t%s>%s</t>' % (t.group(1) or '', esc(new))
        return '<si>%s</si>' % re.sub(r'<t( [^>]*)?>(.*?)</t>', run, body, flags=re.S)
    return re.sub(r'<si>(.*?)</si>', si, xml, flags=re.S)


def main(src, dst, report=None):
    del log[:]
    tmp = dst + '.tmp'
    with zipfile.ZipFile(src) as zin, zipfile.ZipFile(tmp, 'w') as zout:
        for info in zin.infolist():
            data = zin.read(info.filename)
            if info.filename == 'xl/sharedStrings.xml':
                data = fix_sst(data.decode('utf-8')).encode('utf-8')
            zout.writestr(info, data, compress_type=info.compress_type)
    os.replace(tmp, dst)  # 输入输出可以是同一个文件
    print(f'{len(log)} 个字符串有改动')
    if report:
        with open(report, 'w', encoding='utf-8') as f:
            for a, b in log:
                f.write(a.replace('\n', '⏎') + '\n=> ' + b.replace('\n', '⏎') + '\n\n')


if __name__ == '__main__':
    args = sys.argv[1:]
    rep = None
    if '--report' in args:
        k = args.index('--report')
        rep = args[k + 1]
        del args[k:k + 2]
    main(args[0], args[1], rep)
