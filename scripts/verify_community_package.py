"""无窗口检查打包资源、严格购买入口及程序进程桥，不写入游戏存档。"""
import argparse
import hashlib
import json
import queue
from pathlib import Path
import subprocess
import threading
import time

from verify_population_package import Worker as BaseWorker

ROOT = Path(__file__).resolve().parents[1]


def digest(data):
    return hashlib.sha256(data).hexdigest()


class Worker(BaseWorker):
    def __init__(self, exe, flag):
        super().__init__(exe, flag)
        self.lines = queue.Queue()

        def read():
            for line in self.p.stdout:
                self.lines.put(line)
            self.lines.put(None)

        self.reader = threading.Thread(target=read, daemon=True)
        self.reader.start()

    def call(self, request, ok=True):
        self.p.stdin.write(json.dumps(request, ensure_ascii=False, allow_nan=False).encode('utf-8') + b'\n')
        self.p.stdin.flush()
        raw = self.lines.get(timeout=70)
        assert raw, 'packaged worker exited'
        result = json.loads(raw)
        assert result.get('ok') is ok, result
        return result


def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--exe', type=Path, required=True)
    ap.add_argument('--output', type=Path, required=True)
    args = ap.parse_args()
    from PyInstaller.archive.readers import CArchiveReader
    import rg_sim
    from rg_evaluate import parse_templates

    archive = CArchiveReader(str(args.exe))
    paths = {key.replace('\\', '/'): key for key in archive.toc}
    resources = {}
    for name in ('rg_goal.py', 'rg_search.py', 'rg_evaluate.py', 'rg_events.py',
                 'rg_template_api.py', 'rg_mechanisms.py', 'rg_search_ui.py', 'rg_portfolio.py'):
        h = digest(archive.extract(paths['calculation/' + name]))
        assert h == digest((ROOT / 'scripts' / name).read_bytes()), name
        resources[name] = h
    model = archive.extract(paths['calculation/build-model.json'])
    assert digest(model) == digest((ROOT / 'build/calculation/build-model.json').read_bytes())
    resources['build-model.json'] = digest(model)
    assert 'calculation/community-seeds.json' not in paths
    assert 'calculation/rg_baselines.py' not in paths
    native = next(key for key in paths if key.startswith('calculation/rgcore') and key.endswith('.pyd'))
    h = digest(archive.extract(paths[native]))
    old = next((ROOT / 'build/benchmarks/build-search/variants/before').glob('rgcore*.pyd'))
    assert h == digest(old.read_bytes())
    resources[Path(native).name] = h

    save = ROOT / 'build/mechanics-audit/input.sol'
    original, stamp = digest(save.read_bytes()), save.stat().st_mtime
    templates = json.loads((ROOT / 'docs/A1-build-templates.json').read_text(encoding='utf-8'))
    text = templates['research']['R60-62 DNTT (prod, e57+)']['tp']
    plan = dict(alignment='neutral', faction='Titan', bloodline='Dwarven', prestige='Dragon',
                **parse_templates(text, ''))
    merc_text = templates['mercenary']['R60+ Autoclicker Trophy (Elfline Neutral Merc)']['tp']
    merc = dict(alignment='neutral', faction='Mercenary', bloodline='Elven', prestige=None,
                **parse_templates('', merc_text))
    checks = []
    economic = {}
    worker = Worker(args.exe, '--search-worker')
    try:
        loaded = worker.call(dict(op='init', game_py=str(ROOT / 'build/calculation/game.py'),
                                 research_json=str(ROOT / 'build/calculation/research.json'),
                                 save_path=str(save.resolve()), seed=0,
                                 event_cache=dict(ne=7, nes=1793192460, nee=1793822340)))
        environment = loaded['result']['environment']
        assert environment['policy'] == 'cached_schedule', loaded
        out = worker.call(dict(op='evaluate_strict', plan=dict(plan, prestige=None), goal='production', T=300), ok=False)
        assert out['evaluation']['value'] is None and not out['evaluation']['validated']
        assert {x['item'] for x in out['evaluation']['issues']} == {'S1450', 'C1300', 'C1500', 'D1175', 'E1225'}
        checks.append(dict(case='partial_template', rejected=True, no_score=True))
        out = worker.call(dict(op='evaluate_strict', plan=plan, goal='production', T=300))['result']
        assert out['validated'] and out['value'] == 3.103475240308911e154 and len(out['research']) == 32
        assert out['plan'] == plan
        checks.append(dict(case='complete_template_300', value=out['value'], research=32, unchanged=True))
        out = worker.call(dict(op='evaluate_strict', plan=plan, goal='production', T=3600))['result']
        assert out['validated'] and out['value'] == 5.473442675615834e157
        checks.append(dict(case='event_3600', value=out['value'], exact=True))
        for goal in ('coins','gems'):
            out=worker.call(dict(op='evaluate_strict',plan=plan,goal=goal,T=60))['result']
            assert out['validated'] and out['value']>=0
            economic[goal]=out['value']
            checks.append(dict(case='economic_objective',goal=goal,value=out['value'],validated=True))
        for spell in (None, "Dragon's Breath"):
            out = worker.call(dict(op='evaluate_strict', plan=merc, goal='production', T=300, spell=spell))['result']
            assert out['validated'] and len(out['merc_times']) == 12
            assert set(out['merc_spell_times']) == {'Lightning Strike', "Dragon's Breath"}
            checks.append(dict(case='mercenary_contracts', required_spell=spell, upgrades=12, spells=2))
    finally:
        worker.close()

    worker = Worker(args.exe, '--build-worker')
    try:
        loaded = worker.call(dict(op='load', save=rg_sim.save_text(save), timestamp=stamp))
        request = dict(op='template_evaluate', revision=loaded['revision'], goal='production', at=300)
        raw_plan = {k: v for k, v in plan.items() if k not in ('research', 'merc', 'merc_spells', 'merc_alliance')}
        raw_plan.update(research_template=text, merc_template='')
        out = worker.call(dict(request, plan=dict(raw_plan, prestige=None)), ok=False)
        assert out['evaluation']['value'] is None and not out['evaluation']['validated']
        checks.append(dict(case='app_partial_template', rejected=True, no_score=True))
        out = worker.call(dict(request, plan=raw_plan))['evaluation']
        assert out['validated'] and out['value'] == 3.103475240308911e154 and len(out['research']) == 32
        assert out['environment']['policy'] == 'cached_schedule' and out['environment']['schedule']['ne'] == 7
        checks.append(dict(case='app_complete_template', value=out['value'], research=32))
        for goal in ('coins','gems'):
            out=worker.call(dict(request,goal=goal,at=60,plan=raw_plan))['evaluation']
            assert out['validated'] and out['value']==economic[goal]
            checks.append(dict(case='app_economic_objective',goal=goal,value=out['value'],exact=True))
        out = worker.call(dict(request, revision='stale', plan=raw_plan), ok=False)
        assert 'evaluation' not in out
        checks.append(dict(case='app_stale_revision', rejected=True))
        rejected=worker.call(dict(op='goal_start',revision=loaded['revision'],
            options=dict(goal='coins',mode='max',limit=300,depth='fast',community=True)),ok=False)
        assert '独立求解' in rejected['error'],rejected
        checks.append(dict(case='external_seed_injection',rejected=True))
        status=worker.call(dict(op='goal_start',revision=loaded['revision'],
            options=dict(goal='coins',mode='max',limit=300,depth='fast')))
        until=time.monotonic()+40
        while not status.get('entries') and not status['finished'] and time.monotonic()<until:
            time.sleep(.2)
            status=worker.call(dict(op='goal_status',revision=loaded['revision'],known=0))
        assert status['entries'] and not status.get('error'),status
        assert 'baseline_checks' not in status and 'baseline_total' not in status,status
        assert not any(x.get('source')=='community' for x in status['entries']),status
        worker.call(dict(op='goal_stop',revision=loaded['revision']))
        checks.append(dict(case='app_independent_cold_start',goal='coins',entries=len(status['entries']),stop_clean=True))
    finally:
        worker.close()

    assert original == digest(save.read_bytes()) and stamp == save.stat().st_mtime
    result = dict(exe=str(args.exe.resolve()), exe_sha256=digest(args.exe.read_bytes()),
                  resources=resources, environment=environment, checked=len(checks), all_passed=True,
                  input_sha256=original, input_unchanged=True, checks=checks)
    args.output.write_text(json.dumps(result, ensure_ascii=False, indent=1), encoding='utf-8')
    print(json.dumps(dict(checked=len(checks), all_passed=True, input_unchanged=True), ensure_ascii=False))


if __name__ == '__main__':
    main()
