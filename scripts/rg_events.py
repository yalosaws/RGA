"""只读本机 rg-cache 的三个活动排期字段；不读取或输出账户信息。"""
import hashlib
import math
import os
from pathlib import Path
import sys
import random


def read_schedule(path=None):
    path=Path(path) if path else Path(os.environ.get('APPDATA',''))/'com.kongregate.mobile.realmgrinder.air/Local Store/#SharedObjects/rg-cache.sol'
    if not path.is_file():return {},dict(source='missing')
    if not getattr(sys,'frozen',False):
        app=Path(__file__).resolve().parents[1]/'app'
        if str(app) not in sys.path:sys.path.append(str(app))
    from template_store import Reader
    raw=path.read_bytes()
    try:
        data=Reader(raw).read(expected_name=b'rg-cache')
        result={k:int(data[k]) for k in ('ne','nes','nee')}
        if not 0<=result['ne']<=11 or not 0<result['nes']<result['nee']<=0xffffffff:raise ValueError('invalid interval')
    except (ValueError,KeyError,IndexError,TypeError) as error:
        return {},dict(source='unreadable',reason=type(error).__name__)
    return result,dict(source='rg-cache',sha256=hashlib.sha256(raw).hexdigest())


def configure(sim,cache,provenance,policy='snapshot'):
    service=sim.ns['PlayFab']
    season=int(service.season)
    context=dict(saved_season=season,schedule=dict(cache),**provenance)
    if cache:
        context['policy']='cached_schedule'
    elif policy=='raw':
        context['policy']='raw_missing_schedule'
    else:
        # 缺排期不是「现在活动结束」。明确固定保存时的环境覆盖最长一小时，而不虚构结束日。
        stamp=sim.ns['_snapshot_clock']['timestamp']
        cache=dict(ne=season,nes=max(1,int(stamp)-120),nee=min(0xffffffff,int(stamp)+3720))
        context.update(policy='hold_saved_season',assumption='缺少排期，活动状态保持至本次模拟结束')
    if cache:
        # 用客户端公开的 PlayFab 排期 setter；原生 boot 的 event_cache 分支早于静态初始化。
        native=getattr(sim,'native',False)
        state=sim.rng_state() if native else random.getstate()
        try:
            service.seasonNE=cache['ne']
            service.seasonNES=cache['nes']
            service.seasonNEE=cache['nee']
        finally:
            if native:sim.set_rng_state(state)
            else:random.setstate(state)
    return context
