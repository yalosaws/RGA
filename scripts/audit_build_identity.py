"""核对编译模型与实际客户端实例的编号、类、研究分支及等级。"""
import hashlib
import json
from pathlib import Path

import rg_goal,rg_sim
from as2py import mangle

ROOT=Path(__file__).resolve().parents[1]


def main():
    rg_sim.MEMBER_NAMES=ROOT/'build/calculation/member-names.json'
    save=ROOT/'build/mechanics-audit/input.sol'
    before=hashlib.sha256(save.read_bytes()).hexdigest()
    model_path=ROOT/'build/calculation/build-model.json'
    model=json.loads(model_path.read_text(encoding='utf-8'))
    runner=rg_goal.Runner(ROOT/'build/calculation/game.py',save_path=save,research_json=ROOT/'build/calculation/research.json')
    objects=list(runner.G.S__2d__21_4)+list(runner.G.S_0_21_A)
    entries=[];errors=[];uninstantiated=[]
    for name,row in model['items'].items():
        if row.get('sid') is None and 'sid_base' not in row:continue
        cls=runner.ns[model['runtime_classes'][name]['python']]
        matches=[u for u in objects if rg_goal.game_class(u)==cls]
        if not matches:
            uninstantiated.append(name);continue
        for u in matches:
            actual=int(u.S_6_21_Z)
            expected=row.get('sid')
            if row.get('sid_encoding')=='100000 + sid_base * 100 + instance_variant':
                expected=100000+row['sid_base']*100+getattr(u,mangle('§"!U§'))
            elif row.get('sid_encoding')=='100000 + sid_base * 100 + tier':
                expected=100000+row['sid_base']*100+getattr(u,mangle('§`r§'))
            elif row.get('sid_encoding')=='400000 + spell_sid * 100 + tier':
                spell=runner.sim.game_call('getSpell',getattr(u,mangle('§`g§')))
                expected=400000+spell.S_6_21_Z*100+getattr(u,mangle('§`r§'))
            elif row.get('sid_encoding')=='500000 + building_index * 20000 + building_tier * 1000 + instance_variant':
                building=getattr(u,mangle('§%<§'))
                expected=500000+getattr(u,mangle('§,!Y§'))*20000+getattr(building,mangle('§`r§'))*1000+getattr(u,mangle('§"!U§'))
            check=dict(cls=name,expected=expected,actual=actual,name=u.S_1i,runtime_id=u.id)
            entries.append(check)
            if expected!=actual:errors.append(check)
    research=[]
    for code,row in model['research'].items():
        u=runner.research[runner.by_code[code]]
        cls=runner.ns[model['runtime_classes'][row['cls']]['python']]
        valid=(row['sid']==u.S_6_21_Z and cls.id==u.id and row['branch']==u.S__21_G and row['level']==u.S__25_w)
        research.append(dict(code=code,sid=row['sid'],valid=valid))
        if not valid:errors.append(dict(code=code,issue='research identity mismatch'))
    assert before==hashlib.sha256(save.read_bytes()).hexdigest()
    result=dict(model_sha256=hashlib.sha256(model_path.read_bytes()).hexdigest(),research_checked=len(research),
                instances_checked=len(entries),errors=errors,uninstantiated=uninstantiated,research=research,instances=entries)
    output=ROOT/'build/benchmarks/independent/final-identity-audit.json'
    output.parent.mkdir(parents=True,exist_ok=True)
    output.write_text(json.dumps(result,ensure_ascii=False,indent=1),encoding='utf-8')
    print(json.dumps({k:result[k] for k in ('research_checked','instances_checked','errors','uninstantiated')},ensure_ascii=False),flush=True)
    assert not errors


if __name__=='__main__':main()
