"""显式社区保底配置；模板在目标时长逐项严格验证，不修补残缺配方。"""
import json
from pathlib import Path
import re


def compile_library(output, model_path):
    from rg_community import template_rows
    model=json.loads(Path(model_path).read_text(encoding='utf-8'))
    presets=[]
    for row in template_rows():
        if row['kind']!='research' or not re.search(r'\([^)]*\bprod\b',row['name']):
            continue
        match=re.match(r'R(\d+)(?:-(\d+)|(\+))?',row['name'])
        if not match:
            continue
        for plan in row['plans']:
            if plan['faction']=='Mercenary':
                continue  # 当前保底库只收已接通的基础阵营研究模板。
            needed={model['research'][c]['faction'] for c in plan['research']} & {9,10,12}
            prestige={None:-1,'Dwarven':9,'Drow':10,'Dragon':12}[plan['prestige']]
            if needed and needed!={prestige}:
                continue
            presets.append(dict(name=row['name'],ascension=1,min_R=int(match[1]),
                max_R=int(match[2] or match[1]) if not match[3] else None,plan=plan))
    output=Path(output)
    output.write_text(json.dumps(dict(version=1,source='A1-build-templates.json',templates=presets),
                                 ensure_ascii=False,separators=(',',':')),encoding='utf-8')
    return len(presets)


def load_library(assets, enabled=True):
    if not enabled:
        return []
    path=Path(assets)/'community-seeds.json'
    if not path.is_file():
        raise ValueError('缺少社区保底配置，请重新生成计算资源')
    return json.loads(path.read_text(encoding='utf-8'))['templates']


def applicable(templates, ascension, reincarnation):
    return [row for row in templates if row['ascension']==ascension and row['min_R']<=reincarnation
            and (row['max_R'] is None or reincarnation<=row['max_R'])]
