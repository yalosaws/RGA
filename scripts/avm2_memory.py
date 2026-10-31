"""针对当前 32 位 AIR 的只读对象解析；结构和值均验证后才返回。"""
import math
import struct


class UnstableRead(ValueError):
    pass


class Avm2Reader:
    def __init__(self, memory):
        if memory.pointer_size != 4:
            raise ValueError('当前探针只验证了 32 位 AIR，对其他架构不猜测偏移')
        self.memory = memory
        self.air = next(row for row in memory.modules() if row['name'].lower() == 'adobe air.dll')
        self.traits_name_offset = None

    def read(self, address, size):
        if not 0x10000 <= address < 0x100000000 or size > 65536:
            raise UnstableRead('地址或读取范围不符合已验证布局')
        data = self.memory.read(address, size)
        if len(data) != size:
            raise UnstableRead('对象已改变或地址不可读取')
        return data

    def words(self, address, count):
        return struct.unpack('<%dI' % count, self.read(address, count * 4))

    def pointer(self, address):
        return self.words(address, 1)[0]

    def is_air_pointer(self, value):
        return self.air['base'] <= value < self.air['base'] + self.air['size']

    def string(self, address, limit=128, depth=0):
        if depth > 4:
            raise UnstableRead('字符串引用过深')
        header = self.words(address, 6)
        if not self.is_air_pointer(header[0]) or header[4] > limit:
            raise UnstableRead('不是预期的短字符串')
        width = 2 if header[5] & 1 else 1
        if header[5] & 6 == 4:
            master = self.words(header[3], 6)
            if master[5] & 6 == 4:
                raise UnstableRead('暂不解析多层子串')
            buffer = master[2] + header[2]
        else:
            buffer = header[2]
        if header[4] == 0:
            return ''
        return self.read(buffer, header[4] * width).decode('utf-16le' if width == 2 else 'latin1')

    def traits(self, obj):
        header = self.words(obj, 4)
        if not self.is_air_pointer(header[0]):
            raise UnstableRead('对象头不是 AIR 类型')
        table = self.words(header[2], 6)
        if not self.is_air_pointer(table[0]):
            raise UnstableRead('虚表不是 AIR 类型')
        return table[5]

    def identify(self, obj, expected):
        traits = self.traits(obj)
        offsets = [self.traits_name_offset] if self.traits_name_offset is not None else range(24, 144, 4)
        for offset in offsets:
            try:
                name = self.string(self.pointer(traits + offset))
            except (ValueError, UnicodeError):
                continue
            if name in expected:
                self.traits_name_offset = offset
                return name
        raise UnstableRead('对象类型未与客户端类名匹配')

    def type_name(self, obj):
        if self.traits_name_offset is None:
            raise UnstableRead('尚未确定类型名布局')
        return self.string(self.pointer(self.traits(obj) + self.traits_name_offset))

    def is_subclass(self, obj, base_name):
        traits = self.traits(obj)
        seen = set()
        while traits and traits not in seen and len(seen) < 20:
            seen.add(traits)
            if self.string(self.pointer(traits + self.traits_name_offset)) == base_name:
                return True
            traits = self.pointer(traits + 8)
        return False

    def atom_number(self, value):
        kind = value & 7
        if kind == 6:
            return struct.unpack('<i', struct.pack('<I', value))[0] >> 3
        if kind == 7:
            number = struct.unpack('<d', self.read(value & ~7, 8))[0]
            if math.isfinite(number):
                return number
        raise UnstableRead('字段不是有限数值 Atom')

    def numeric_map(self, address):
        header = self.words(address, 6)
        if not self.is_air_pointer(header[0]):
            raise UnstableRead('数值字典对象头不符')
        log_capacity = header[5] >> 27
        if not 2 <= log_capacity <= 7:
            raise UnstableRead('数值字典容量超出预期')
        capacity = 1 << (log_capacity - 1)
        atoms = self.words((header[4] & ~7) + 4, capacity)
        result = {}
        for i in range(0, capacity, 2):
            key, value = atoms[i:i + 2]
            key &= ~1
            if key & 7 == 2:
                text = self.string(key & ~7, limit=1)
                if text in ('v', 'c', 'f'):
                    result[text] = self.atom_number(value)
        if set(result) != {'v', 'c', 'f'}:
            raise UnstableRead('数值字典的校验字段不完整')
        return result

    @staticmethod
    def int32(value):
        value = math.trunc(value) % (1 << 32)
        return value - (1 << 32) if value >= (1 << 31) else value

    def secure_number(self, address, expected_thresholds=None, expected_type='4l'):
        for _ in range(5):
            try:
                before = self.words(address, 12)
                self.identify(address, {expected_type})
                if expected_thresholds and (before[5], before[7]) != expected_thresholds:
                    raise UnstableRead('数值字段的读取/写入阈值不匹配')
                if before[10] & 7 != 1:
                    raise UnstableRead('数值字段没有指向 Object')
                values = self.numeric_map(before[10] & ~7)
                after = self.words(address, 12)
                if tuple(before[i] for i in (2, 4, 8, 10)) != tuple(after[i] for i in (2, 4, 8, 10)):
                    continue
                salt = self.int32(before[4])
                actual = self.int32(int(values['f']) ^ salt)
                check = self.int32(int(values['c']) ^ salt)
                expected = self.int32(self.int32(values['v']) * .9) if expected_type == '4l' else self.int32(values['v'])
                if actual == expected and actual + salt == check:
                    return values['v']
            except (ValueError, UnicodeError):
                continue
        raise UnstableRead('未取得通过客户端数值校验的一致快照')

    def object_vector(self, address, expected_name, maximum=128):
        self.identify(address, {expected_name})
        before = self.words(address, 10)
        length = before[8]
        if length > maximum:
            raise UnstableRead('对象向量长度超出当前字段范围')
        data = self.words(before[7], length + 2)
        if not self.is_air_pointer(data[0]) or data[1] < length:
            raise UnstableRead('对象向量容器头不符')
        objects = []
        for value in data[2:]:
            if value & 7 != 1:
                raise UnstableRead('对象向量出现非对象元素')
            objects.append(value & ~7)
        after = self.words(address, 10)
        if before[7:9] != after[7:9]:
            raise UnstableRead('对象向量在读取期间发生变化')
        return objects

    def enclosing_objects(self, field_address, expected, maximum=8192):
        region = next((row for row in self.memory.regions() if row['base'] <= field_address < row['base'] + row['size']), None)
        if region is None:
            return []
        start = max(region['base'], field_address - maximum)
        data = self.read(start, field_address - start + 4)
        result = []
        for offset in range((len(data) - 16) // 4 * 4, -1, -4):
            if not self.is_air_pointer(struct.unpack_from('<I', data, offset)[0]):
                continue
            try:
                name = self.identify(start + offset, expected)
                result.append(dict(address=start + offset, name=name, field_offset=field_address - start - offset))
            except (ValueError, UnicodeError):
                continue
        return result
