"""核对限定游戏对象的运行时槽元数据，不输出原始内存。"""
import argparse
import json
from pathlib import Path

from game_memory_probe import GameMemory
from read_game_live import LiveProbe


def metadata(reader, obj):
    traits = reader.traits(obj)
    candidates = []
    for offset, word in enumerate(reader.words(traits, 40)):
        try:
            nested = reader.words(word, 5)
        except ValueError:
            continue
        for inner, pointer in enumerate(nested):
            try:
                header = reader.words(pointer, 12)
            except ValueError:
                continue
            if traits in header[:5]:
                candidates.append(dict(offset=offset * 4, inner=inner * 4, header=[hex(w) for w in header]))
    return dict(type=reader.type_name(obj), traits=hex(traits), candidates=candidates)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('pid', type=int)
    args = parser.parse_args()
    with GameMemory(args.pid) as memory:
        probe = LiveProbe(memory)
        print(json.dumps(metadata(probe.reader, probe.root), ensure_ascii=False))
        r = probe.reader
        root_traits = r.traits(probe.root)
        reference = r.pointer(root_traits + 100)
        binding = r.pointer(reference)
        fields = json.loads((Path(__file__).resolve().parents[1] / 'build/live-layout-candidates.json').read_text(encoding='utf-8'))['8G']['static']
        for field in fields:
            if field['name'] in ('6!R', '5!V', '4P', '1q'):
                value = r.pointer(probe.root + field['offset'])
                print(json.dumps(dict(field=field['name'], type=r.type_name(value), container_header=[hex(w) for w in r.words(value, 14)])))
                if field['name'] == '1q':
                    print(json.dumps(dict(array_buffer=[hex(w) for w in r.words(r.pointer(value+20), 6)])))
                else:
                    print(json.dumps(dict(vector_buffer=[hex(w) for w in r.words(r.pointer(value+28), 6)])))
        if binding:
            slots = r.words(binding + 36, len(fields) * 2)
            print(json.dumps(dict(slot_count=r.pointer(binding + 20), checked=len(fields), differences=[
                dict(name=field['name'], predicted=field['offset'], actual=(slots[i*2+1] >> 4)*4,
                     predicted_type=field['storage'], actual_type=slots[i*2+1]&15)
                for i,field in enumerate(fields) if field['offset'] != (slots[i*2+1] >> 4)*4 or field['storage'] != slots[i*2+1]&15
            ]), ensure_ascii=False))
        cpp = memory.read(probe.root, 4)
        hits, _ = memory.scan({'classes': cpp}, maximum=15000)
        wanted = {'#!!$', '&c$', 'PlayFab$', 'TimeServer$', '<!d$'}
        found = {}
        for candidate in hits['classes']:
            try:
                name = r.type_name(candidate)
                if name in wanted:
                    found.setdefault(name, []).append(dict(address=hex(candidate), metadata=metadata(r, candidate)))
            except ValueError:
                pass
        print(json.dumps(dict(classes=found, candidates=len(hits['classes'])), ensure_ascii=False))
        for offset, expected in ((0x9c, 'Vector.<`!;>'), (0xa0, 'Vector.<`6>'), (0x98, 'Vector.<84>')):
            objects = r.object_vector(r.pointer(probe.root + offset), expected, maximum=4096)
            print(json.dumps(dict(vector=expected, count=len(objects), first=metadata(r, objects[0])), ensure_ascii=False))


if __name__ == '__main__':
    main()
