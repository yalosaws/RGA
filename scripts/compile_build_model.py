"""从客户端编译研究/升级机制模型；运行中的新求解器不依赖反编译源码。"""
import argparse
import hashlib
import json
from pathlib import Path
import re

import research_formulas as RF
import rg_dominance as D
from as2py import mangle

ROOT = Path(__file__).resolve().parents[1]

FUNCTION_OUTPUT = {
    'getMaxManaReal': 'max_mana', 'getManaPerTickReal': 'mana_regen',
    'getAssistantsNumReal': 'assistants', 'getProductionPerTickReal': 'production',
    'getResourcePerTick': 'production', 'getResourcePerClickReal': 'clicks',
    'getFactionCoinChance': 'fc', 'getExchangeBonus': 'exchange_bonus',
    'getBuildingCostReal': 'building_cost', 'costMultiplier': 'exchange_cost',
    'getSpellDuration': 'duration', 'getSpellCost': 'spell_cost',
    'getArtifact': 'artifacts', 'getAssistantsNum': 'assistants_read',
    'getMaxMana': 'mana_read', 'getManaProduced': 'mana_produced_read',
    'hasBloodline': 'bloodline', 'hasUnion': 'union', 'hasSet': 'set',
    'hasUnique': 'unique', 'applyLineageBonuses': 'lineage', 'getGemMultiplierBase': 'gem_bonus',
    'getGemMultiplier': 'gem_bonus', 'getOfflineBonus': 'offline',
    'getProductionPerTick': 'production', 'getProductionPerSecondReal': 'production',
    'getProductionPerSecond': 'production', 'applyReincarnationBonus': 'reincarnation',
    'getAssistantsMultiplierReal': 'assistant_efficiency',
    'getAutoClickPower': 'click_rate', 'getTaxCollectionDuplicate': 'tax_duplicate',
    'getTrophyNum': 'trophies', 'getResearchCap': 'capacity', 'getResearchBudget': 'budget',
}
METHOD_OUTPUT = {
    'getMaxManaBonus': 'max_mana', 'getMaxManaMultiplier': 'max_mana',
    'getManaRegenBonus': 'mana_regen', 'getManaRegenMultiplier': 'mana_regen',
    'getAssistantsNumBonus': 'assistants', 'getAssistantsNumMultiplier': 'assistants',
    'getProductionMultiplier': 'production', 'getBuildingMultiplier': 'production',
    'getFCCChanceBonus': 'fc', 'getFCCChanceMultiplier': 'fc',
    'getSpellDurationBonus': 'duration', 'getSpellDurationMultiplier': 'duration',
    'getSpellDurationFixed': 'duration', 'getSpellCostBonus': 'spell_cost',
    'getSpellCostMultiplier': 'spell_cost', 'getExchangeBonus': 'exchange_bonus',
    'getExchangeMultiplier': 'exchange_bonus', 'getNumClicks': 'click_rate',
    'getNumClicksMultiplier': 'click_rate', 'getClickMultiplier': 'clicks',
    'getAssistantsMultiplier': 'assistant_efficiency', 'getGemBonus': 'gem_bonus',
    'getGemMultiplier': 'gem_gain', 'getOfflineMultiplier': 'offline',
}
READ_QUANTITY = {
    'getMaxMana': 'mana_read', 'getMaxManaReal': 'max_mana',
    'getManaPerTick': 'mana_regen', 'getManaPerTickReal': 'mana_regen',
    'getAssistantsNum': 'assistants_read', 'getAssistantsNumReal': 'assistants',
    'getManaProduced': 'mana_produced_read', 'getArtifact': 'artifacts',
    'getFactionCoinTotal': 'fc_total', 'getFactionCoinChance': 'fc',
    'getExchange': 'exchanges', 'getExchangeBonus': 'exchange_bonus',
    'getAllSpellCast': 'casts', 'getSpellCast': 'casts', 'getAllSpellCastStat': 'casts',
    'getClicks': 'click_total', 'getBuildingNumber': 'buildings', 'getBuildingNum': 'buildings',
    'getBuildingMax': 'buildings', 'getMaxBuildingNumber': 'buildings', 'getUniqueBuildingNumber': 'buildings',
    'getProductionPerSecond': 'production', 'getProductionPerSecondReal': 'production',
    'getProductionPerTick': 'production', 'getProductionPerTickReal': 'production',
    'getSpellDuration': 'duration', 'getMinMaxSpellDuration': 'duration',
    'getCastTime': 'spell_time', 'getAllSpellCastTime': 'spell_time',
    'getActiveSpells': 'active_spells', 'getOfflineBonus': 'offline',
    'getResearchPointSpent': 'research_spent',
    'getTrophyNum': 'trophies',
}


