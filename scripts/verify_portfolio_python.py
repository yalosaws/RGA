"""用独立 Python 游戏转写复核最高短局方案，不调用原生数值引擎。"""
import argparse
import hashlib
import json
from pathlib import Path
import time

import rg_goal,rg_sim
from rg_evaluate import evaluate_template
from rg_events import configure
from simulation_state import StateSnapshot

ROOT=Path(__file__).resolve().parents[1]


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--report',type=Path,required=True)
    ap.add_argument('--output',type=Path,required=True)
    args=ap.parse_args()
    data=json.loads(args.report.read_text(encoding='utf-8'));m=data['metadata'];want=data['best'][0]
    assert m['at']<=60
    save=ROOT/'build/mechanics-audit/input.sol'
    original=hashlib.sha256(save.read_bytes()).hexdigest();stamp=save.stat().st_mtime
    assert original==m['save_sha256']
    rg_sim.MEMBER_NAMES=ROOT/'build/calculation/member-names.json'
    started=time.perf_counter()
    # 与原生版相同：先载入，再恢复排期，保持随机源，之后才建基准快照。
    runner=rg_goal.Runner(ROOT/'build/calculation/game.py',save_path=save,
        research_json=ROOT/'build/calculation/research.json',seed=0,native=False,event_cache={},event_policy='raw')
    runner.environment=configure(runner.sim,m['event_cache'],dict(source='provided'))
    runner.base=StateSnapshot(runner.ns,runner.sim.g)
    run=runner.run

    def progress(r,t):
        print(json.dumps(dict(engine='python',game_seconds=t,elapsed=time.perf_counter()-started)),flush=True)

    def observed(*a,**kw):
        return run(*a,**kw,probes=[10,30,60],probe_fn=progress)

    runner.run=observed
    actual=evaluate_template(runner,want['plan'],m['goal'],m['at'],m.get('target'))
    fields=('value','time','reached','curve','picks','lineage','merc_times','research_ready')
    # JSON 只用于统一 tuple/list 表示，不修改数值。
    actual=json.loads(json.dumps(actual,allow_nan=False))
    differences={k:dict(python=actual.get(k),native=want.get(k)) for k in fields if actual.get(k)!=want.get(k)}
    assert original==hashlib.sha256(save.read_bytes()).hexdigest() and stamp==save.stat().st_mtime
    result=dict(report=str(args.report.resolve()),engine='Python transpilation, no native numerical engine',
                elapsed=time.perf_counter()-started,all_exact=not differences,differences=differences,
                value=actual['value'],validated=actual['validated'],input_unchanged=True,result=actual)
    args.output.write_text(json.dumps(result,ensure_ascii=False,indent=1,allow_nan=False),encoding='utf-8')
    print(json.dumps(dict(elapsed=result['elapsed'],all_exact=not differences,value=actual['value'])),flush=True)
    assert not differences,differences


if __name__=='__main__':main()
