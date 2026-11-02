"""只在搜索结束后读取社区证书作对照；不生成候选，不向搜索进程发送数据。"""
import json
from pathlib import Path

ROOT=Path(__file__).resolve().parents[1]


def main():
    root=ROOT/'build/benchmarks/independent'
    certificate=ROOT/'build/benchmarks/portfolio/final-independent-replay.json'
    baseline={}
    for row in json.loads(certificate.read_text(encoding='utf-8'))['checks']:
        if not row['report'].startswith('community:'):continue
        T=int(row['T'])
        for goal,value in [('coins',row['growth']['coins_generated']),('production',row['value'])]:
            key=(goal,T)
            if value>baseline.get(key,{}).get('value',0):
                baseline[key]=dict(value=value,template=row['report'],certificate=str(certificate))
    rounds={}
    for folder in ('trial','ready-trial','acceptance','transfer-trials','island-trials','final-120','final-long','final-production','grid-60','formula-trial','systematic-120','fidelity-120','main-300','main-long','main-production'):
        cases=[]
        for path in sorted((root/folder).glob('*.json')):
            data=json.loads(path.read_text(encoding='utf-8'))
            if not data.get('best'):continue
            m=data['metadata'];goal=m['goal'];T=int(m['at']);best=data['best'][0]
            base=baseline[(goal,T)]
            ratio=best['value']/base['value']
            cases.append(dict(goal=goal,T=T,seed=m['seed'],value=best['value'],community=base,
                ratio=ratio,budget=data['budget'],elapsed=data['elapsed'],runs=data['runs'],
                verified=bool(best.get('verified_exact') and best.get('validated')),
                missing=best['skipped']+best['skipped_merc'],report=str(path.resolve()),
                variant=m['module_dir']))
        if cases:
            rounds[folder]=dict(cases=cases,count=len(cases),beat=sum(c['ratio']>1 for c in cases),
                over10x=sum(c['ratio']>=10 for c in cases),minimum_ratio=min(c['ratio'] for c in cases),
                elapsed_range=[min(c['elapsed'] for c in cases),max(c['elapsed'] for c in cases)])
    result=dict(metric_note='累计产币与终点每秒产出分别比较；社区仅作搜索结束后的外部对照',
        baseline_certificate=str(certificate),rounds=rounds)
    output=root/'comparison.json'
    output.write_text(json.dumps(result,ensure_ascii=False,indent=1),encoding='utf-8')
    print(json.dumps({k:{f:v[f] for f in ('count','beat','over10x','minimum_ratio','elapsed_range')} for k,v in rounds.items()},ensure_ascii=False))


if __name__=='__main__':main()
