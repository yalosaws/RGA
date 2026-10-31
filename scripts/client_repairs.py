"""对有字节码证据的反编译缺口做最小修复；不修改导出的 AS3 原件。"""
import hashlib
import json
from pathlib import Path
import re

from pcode_sym import methods_of, qn


def repair_load_read(src, pcode_root):
    pcode = Path(pcode_root) / '§8G§.pcode'
    code = methods_of(pcode.read_text(encoding='utf-8'))['load']['code']
    matches = []
    for i in range(1, len(code) - 1):
        if code[i][1:] != ('pushshort', '360'):
            continue
        before, after = code[i - 1], code[i + 1]
        if before[1] == after[1] == 'callproperty' and '"readUnsignedShort"' in before[2] and '"min"' in after[2]:
            # 插入的代码沿用 `>= 9` 存档版本条件，必须在字节码里看到同一判断。
            window = [row[1:] for row in code[max(0, i - 10):i]]
            guarded = any(window[k] == ('pushbyte', '9') and window[k + 1][0] == 'ifnge' for k in range(len(window) - 1))
            if guarded:
                matches.append(i)
    if len(matches) != 1:
        raise ValueError('Game.load 的存档兼容字段字节码签名不匹配，停止生成')
    fingerprint = hashlib.sha256(json.dumps(code).encode()).hexdigest()
    if re.search(r'readUnsignedShort\(\)\s*,\s*360', src):
        return src, dict(repair='preserve_snowball_size_read', applied=False, bytecode_sha256=fingerprint)
    anchor = re.compile(r'(?m)^(\s*)§8G§\.§3s§ = (_loc\d+_) >= 9 \? Math\.max\(0,(_loc\d+_)\.readByte\(\)\) : 0;$')
    match = anchor.search(src)
    if not match:
        raise ValueError('Game.load 的兼容字段插入位置不匹配，停止生成')
    line = '\n' + match[1] + match[2] + ' >= 9 ? Math.min(' + match[3] + '.readUnsignedShort(),360) : 0;'
    src = src[:match.end()] + line + src[match.end():]
    return src, dict(repair='preserve_snowball_size_read', applied=True, bytecode_sha256=fingerprint)
