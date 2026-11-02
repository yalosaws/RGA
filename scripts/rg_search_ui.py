"""新求解器的界面协议适配；与旧优化算法没有运行依赖。"""
import json
from pathlib import Path

FACTION_ZH = {'Fairy': '仙灵', 'Elven': '精灵', 'Angel': '天使', 'Goblin': '地精', 'Undead': '亡灵', 'Demon': '恶魔',
              'Titan': '泰坦', 'Druid': '德鲁伊', 'Faceless': '无面者', 'Dwarven': '矮人', 'Drow': '卓尔', 'Dragon': '龙族',
              'Mercenary': '佣兵'}
ALIGNMENT_ZH = {'good': '善良', 'evil': '邪恶', 'neutral': '中立'}
_RESEARCH_EN = None


def research_en():
    """研究代号 → 英文名（界面切到英文时用）；找不到 research.json 就返回空表。"""
    global _RESEARCH_EN
    if _RESEARCH_EN is None:
        try:
            rows = json.loads((Path(__file__).resolve().parent / 'research.json').read_text(encoding='utf-8'))
            _RESEARCH_EN = {r['code']: str(r['name']).split('\n')[0] for r in rows}
        except (OSError, ValueError, KeyError):
            _RESEARCH_EN = {}
    return _RESEARCH_EN


def struct_zh(s):
    s = s or {}
    return dict(alignment=s.get('alignment'), faction=s.get('faction'), bloodline=s.get('bloodline'),
                prestige=s.get('prestige'), alignment_zh=ALIGNMENT_ZH.get(s.get('alignment')),
                faction_zh=FACTION_ZH.get(s.get('faction'), s.get('faction')),
                bloodline_zh=FACTION_ZH.get(s.get('bloodline'), s.get('bloodline')),
                prestige_zh=FACTION_ZH.get(s.get('prestige'), s.get('prestige')))


def ui_status(status, request, translate, research_names, options, revision):
    known = int(request.get('known') or 0)
    en = research_en()
    entries = []
    for r in status['entries'][known:]:
        p = r['plan']
        entries.append(dict(struct_zh(r.get('struct') or p), id=r['id'], ok=bool(r.get('ok')), note=r.get('note'),
            reached=r.get('reached'), time=r.get('time'), value=r.get('value'), estimate=None,
            finished_at=r.get('finished_at'), lineage=r.get('lineage'), research=p.get('research') or [],
            merc=p.get('merc') or [], research_zh=[research_names.get(c,c) for c in p.get('research') or []],
            research_en=[en.get(c, research_names.get(c, c)) for c in p.get('research') or []],
            skipped=r.get('skipped') or [], skipped_merc=r.get('skipped_merc') or [],
            picks={translate(k): v for k,v in (r.get('picks') or {}).items()},
            picks_en=dict(r.get('picks') or {}),
            contributions=[dict(c,name=research_names.get(c['item'],c['item']),name_en=en.get(c['item'],c['item'])) for c in r.get('contributions') or []],
            curve=r.get('curve') or [], rounds=0, refined=[], checked=False, verified_exact=bool(r.get('verified_exact'))))
    units = []
    for u in status['units']:
        best = u.get('best')
        if best:
            z = struct_zh(best)
            best = dict(best, bloodline_zh=z['bloodline_zh'], prestige_zh=z['prestige_zh'])
        units.append(dict(u, **struct_zh(u), best=best))
    running = [dict(r, **struct_zh(r)) for r in status['running']]
    return dict({k:v for k,v in status.items() if k not in ('entries','units','running')},
                entries=entries,total_entries=len(status['entries']),units=units,running=running,
                options=options,revision=revision)
