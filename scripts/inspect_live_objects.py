"""验证阶段用的有范围对象检查，不输出未经筛选的字符串或原始内存。"""
import argparse
import json
from pathlib import Path
import struct
from urllib.parse import unquote

from avm2_memory import Avm2Reader
from game_memory_probe import GameMemory
from spell_effects import body

ROOT = Path(__file__).resolve().parents[1]


def source(cls):
    return next(path for path in (ROOT / 'build/installed-as3-deobf/scripts').rglob('*.as')
                if unquote(path.stem) == cls).read_text(encoding='utf-8')


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('pid', type=int)
    parser.add_argument('--source', action='store_true')
    parser.add_argument('--object', type=lambda value: int(value, 0), action='append', default=[])
    args = parser.parse_args()
    if args.source:
        text = source('§`!;§')
        print('BUILDING QUANTITY', body(text, '§!a§', 'get'))
        print('BUILDING FIELDS', '\n'.join(line for line in text.splitlines() if ' var ' in line and
              any(kind in line for kind in ('public var', 'private var', 'protected var'))))
        print('UINT WRAPPER', source('§3F§'))
        text = source('§84§')
        print('SPELL FIELDS', '\n'.join(line for line in text.splitlines() if ' var ' in line and
              any(kind in line for kind in ('public var', 'private var', 'protected var'))))
        return
    with GameMemory(args.pid) as memory:
        reader = Avm2Reader(memory)
        reader.traits_name_offset = 72
        for address in args.object:
            name = reader.type_name(address)
            print('OBJECT', hex(address), name)
            words = reader.words(address, 60 if address == 0x10d9b1f0 else 40)
            for i, value in enumerate(words):
                if value & 3:
                    continue
                try:
                    kind = reader.type_name(value)
                    print('child', hex(i * 4), hex(value), kind, reader.words(value, 12) if kind == '3F' else '')
                except (ValueError, UnicodeError):
                    pass
            print('integers', [(hex(i * 4), value) for i, value in enumerate(words) if value < 10000000])


if __name__ == '__main__':
    main()
