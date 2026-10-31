"""开发核对：列出客户端实时缓存 getter 的来源。"""
import json
from inspect_live_objects import source
from spell_effects import body

if __name__ == '__main__':
    names = json.load(open('build/client-audit/member-names.json', encoding='utf-8'))
    text = source('§#!!§')
    for real in ('getProductionPerSecond', 'getProductionPerTick', 'getMaxMana', 'getManaPerTick',
                 'getAssistantsNum', 'getAssistantResourcePerClick', 'getAssistantsMultiplier'):
        obf = next(key.split('\t')[1] for key, value in names.items() if key.startswith('§#!!§\t') and value == real)
        print(real, body(text, '§' + obf + '§'))
