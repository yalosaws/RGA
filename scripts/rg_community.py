"""社区模板完整购买自检与各目标时长独立搜索对照；固定随机流，不写游戏存档。"""
import argparse
import hashlib
import json
from pathlib import Path
import queue
import re
import subprocess
import sys
import time

import a1_templates as A1
import rg_evaluate as E
import rg_goal
import rg_search
import rg_sim

ROOT=Path(__file__).resolve().parents[1]
EVENT_CACHE=None
EVENT_SOURCE={}
ALIASES=dict(zip(['FR','EL','AN','GB','UD','DM','TT','DD','FC','DN','DW','DG'],rg_goal.BLOODLINES))


def profiles(kind,name):
    body=re.sub(r'^R[0-9]+(?:-[0-9]+|\+)?\s*','',name)
    if name.startswith('R60+ Autoclicker'):
        return [dict(alignment='neutral',faction='Mercenary',bloodline='Elven',prestige=None)]
    m=re.match(r'([GEN])-([A-Z?]{2})(?:-|\s|$)',body)
    if m:
        align={'G':'good','E':'evil','N':'neutral'}[m[1]]
        bloods=[None,*rg_goal.BLOODLINES] if m[2]=='??' else [ALIASES[m[2]]]
        return [dict(alignment=align,faction='Mercenary',prestige=None,bloodline=b) for b in bloods]
    m=re.match(r'([A-Z?]{2})([A-Z]{2})(?:\s|$)',body)
    if not m:raise ValueError('不能确定模板结构：'+name)
    f=ALIASES[m[2]];align=rg_goal.FACTIONS[f][1]
    bloods=[None,*rg_goal.BLOODLINES] if m[1]=='??' else [ALIASES[m[1]]]
    return [dict(alignment=align,faction=f,prestige=p,bloodline=b)
            for p in (None,rg_search.PRESTIGE_ALIGN[align]) for b in bloods]


def template_rows():
    source=json.loads((ROOT/'docs/A1-build-templates.json').read_text(encoding='utf-8'))
    rows=[]
    for kind,items in source.items():
        for name,entry in items.items():
            if name in A1.REMIND:
                rows.append(dict(kind=kind,name=name,status='reminder',note=A1.REMIND[name],plans=[]));continue
            research=entry['tp'] if kind=='research' else ''
            merc=entry['tp'] if kind=='mercenary' else ''
            paired=[]
            if kind=='research':
                for mn,(_,_,rs) in A1.PAIR.items():
                    if name in rs and profiles(kind,name)[0]['faction']=='Mercenary':
                        merc=source['mercenary'][mn]['tp'];paired.append(mn)
            elif name in source['research']:
                research=source['research'][name]['tp'];paired.append(name)
            parsed=E.parse_templates(research,merc)
            rows.append(dict(kind=kind,name=name,status='pending',paired=paired,
                recommended_R=name.split(' ',1)[0],note=A1.NOTE.get(name,''),
                plans=[dict(p,**parsed) for p in profiles(kind,name)]))
    return rows


def close_pool(pool):
    pool.close()
    for p in pool.procs:
        try:p.wait(timeout=3)
        except subprocess.TimeoutExpired:p.kill();p.wait(timeout=3)
        finally:p.stdout.close()


def batch(pool,jobs,workers=6):
    waiting={};out={};i=0
    while i<len(jobs) or waiting:
        while i<len(jobs) and len(waiting)<workers:
            waiting[i]=True;pool.submit(i,jobs[i]);i+=1
        try:tag,reply=pool.results.get(timeout=.2)
        except queue.Empty:continue
        waiting.pop(tag);out[tag]=reply
    return [out[k] for k in range(len(jobs))]


def setup(save,seed):
    return dict(game_py=str(ROOT/'build/calculation/game.py'),save_path=str(save.resolve()),
        research_json=str(ROOT/'build/calculation/research.json'),model=str(ROOT/'build/calculation/build-model.json'),
        seed=seed,event_cache=EVENT_CACHE)


def command():return [sys.executable,'-X','utf8',str(ROOT/'scripts/rg_search.py'),'--worker']


def sha(p):return hashlib.sha256(p.read_bytes()).hexdigest()


def metadata(save,seed):
    return dict(save_sha256=sha(save),timestamp=save.stat().st_mtime,random_policy='fixed',simulation_seed=seed,
        event_cache=EVENT_CACHE,event_source=EVENT_SOURCE,template_sha256=sha(ROOT/'docs/A1-build-templates.json'),
        sources={n:sha(ROOT/'scripts'/n) for n in ('rg_evaluate.py','rg_goal.py','rg_search.py','rg_community.py')},
        native_sha256=sha(next((ROOT/'build/calculation').glob('rgcore*.pyd'))),
        strategy='每2秒全部购买；存档自动施法；不手动点击、不主动择色或瞄准')


