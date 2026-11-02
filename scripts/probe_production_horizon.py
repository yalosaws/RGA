"""固定方案长时轨迹：用正常生产读数同时记录组成，不额外切换状态或随机效果。"""
import hashlib
import json
from pathlib import Path
import sys
import argparse

import rg_goal
import rg_sim
from as2py import mangle

ROOT=Path(__file__).resolve().parents[1]


def trace(runner,plan,T):
    old=runner.metric
    samples=[]
    model=json.loads((ROOT/'build/calculation/build-model.json').read_text(encoding='utf-8'))
    names=json.loads((ROOT/'build/calculation/member-names.json').read_text(encoding='utf-8'))
    methods={}
    for key,real in names.items():
        cls,obf=key.split('\t')
        methods.setdefault(cls,{})[real]=mangle(obf if obf==real else '§'+obf+'§')
    def metric(goal):
        if goal!='production':return old(goal)
        p=rg_sim.production(runner.ns,cached=True)
        t=round(runner.tl.ticks/30,1)
        effects={}
        if t in (1805,1810):
            for cls,row in model['items'].items():
                sid=row.get('sid')
                if sid not in runner.ups or not runner.ups[sid].S__3c__21_7:continue
                rt=model['runtime_classes'].get(cls)
                if not rt:continue
                fns={x['method'] for x in row['expressions']}|set(row['opaque'])
                for name in fns & {'getProductionMultiplier','getBuildingMultiplier','getGemMultiplier','getClickMultiplier'}:
                    attr=methods.get(rt['raw'],{}).get(name)
                    if attr:
                        try:effects[cls+'.'+name]=getattr(runner.ns[rt['python']],attr)()
                        except (TypeError,ValueError):pass
        samples.append(dict(t=t,**p,effects=effects,coins_generated=runner.G.S_5_21_V[0],
            coins=getattr(runner.G,runner.sim.game_names['resource']),mana=getattr(runner.G,runner.sim.game_names['mana']),
            lightning_target=getattr(runner.sim.core,mangle('§@#§')),
            dragon_bits=int(getattr(getattr(runner.G,mangle('§1!V§')),mangle('§0;§'))),
            buildings_count=runner.G.S_5_21_V[12],spells=[dict(name=s.S_1i,active=bool(s.S_23),tier=s.S__60_r,
                elapsed=s.S__27__21_X,duration=s.S_0n) for s in runner.G.S_0_21_A if s.S__2d_6]))
        return p['total']
    runner.metric=metric
    try:
        out=runner.run(plan,'production',float('inf'),T,coarse=0)
    finally:runner.metric=old
    out['target']=None
    return dict(result=out,samples=samples,terminal_real=rg_sim.production(runner.ns,cached=False))


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--raw-events',action='store_true');args=ap.parse_args()
    save=ROOT/'build/mechanics-audit/input.sol'
    original=hashlib.sha256(save.read_bytes()).hexdigest();stamp=save.stat().st_mtime
    rg_sim.MEMBER_NAMES=ROOT/'build/calculation/member-names.json'
    r=rg_goal.Runner(ROOT/'build/calculation/game.py',save_path=save,
                     research_json=ROOT/'build/calculation/research.json',seed=0,event_policy='raw' if args.raw_events else 'snapshot')
    data=json.loads((ROOT/'docs/A1-build-templates.json').read_text(encoding='utf-8'))
    plan=dict(alignment='neutral',faction='Titan',bloodline='Dwarven',prestige='Dragon',merc=[],
              research=data['research']['R60-62 DNTT (prod, e57+)']['tp'].split(','))
    short=trace(r,plan,1800);long=trace(r,plan,3600)
    assert short['result']['ok'] and long['result']['ok']
    assert not short['result']['skipped'] and not long['result']['skipped']
    # Runner 在终点另读一次目标；去除同一时刻的重复观测再比较前缀。
    prefix={x['t']:x for x in long['samples'] if x['t']<=1800}
    short_points={x['t']:x for x in short['samples']}
    assert short_points==prefix,[(t,x,prefix.get(t)) for t,x in short_points.items() if x!=prefix.get(t)][:1]
    plain=r.run(plan,'production',float('inf'),3600,coarse=0)
    plain['target']=None
    assert plain==long['result'],'观测改变了正常执行轨迹'
    drops=[dict(before=a,after=b,ratio=b['total']/a['total']) for a,b in zip(long['samples'],long['samples'][1:])
           if b['total']<a['total']/10]
    result=dict(save_sha256=original,random_policy='fixed',seed=0,environment=r.environment,plan=plan,prefix_exact=True,
                observation_exact=True,short=short,long=long,drops=drops)
    dest=ROOT/'build/benchmarks/community';dest.mkdir(parents=True,exist_ok=True)
    (dest/('production-horizon-raw.json' if args.raw_events else 'production-horizon-probe.json')).write_text(json.dumps(result,ensure_ascii=False,indent=1),encoding='utf-8')
    assert original==hashlib.sha256(save.read_bytes()).hexdigest() and stamp==save.stat().st_mtime
    print(json.dumps(dict(prefix_exact=True,observation_exact=True,at1800=short['result']['value'],
        at3600=long['result']['value'],large_drops=len(drops)),ensure_ascii=False),flush=True)


if __name__=='__main__':main()
