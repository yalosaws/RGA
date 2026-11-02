"""严格评测给定方案：完整兑现输入才出分，不删除项目、不补选结构。"""
import argparse
import copy
import json
import math
from pathlib import Path
import re
import sys

import rg_goal
import rg_sim
from as2py import mangle

ROOT=Path(__file__).resolve().parents[1]
FIELDS={'alignment','faction','prestige','bloodline','lineage','research','merc','merc_spells','merc_alliance','opening'}


class TemplateEvaluationError(ValueError):
    def __init__(self,issues):
        self.issues=issues
        self.result=dict(ok=False,validated=False,value=None,random_policy='fixed',issues=issues)
        super().__init__('；'.join(x['message'] for x in issues))


def parse_templates(research='',merc=''):
    out=dict(research=[],merc=[],merc_spells=[],merc_alliance=[])
    for kind,text in [('research',research),('merc',merc)]:
        for token in text.split(','):
            token=token.strip()
            if not token:continue
            if kind=='merc' and token.startswith('SP:'):out['merc_spells'].append(token[3:])
            elif kind=='merc' and token.startswith('MA:'):out['merc_alliance'].append(token[3:])
            elif re.fullmatch('[SCDEAWF][0-9]+',token) and kind=='research':out[kind].append(token)
            elif re.fullmatch('[A-Z]{2}[0-9]+',token) and kind=='merc':out[kind].append(token)
            else:raise TemplateEvaluationError([dict(code='invalid_token',item=token,message='无法识别模板项目：'+token)])
    return out


def validate_plan(runner,plan,goal,T,target=None):
    issues=[]
    def bad(code,message,item=None):issues.append(dict(code=code,message=message,item=item))
    if not isinstance(plan,dict):raise TemplateEvaluationError([dict(code='invalid_plan',message='方案必须是对象')])
    for k in plan.keys()-FIELDS:bad('unknown_field','不支持的方案字段：'+k,k)
    if goal not in rg_goal.GOALS:bad('invalid_goal','未知评测目标')
    if isinstance(T,bool) or not isinstance(T,(int,float)) or not math.isfinite(T) or not 0<T<=3600:bad('invalid_time','评测时长必须大于 0、不超过 3600 秒')
    if target is not None and (isinstance(target,bool) or not isinstance(target,(int,float)) or not math.isfinite(target) or target<=0):bad('invalid_target','目标数值必须为正的有限数')
    f=plan.get('faction');a=plan.get('alignment')
    if f not in {*rg_goal.FACTIONS,'Mercenary'}:bad('invalid_faction','必须明确选择支持的阵营')
    if a not in rg_goal.ALIGNMENTS:bad('invalid_alignment','必须明确选择立场')
    if f in rg_goal.FACTIONS and a!=rg_goal.FACTIONS[f][1]:bad('alignment_mismatch','立场与阵营不匹配')
    if plan.get('bloodline') is not None and plan['bloodline'] not in rg_goal.BLOODLINES:bad('invalid_bloodline','未知血统')
    if plan.get('prestige') is not None and plan['prestige'] not in rg_goal.PRESTIGE:bad('invalid_prestige','未知显赫阵营')
    if plan.get('prestige') and plan['prestige']!={'good':'Dwarven','evil':'Drow','neutral':'Dragon'}.get(a):bad('prestige_mismatch','显赫阵营与立场不匹配')
    if 'lineage' in plan and not isinstance(plan['lineage'],bool):bad('invalid_lineage','世系设置必须为布尔值')
    if 'opening' in plan:
        from rg_opening import validate_opening
        try:validate_opening(plan['opening'])
        except ValueError as error:bad('invalid_opening',str(error))
    pools=dict(research=runner.by_code,merc=runner.merc_codes(),merc_alliance=runner.merc_codes(),
               merc_spells={s.S_1i:s for s in runner.G.S_0_21_A})
    for field,pool in pools.items():
        values=plan.get(field,[])
        if not isinstance(values,list) or not all(isinstance(c,str) for c in values):
            bad('invalid_list',field+' 必须是字符串列表');continue
        if len(set(values))!=len(values):bad('duplicate_item','模板含重复项目：'+field)
        for c in values:
            if c not in pool:bad('unknown_item','未知项目：'+c,c)
    if issues:raise TemplateEvaluationError(issues)
    if len(plan.get('merc_alliance',[]))>1:bad('alliance_slots','A1 只有一个 MA 盟约槽位')
    if set(plan.get('merc',[]))&set(plan.get('merc_alliance',[])):bad('duplicate_item','MA 与普通佣兵项不能重复')
    if plan.get('merc') or plan.get('merc_spells') or plan.get('merc_alliance'):
        if f!='Mercenary':bad('mercenary_required','佣兵升级或法术要求选择佣兵阵营')
    if len(plan.get('merc_spells',[]))>2:bad('spell_slots','最多选择两个佣兵法术')
    if issues:raise TemplateEvaluationError(issues)