def audit(args):
    rows=template_rows();jobs=[];index=[]
    for i,row in enumerate(rows):
        for p in row['plans']:
            jobs.append(dict(op='evaluate_strict',plan=p,goal='production',T=args.at));index.append(i)
    pool=rg_goal.Pool(command(),args.workers,setup(args.save,args.seed))
    try:replies=batch(pool,jobs,args.workers)
    finally:close_pool(pool)
    engine_errors=[]
    for i,job,reply in zip(index,jobs,replies):
        result=reply.get('result') if reply.get('ok') else reply.get('evaluation')
        if result is None:
            engine_errors.append(dict(template=rows[i]['name'],error=reply));continue
        rows[i].setdefault('cases',[]).append(dict(plan=job['plan'],evaluation=result))
    for row in rows:
        if row['status']=='reminder':continue
        row['complete']=[x['plan'] for x in row.get('cases',[]) if x['evaluation'].get('validated')]
        row['status']='complete' if row['complete'] else 'unavailable'
    result=dict(metadata=metadata(args.save,args.seed),horizon=args.at,rows=rows,engine_errors=engine_errors)
    args.output.write_text(json.dumps(result,ensure_ascii=False,indent=1,allow_nan=False),encoding='utf-8')
    print(json.dumps(dict(templates=len(rows),cases=len(jobs),complete=sum(bool(r.get('complete')) for r in rows),
                         engine_errors=len(engine_errors)),ensure_ascii=False),flush=True)
    if engine_errors:raise RuntimeError('模板自检出现执行器错误，见报告')


def applies(name,R):
    m=re.match(r'R(\d+)(?:-(\d+)|(\+))?',name)
    return bool(m and int(m[1])<=R and (m[3] or R<=int(m[2] or m[1])))


def compare(args):
    audited=json.loads(args.audit.read_text(encoding='utf-8'))
    assert audited['metadata']['save_sha256']==sha(args.save)
    assert audited['metadata']['simulation_seed']==args.seed
    rg_sim.MEMBER_NAMES=ROOT/'build/calculation/member-names.json'
    inspector=rg_goal.Runner(ROOT/'build/calculation/game.py',save_path=args.save,
                            research_json=ROOT/'build/calculation/research.json',seed=args.seed)
    R=int(getattr(inspector.G,inspector.sim.game_names['reincarnation']))
    communities=[r for r in audited['rows'] if r['kind']=='research' and re.search(r'\([^)]*\bprod\b',r['name']) and applies(r['name'],R) and r.get('complete')]
    result=dict(metadata=metadata(args.save,args.seed),search_budget=args.budget,goal='production',horizons=[])
    for T in args.horizons:
        start=time.monotonic()
        search=rg_search.Search(command(),setup(args.save,args.seed),goal='production',T=T,
                                workers=args.workers,budget=args.budget,seed=0)
        printed=0
        while not search.finished:
            if time.monotonic()-start>=printed:
                best=search.best();print(json.dumps(dict(T=T,seconds=round(time.monotonic()-start,1),stage=search.stage,
                    evaluated=search.evaluated,best=best[0]['value'] if best else None)),flush=True);printed+=20
            time.sleep(.1)
        if search.error:raise RuntimeError(search.error)
        solve_seconds=time.monotonic()-start
        # 搜索后通过严格入口重新检查原方案，不能悄悄修配方再比较。
        pool=rg_goal.Pool(command(),args.workers,setup(args.save,args.seed))
        jobs=[dict(op='evaluate_strict',plan=search.best()[0]['plan'],goal='production',T=T)]
        labels=['solver']
        for row in communities:
            for plan in row['complete']:
                jobs.append(dict(op='evaluate_strict',plan=plan,goal='production',T=T));labels.append(row['name'])
        try:replies=batch(pool,jobs,args.workers)
        finally:close_pool(pool)
        checked=[]
        for label,reply in zip(labels,replies):
            if not reply.get('ok'):
                if label=='solver' or not reply.get('evaluation'):raise RuntimeError(dict(template=label,reply=reply))
                checked.append(dict(name=label,**reply['evaluation']))
            else:checked.append(dict(name=label,**reply['result']))
        winner=checked[0]
        assert winner['value']==search.best()[0]['value'] and winner['curve']==search.best()[0]['curve']
        community=max((r for r in checked[1:] if r.get('validated')),key=lambda x:x['value'])
        result['horizons'].append(dict(T=T,search_seconds=solve_seconds,validation_seconds=time.monotonic()-start-solve_seconds,
            search_runs=search.runs,solver=winner,community_best=community,
            ratio=winner['value']/community['value'],evaluations=checked,search_best=search.best()[:5]))
        args.output.write_text(json.dumps(result,ensure_ascii=False,indent=1,allow_nan=False),encoding='utf-8')
        print(json.dumps(dict(T=T,solver=winner['value'],community=community['value'],ratio=winner['value']/community['value'])),flush=True)


def main():
    global EVENT_CACHE,EVENT_SOURCE
    ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('task',choices=['audit','compare'])
    ap.add_argument('--save',type=Path,default=ROOT/'build/mechanics-audit/input.sol')
    ap.add_argument('--seed',type=int,default=0);ap.add_argument('--at',type=float,default=300)
    ap.add_argument('--workers',type=int,default=rg_goal.WORKERS);ap.add_argument('--budget',type=float,default=240)
    ap.add_argument('--horizons',type=int,nargs='+',default=[60,300,900,1800])
    ap.add_argument('--audit',type=Path);ap.add_argument('--output',type=Path,required=True)
    args=ap.parse_args();args.output.parent.mkdir(parents=True,exist_ok=True)
    from rg_events import read_schedule
    EVENT_CACHE,EVENT_SOURCE=read_schedule()
    if not 1<=args.workers<=rg_goal.WORKERS:ap.error('并行进程超出限制')
    original=sha(args.save);stamp=args.save.stat().st_mtime
    if args.task=='audit':audit(args)
    else:
        if not args.audit:ap.error('compare 需要 --audit')
        compare(args)
    assert original==sha(args.save) and stamp==args.save.stat().st_mtime,'固定存档改变'


if __name__=='__main__':main()
