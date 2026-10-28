"""用独立解码出的存档数据交叉核对转写客户端实际载入的状态。

输入 JSON 为 {decoded: ...}，字段采用项目现用 savecodec2 的格式。
只比较客户端中语义明确的字段，不把社区字段名当作算法权威。
"""
import argparse
import json
from pathlib import Path
import sys

sys.path.insert(0, str(Path(__file__).resolve().parent))
from as2py import mangle
import rg_sim


def check(game_py, sol, decoded):
    ns, G, g = rg_sim.make_game(game_py, sol, require_pcode=True)
    C = ns['S__23__21__21_']
    names = rg_sim._real2obf('§8G§')
    records = []

    def compare(key, actual, expected):
        # JSON 的最短十进制表示不保证是 Python 的精确整数；客户端和 JS
        # 都使用双精度。按同一个 IEEE-754 值比较，避免给大整数误报差异。
        numeric = type(actual) in (int, float) and type(expected) in (int, float)
        equal = float(actual) == float(expected) if numeric else actual == expected
        records.append(dict(field=key, equal=equal, actual=actual, expected=expected))

    def fields(obj, values, mapping, prefix=''):
        for key, obf in mapping.items():
            if key in values:
                compare(prefix + key, getattr(obj, mangle('§' + obf + '§')), values[key])

    fields(G, decoded, {'alignment': ',!Y', 'faction': '-!^', 'prestigeFaction': '#3',
                       'elitePrestigeFaction': '-!x', 'secondaryAlignment': '9!m', 'ascension': ',P',
                       'reincarnation': '8!H', 'mana': '0! ', 'coins': '@e',
                       'rubies': "<!'", 'buyMode': '[!M', 'excavBuyMode': '7!N', 'reBuyMode': '>!K',
                       'consecutiveDays': '["&', 'currentDay': '@"&'})
    # gems 不是固定槽名，使用有真名的 getter，避免猜字段。
    compare('gems', getattr(G, names['gems']), decoded['gems'])
    fields(C, decoded, {'mercSpell1': ']!L', 'mercSpell2': '5o', 'mercExtraUpgrade': ';"0',
                       'mercUnion': '\'"+', 'mercUnion2': '="7', 'bFaction': '`Q',
                       'combinationBL': '3!j', 'lineageFaction': '3"', 'artifactSet': '6!r',
                       'stoneheartSet': '1"0', 'comboStrikeCont': '=Z', 'chargedTimer': '&!N',
                       'frozenLightningTimer': ',"B', 'hourGlassTimer': '@!r'})
    for sid, item in decoded['buildings'].items():
        obj = getattr(G, names['getBuildingBySID'])(int(sid))
        if obj is None:
            records.append(dict(field='building.' + sid, equal=False, error='客户端未注册此 SID'))
            continue
        fields(obj, item, {'q': '!a', 't': '8!', 'm': '2Z', 'r': '[]', 'e': ';!1',
                           'um0': '9"B', 'um1': '%"D', 'um2': ';"D',
                           'ue0': '\'"<', 'ue1': '5"D', 'ue2': '<"D'}, 'building.' + sid + '.')
    for sid, item in decoded['spells'].items():
        obj = getattr(G, names['getSpellBySID'])(int(sid))
        if obj is None:
            records.append(dict(field='spell.' + sid, equal=False, error='客户端未注册此 SID'))
            continue
        compare('spell.' + sid + '.active', obj.S_23, item['t'] >= 0)
        if item['t'] >= 0:
            compare('spell.' + sid + '.ticks', obj.S__27__21_X, item['t'])
        fields(obj, item, {'a': '3A', 'n': '#!B', 'n2': '5!H', 'n3': '8#',
                           'tierstat1': '6!A', 'activeTiers': '`r', 'c': '2-', 'r': '5!L',
                           'e': '#y', 'active0': '?j', 'active1': '<q', 'active2': '<!G'}, 'spell.' + sid + '.')
    for sid, item in decoded['upgrades'].items():
        obj = getattr(G, names['getUpgradeBySID'])(int(sid))
        if obj is not None:
            fields(obj, item, {'u1': '<!7', 'u2': '!!`', 'u3': '3!c'}, 'upgrade.' + sid + '.')
    for i, item in enumerate(decoded['stats']):
        for key, obf in (('stats', '5!V'), ('statsReset', '=y'), ('statsRei', '@w')):
            compare('stats.%d.%s' % (i, key), getattr(G, mangle('§' + obf + '§'))[i], item[key])
    for i, item in enumerate(decoded['factionCoins']):
        compare('fc.%d.coins' % i, G.S_6_21_R[i], item['factionCoins'])
        compare('fc.%d.exchanges' % i, C.S_6_21_d[i], item['royalExchanges'])
    return dict(checked=len(records), matched=sum(r['equal'] for r in records),
                differences=[r for r in records if not r['equal']], context=ns['_snapshot_context'])


if __name__ == '__main__':
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('game_py')
    ap.add_argument('sol')
    ap.add_argument('decoded_json')
    ap.add_argument('--output', default='build/client-audit/save-state.json')
    args = ap.parse_args()
    data = json.loads(Path(args.decoded_json).read_text(encoding='utf-8'))
    result = check(args.game_py, args.sol, data.get('decoded', data))
    Path(args.output).write_text(json.dumps(result, ensure_ascii=False, indent=2) + '\n', encoding='utf-8')
    print(json.dumps(result, ensure_ascii=False))
