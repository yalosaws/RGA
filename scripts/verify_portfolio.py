"""冻结旧执行器严格复核新求解器的最终方案、整条轨迹及购买完整性。"""
import argparse
import hashlib
import json
import os
from pathlib import Path
import sys

ROOT=Path(__file__).resolve().parents[1]
ORACLE=ROOT/'build/benchmarks/build-search/variants/before-multihorizon-20261101'


def oracle_worker():
    sys.path.insert(0,str(ORACLE));os.environ['RGA_CORE_DIR']=str(ORACLE)
    import rg_goal,rg_sim
    from rg_evaluate import evaluate_template
    rg_sim.MEMBER_NAMES=ROOT/'build/calculation/member-names.json'
    rg_goal.exit_with_parent()
    for line in sys.stdin.buffer:
        try:
            req=json.loads(line)
            if req['op']=='init':
                if req.get('wait_to_horizon'):
                    rg_goal.PICK_WAIT=rg_goal.RESEARCH_WAIT=float('inf')
                runner=rg_goal.Runner(req['game_py'],save_path=req['save_path'],research_json=req['research_json'],
                                      seed=0,event_cache=req['event_cache'])
                result=dict(current=runner.current)
            else:
                metric=runner.metric
                buy=runner._buy
                research_times={}
                def observed_buy(sid):
                    bought=buy(sid)
                    if bought and sid in runner.research:
                        research_times[runner.codes[sid]]=round(runner.tl.ticks/30,1)
                    return bought
                runner._buy=observed_buy
                goal=req['goal']
                if goal=='coins':
                    assert req.get('target') is None
                    def coins(_):
                        metric('production')
                        return runner.G.S_5_21_V[0]
                    runner.metric=coins
                    goal='production'
                elif goal=='gems':
                    def gems(g):
                        if g=='gems':metric('production')
                        return metric(g)
                    runner.metric=gems
                try:result=evaluate_template(runner,req['plan'],goal,req['T'],req.get('target'),req.get('spell'))
                finally:
                    runner.metric=metric
                    runner._buy=buy
                result['research_times']=research_times
                result['growth']=dict(mana_generated=runner.G.S_5_21_V[16],casts=runner.G.S_5_21_V[15],
                                      coins_generated=runner.G.S_5_21_V[0],buildings=runner.G.S_5_21_V[12])
                result['gems_reset']=runner.sim.core_call('getGemsReset')
            reply=dict(ok=True,result=result)
        except Exception as error:
            import traceback
            reply=dict(ok=False,error=str(error),trace=traceback.format_exc()[-1200:])
        sys.stdout.buffer.write(json.dumps(reply,ensure_ascii=False,allow_nan=False).encode('utf-8')+b'\n')
        sys.stdout.buffer.flush()


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--output',type=Path,required=True)
    ap.add_argument('--community',type=Path)
    ap.add_argument('--community-all',action='store_true')
    ap.add_argument('--wait-to-horizon',action='store_true',help='冻结物理执行路径，仅关闭旧购买等待超时')
    ap.add_argument('reports',type=Path,nargs='+')
    args=ap.parse_args()
    import rg_community as C
    from rg_events import read_schedule
    C.EVENT_CACHE,C.EVENT_SOURCE=read_schedule()
    save=ROOT/'build/mechanics-audit/input.sol'
    original=C.sha(save);stamp=save.stat().st_mtime
    jobs,expected,labels=[],[],[]
    for path in args.reports:
        data=json.loads(path.read_text(encoding='utf-8'));m=data['metadata']
        assert m['save_sha256']==original and data['error'] is None
        for row in data['best'][:3]:
            assert row['verified_exact'] and row.get('horizon',m['at'])==m['at']
            jobs.append(dict(op='strict',plan=row['plan'],T=m['at'],goal=m['goal'],target=m['target']))
            expected.append(row);labels.append(path.name)
    if args.community:
        community=json.loads(args.community.read_text(encoding='utf-8'))
        assert community['metadata']['save_sha256']==original
        for case in community['horizons']:
            rows=[r for r in case['evaluations'] if r['name']!='solver' and r.get('validated')] if args.community_all else [case['community_best']]
            for row in rows:
                jobs.append(dict(op='strict',plan=row['plan'],T=case['T'],goal='production',target=None))
                expected.append(row);labels.append('community:'+str(case['T'])+':'+row['name'] if args.community_all else 'community-best-'+str(case['T']))
    pool=C.rg_goal.Pool([sys.executable,'-X','utf8',str(Path(__file__).resolve()),'--oracle-worker'],6,
                        dict(C.setup(save,0),wait_to_horizon=args.wait_to_horizon))
    try:replies=C.batch(pool,jobs)
    finally:C.close_pool(pool)
    checks=[];errors=[]
    fields=('value','time','reached','curve','picks','lineage','merc_times','research_ready')
    for name,job,want,reply in zip(labels,jobs,expected,replies):
        if not reply.get('ok'):
            errors.append(dict(report=name,T=job['T'],error=reply.get('error')))
            continue
        actual=reply['result'];assert actual['validated'] and actual['plan']==want['plan']
        differences={k:dict(actual=actual.get(k),expected=want.get(k)) for k in fields if actual.get(k)!=want.get(k)}
        if 'research_times' in want:
            if actual['research_times']!=want['research_times']:
                differences['research_times']=dict(actual=actual['research_times'],expected=want['research_times'])
        if differences:
            errors.append(dict(report=name,T=job['T'],differences=differences))
            continue
        assert not actual['skipped'] and not actual['skipped_merc']
        if want.get('growth'):assert actual['growth']==want['growth'],(name,'growth')
        checks.append(dict(report=name,T=job['T'],value=actual['value'],validated=True,all_exact=True,growth=actual['growth'],gems_reset=actual['gems_reset']))
    assert original==C.sha(save) and stamp==save.stat().st_mtime
    result=dict(oracle=str(ORACLE),oracle_manifest_sha256=hashlib.sha256((ORACLE/'manifest.json').read_bytes()).hexdigest(),
                checked=len(checks),attempted=len(jobs),all_exact=not errors,input_unchanged=True,checks=checks,errors=errors,
                wait_policy='unlimited within requested horizon' if args.wait_to_horizon else 'original 30/120 second limits')
    args.output.write_text(json.dumps(result,ensure_ascii=False,indent=1),encoding='utf-8')
    print(json.dumps(dict(checked=len(checks),attempted=len(jobs),all_exact=not errors,input_unchanged=True,errors=errors)),flush=True)
    assert not errors,'冻结回放发现差异，详见 '+str(args.output)


if __name__=='__main__':
    if '--oracle-worker' in sys.argv:oracle_worker()
    else:main()
