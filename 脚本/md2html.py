import re, html, sys
src, dst = sys.argv[1], sys.argv[2]
lines = open(src, encoding='utf-8').read().split('\n')
def inl(t):
    t = html.escape(t, quote=False)
    t = re.sub(r'`([^`]+)`', r'<code>\1</code>', t)
    t = re.sub(r'\*\*(.+?)\*\*', r'<strong>\1</strong>', t)
    return t
out = []; stack = []  # (tag, indent)
def close_lists(level=-1):
    while stack and stack[-1][1] > level:
        out.append('</li></%s>' % stack.pop()[0])
i = 0
while i < len(lines):
    l = lines[i]
    m = re.match(r'^(\s*)([-*]|\d+\))?(\d+\.)?\s', l) if l.strip() else None
    lm = re.match(r'^(\s*)(?:([-*])|(\d+)[.)])\s+(.*)$', l)
    if lm:
        ind = len(lm.group(1)); tag = 'ul' if lm.group(2) else 'ol'
        if stack and stack[-1][1] > ind: close_lists(ind)
        if stack and stack[-1][1] == ind:
            out.append('</li><li>')
        else:
            start = '' if tag == 'ul' or lm.group(3) == '1' else ' start="%s"' % lm.group(3)
            out.append('<%s%s><li>' % (tag, start)); stack.append((tag, ind))
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
# 标题后接短段落或短表格：整块放进不可拆分的容器；其余标题只要求不留在页底
for k in range(len(out) - 1):
    if re.match(r'<h[23]>', out[k]):
        nxt = out[k + 1]
        if nxt.startswith('<p>') or (nxt.startswith('<table') and nxt.count('<tr>') <= 8):
            out[k] = '<div class="keep">' + out[k]; out[k + 1] = nxt + '</div>'
        else:
            out[k] = out[k].replace('<h2>', '<h2 class="kn">').replace('<h3>', '<h3 class="kn">')
css ="""@page{size:A4;margin:16mm 15mm}
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
th{background:#ede6f8;white-space:nowrap}
ul,ol{margin:4px 0 10px;padding-left:24px} li{margin:2px 0}
strong{color:#000}"""
title = next((re.sub(r'^#\s*', '', l) for l in lines if l.startswith('# ')), 'Realm Grinder')
open(dst, 'w', encoding='utf-8').write('<!doctype html><html lang="zh-CN"><head><meta charset="utf-8"><title>%s</title><style>%s</style></head><body>%s</body></html>' % (html.escape(title), css, '\n'.join(out)))
