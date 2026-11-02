"""玩家可执行的定向开局：单建筑雷击、逐次施法调龙息、重施雷击，再买其余建筑。

所有施法经过 Game.useSpell；重置照搬 RecastButton 的 60 tick 门槛与 onEnd。
不设置雷击目标、龙息颜色或随机数；这些值只读，用于决定下一次真实操作。
"""
import math

import rg_sim
from as2py import mangle

COLORS=('红','绿','蓝','白','黑','黄')


def validate_opening(value):
    if not isinstance(value,dict) or set(value)!={'lightning_tier','dragon_mask'}:
        raise ValueError('手动开局需要雷击建筑阶级和龙息颜色组合')
    tier,mask=value['lightning_tier'],value['dragon_mask']
    if isinstance(tier,bool) or not isinstance(tier,int) or not 0<=tier<=11:
        raise ValueError('雷击建筑阶级必须为 0～11（0 表示不用定向雷击）')
    if isinstance(mask,bool) or not isinstance(mask,int) or not 0<=mask<64:
        raise ValueError('龙息颜色组合无效')
    return value


def opening_key(value):
    return None if value is None else (value['lightning_tier'],value['dragon_mask'])


def describe(value):
    if not value:return ''
    parts=[]
    if value['lightning_tier']:parts.append('雷击定向第 %d 阶建筑'%value['lightning_tier'])
    if value['dragon_mask']:parts.append('龙息 '+''.join(c for i,c in enumerate(COLORS) if value['dragon_mask']&(1<<i)))
    return '；'.join(parts)


