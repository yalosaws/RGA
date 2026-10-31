"""检查 exe 内资源与源码一致，并通过其后台入口回放结果；不会打开窗口。"""
import argparse
import hashlib
import json
import os
from pathlib import Path
import subprocess
import sys
import time

ROOT = Path(__file__).resolve().parents[1]


def digest(data):
    return hashlib.sha256(data).hexdigest()


class Worker:
    def __init__(self,exe,flag):
        env=dict(os.environ,RGA_NATIVE='1',TEMP='D:/codex-rga-build-20261101',TMP='D:/codex-rga-build-20261101')
        env.pop('RGA_COARSE',None)
        env.pop('RGA_CORE_DIR',None)
        self.p=subprocess.Popen([str(exe),flag],stdin=subprocess.PIPE,stdout=subprocess.PIPE,stderr=subprocess.DEVNULL,
            env=env,creationflags=getattr(subprocess,'CREATE_NO_WINDOW',0)|getattr(subprocess,'BELOW_NORMAL_PRIORITY_CLASS',0))
    def call(self,request):
        self.p.stdin.write(json.dumps(request,ensure_ascii=False,allow_nan=False).encode('utf-8')+b'\n')
        self.p.stdin.flush()
        raw=self.p.stdout.readline()
        assert raw,'packaged worker exited'
        result=json.loads(raw)
        assert result.get('ok'),result
        return result
    def close(self):
        try:
            self.p.stdin.close()
            self.p.wait(timeout=10)
        finally:
            if self.p.poll() is None:
                self.p.terminate()
                self.p.wait(timeout=5)
            self.p.stdout.close()


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--exe',type=Path,required=True)
    ap.add_argument('--save',type=Path,default=ROOT/'build/mechanics-audit/input.sol')
    ap.add_argument('--output',type=Path,required=True)
    ap.add_argument('reports',type=Path,nargs='+')
    args=ap.parse_args()
    from PyInstaller.archive.readers import CArchiveReader
    archive=CArchiveReader(str(args.exe))
    paths={k.replace('\\','/'):k for k in archive.toc}
    checks={}
    for name in ('rg_search.py','rg_mechanisms.py','rg_search_ui.py','rg_goal.py'):
        key=paths['calculation/'+name]
        h=digest(archive.extract(key))
        assert h==digest((ROOT/'scripts'/name).read_bytes()),name
        checks[name]=h
    model=archive.extract(paths['calculation/build-model.json'])
    assert digest(model)==digest((ROOT/'build/calculation/build-model.json').read_bytes())
    checks['build-model.json']=digest(model)
    native=next(k for k in paths if k.startswith('calculation/rgcore') and k.endswith('.pyd'))
    h=digest(archive.extract(paths[native]))
    old=next((ROOT/'build/benchmarks/build-search/variants/before').glob('rgcore*.pyd'))
    assert h==digest(old.read_bytes())
    checks[Path(native).name]=h
    original=digest(args.save.read_bytes())
    stamp=args.save.stat().st_mtime
    worker=Worker(args.exe,'--search-worker')
    results=[]
    try:
        worker.call(dict(op='init',game_py=str(ROOT/'build/calculation/game.py'),save_path=str(args.save.resolve()),
                         research_json=str(ROOT/'build/calculation/research.json')))
        for path in args.reports:
            report=json.loads(path.read_text(encoding='utf-8'))
            m=report['metadata']
            assert m['save_sha256']==original
            for row in report['best'][:3]:
                r=worker.call(dict(op='evaluate',plan=row['plan'],goal=m['goal'],T=m['at'],target=m.get('target')))['result']
                fields=('value','time','reached','curve','picks','lineage','merc_times','skipped','skipped_merc','research_ready')
                assert r['ok'] and r['plan']==row['plan'],r
                for key in fields:
                    assert r.get(key)==row.get(key),(path,key,r.get(key),row.get(key))
                results.append(dict(report=path.name,value=r['value'],all_exact=True))
    finally:
        worker.close()
    # 穿过打包的应用协调器，而不只是直接调用单局入口。
    import rg_sim
    worker=Worker(args.exe,'--build-worker')
    try:
        loaded=worker.call(dict(op='load',save=rg_sim.save_text(args.save),timestamp=stamp))
        request=dict(revision=loaded['revision'])
        status=worker.call(dict(request,op='goal_start',options=dict(goal='max_mana',mode='max',limit=60,depth='fast')))
        until=time.monotonic()+30
        while not status['entries'] and time.monotonic()<until:
            time.sleep(.2)
            status=worker.call(dict(request,op='goal_status',known=0))
        assert status['algorithm']=='population-response-v1' and status['entries'],status
        stopped=worker.call(dict(request,op='goal_stop'))
        assert stopped['finished'] and stopped['error']=='已停止',stopped
        app_check=dict(algorithm=status['algorithm'],entries=len(status['entries']),workers=status['workers'],stop_clean=True)
    finally:
        worker.close()
    assert original==digest(args.save.read_bytes()) and stamp==args.save.stat().st_mtime
    result=dict(exe=str(args.exe.resolve()),exe_sha256=digest(args.exe.read_bytes()),resources=checks,
        checked=len(results),all_exact=True,input_unchanged=True,checks=results,app=app_check)
    args.output.write_text(json.dumps(result,ensure_ascii=False,indent=1),encoding='utf-8')
    print(json.dumps(dict(checked=len(results),all_exact=True,app=app_check),ensure_ascii=False),flush=True)


if __name__=='__main__':
    main()
