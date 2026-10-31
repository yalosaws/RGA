"""A1 模板（docs/A1-build-templates.json）的中文标签、用法说明和佣兵 / 研究配对，给 build_templates.py 用。
说明据 guides/A1攻略要点.md 和 docs/A1置顶原文.md；模板包和原帖不一致的地方在说明里注明。"""

# 模板名括号里的说明 → 标签
TAG = {
    'prod': '产能', 'Dragon unlock': '龙族解锁', 'DGC1': '龙族挑战 1', 'DGC4': '龙族挑战 4', 'DGC6': '龙族挑战 6',
    'DGC2 V1 - check mercs!': '龙族挑战 2 · V1', 'DGC2 V2 - e62+': '龙族挑战 2 · V2（e62+）',
    'DGC2 V1, PB4 + tiering': '龙族挑战 2 · V1', 'low gem prod': '产能 · 低宝石', 'prod, low gem': '产能 · 低宝石',
    'prod, e57+': '产能 · e57+', 'PB buff, for DD': 'PB 增益（给德鲁伊）', 'W300 buff, for FC': 'W300 增益（给无面者）',
    'W300 buff': 'W300 增益', 'PB10 buff': 'PB10 增益', 'DWP1 buff': '卓尔世系天赋 1 增益',
    'lineage leveler, L16': '世系练级 · L16', 'lineage leveler L25': '世系练级 · L25', 'DG L10': '龙族世系 L10', 'TT L14': '泰坦世系 L14',
    'prod, UB skip version': '产能 · 不升巨石阵', 'prod, merc starter': '产能 · 佣兵起步',
    'E3300 unlock': '解锁 E3300', 'D3350 unlock': '解锁 D3350',
    'merc reseach unlock I': '解锁佣兵研究 I', 'merc research unlock II': '解锁佣兵研究 II',
}

# 研究里 S1 占位的几条是提醒，不是配置
REMIND = {
    '(delete them after their R range)': '模板按字母排序，用过的 R 段可以删掉。',
    'R65: get Genealogist & Autoclicker!': 'R65 记得拿宗谱学者和自动点击器。',
    'R65: use Angeline for DGC5!': '龙族挑战 5 用天使血统。',
    "R75: don't forget KYE II": 'R75 别忘了挖知彼之道·其二。',
}

# 名字不按「R 立场-血统 (说明)」写的模板：原名 → (标题, [标签])
TITLE = {
    'R60+ Autoclicker Trophy (Elfline Neutral Merc)': ('中立佣兵 · 精灵血统', ['自动点击器奖杯']),
}