def compile_model(output):
    meta = D.research_meta()
    research = {r['cls']: r for r in meta.values()}
    all_classes = set(D.FILES)
    roots = {}
    methods = {}
    for cls, text in D.FILES.items():
        lines, funcs, _ = D.functions_of(text)
        methods[cls] = {name:'\n'.join(lines[a:b]) for name,(a,b) in funcs.items()}
    quantity_roots = {(cls,name):q for cls in ('Formulas','Utilities','FactionExchangeUpgrade')
                      for name,q in FUNCTION_OUTPUT.items() if name in methods.get(cls,{})}
    for origin, quantity in quantity_roots.items():
        todo, seen = [origin], set()
        while todo:
            cls, name = todo.pop()
            if (cls,name) in seen:
                continue
            seen.add((cls,name))
            body = methods.get(cls,{}).get(name,'')
            for used, member in re.findall(r'\b([A-Z]\w*)\.(\w+)', body):
                if used not in all_classes:
                    continue
                roots.setdefault(used,set()).add(quantity)
                callee = (used,member)
                # 数量提供函数是边界：回魔→施法次数这样的反馈由数量图表达，
                # 不把所有上游研究都误标成“直接产出研究”。
                if callee in quantity_roots and quantity_roots[callee] != quantity:
                    continue
                if member in methods.get(used,{}) and member not in D.UI_FUNCS:
                    todo.append(callee)
            # AS3 同类函数调用通常省略类名。
            for member in re.findall(r'(?<![.\w])([A-Za-z_]\w*)\(', body):
                if member in methods[cls] and member not in D.UI_FUNCS:
                    callee=(cls,member)
                    if callee not in quantity_roots or quantity_roots[callee] == quantity:
                        todo.append(callee)

    def ancestors(cls):
        seen = set()
        while cls and cls not in seen:
            seen.add(cls)
            m = re.search(r'class \S+ extends (\S+)', D.FILES.get(cls, ''))
            cls = m[1] if m else None
        return seen

    def method_owner(cls, name):
        seen=set()
        while cls and cls not in seen:
            seen.add(cls)
            if name in methods.get(cls,{}):return cls
            parent=re.search(r'class \S+ extends (\S+)',D.FILES.get(cls,''))
            cls=parent[1] if parent else None
        return None

    items = {}
    for cls, text in D.FILES.items():
        ancestry = ancestors(cls)
        if not ({'Upgrade', 'ResearchUpgrade', 'Spell'} & ancestry):
            continue
        outputs = set(roots.get(cls, ()))
        inputs, expressions, opaque = set(), [], []
        for name, args, ret, body in RF.FN.findall(text):
            if name in RF.SKIP or ret not in ('Number', 'int', 'uint') or name == cls:
                continue
            if name in METHOD_OUTPUT:
                outputs.add(METHOD_OUTPUT[name])
            for call in re.findall(r'\b(?:Utilities|Formulas|Game)\.(\w+)\(', body):
                if call in READ_QUANTITY:
                    inputs.add(READ_QUANTITY[call])
            if 'Formulas.reincarnation' in body:
                inputs.add('reincarnation')
            if '§5!V§' in body or '§=y§' in body or '§@w§' in body:
                inputs.add('statistics')
            m = re.fullmatch(r'\s*return ([^;]*);\s*', body, re.S)
            try:
                if m is None:
                    raise ValueError('多语句')
                ast = RF.Parser(m[1]).parse()
                static=bool(re.search(r'static function '+re.escape(name)+r'\(',text))
                expressions.append(dict(method=name, ast=ast, output=METHOD_OUTPUT.get(name),
                                        arguments=len([x for x in args.split(',') if x.strip()]),static=static))
            except (ValueError, KeyError, IndexError):
                opaque.append(name)
        sid = re.search(r'§6!Z§ = (\d+);', text)
        entry = dict(cls=cls, sid=int(sid[1]) if sid else None, outputs=sorted(outputs), inputs=sorted(inputs),
                     expressions=expressions, opaque=opaque, source_sha256=hashlib.sha256(text.encode()).hexdigest())
        variant=re.search(r'§"!U§ = ([^;]+);',text)
        if sid and variant and cls not in research:
            entry['sid_base']=int(sid[1])
            try:
                tag=int(variant[1])
                if tag!=-1:entry['sid']=100000+entry['sid_base']*100+tag
            except ValueError:
                entry['sid']=None
                entry['sid_encoding']='100000 + sid_base * 100 + instance_variant'
        assignments=re.findall(r'§6!Z§ = ([^;]+);',text)
        if assignments and not assignments[-1].isdigit() and cls not in research:
            # initialize() 可以再次重写编号；不能把构造函数里的原始号冒充存档号。
            entry['sid']=None
            # 没有覆盖时沿用 Upgrade 中声明的初始编号 0。
            assert sid or 'public var §6!Z§:uint = 0;' in D.FILES['Upgrade']
            entry['sid_base']=int(sid[1]) if sid else 0
            expression=assignments[-1]
            entry['sid_runtime_expression']=expression
            if expression=='100000 + §6!Z§ * 100 + tier':
                entry['sid_encoding']='100000 + sid_base * 100 + tier'
            elif expression=='400000 + Game.getSpell(§`g§).§6!Z§ * 100 + tier':
                entry['sid_encoding']='400000 + spell_sid * 100 + tier'
            elif expression=='100000 + §6!Z§ * 100 + §"!U§':
                entry['sid_encoding']='100000 + sid_base * 100 + instance_variant'
            elif expression=='500000 + §,!Y§ * 20000 + §%<§.tier * 1000 + §"!U§':
                entry['sid_encoding']='500000 + building_index * 20000 + building_tier * 1000 + instance_variant'
            else:
                entry['sid_encoding']='runtime_expression'
        if cls in research:
            r = research[cls]
            entry.update(code=r['code'], sid=r['id'], branch=r['branch'], level=r['num'],
                         faction=r['bound'], condition_faction=r['cond_faction'], alignment=r['align'])
            entry['eligibility']=dict(purchasable_owner=method_owner(cls,'purchasable'),
                                      research_visible_owner=method_owner(cls,'researchVisible'))
        items[cls] = entry
    # 辅助关系描述实际增长方向；它们只指导提案，不给最终数值，也不排除未知项。
    bridges = {
        'max_mana': ['mana_read', 'mana_produced'], 'assistants': ['assistants_read', 'click_rate'],
        'mana_produced': ['mana_produced_read'], 'mana_regen': ['mana_produced', 'casts'],
        'production': ['coins'], 'clicks': ['coins'], 'assistant_efficiency': ['coins'],
        'building_cost': ['buildings'],
        'fc': ['fc_total'], 'click_rate': ['fc_total', 'click_total'],
        'tax_duplicate': ['fc_total', 'coins', 'casts'], 'casts': ['fc_total'],
        'fc_total': ['exchanges'], 'exchange_cost': ['exchanges'],
        'exchanges': ['coins', 'lineage'], 'exchange_bonus': ['coins'],
        'gem_bonus': ['coins'], 'gem_gain': ['gems'], 'coins': ['buildings', 'gems'],
        'duration': ['active_spells', 'spell_time'], 'spell_cost': ['casts', 'active_spells'],
    }
    rows = [x for x in items.values() if x.get('code')]
    assert len(rows) == 264
    names = json.loads((ROOT / 'build/installed-as3-named/names.json').read_text(encoding='utf-8'))
    runtime_classes = {v['name']: dict(raw=k, python=mangle(k)) for k, v in names.items()
                       if 'class' in str(v.get('kind'))}
    result = dict(version=3, source='installed-client-4.3.14', purpose='proposal model; exact game remains the oracle',
                  runtime_classes=runtime_classes,
                  items=items, research={r['code']: r for r in rows}, bridges=bridges,
                  coverage=dict(upgrades_and_spells=len(items), research=len(rows),
                                expressions=sum(len(r['expressions']) for r in items.values()),
                                opaque=sum(len(r['opaque']) for r in items.values())))
    output.parent.mkdir(parents=True, exist_ok=True)
    output.write_text(json.dumps(result, ensure_ascii=False, separators=(',', ':')), encoding='utf-8')
    print(json.dumps(dict(output=str(output), **result['coverage']), ensure_ascii=False))
    return result


if __name__ == '__main__':
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--output', type=Path, default=ROOT / 'build/calculation/build-model.json')
    compile_model(ap.parse_args().output)
