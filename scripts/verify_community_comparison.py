"""独立冻结裁判复跑社区对比，并把各时长胜出方案跨时长复测（诊断用途）。"""
import argparse
import hashlib
import json
import os
from pathlib import Path
import sys
import time

ROOT=Path(__file__).resolve().parents[1]
ORACLE=ROOT/'build/benchmarks/build-search/variants/before'


def oracle_worker():
    sys.path.insert(0,str(ORACLE));os.environ['RGA_CORE_DIR']=str(ORACLE)
    import rg_goal,rg_native,rg_sim
    rg_sim.MEMBER_NAMES=ROOT/'build/calculation/member-names.json'
    rg_goal.exit_with_parent()
    for line in sys.stdin.buffer:
        try:
            req=json.loads(line)
            if req['op']=='init':
                r=rg_goal.Runner(req['game_py'],save_path=req['save_path'],research_json=req['research_json'],seed=req.get('seed',0))
                state=r.sim.rng_state();service=r.ns['PlayFab'];cache=req['event_cache']
                service.seasonNE=cache['ne'];service.seasonNES=cache['nes'];service.seasonNEE=cache['nee']
                r.sim.set_rng_state(state)
                # 在任何试跑前建立包含同一已知活动环境的基准，不在运行中替换快照。
                r.base=rg_native.StateSnapshot(r.ns,r.sim.g)
                result=dict(current=r.current)
            else:
                p=req['plan']
                assert not p.get('merc_spells') and not p.get('merc_alliance'),'此冻结裁判不支持佣兵扩展'
                result=r.run(p,'production',float('inf'),req['T'],coarse=0)
                assert result['ok'] and not result.get('skipped') and not result.get('skipped_merc'),result.get('note')
                assert set(p['research'])<=set(result['research'])
                result={k:result.get(k) for k in ('ok','value','time','reached','curve','picks','lineage','merc_times','skipped','skipped_merc','research_ready')}
            reply=dict(ok=True,result=result)
        except Exception as error:
            import traceback
            reply=dict(ok=False,error=str(error),trace=traceback.format_exc()[-1200:])
        sys.stdout.buffer.write(json.dumps(reply,ensure_ascii=False,allow_nan=False).encode('utf-8')+b'\n');sys.stdout.buffer.flush()


def main():
    ap=argparse.ArgumentParser(description=__doc__);ap.add_argument('--report',type=Path,default=ROOT/'build/benchmarks/community/production-comparison.json')
    ap.add_argument('--oracle-only',action='store_true')
    args=ap.parse_args()
    data=json.loads(args.report.read_text(encoding='utf-8'))
    import rg_community as C
    C.EVENT_CACHE=data['metadata']['event_cache'];C.EVENT_SOURCE=data['metadata']['event_source']
    save=ROOT/'build/mechanics-audit/input.sol';original=C.sha(save);stamp=save.stat().st_mtime
    assert original==data['metadata']['save_sha256']
    jobs=[];expected=[]
    for row in data['horizons']:
        for evaluation in row['evaluations']:
            if evaluation.get('validated'):
                jobs.append(dict(op='run',plan=evaluation['plan'],T=row['T']));expected.append(evaluation)
    probe=json.loads((args.report.parent/'production-horizon-probe.json').read_text(encoding='utf-8'))
    jobs.append(dict(op='run',plan=probe['plan'],T=3600));expected.append(probe['long']['result'])
    pool=C.rg_goal.Pool([sys.executable,'-X','utf8',str(Path(__file__).resolve()),'--oracle-worker'],6,C.setup(save,0))
    try:replies=C.batch(pool,jobs)
    finally:C.close_pool(pool)
    verified=[]
    fields=('value','time','reached','curve','picks','lineage','merc_times','skipped','skipped_merc','research_ready')
    for job,want,reply in zip(jobs,expected,replies):
        assert reply.get('ok'),reply
        actual=reply['result'];differences={}
        for k in fields:
            a,b=actual.get(k),want.get(k)
            if k in ('skipped','skipped_merc'):a,b=a or [],b or []
            if a!=b:differences[k]=dict(actual=a,expected=b)
        assert not differences,differences
        verified.append(dict(T=job['T'],value=actual['value'],all_exact=True))
    certificate=dict(oracle=str(ORACLE),metadata=data['metadata'],checks=verified,all_exact=True)
    (args.report.parent/'independent-replay.json').write_text(json.dumps(certificate,ensure_ascii=False,indent=1),encoding='utf-8')
    print(json.dumps(dict(independent_checks=len(verified),all_exact=True)),flush=True)
    if args.oracle_only:return
    # 以下仅判断「已找到的短局方案是否在长局也强」，不替换独立搜索结果。
    jobs=[];labels=[]
    for source in data['horizons']:
        for T in (60,300,900,1800,3600):
            jobs.append(dict(op='evaluate_strict',plan=source['solver']['plan'],goal='production',T=T));labels.append((source['T'],T))
    pool=C.rg_goal.Pool(C.command(),6,C.setup(save,0))
    try:replies=C.batch(pool,jobs)
    finally:C.close_pool(pool)
    crossed=[]
    for (source_T,T),reply in zip(labels,replies):
        out=reply.get('result') if reply.get('ok') else reply.get('evaluation')
        assert out is not None,reply
        if source_T==T:
            source=next(r for r in data['horizons'] if r['T']==T)['solver']
            assert out['value']==source['value'] and out['curve']==source['curve']
        crossed.append(dict(optimized_at=source_T,evaluated_at=T,evaluation=out))
    result=dict(metadata=data['metadata'],purpose='cross-horizon diagnostic, not independent search',cases=crossed)
    (args.report.parent/'cross-horizon.json').write_text(json.dumps(result,ensure_ascii=False,indent=1,allow_nan=False),encoding='utf-8')
    assert C.sha(save)==original and save.stat().st_mtime==stamp
    print(json.dumps(dict(cross_cases=len(crossed),input_unchanged=True)),flush=True)


if __name__=='__main__':
    if '--oracle-worker' in sys.argv:oracle_worker()
    else:main()