_DNTT ='宝石过 e24 后的主力 build，R48–54 每个 R 一份。'
_DWTT = '宝石 e57 以上用，要瞄准法术（雷击打龙巢、龙息配色）。'
NOTE = {
    # 佣兵
    'R56 G-DD (DGC2 V1, PB4 + tiering)': '龙族挑战 2 第一步：善良佣兵德鲁伊血统，带上还缺 T2 的法术跑约一小时，攒宏大平衡要的法力，顺便升法术阶；然后换研究模板 R56 DGDD (DGC2 V1) 再跑一小时。',
    'R60+ Autoclicker Trophy (Elfline Neutral Merc)': '拿自动点击器奖杯（自动点击 40 次/秒）。要求精灵世系 L12（build 的要求，不是奖杯的），先用练级 build 把精灵练到 12；必须是中立佣兵，立场不对买不到这些升级。先把龙息喷出至少一口白色再搭配置；日耀祝福可能有 bug，不计入。模板包里没有这条，照 #ascension-1 置顶原帖补上。',
    'R75 G-UD (W300 buff)':'R75 练世系之前先跑一次，攒 W300 增益（W300 每个 R 重置）。R82 还买不起 A3400 时，也用它代替 R81-99 N-DW-UD。',
    'R75 N-?? (lineage leveler L25)': '有了佣兵研究后把所有世系练到 L25，几秒一个，从亡灵世系开始。R77 再做的话把 A120 换成亡灵 A2950。',
    'R75 N-GB (merc reseach unlock I)': '解锁佣兵研究第一步（独特建筑），建议 e80 宝石，先挖出佣兵的任务遗物。模板包里只有佣兵升级，没有研究模板。',
    'R75 N-DN (merc research unlock II)': '解锁佣兵研究第二步，买战士的秘密。看不到升级时，检查升级栏的 Misc 分类是不是折叠了（全部购买不会买折叠的）。模板包里只有佣兵升级，没有研究模板。',
    'R75 N-TT (prod)': 'R75 解锁佣兵研究后的产能 build。刚解锁时只快一点；挂离线很久的话无面者反而更强。',
    'R76 E-GB (prod)': '离线过一阵的话换 DN2→FC3、C700→C305、W180→W1400。用了 D2850 不见独特建筑加成，多半是世系没选地精。',
    'R77-80 E-GB-FR (prod)': 'A2950 给仙灵。研究分 R77-78、R79-80 两份（R79 起 W180 换成 W3150）。',
    'R77-99 N-DN-FR (prod, merc starter)': '宝石不够时的佣兵起步 build，e75 就能用，先用它攒宝石再换产能 build。A2950 给仙灵。R90 多出的研究格已经预先写进去了。',
    'R81-84 N-DG-FR (prod)': 'A2950 给仙灵。要求 PB10 增益和 W300 增益，还要先解锁 E3300。没买到 DG2 时龙息会掉到三阶。',
    'R81-99 G-AN-FR (PB10 buff)': '把原始平衡攒到 PB10，给要求 PB10 的 build 用；+11 只多约 3% 产量。A2950 给仙灵。R90 以后跑长一点还能顺便拿法力湖泊。',
    'R81-99 N-DW-UD (W300 buff)': 'R82–89 每个 R 都跑一次，1 分钟就行。要 A3400（约 e190 币），买不起先用 R75 G-UD。A2950 给亡灵。R90 起的 build 不用 W300。',
    'R82 E-DD-AN (D3350 unlock)': 'A2950 给天使。靠法术等级，月之祝福要 T2，没有就先升 T2 或换别的法术。不需要离线。',
    'R85-89 N-DG-UD (prod)': 'A2950 给亡灵。要求老兵雕像、PB10、W300 增益。模板包这里写 DN4，原帖是 DM4，以原帖为准。',
    'R90-99 G-FR-UD (prod)': 'A2950 给亡灵，要 PB10。靠 GB9 随机爆发；不要随机：GB9→GB7、S1500→S215；配自动点击：GB9→EL8、S200→S175。',
    # 研究
    'R40-99 DNGB (prod)': '每个 R 开局宝石少（e24 以下）时都用它；R40–47 整个 R 都用它。还没有邦德尔纳之焰的话，把 E80 换成 E290 挖它。',
    'R46 DDFR (Dragon unlock)': '龙族解锁第 4 步（成年龙）：德鲁伊血统仙灵。这一步要求当前是仙灵。',
    'R48 UDTT (Dragon unlock)': '龙族解锁最后一步（远古巨龙）：亡灵血统泰坦。之后才有龙族独特建筑，才能用 D1175。',
    'R48 DNTT (prod)': _DNTT, 'R49 DNTT (prod)': _DNTT, 'R50 DNTT (prod)': _DNTT, 'R51 DNTT (prod)': _DNTT,
    'R52 DNTT (prod)': _DNTT, 'R53 DNTT (prod)': _DNTT, 'R54 DNTT (prod)': _DNTT,
    'R53 GBTT (DGC1)': '龙族挑战 1，一般在解锁的那个 R 就做。',
    'R55-66 DNTT (low gem prod)': '低宝石版，宝石不到 e57 时用。',
    'R56 DGDD (DGC2 V1 - check mercs!)': '龙族挑战 2 第二步：先用佣兵模板 R56 G-DD 跑约一小时，再用它跑一小时拿 A1500 完成挑战。必须真的选龙族血统，A400 给的不算。',
    'R56 DGDD (DGC2 V2 - e62+)': 'T2 法术已经齐、宝石 e62 以上时，直接用它很快完成龙族挑战 2。',
    'R56-59 DNTT (prod, e57+)': '宝石 e57 以上的版本。', 'R60-62 DNTT (prod, e57+)': '宝石 e57 以上的版本。',
    'R62 TTFC (DGC4)': '龙族挑战 4。条件里有遗物数量要求，差一两个的话卓尔的仪式匕首比较好挖。',
    'R63-66 DMDD (prod)': '宝石 e57 以上用。很吃 PB，先跑 R63-66 ELDD 攒法力，做到 PB+5 就够。',
    'R63-66 ELDD (PB buff, for DD)': '给 R63-66 DMDD 攒原始平衡，做到 PB+5 就够。PB+8 时不要买巨石阵。',
    'R65 ??TT (lineage leveler, L16)': '世系练级（R60 就能用），从亡灵血统开始。雷击打高阶建筑（如远古金字塔、龙巢），不要打传说圣殿；有离线时间就把 C330 换成 C305。',
    'R65 DGGB (DG L10)': '练龙族世系用（宗谱学者的最优分配里龙族 10 级）。',
    'R65 TTFC (TT L14)': '练泰坦世系用（宗谱学者的最优分配里泰坦 14 级）。',
    'R67 DMDM (DWP1 buff)': '卓尔世系天赋 1 增益，做一次永久有效：恶魔血统恶魔在线跑约 1 小时（连击计数约 2–3 万）。在 R67 或更早跑一次，错过的话 R70 前后会非常慢。',
    'R67-69 DWTT (prod)': _DWTT, 'R70-72 DWTT (prod)': _DWTT,
    'R67-73 DWFC (prod, low gem)': '宝石 e24–e57 时用。',
    'R68 DWDD (DGC6)': '龙族挑战 6，建议 1e75 宝石，约 10 分钟。本时代要产出 2e10 法力，助手不够就离线几分钟。',
    'R73 DWDD (PB buff, for DD)': '先跑它给 R73 GBDD 攒原始平衡。',
    'R73 GBDD (prod)': 'R73 宝石 e57 以上用，先跑 R73 DWDD 攒 PB。',
    'R73 GBDD (prod, UB skip version)': '不升级巨石阵的版本，产量更高。用它时要在设置里关掉「全部购买时购买升级」，否则全部购买会顺手买下巨石阵。',
    'R74 TTFC (prod)': 'R74 主力，配 R74 UDTT 的 W300 增益。',
    'R74 UDTT (W300 buff, for FC)': '给 R74 TTFC 攒 W300 增益：W300 按本 R 最大助手数加阵营币几率，只有无面者能用。',
    'R75-89 TTFC (prod, low gem)': '宝石还不够跑佣兵 build 时用。',
    'R77-78 E-GB-FR (prod)': 'R77–78 用。', 'R79-80 E-GB-FR (prod)': 'R79–80 用（W180 换成了 W3150）。',
    'R81 GBFR (E3300 unlock)': '解锁 E3300，地精血统降建筑费用。之后才有奥林匹斯圣殿，D350、A1200 才能用。',
    'R90-99 TTFC (prod)': 'R90–99 每个 R 开局宝石少时用。',
}

# 佣兵研究 build：佣兵模板 → (佣兵卡上的说法, 研究卡上的说法, [研究模板])；同名的研究模板没写说明时用佣兵的
PAIR = {
    'R56 G-DD (DGC2 V1, PB4 + tiering)': ('接着用研究模板', '先用佣兵模板', ['R56 DGDD (DGC2 V1 - check mercs!)']),
    'R77-80 E-GB-FR (prod)': ('配套研究模板', '配套佣兵模板', ['R77-78 E-GB-FR (prod)', 'R79-80 E-GB-FR (prod)']),
}
for _n in ['R75 G-UD (W300 buff)', 'R75 N-?? (lineage leveler L25)', 'R75 N-TT (prod)', 'R76 E-GB (prod)', 'R77-99 N-DN-FR (prod, merc starter)',
           'R81-84 N-DG-FR (prod)', 'R81-99 G-AN-FR (PB10 buff)', 'R81-99 N-DW-UD (W300 buff)', 'R82 E-DD-AN (D3350 unlock)',
           'R85-89 N-DG-UD (prod)', 'R90-99 G-FR-UD (prod)']:
    PAIR[_n] = ('配套研究模板', '配套佣兵模板', [_n])
