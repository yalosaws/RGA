"""冻结算法的顺序基准；每局独立初始化，不读社区模板或已有胜出方案。"""
import argparse
import hashlib
import json
from pathlib import Path
import subprocess
import sys

ROOT = Path(__file__).resolve().parents[1]


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--variant',type=Path,required=True)
    ap.add_argument('--output-dir',type=Path,required=True)
    ap.add_argument('--horizons',type=int,nargs='+',default=[60,300,900,1800])
    ap.add_argument('--seeds',type=int,nargs='+',default=[0])
    ap.add_argument('--goal',default='production')
    ap.add_argument('--budget',type=int,default=240)
    args=ap.parse_args()
    args.output_dir.mkdir(parents=True,exist_ok=True)
    save=ROOT/'build/mechanics-audit/input.sol'
    sha=hashlib.sha256(save.read_bytes()).hexdigest();stamp=save.stat().st_mtime
    result=dict(variant=str(args.variant.resolve()),goal=args.goal,budget=args.budget,save_sha256=sha,cases=[])
    for seed in args.seeds:
        for T in args.horizons:
            output=args.output_dir/f'{args.goal}-{T}-seed{seed}.json'
            if output.exists():
                raise ValueError('拒绝覆盖已完成基准：'+str(output))
            command=[sys.executable,'-X','utf8',str(ROOT/'scripts/benchmark_build_search.py'),
                     '--module-dir',str(args.variant.resolve()),'--algorithm','population',
                     '--goal',args.goal,'--at',str(T),'--budget',str(args.budget),'--seed',str(seed),
                     '--output',str(output.resolve())]
            subprocess.run(command,check=True,cwd=ROOT)
            data=json.loads(output.read_text(encoding='utf-8'))
            assert data['metadata']['save_sha256']==sha and data['error'] is None
            row=data['best'][0]
            result['cases'].append(dict(T=T,seed=seed,report=str(output.resolve()),value=row['value'],
                                        reached=row['reached'],time=row['time'],elapsed=data['elapsed'],runs=data['runs']))
            (args.output_dir/'summary.json').write_text(json.dumps(result,ensure_ascii=False,indent=1),encoding='utf-8')
            assert hashlib.sha256(save.read_bytes()).hexdigest()==sha and save.stat().st_mtime==stamp
    print(json.dumps(result,ensure_ascii=False),flush=True)


if __name__=='__main__':main()
