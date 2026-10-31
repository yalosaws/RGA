"""Read and extend AIR's AMF3 template store while preserving existing values."""
import os
import re
import struct
import threading
from datetime import datetime
from pathlib import Path

LOCK = threading.Lock()


class Reader:
    def __init__(self, data):
        self.data, self.pos = data, 0
        self.strings, self.objects, self.traits = [], [], []
        self.ends = {}

    def take(self, n):
        if self.pos + n > len(self.data):
            raise ValueError('模板文件不完整')
        result = self.data[self.pos:self.pos + n]
        self.pos += n
        return result

    def uint(self):
        result = 0
        for i in range(4):
            c = self.take(1)[0]
            if i == 3:
                return (result << 8) | c
            result = (result << 7) | (c & 127)
            if c < 128:
                return result

    def string(self):
        h = self.uint()
        if not h & 1:
            return self.strings[h >> 1]
        s = self.take(h >> 1).decode('utf-8')
        if s:
            self.strings.append(s)
        return s

    def value(self, category=None):
        marker = self.take(1)[0]
        if marker in (0, 1):
            return None
        if marker in (2, 3):
            return marker == 3
        if marker == 4:
            return self.uint()
        if marker == 5:
            return struct.unpack('>d', self.take(8))[0]
        if marker == 6:
            return self.string()
        if marker not in (9, 10):
            raise ValueError('模板格式暂不支持，未写入')
        h = self.uint()
        if not h & 1:
            return self.objects[h >> 1]
        obj = {}
        self.objects.append(obj)
        if marker == 10:
            if h & 2:
                if h & 4:
                    raise ValueError('不支持外部序列化对象')
                self.string()
                trait = (bool(h & 8), [self.string() for _ in range(h >> 4)])
                self.traits.append(trait)
            else:
                trait = self.traits[h >> 2]
            for key in trait[1]:
                obj[key] = self.value()
            dynamic = trait[0]
        else:
            dynamic = True
        if dynamic:
            while True:
                start = self.pos
                key = self.string()
                if not key:
                    if category:
                        self.ends[category] = start
                    break
                obj[key] = self.value()
        if marker == 9 and h >> 1:
            raise ValueError('模板分类包含非预期的数组内容')
        return obj

    def read(self):
        if self.take(2) != b'\x00\xbf':
            raise ValueError('不是 SOL 模板文件')
        if int.from_bytes(self.take(4), 'big') != len(self.data) - 6:
            raise ValueError('模板文件长度不符')
        if self.take(10) != b'TCSO\x00\x04\x00\x00\x00\x00':
            raise ValueError('模板文件头不符')
        name = self.take(int.from_bytes(self.take(2), 'big'))
        if name != b'rg-tp' or self.take(4) != b'\x00\x00\x00\x03':
            raise ValueError('模板文件版本不符')
        result = {}
        while self.pos < len(self.data):
            key = self.string()
            result[key] = self.value(key)
            if self.take(1) != b'\x00':
                raise ValueError('模板文件结束符不符')
        return result


def string(value):
    data = value.encode('utf-8')
    n = len(data) * 2 + 1
    if n >= 2097152:
        raise ValueError('模板内容过长')
    parts = [n & 127]
    n >>= 7
    while n:
        parts.insert(0, (n & 127) | 128)
        n >>= 7
    return bytes(parts) + data


def store_path():
    return Path(os.environ['APPDATA']) / 'com.kongregate.mobile.realmgrinder.air/Local Store/#SharedObjects/rg-tp.sol'


def read_templates():
    with LOCK:
        return Reader(store_path().read_bytes()).read()


def add_template(category, name, code, path=None):
    if category not in ('research', 'mercenary'):
        raise ValueError('未知模板类型')
    if not isinstance(name, str) or not name.strip() or len(name) > 160:
        raise ValueError('模板名称无效')
    if not isinstance(code, str) or not code or len(code) > 10000:
        raise ValueError('模板配置无效')
    pattern = r'[SCDEAW]\d+' if category == 'research' else r'(?:[A-Z]{2}\d+|SP:[A-Za-z\x27 -]+)'
    if not all(re.fullmatch(pattern, token) for token in code.split(',')):
        raise ValueError('模板配置代码格式无效')
    path = Path(path) if path else store_path()
    with LOCK:
        original = path.read_bytes()
        reader = Reader(original)
        existing = reader.read()
        if category not in reader.ends or not isinstance(existing.get(category), dict):
            raise ValueError('未找到模板分类，请先在游戏中保存一条此类模板')
        entries = existing[category]
        if any(isinstance(v, dict) and v.get('tp') == code for v in entries.values()):
            return {'ok': True, 'status': 'exists', 'message': '游戏里已有相同配置'}
        final_name = name
        i = 2
        while final_name in entries:
            final_name = '%s（%d）' % (name, i)
            i += 1
        # Appending AMF strings/traits before later root fields would shift their
        # reference tables. Re-encode the whole document with inline values instead.
        expected = {**existing, category: {**entries, final_name: {'text': final_name, 'tp': code}}}
        def encode(value):
            if isinstance(value, str):
                return b'\x06' + string(value)
            if isinstance(value, dict):
                return b'\x0a\x0b\x01' + b''.join(string(k) + encode(v) for k, v in value.items()) + b'\x01'
            if value is None:
                return b'\x01'
            if isinstance(value, bool):
                return b'\x03' if value else b'\x02'
            if isinstance(value, (int, float)):
                return b'\x05' + struct.pack('>d', value)
            raise ValueError('存在无法保留的模板字段')
        # Categories are associative arrays in the game, entries are objects.
        payload = b''
        for key, values in expected.items():
            if not isinstance(values, dict):
                raise ValueError('非预期的模板分类')
            payload += string(key) + b'\x09\x01' + b''.join(string(k) + encode(v) for k, v in values.items()) + b'\x01\x00'
        header_end = 18 + len(b'rg-tp') + 4
        updated = original[:header_end] + payload
        updated = updated[:2] + (len(updated) - 6).to_bytes(4, 'big') + updated[6:]
        if Reader(updated).read() != expected:
            raise ValueError('写入前核对失败')
        backup_dir = path.parent / 'RGA-template-backups'
        backup_dir.mkdir(exist_ok=True)
        backup = backup_dir / ('rg-tp-' + datetime.now().strftime('%Y%m%d-%H%M%S-%f') + '.sol')
        backup.write_bytes(original)
        if path.read_bytes() != original:
            raise ValueError('游戏刚刚更新了模板，请重试')
        # Keep the same file identity, matching AIR's live SharedObject behavior.
        path.write_bytes(updated)
        if path.read_bytes() != updated:
            raise ValueError('游戏在写入时更新了模板，请刷新列表核对')
        return {'ok': True, 'status': 'added', 'name': final_name, 'message': '已添加到游戏模板', 'backup': str(backup)}
