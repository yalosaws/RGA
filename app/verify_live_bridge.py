"""实际游戏快照穿过计算进程桥；只输出指定游戏字段与验证结论。"""
import json
from pathlib import Path
import sys
import time

ROOT=Path(__file__).resolve().parents[1]
sys.path.insert(0,str(ROOT/'app'))
from live_reader import LiveClient
from build_engine import EngineClient
from save_sync import SaveReader


def main():
    live,engine=LiveClient(),EngineClient()
    try:
        saved=SaveReader().read()
        if not saved['ok']: raise RuntimeError(saved)
        rows=[]
        for iteration in range(2):
            start=time.perf_counter()
            sample=live.snapshot()
            if not sample['ok']: raise RuntimeError(sample)
            if iteration==0:
                (ROOT/'build/live-state-candidate.json').write_text(json.dumps(sample,ensure_ascii=False,indent=2),encoding='utf-8')
            action=None if iteration==0 else dict(key='building:9',count=1)
            loaded=engine.request(dict(op='load_live',save=saved['save'],timestamp=sample['observed_at'],live_snapshot=sample,action=action))
            if not loaded['ok']: raise RuntimeError(loaded)
            result=dict(pid=sample['pid'],copy_ms=sample['copy_ms'],read_ms=sample['read_ms'],
                attempts=sample['attempts'],total_ms=(time.perf_counter()-start)*1000,
                snapshot=loaded['snapshot'],objects=loaded['live']['objects'],classes=len(sample['classes']),
                source=loaded['source'],trial=loaded.get('comparison'))
            expected=sample['classes']['#!!']
            checks=[]
            for key,flag,field,factor in [('buildings','0!0','+!J',30),('max_mana','"f','@Y',1),
                    ('mana_per_second','+O',']N',30),('assistant_count','8&','&!7',1),
                    ('assistant_click',';!Q',"'X",1),('assistant_multiplier','7!Y','+!E',1)]:
                if not expected[flag]:
                    checks.append(dict(key=key,equal=loaded['snapshot'][key]==expected[field]*factor))
            assert all(row['equal'] for row in checks),checks
            assert loaded['snapshot']['coins']==sample['classes']['8G']['7p']['value']
            result['live_cache_checks']=checks
            rows.append(result)
            print(json.dumps(result,ensure_ascii=False),flush=True)
        (ROOT/'build/live-bridge-validation.json').write_text(json.dumps(rows,ensure_ascii=False,indent=2),encoding='utf-8')
    finally:
        live.close();engine.close()


if __name__=='__main__': main()
