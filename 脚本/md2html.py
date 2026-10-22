"""把攻略 md 转成带样式的 HTML（再用 Edge 打印成 PDF）。

用法：python 脚本/md2html.py <md> <html>
也被 build_html.py 当模块用：convert(md 文本, link) 返回 (标题, 正文 HTML)。
"""
import re, html, sys

# 专名分类上色：md 里写 {法:仙灵吟唱}，类别见 TAGS
TAGS = {'阵': ('fa', '阵营'), '法': ('sp', '法术'), '升': ('up', '升级'), '建': ('bd', '建筑'), '奖': ('tr', '奖杯'),
        '隐': ('ht', '隐藏奖杯'), '研': ('rs', '研究'), '挑': ('ch', '挑战'), '遗': ('ar', '遗物')}

CSS = """@page{size:A4;margin:16mm 15mm}
body{font-family:"Microsoft YaHei","PingFang SC",sans-serif;font-size:10.5pt;line-height:1.65;color:#222}
h1{font-size:20pt;border-bottom:3px solid #7a4bd0;padding-bottom:6px;margin:0 0 12px}
h2{font-size:14.5pt;color:#5a2fa8;margin:20px 0 8px;border-left:5px solid #7a4bd0;padding-left:8px}
h3{font-size:12pt;color:#333;margin:14px 0 6px}
p,li{orphans:2;widows:2}
.keep{break-inside:avoid} .kn{break-after:avoid}
blockquote{margin:0 0 12px;padding:8px 12px;background:#f4f0fb;border-left:4px solid #b9a3e3;color:#444;font-size:9.5pt}
hr{border:none;border-top:1px solid #ddd;margin:14px 0}
code{font-family:Consolas,monospace;background:#eee;padding:1px 4px;border-radius:3px}
table{border-collapse:collapse;margin:8px 0 12px;width:100%}
thead{display:table-header-group}
tr{break-inside:avoid}
th,td{border:1px solid #ccc;padding:5px 8px;text-align:left;vertical-align:top}
th:first-child,td:first-child{white-space:nowrap}
th{background:#ede6f8;white-space:nowrap}
ul,ol{margin:4px 0 10px;padding-left:24px} li{margin:2px 0}
strong{color:#000}
.t-fa{color:#c62828}.t-sp{color:#1565c0}.t-up{color:#00838f}.t-bd{color:#a0522d}.t-tr{color:#d4a000}
.t-ht{color:#8e24aa}.t-rs{color:#2e7d32}.t-ch{color:#ef6c00}.t-ar{color:#c2185b}
[class^="t-"]{font-weight:600}
.legend{font-size:9pt;margin:-4px 0 12px}
.legend span{margin-right:14px;white-space:nowrap}
.legend span::before{content:"";display:inline-block;width:9px;height:9px;border-radius:2px;background:currentColor;margin-right:4px;vertical-align:0}"""


def convert(text, link=None):
    """link(类, 名) 返回链接地址或 None；有地址的专名渲染成 <a>"""
    lines = text.split('\n')
    used = []

    def color_tag(m):
        k, name = m.group(1), m.group(2)
        if k not in used:
            used.append(k)
        href = link(k, html.unescape(name)) if link else None
        if href:
            return '<a class="t-%s" href="%s">%s</a>' % (TAGS[k][0], href, name)
        return '<span class="t-%s">%s</span>' % (TAGS[k][0], name)

    def inl(t):
        t = html.escape(t, quote=False)
        t = re.sub(r'`([^`]+)`', r'<code>\1</code>', t)
        t = re.sub(r'\*\*(.+?)\*\*', r'<strong>\1</strong>', t)
        t = re.sub(r'\{(%s):([^{}]+)\}' % '|'.join(TAGS), color_tag, t)
        return t

    out = []; stack = []  # (列表标签, 缩进)

    def close_lists(level=-1):
        while stack and stack[-1][1] > level:
            out.append('</li></%s>' % stack.pop()[0])

    i = 0
    while i < len(lines):
        l = lines[i]
        lm = re.match(r'^(\s*)(?:([-*])|(\d+)[.)])\s+(.*)$', l)
        if lm:
            ind = len(lm.group(1)); kind = 'ul' if lm.group(2) else 'ol'
            if stack and stack[-1][1] > ind: close_lists(ind)
            if stack and stack[-1][1] == ind:
                out.append('</li><li>')
            else:
                start = '' if kind == 'ul' or lm.group(3) == '1' else ' start="%s"' % lm.group(3)
                out.append('<%s%s><li>' % (kind, start)); stack.append((kind, ind))
            out.append(inl(lm.group(4))); i += 1; continue
        close_lists()
        if not l.strip(): i += 1; continue
        if l.startswith('#'):
            n = len(l) - len(l.lstrip('#')); out.append('<h%d>%s</h%d>' % (n, inl(l[n:].strip()), n))
        elif l.strip() == '---': out.append('<hr>')
        elif l.startswith('>'):
            q = []
            while i < len(lines) and lines[i].startswith('>'):
                q.append(inl(lines[i][1:].strip())); i += 1
            out.append('<blockquote>' + '<br>'.join(q) + '</blockquote>'); continue
        elif l.startswith('|'):
            rows = []
            while i < len(lines) and lines[i].startswith('|'):
                rows.append([c.strip() for c in lines[i].strip().strip('|').split('|')]); i += 1
            t = ['<table><thead><tr>' + ''.join('<th>%s</th>' % inl(c) for c in rows[0]) + '</tr></thead><tbody>']
            for r in rows[2:]: t.append('<tr>' + ''.join('<td>%s</td>' % inl(c) for c in r) + '</tr>')
            out.append(''.join(t) + '</tbody></table>'); continue
        else:
            p = [inl(l)]; i += 1
            while i < len(lines) and lines[i].strip() and not re.match(r'^(#|>|\||---|\s*([-*]|\d+[.)])\s)', lines[i]):
                p.append(inl(lines[i])); i += 1
            out.append('<p>' + '<br>'.join(p) + '</p>'); continue
        i += 1
    close_lists()
    # 用到了专名标记就在一级标题后放图例（按 TAGS 的顺序）
    if used:
        legend = '<p class="legend">' + ''.join('<span class="t-%s">%s</span>' % (TAGS[k][0], TAGS[k][1]) for k in TAGS if k in used) + '</p>'
        h1 = next((k for k, o in enumerate(out) if o.startswith('<h1>')), -1)
        out.insert(h1 + 1, legend)
    # 标题后接短段落或短表格：整块放进不可拆分的容器；其余标题只要求不留在页底
    for k in range(len(out) - 1):
        if re.match(r'<h[23]>', out[k]):
            nxt = out[k + 1]
            if nxt.startswith('<p>') or (nxt.startswith('<table') and nxt.count('<tr>') <= 8):
                out[k] = '<div class="keep">' + out[k]; out[k + 1] = nxt + '</div>'
            else:
                out[k] = out[k].replace('<h2>', '<h2 class="kn">').replace('<h3>', '<h3 class="kn">')
    title = next((re.sub(r'^#\s*', '', l) for l in lines if l.startswith('# ')), 'Realm Grinder')
    return title, '\n'.join(out)


if __name__ == '__main__':
    src, dst = sys.argv[1], sys.argv[2]
    title, body = convert(open(src, encoding='utf-8').read())
    open(dst, 'w', encoding='utf-8').write('<!doctype html><html lang="zh-CN"><head><meta charset="utf-8"><title>%s</title><style>%s</style></head><body>%s</body></html>' % (html.escape(title), CSS, body))
