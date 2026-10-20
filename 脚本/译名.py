"""rename.py 用的译名配置。游戏译名本身来自 资料/汉化文本（*.tsv），这里只放例外和旧术语对照。"""

# 描述里出现也不翻译的英文（缩写和用户要求保留的词）
SKIP_EN = {
    'fc', 'gem', 'gems', 're', 'ub', 'tc', 'cta', 'ascension', 'set', 'r',
    # 游戏词典里有、但在表格语境下意思不对或译名带前缀的
    'elite', 'forbidden', 'divine', 'economics', 'alchemy', 'warfare', 'spellcraft', 'craftsmanship',
    'combo strike counter', 'unique', 'present', 'green', 'discount', 'blood', 'monstrous', 'astral',
    'ghost', 'skeleton', 'vampire', 'christmas', 'reincarnate', 'prestige', 'magician',
}

# 描述里允许单个英文词替换（其余单词只替换多词短语，避免误伤普通英文）
SINGLE_OK = {
    'farm', 'inn', 'blacksmith', 'brainwave', 'labyrinth', 'catalyst', 'stonehenge', 'necropolis',
    'precognition', 'undercity', 'maelstrom', 'cathedral', 'monastery', 'nexus', 'citadel', 'ziggurat',
    'brothel', 'pavilion', 'factory', 'vault', 'athanor', 'battlefield', 'apeiron', 'mythos', 'lineage',
    'heritage', 'bloodline', 'abdication', 'ectoplasm', 'avalanche', 'eruption', 'snowpile', 'glaciality',
    'permafrost', 'transubstantiation', 'dawnstone', 'duskstone', 'minedwarf', 'bloodstream', 'genealogist',
    'broodmothers', 'heresiarchs', 'reincarnation', 'snowball',
    'fairy', 'goblin', 'angel', 'undead', 'demon', 'titan', 'druid', 'faceless', 'drow', 'dragon',
    'archon', 'djinn', 'mercenary', 'makers', 'elven', 'dwarven',
    'good', 'evil', 'neutral', 'chaos', 'order', 'balance',
}

# 词典里没有或要改写的英文 → 中文
EXTRA_EN = {
    'hall of legend': '传说圣殿',
    'hall of legends': '传说圣殿',
    'elf': '精灵',
    'dwarf': '矮人',
    'maker': '永衡族',
    'snowball': '雪球',
    'knight jousts': '长枪比武场',
    'warrior barrack': '战士营房',
    'green finger discount': '生财妙手',
}

# 旧中文术语 → 游戏用语，按顺序替换（只作用于名称以外的中文文字）
# 先把「种族」暂存，再把立场意义的「X阵营」改成「X立场」，最后「种族」→「阵营」
OLD_ZH = [
    ('原精英阵营', '\x04'),  # 「Astral（原精英阵营）」是改名说明，保留
    ('种族遗产', '遗产'),
    ('声望种族', '显赫阵营'), ('精英种族', '星界阵营'),
    ('种族', '\x01'),
    ('声望阵营', '显赫阵营'), ('精英阵营', '星界阵营'),
    ('善良阵营', '善良立场'), ('邪恶阵营', '邪恶立场'), ('中立阵营', '中立立场'),
    ('混乱阵营', '混乱立场'), ('秩序阵营', '秩序立场'), ('平衡阵营', '平衡立场'),
    ('\x01', '阵营'), ('\x04', '原精英阵营'),
    ('不死族', '亡灵'), ('妖精', '仙灵'), ('哥布林', '地精'), ('制造者', '永衡族'), ('创造者', '永衡族'),
    ('先祖血脉', '世系'), ('特殊建筑', '独特建筑'), ('遗物套组', '遗物契印'), ('遗承', '传承'),
    ('贸易条约', '贸易协定'), ('友好协定', '友好协议'), ('盟约', '同盟'),
    ('法术层级', '法术阶层'), ('成就', '奖杯'), ('转生', '重生'),
    ('市场（Royal Market）', '皇家市场（Royal Market）'),
    # 血统表（机翻）里的误译
    ('派系硬币', '阵营币'), ('阵营硬币', '阵营币'), ('寻找硬币', '寻找阵营币'), ('皇家交易所', '皇家贸易令'),
    ('客栈', '旅馆'), ('旅店', '旅馆'), ('转世', '重生'), ('最大法力值', '法力上限'), ('邪恶堡垒', '邪恶要塞'), ('墓地', '墓城'),
    ('铁匠铺', '\x05'), ('铁匠', '铁匠铺'), ('\x05', '铁匠铺'),
    ('好建筑', '善良建筑'), ('皇家城堡', '王室城堡'), ('女巫秘密会议', '女巫集会'), ('女巫会议', '女巫集会'),
    ('兽人竞技场', '凶蛮斗技场'), ('地狱传送门', '深渊裂隙'), ('地狱之门', '深渊裂隙'), ('传说大厅', '传说圣殿'),
    ('钢铁堡垒', '坚固要塞'), ('幽深矿井', '\x06'), ('深矿井', '幽深矿井'), ('\x06', '幽深矿井'),
    ('古代金字塔', '远古金字塔'), ('无脸人', '无面者'), ('皇家兑换', '皇家贸易令'), ('皇家交换', '皇家贸易令'),
    ('矮人硬币', '矮人阵营币'), ('文物', '遗物'), ('收税', '征税'),
    ('法力回复速度', '法力恢复速度'), ('法力回复率', '法力恢复速度'), ('法力回复', '法力恢复速度'),
    ('阵营币额外和成倍地寻找机会', '阵营币获取概率（加算和乘算）'),
    ('找到阵营币的基本机会', '基础阵营币获取概率'), ('基本寻找阵营币概率', '基础阵营币获取概率'),
    ('找到阵营币的机会', '阵营币获取概率'), ('阵营币的发现几率', '阵营币获取概率'),
    ('阵营币发现几率', '阵营币获取概率'), ('阵营币发现机会', '阵营币获取概率'),
]

# 只由这些单元格出现时才算表头，不给英文名补中文
HEADER_EN = {'name', 'faction', 'effect', 'type', 'based on', 'formula', 'click', 'spell', 'upgrade', 'mercenary'}