def missing_items(runner,plan,out):
    issues=[]
    def bad(code,message,item=None,**extra):issues.append(dict(code=code,message=message,item=item,**extra))
    if not out.get('ok'):bad('execution_failed',out.get('note') or '方案未能执行完成')
    if out.get('opening') and not out['opening']['complete']:
        bad('opening_incomplete','到时间上限仍未完成指定的定向雷击/龙息开局')
    required=[('立场',rg_goal.ALIGNMENTS[plan['alignment']]),('阵营',rg_goal.MERC_PICK if plan['faction']=='Mercenary' else rg_goal.FACTIONS[plan['faction']][0])]
    for label,pool,field in [('血统',rg_goal.BLOODLINES,'bloodline'),('显赫阵营',rg_goal.PRESTIGE,'prestige')]:
        if plan.get(field):required.append((label,pool[plan[field]]))
    for label,sid in required:
        if not runner.ups[sid].S__3c__21_7:bad('structure_unbought',label+'未能选定：'+runner.ups[sid].S_1i,sid)
    for c in plan.get('research',[]):
        u=runner.research[runner.by_code[c]]
        if u.S__3c__21_7:continue
        detail=dict(research_ready=out.get('research_ready'),usable=bool(u.S__22_h),visible=bool(u.S__2d_6),
                    purchasable=bool(u.S_9_21__25_),unlocked=bool(getattr(u,mangle('§?!6§'))))
        reason='到终点仍未购买'
        if not detail['usable']:reason='当前升华阶段不可用'
        elif detail['research_ready'] is None:reason='研究界面尚未开启（检查研究所、独特建筑和对应 Secrets）'
        elif u.S_9_21__3f_() or u.S__3e_I():reason='阵营或研究前置不匹配'
        elif not detail['visible'] and not detail['unlocked']:reason='尚未满足研究解锁条件'
        elif not detail['purchasable']:reason='阵营归属或研究名额/点数预算不满足'
        if runner.underworld is not None and not runner.underworld.S__3c__21_7 and plan.get('prestige'):
            reason='已选显赫阵营但没有地下世界的秘密，客户端禁止购买研究'
        bad('research_unbought',c+'：'+reason,c,state=detail)
    codes=runner.merc_codes()
    for c in plan.get('merc',[]):
        if not codes[c].S__3c__21_7:bad('merc_unbought',c+'：佣兵升级未买到（检查槽位和阵营币）',c)
    bought=set((out.get('merc_spell_times') or {}).keys())
    for name in plan.get('merc_spells',[]):
        if name not in bought:bad('spell_unbought','佣兵法术未选定：'+name,name)
    for c in plan.get('merc_alliance',[]):
        if c not in (out.get('merc_alliance_times') or {}):bad('alliance_unbought','MA:'+c+' 未选定（检查第 13 格、圆桌会议/黑暗契约及阵营币）',c)
    # lineage 是执行器的「尝试购买」策略，实际选定项另列；不把尝试当成已拥有。
    return issues


def template_result(runner,p,goal,T,target,out):
    """一次完整执行的严格成绩；缺项抛 TemplateEvaluationError。赛跑跑满全程时也用它，口径和 evaluate_template 相同。"""
    issues=missing_items(runner,p,out)
    if issues:raise TemplateEvaluationError(issues)
    fields=('value','time','reached','curve','picks','lineage','merc_times','research_ready','research_times','merc_spell_times','merc_alliance_times')
    result=dict(ok=True,validated=True,plan=p,goal=goal,horizon=T,target=target,random_policy='controlled_actions' if p.get('opening') else 'fixed',
                seed=getattr(runner,'seed',0),environment=runner.environment,research=out.get('research',[]),skipped=[],skipped_merc=[],
                **{k:out.get(k) for k in fields})
    if 'opening' in out:result['opening']=out['opening']
    return result


def evaluate_template(runner,plan,goal,T,target=None,spell=None):
    validate_plan(runner,plan,goal,T,target)
    p=copy.deepcopy(plan)
    # 先完整恢复；验证前一局的拥有标记绝不能被当成本局已买到。
    out=runner.run(p,goal,target if target is not None else float('inf'),T,spell=spell,coarse=0)
    return template_result(runner,p,goal,T,target,out)


def main():
    ap=argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--save',type=Path,required=True);ap.add_argument('--plan',type=Path,required=True)
    ap.add_argument('--goal',default='production');ap.add_argument('--at',type=float,default=300)
    ap.add_argument('--seed',type=int,default=0);ap.add_argument('--output',type=Path)
    args=ap.parse_args();rg_sim.MEMBER_NAMES=ROOT/'build/calculation/member-names.json'
    runner=rg_goal.Runner(ROOT/'build/calculation/game.py',save_path=args.save,
                         research_json=ROOT/'build/calculation/research.json',seed=args.seed)
    try:result=evaluate_template(runner,json.loads(args.plan.read_text(encoding='utf-8')),args.goal,args.at)
    except TemplateEvaluationError as error:result=error.result
    if args.output:args.output.write_text(json.dumps(result,ensure_ascii=False,indent=1,allow_nan=False),encoding='utf-8')
    print(json.dumps(result,ensure_ascii=False,allow_nan=False))
    if not result['ok']:raise SystemExit(2)


if __name__=='__main__':main()
