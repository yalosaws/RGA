"""从汉化包的 RealmGrinderDesktop.swf 导出中文语言包，存成「英文原文<TAB>中文译文」对照表。

用法：python 脚本/hanhua.py <swf> <输出.tsv>

SWF 是 zlib 压缩（CWS）。语言包是 DefineBinaryData 标签里的 zlib 压缩 gettext .mo 文件，
共 6 个；汉化包把中文放在原西班牙语（es_ES）那一份里，按中文字符最多的那份来选。
换行、制表符、反斜杠转义成 \\n \\t \\\\。
"""
import struct
import sys
import zlib

BS = chr(92)


def binary_tags(swf):
    nbits = swf[8] >> 3
    p = 8 + (5 + nbits * 4 + 7) // 8 + 4
    while p < len(swf):
        h = struct.unpack_from('<H', swf, p)[0]
        p += 2
        tag, length = h >> 6, h & 0x3f
        if length == 0x3f:
            length = struct.unpack_from('<I', swf, p)[0]
            p += 4
        if tag == 87:  # DefineBinaryData：2 字节字符 id + 4 字节保留
            yield swf[p + 6:p + length]
        if tag == 0:
            break
        p += length


def read_mo(d):
    _, _, n, oo, to = struct.unpack_from('<5I', d, 0)
    for i in range(n):
        ol, op = struct.unpack_from('<2I', d, oo + 8 * i)
        tl, tp = struct.unpack_from('<2I', d, to + 8 * i)
        yield d[op:op + ol].decode('utf-8'), d[tp:tp + tl].decode('utf-8')


def esc(s):
    return s.replace(BS, BS * 2).replace('\t', BS + 't').replace('\r', BS + 'r').replace('\n', BS + 'n')


def main(src, dst):
    raw = open(src, 'rb').read()
    if raw[:3] == b'CWS':
        raw = b'FWS' + raw[3:8] + zlib.decompress(raw[8:])
    best, best_cjk = None, 0
    for b in binary_tags(raw):
        try:
            b = zlib.decompress(b)
        except zlib.error:
            continue
        if b[:4] != b'\xde\x12\x04\x95':  # .mo 魔数
            continue
        cjk = sum(1 for c in b.decode('utf-8', 'replace') if '一' <= c <= '鿿')
        if cjk > best_cjk:
            best, best_cjk = b, cjk
    rows = list(read_mo(best))
    with open(dst, 'w', encoding='utf-8', newline='\n') as f:
        f.write('英文原文\t中文译文\n')
        for a, t in rows:
            f.write(esc(a) + '\t' + esc(t) + '\n')
    print(len(rows), '条')


if __name__ == '__main__':
    main(sys.argv[1], sys.argv[2])
