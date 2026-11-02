"""程序里的严格模板评测：使用单独进程，结束时关闭所有管道。"""
import copy
import subprocess
import queue

from rg_evaluate import parse_templates, TemplateEvaluationError
import rg_goal


def evaluate(engine,request,command):
    engine.require(request)
    if engine.live_snapshot is not None:raise ValueError('模板评测要从存档退位重开，请先使用存档计算')
    if getattr(engine,'goal',None) and not engine.goal.finished:raise ValueError('请先停止当前搜索，再评测模板')
    plan=copy.deepcopy(request.get('plan'))
    if not isinstance(plan,dict):raise ValueError('评测方案格式错误')
    if 'research_template' in plan or 'merc_template' in plan:
        if any(k in plan for k in ('research','merc','merc_spells','merc_alliance')):raise ValueError('请只使用模板文本或项目列表其中一种输入')
        plan.update(parse_templates(plan.pop('research_template',''),plan.pop('merc_template','')))
    init=dict(game_py=str(engine.assets/'game.py'),save=engine.save,timestamp=engine.timestamp,
              research_json=str(engine.assets/'research.json'),model=str(engine.assets/'build-model.json'))
    from rg_events import read_schedule
    init['event_cache']=read_schedule()[0]
    pool=rg_goal.Pool(command,1,init)
    try:
        pool.submit(0,dict(op='evaluate_strict',plan=plan,goal=request.get('goal'),T=request.get('at'),spell=request.get('spell')))
        _,reply=pool.results.get(timeout=55)
        if not reply.get('ok'):
            if reply.get('evaluation'):raise TemplateEvaluationError(reply['evaluation']['issues'])
            raise RuntimeError(reply.get('error','模板评测失败'))
        return dict(evaluation=reply['result'])
    except queue.Empty:
        raise RuntimeError('模板评测超时，已停止本次计算')
    finally:
        pool.close()
        for p in pool.procs:
            try:p.wait(timeout=3)
            except subprocess.TimeoutExpired:p.kill();p.wait(timeout=3)
            finally:p.stdout.close()