class ControlledOpening:
    def __init__(self,runner,plan):
        self.r=runner;self.spec=validate_opening(plan['opening'])
        self.ls=runner.spell('Lightning Strike');self.db=runner.spell("Dragon's Breath")
        self.spell_names=rg_sim._real2obf('§84§')
        self.tier=self.spec['lightning_tier'];self.mask=self.spec['dragon_mask']
        self.need_ls=bool(self.tier and (plan['faction']=='Titan' or 'Lightning Strike' in plan.get('merc_spells',[]) or self.available(self.ls)))
        self.need_db=bool(self.mask)
        self.hold=self.need_ls
        self.first_ls=False;self.final_ls=False;self.released_at=None
        self.actions=[];self.action_count=0;self.mana_spent=0;self.casts=0;self.resets=0
        self.reserve=False
        if self.mask&32 and int(getattr(runner.G,runner.sim.game_names['ascension']))<2:
            raise ValueError('升华 2 前没有黄色龙息')

    @staticmethod
    def available(s):return bool(s.S__2d_6 and s.S__22_h)

    def level(self,s):return int(getattr(s,mangle('§`r§')))

    def current_mask(self):return int(getattr(getattr(self.r.G,mangle('§1!V§')),mangle('§0;§')))&63

    def mana(self):return float(getattr(self.r.G,self.r.sim.game_names['mana']))

    def log(self,t,kind,**values):
        self.action_count+=1
        if len(self.actions)<128:self.actions.append(dict(t=t,action=kind,**values))

    def cast(self,s,t):
        if not self.available(s):return False
        before=self.mana()
        if not self.r.sim.game_call('useSpell',s,False):return False
        self.r.sim.refresh()
        spent=before-self.mana();self.mana_spent+=spent;self.casts+=1
        self.log(t,'cast',spell=s.S_1i,tier=self.level(s)+1,mana=spent,
                 lightning_target=int(getattr(self.r.sim.core,mangle('§@#§'))),dragon_mask=self.current_mask())
        return True

    def reset(self,s,t):
        if not s.S_23 or s.S__27__21_X<60:return False
        # RecastButton.handleClick 的游戏状态操作；最后两条 UI 刷新不参与游戏计算。
        s.S_23=False;s.S__27__21_X=0
        setattr(s,mangle('§`r§'),0)
        getattr(s,self.spell_names['onEnd'])()
        self.r.sim.refresh();self.resets+=1
        self.log(t,'reset',spell=s.S_1i)
        return True

    def cast_to(self,s,level,t):
        while (not s.S_23 or self.level(s)<level) and self.cast(s,t):pass
        return bool(s.S_23 and self.level(s)>=level)

    def targeted(self):
        if not self.ls.S_23:return False
        if int(getattr(self.r.sim.core,mangle('§@#§')))==self.tier:return True
        # C375 无条件令传奇殿堂受雷击影响，且将其排除出随机目标池。
        sid=self.r.by_code.get('C375')
        return bool(self.tier==11 and sid and self.r.research[sid].S__3c__21_7)

    def buy_all(self,t):
        tl=self.r.tl
        if not self.hold:return tl.press_buy_all()
        previous=tl.buy_buildings;tl.buy_buildings=False
        try:out=tl.press_buy_all()
        finally:tl.buy_buildings=previous
        b=self.r.sim.game_call('getBuildingTier',self.tier)
        if b is None or int(getattr(b,mangle('§`r§')))!=self.tier or not getattr(b,mangle('§-6§')):return out
        amount=mangle('§[!M§');old=getattr(self.r.G,amount)
        before=b.S__21_a
        try:
            setattr(self.r.G,amount,6)  # BuyAmountButton.BUY_MAX；buyBuilding 的免费参数保持 false。
            self.r.sim.game_call('buyBuilding',b,False,False,False)
        finally:setattr(self.r.G,amount,old)
        if b.S__21_a!=before:
            self.log(t,'buy_target',tier=self.tier,name=b.S_1i,quantity=b.S__21_a-before)
        return out

    def tick(self,t):
        self.reserve=False
        if self.need_ls:self.ls.S_3A=False
        if self.need_db:self.db.S_3A=False
        if self.need_ls and not self.first_ls:
            if self.available(self.ls):
                self.cast_to(self.ls,self.r.sim.core_call('getMaxSpellTier',self.ls.id),t)
                self.first_ls=self.targeted()
                self.reserve=not self.first_ls
            self.suppress()
            return
        if self.need_db:
            if not self.available(self.db):
                self.suppress();return
            actual=self.current_mask() if self.db.S_23 else 0
            if actual&~self.mask:
                self.reset(self.db,t)
                self.reserve=True
            else:
                required=self.mask.bit_count()-1
                possible=int(self.r.sim.core_call('getMaxSpellTier',self.db.id))
                # 阶层尚未买齐时允许原来的自动施法继续攒阵营币，避免自锁。
                level=min(required,possible)
                self.cast_to(self.db,level,t)
                actual=self.current_mask() if self.db.S_23 else 0
                self.reserve=not self.db.S_23 or (possible>=required and actual!=self.mask)
            if not self.db.S_23 or self.current_mask()!=self.mask:
                self.suppress();return
        if self.need_ls:
            if not self.final_ls:
                if self.ls.S_23 and not self.reset(self.ls,t):
                    self.suppress();return
                self.final_ls=True
            if not self.targeted():
                if self.ls.S_23:self.reset(self.ls,t)
                if not self.ls.S_23:self.cast_to(self.ls,self.r.sim.core_call('getMaxSpellTier',self.ls.id),t)
                self.reserve=not self.targeted()
                if self.reserve:self.suppress();return
        if self.released_at is None:
            self.released_at=t;self.hold=False
            self.log(t,'release_buildings')
        self.suppress()

    def suppress(self):
        if self.reserve:
            for s in self.r.G.S_0_21_A:s.S_3A=False

    def report(self):
        return dict(policy='controlled_actions',requested=self.spec,complete=self.released_at is not None,
                    released_at=self.released_at,casts=self.casts,resets=self.resets,mana_spent=self.mana_spent,
                    final_lightning_target=int(getattr(self.r.sim.core,mangle('§@#§'))),final_dragon_mask=self.current_mask(),
                    actions=self.actions,action_count=self.action_count,trace_truncated=self.action_count>len(self.actions))
