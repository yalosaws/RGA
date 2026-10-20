"""save_tools.py 用的译名：游戏词典里查不到的统计项、遗物条件说明，以及按格式拼接的规则。

游戏里 Era 叫「纪元」（一次退位到下一次退位），统计的五列是：本纪元 / 之前的纪元 / 本次重生 / 之前的重生 / 总计。
"""
import re

# 建筑复数 → 单数（奖杯「100 Cathedrals」、统计「Max Farms」）
PLURAL = {
    'Farms': 'Farm', 'Inns': 'Inn', 'Blacksmiths': 'Blacksmith', 'Warrior Barracks': 'Warrior Barracks',
    'Knights Jousts': 'Knights Joust', 'Wizard Towers': 'Wizard Tower', 'Cathedrals': 'Cathedral', 'Citadels': 'Citadel',
    'Royal Castles': 'Royal Castle', 'Heavens Gates': "Heaven's Gate", "Heaven's Gates": "Heaven's Gate",
    'Slave Pens': 'Slave Pen', 'Orcish Arenas': 'Orcish Arena', 'Witch Conclaves': 'Witch Conclave',
    'Dark Temples': 'Dark Temple', 'Necropolises': 'Necropolis', 'Evil Fortresses': 'Evil Fortress',
    'Hell Portals': 'Hell Portal', 'Deep Mines': 'Deep Mine', 'Stone Pillars': 'Stone Pillars', 'Stone Pillar': 'Stone Pillars',
    'Alchemist Labs': 'Alchemist Lab', 'Monasteries': 'Monastery', 'Labyrinths': 'Labyrinth',
    'Iron Strongholds': 'Iron Stronghold', 'Ancient Pyramids': 'Ancient Pyramid', 'Halls Of Legends': 'Hall of Legends',
    'Halls of Legends': 'Hall of Legends',
}

MANUAL = {
    # 编辑器分页
    'General': '概况', 'Production': '产出', 'Time': '时间', 'Good Buildings': '善良建筑', 'Evil Buildings': '邪恶建筑',
    'Neutral Buildings': '中立建筑', 'Unique Buildings': '独特建筑', 'Magic': '法术', 'Magic Time': '法术时间',
    'Autocasting': '自动施法', 'Factions': '阵营', 'Faction Upgrades': '阵营升级', 'Faction Coins': '阵营币',
    'Faction Coin Stats': '阵营币统计', 'Archeology': '考古', 'Challenges': '挑战', 'Research': '研究',
    'Magic Tiers': '法术阶层', 'Lineages': '世系', 'Legacies': '传承', 'Event Feats & Quests': '活动壮举与任务',
    'Event Stats': '活动统计', 'Trophies': '奖杯', 'Unlocks': '解锁', 'Misc': '其他', 'Facilities': '研究设施',
    # 小标题
    'Allegiances Trophies': '阵营奖杯', 'Misc Trophies': '其他奖杯', 'Magic Trophies': '法术奖杯',
    'Buildings Trophies': '建筑奖杯', 'Secret Trophies': '隐藏奖杯', 'Quest Artifacts': '任务遗物', 'Lore Artifacts': '背景遗物',
    'Legacy Combos': '传承组合', 'Valentines Event': '情人节活动', 'Easter Event': '复活节活动', 'Summer Event': '夏季活动',
    'Blood War Event': '血战活动', 'Goblin Invasion Event': '地精入侵活动', 'Halloween Event': '万圣节活动',
    'Ruby Shine Event': '红玉闪耀活动', 'Thanksgiving Event': '感恩节活动', 'Christmas Event': '圣诞节活动',
    'Idillium Event': '理想墟活动', 'April Fools Event': '愚人节活动',
    # 概况
    'Total Abdications': '退位次数', 'Reincarnation': '重生', 'Ascension': '飞升', 'Gems': '宝石',
    'Gems Gained Last Abdication': '上次退位获得的宝石', 'Gold': '黄金', 'Alignment': '立场', 'Secondary Alignment': '次要立场',
    'Save age (seconds, max 30d)': '存档距今', 'Unaligned': '无', 'Unaffiliated': '未结盟',
    # 产出
    'Clicks': '点击次数', 'Auto Clicks': '自动点击次数', 'Elven Luck Clicks': '精灵幸运点击次数',
    'Consecutive Elven Luck Triggers': '连续触发精灵幸运次数', 'Gold Earned': '获得的黄金', 'Gold Earned by Clicking': '点击获得的黄金',
    'Gold Earned by Assistants': '助手获得的黄金', 'Gold Spent': '花费的黄金', 'Max Base Assistants': '基础助手（最大值）',
    'Max Buildings': '建筑总数（最大值）', 'Max Clicks': '点击次数（最大值）', 'Max Auto Clicks': '自动点击次数（最大值）',
    'Max Gold': '黄金（最大值）',
    # 时间
    'Playtime': '游戏时间', 'Playtime Last Game': '上一纪元的游戏时间', 'Max Playtime': '游戏时间（最大值）',
    'Good Playtime': '善良立场时间', 'Evil Playtime': '邪恶立场时间', 'Neutral Playtime': '中立立场时间',
    'Order Playtime': '秩序立场时间', 'Balance Playtime': '平衡立场时间', 'Chaos Playtime': '混乱立场时间',
    'Offline Playtime': '离线时间', 'Max Consecutive Offline Playtime': '最长连续离线时间',
    'Scry Production Timer (max 4h)': '预见：产出计时（最多 4 小时）', 'Scry Mana Timer (max 4h)': '预见：法力计时（最多 4 小时）',
    'Scry Event Timer (max 4h)': '预见：活动计时（最多 4 小时）', 'Scry Tax Collection Timer (max 4h)': '预见：征税计时（最多 4 小时）',
    'Labyrinths Built by Territorial Expanse': '领土扩张建造的迷宫',
    # 法术
    'Mana': '法力', 'Mana Produced': '产生的法力', 'Mana Spent': '消耗的法力', 'Highest Max Mana': '法力上限（最高）',
    'Highest Mana Regen (Per Tick)': '法力恢复（每帧，最高）', 'Contingency Percentage (0-100)': '条件性施法百分比（0-100）',
    'Spells Cast': '法术施放次数', 'Max Spells Cast': '法术施放次数（最大值）', 'Lightning Strike Tier': '雷击当前目标层',
    'Lightning Strike Casts (alt)': '雷击施放次数（另一统计）', 'Consecutive Goblins Greed Casts': '连续施放地精贪婪',
    'Highest Grand Balance Targets': '宏大平衡目标数（最高）', 'Highest Combo Strike Counter': '连击计数（最高）',
    'Combo Strike Streak': '连击连续数', 'Active Spell Time': '法术生效时间',
    # 阵营
    'Faction': '阵营', 'Prestige Faction': '显赫阵营', 'Elite Prestige Faction': '星界阵营', 'Bloodline Faction': '血统',
    'Artifact Set': '遗物契印', 'Stoneheart Set': '磐石之心契印', 'Mercenary Selections': '佣兵选择',
    'Mercenary Spell 1': '佣兵法术 1', 'Mercenary Spell 2': '佣兵法术 2', 'Mercenary Union': '佣兵同盟',
    'Second Mercenary Union (MCC4)': '第二佣兵同盟（MCC4）', 'Max Upgrades Bought': '购买升级数（最大值）',
    'Consecutive Angel Affiliations': '连续结盟天使', 'Consecutive Demon Affiliations': '连续结盟恶魔',
    'Consecutive Faceless Affiliations': '连续结盟无面者', 'Time Until Green Fingers Discount': '距离生财妙手（帧）',
    'Time Until Storm of Wealth': '距离财富风暴（帧）', 'Titan Charged Effects Timer': '泰坦充能效果计时', 'Dragon Egg Timer': '龙蛋计时',
    'Dwarf Faction': '矮人阵营', 'Elite Challenger': '精英挑战者',
    # 阵营币
    'Royal Exchanges': '皇家贸易令', 'Exchanges Made': '使用皇家贸易令次数', 'Diamond Pickaxe FC': '钻石镐获得的阵营币',
    'Honor Among Killers FC': '杀手信义获得的阵营币', 'Lightning Strike FC': '雷击获得的阵营币',
    'Max Faction Coins Gained': '获得的阵营币（最大值）',
    # 考古
    'Artifact RNG State (best value: 1407677000)': '遗物随机数状态（最佳值 1407677000）', 'Current Excavations': '当前考古次数',
    'Total Excavations': '考古次数', 'Max Excavations': '考古次数（最大值）', 'Ruby Excavation Resets': '用红玉重置考古',
    'Free Excavation Resets': '免费重置考古', 'Max Free Excavation Resets': '免费重置考古（最大值）', 'Rubies': '红玉',
    'Rubies Found': '找到的红玉', 'Rubies Purchased': '购买的红玉', 'Ruby Resets': '红玉重置', 'Ruby Assistant Upgrades': '红玉助手升级',
    'Ruby Mana Regen Upgrades': '红玉法力恢复升级', 'Ruby Max Mana Upgrades': '红玉法力上限升级',
    'Ruby Gem Bonus Upgrades': '红玉宝石加成升级', 'Ruby Royal Exchange Upgrades': '红玉皇家贸易令升级',
    # 研究
    'Spellcraft Level': '法术学等级', 'Craftsmanship Level': '工艺学等级', 'Divine Level': '神学等级', 'Economics Level': '经济学等级',
    'Alchemy Level': '炼金学等级', 'Warfare Level': '战争学等级', 'Forbidden Level': '禁忌学等级',
    'Current Miracle Tier Target': '奇迹当前目标层', 'Miracle Effect Timer (max 120)': '奇迹效果计时（最多 120）',
    'Combination (A2950) Bloodline Faction': '组合（A2950）的第二血统',
    'Spellcraft': '法术学', 'Craftsmanship': '工艺学', 'Divine': '神学', 'Economics': '经济学', 'Alchemy': '炼金学',
    'Warfare': '战争学', 'Forbidden': '禁忌学',
    # 世系、传承
    'Lineage Faction': '世系', 'Legacy 1': '传承 1', 'Legacy 2': '传承 2', 'Legacy 3': '传承 3', 'Legacy 4': '传承 4',
    'Relativity Legacy': '相对性传承',
    # 活动
    'Current Resource Stack Size': '当前资源堆叠数', 'Hearts': '爱心', 'Hearts Found': '找到的爱心',
    'Valentines Call to Love, cast by Factions (bit array)': '情人节爱之号令已施放的阵营（位数组）',
    'Heart Assistant Upgrades': '爱心助手升级', 'Heart Gem Bonus Upgrades': '爱心宝石加成升级',
    'Heart Mana Regen Upgrades': '爱心法力恢复升级', 'Heart Max Mana Upgrades': '爱心法力上限升级',
    'Heart Royal Exchange Upgrades': '爱心皇家贸易令升级', 'Call to Love Activity Time': '爱之号令生效时间',
    'Call to Love Casts': '爱之号令施放次数', 'Offline Time During Valentines': '情人节期间离线时间',
    'Easter Egg RNG State (best value: 873457390)': '彩蛋随机数状态（最佳值 873457390）', 'Easter Egg Stack Size': '彩蛋堆叠数',
    'Common Eggs Collected': '收集的普通彩蛋', 'Rare Eggs Collected': '收集的稀有彩蛋',
    'Minutes Since Last April Fools Upgrade': '距上次愚人节升级（分钟）', 'Flame Orbs Collected': '收集的炽炎宝珠',
    'Frost Orbs Collected': '收集的霜凛宝珠', 'Summeraan Playtime': '盛夏族时间', 'Winterly Playtime': '凛冬族时间',
    'Holy Symbols Collected': '收集的神圣徽记', 'Lava Stones Collected': '收集的熔岩之石', 'Goblin Crowns Collected': '收集的地精王冠',
    'Times Fought the Goblin Army': '对抗地精大军次数', 'Times Supported the Goblin Army': '支持地精大军次数',
    'Blood': '鲜血', 'Blood Collected': '收集的鲜血', 'Ectoplasm Collected': '收集的灵质', 'Bones Collected': '收集的骨头',
    'Snowball Scry Uses': '雪球预见次数', 'Last Gift Date': '上次领礼物日期', 'Christmas Gifts Found': '找到的圣诞礼物',
    'Snowballs Found': '找到的雪球', 'Crystal Prisms Collected': '收集的水晶棱镜', 'Entropic Drops Collected': '收集的混沌元滴',
    'Order Remnant Level': '秩序印记等级', 'Chaos Remnant Level': '混乱印记等级', 'Balance Remnant Level': '平衡印记等级',
    'Equilibrium Fragments Collected': '收集的均衡碎片', 'Golden Age Feat counter': '黄金时代壮举计数',
    'Vampire': '吸血鬼', 'Ghost': '幽灵', 'Skeleton': '骷髅', 'Magician': '魔术师',
    # 其他
    'Consecutive Days': '连续登录天数', 'Hint Button Clicks': '提示按钮点击次数', 'Disable Offline Progression': '关闭离线进度',
    'Underworld': '冥界', 'Elite Challenger': '精英挑战者', 'DJC4 RNG State': '巨灵挑战 4 随机数状态',
    'Mercenary Encampment (Mercenary)': '佣兵营地（佣兵）', 'Undecided Armada Feat': '犹豫的舰队（壮举）', 'Gain X Rubies': '获得 X 红玉',
    'Max Good Nexuses': '善良万象枢纽（最大值）', 'Max Evil Nexuses': '邪恶万象枢纽（最大值）', 'Max Neutral Nexuses': '中立万象枢纽（最大值）',
    'Max Good Pavilions': '善良混沌穹庭（最大值）', 'Max Evil Pavilions': '邪恶混沌穹庭（最大值）', 'Max Neutral Pavilions': '中立混沌穹庭（最大值）',
    # 奖杯下拉
    'Gain X Coins': '获得 X 金币', 'Gain X Coins by Clicking': '点击获得 X 金币', 'Produce X Mana': '产生 X 法力',
    'Cast X Spells': '施放 X 次法术', 'Unlock Tier X for all spells': '所有法术解锁第 X 阶', 'Click the Background X Times': '点击背景 X 次',
    'Find X Artifacts': '找到 X 个遗物', 'Find X Faction Coins': '找到 X 阵营币', 'Have X Assistants': '拥有 X 个助手',
    'Reincarnate X Times': '重生 X 次', 'Gain X Gems': '获得 X 宝石', 'Gain X Reincarnations': '重生 X 次',
    # 研究设施（括号里是编辑器写的分支说明）
    'Labratory  (Alchemy Facility)': '实验室（炼金学设施）',
}

# 统计后缀（:name='i.name + " Cast"'），{} 是阵营/法术名
SUFFIX = {
    ' Cast': '{} 施放次数', ' RNG State': '{} 随机数状态', ' Time': '{} 生效时间', ' Remaining Duration': '{} 剩余时间',
    ' Playtime': '{} 时间', ' Affiliations': '结盟 {} 次数', ' Upgrades Bought': '{} 升级购买数', ' Coins Gained': '{} 阵营币获得量',
    '': '{}',
}

SPELLS = {'Call to Arms', 'Holy Light', 'Fairy Chanting', 'Moon Blessing', "God's Hand", 'Blood Frenzy', "Goblin's Greed",
          'Night Time', 'Hellfire Blast', 'Gem Grinder', 'Lightning Strike', 'Grand Balance', 'Brainwave', 'Diamond Pickaxe',
          'Combo Strike', 'Spiritual Surge', "Dragon's Breath", 'Temporal Flux', 'All Creation', 'Maelstrom', 'Precognition',
          'Infinite Spiral', 'Limited Wish', 'Tax Collection', 'Catalyst', 'Chaos Madness'}


def _b(tr, x):
    return tr(PLURAL.get(x, x))


# (正则, 函数(匹配, 翻译函数) → 中文或 None)
RULES = [
    (r'Tier (\d+)', lambda m, tr: '第 %s 层' % m[1]),
    (r'(\d+) (Artifacts?)', lambda m, tr: '遗物 %s 个' % m[1]),
    (r'(\d+) (Rub(?:y|ies))', lambda m, tr: '红玉 %s' % m[1]),
    (r'Dragon Quest (\d)', lambda m, tr: '龙族任务 %s' % m[1]),
    (r'(\d+) (Upgrades?)', lambda m, tr: '购买升级 %s' % m[1]),
    (r'(\d+) (Reincarnations?)', lambda m, tr: '重生 %s 次' % m[1]),
    (r'(\d+) (.+)', lambda m, tr: _b(tr, m[2]) and '%s %s' % (_b(tr, m[2]), m[1])),
    (r'[SCDEAWF]\d+: (.+)', lambda m, tr: tr(m[1])),
    (r'[\w ]+ \d+,\d+: (.+)', lambda m, tr: tr(m[1])),
    (r'([\w ]+) (\d+): (.+)', lambda m, tr: tr(m[3])),
    (r'(.+) Feat', lambda m, tr: tr(m[1]) and tr(m[1]) + '（壮举）'),
    (r'(.+) (\d+) Quest', lambda m, tr: tr(m[1]) and '%s %s（任务）' % (tr(m[1]), m[2])),
    (r'(.+) Tiers Unlocked', lambda m, tr: tr(m[1].replace('Gods', "God's").replace('Goblins', "Goblin's").replace('Dragons', "Dragon's"))
     and tr(m[1].replace('Gods', "God's").replace('Goblins', "Goblin's").replace('Dragons', "Dragon's")) + ' 已解锁阶层'),
    (r'(.+) (\d+)', lambda m, tr: tr(m[1]) and ('%s 第 %s 阶' if m[1] in SPELLS else '%s %s') % (tr(m[1]), m[2])),
    (r'Max (.+)', lambda m, tr: _b(tr, m[1]) and _b(tr, m[1]) + '（最大值）'),
    (r'Build X (.+)', lambda m, tr: _b(tr, m[1]) and '建造 X 个' + _b(tr, m[1])),
    (r'\w+/\w+ \((.+)\)', lambda m, tr: tr(m[1])),
    (r'(\w+) Lineage Levels', lambda m, tr: tr(m[1]) and tr(m[1]) + '世系等级'),
    (r'(\w+) Perk (\d)', lambda m, tr: tr(m[1]) and '%s世系 能力 %s' % (tr(m[1]), m[2])),
    (r'(\w+) Union', lambda m, tr: tr(m[1]) and tr(m[1]) + '同盟'),
    (r'(.+?) +\((.+)\)', lambda m, tr: tr(m[1]) and '%s（%s）' % (tr(m[1]), tr(m[2]) or m[2])),
    (r'(\w+) (Facility|Facility Upgrade)', lambda m, tr: tr(m[1]) and tr(m[1]) + ('设施' if m[2] == 'Facility' else '设施升级')),
    (r'(.+)s', lambda m, tr: tr(m[1])),
    (r'(.+) RNG State', lambda m, tr: tr(m[1]) and tr(m[1]) + ' 随机数状态'),
]

# artifacts.js 里 display() 返回的英文 → 中文（按出现顺序替换字面量）
ARTIFACT_TEXT = [
    ("' Excavation' + (value>1?'s':'') + ' (must excavate to this point with no eligible artifacts)'", "' 次考古（要在没有可抽遗物的情况下挖到这里）'"),
    ("' Excavation' + (value>1?'s':'') + ' at this point'", "' 次考古时'"),
    ('" Excavations at this point"', '" 次考古时"'),
    ("' Productive Clicks This Reincarnation'", "' 次有效点击（本次重生）'"),
    ("' Productive Clicks'", "' 次有效点击'"),
    ("' Time this Era'", "'（本纪元时间）'"),
    ("' All Time Angel Time'", "'（天使阵营总时间）'"),
    ("' All Time Undead Time'", "'（亡灵阵营总时间）'"),
    ("' All Time Mercenary Time'", "'（佣兵阵营总时间）'"),
    ("' All Time Evil Time'", "'（邪恶立场总时间）'"),
    ("' All Time Demon Time'", "'（恶魔阵营总时间）'"),
    ("' Mana per second'", "' 每秒法力'"),
    ("' Active Spells'", "' 个生效法术'"),
    ("' Max Mana'", "' 法力上限'"),
    ("' Faction Coins Found This Reincarnation'", "' 阵营币（本次重生找到）'"),
    ("' Consecutive Elven Luck' + (value>1?'s':'')", "' 次连续精灵幸运'"),
    ("' Base Assistant' + (value>1?'s':'')", "' 个基础助手'"),
    ("' minimum Spell Activity Time (This R)'", "'（本次重生各法术生效时间的最小值）'"),
    ("' Night Time Activity Time this Era'", "'（本纪元暗夜眷顾生效时间）'"),
    ("' Longest Session This R (Excluding This Era)'", "'（本次重生最长一纪元，不算本纪元）'"),
    ("' Lightning Strike Activity Time (This Era)'", "'（本纪元雷击生效时间）'"),
    ("' Brainwave headstart'", "'（脑波共振的开局时间）'"),
    ("' Blood Frenzy Max Duration'", "'（嗜血狂热最长持续时间）'"),
    ("'% Offline Production Bonus'", "'% 离线产出加成'"),
    ("'%  Faction Coin Chance'", "'% 阵营币获取概率'"),
    ("'% Faction Coin Chance'", "'% 阵营币获取概率'"),
    ("' Tax Collections (This Era)'", "' 次征税（本纪元）'"),
    ("' Tax Collection Casts (This Era)'", "' 次征税施放（本纪元）'"),
    ("' Royal Exchanges'", "' 次皇家贸易令'"),
    ("' Maximum Mana this Reincarnation'", "' 法力上限（本次重生）'"),
    ("' Max Assistants This Reincarnation'", "' 个助手（本次重生最大值）'"),
    ("' Mana Produced (This Era)'", "' 产生的法力（本纪元）'"),
    ("' Faction Coins found (this Era)'", "' 阵营币（本纪元找到）'"),
    ("' Faction Coins found'", "' 阵营币（找到）'"),
    ("' Evil Spells cast (This Reincarnation)'", "' 次邪恶法术（本次重生）'"),
    ("' Evil Spells (This Era)'", "' 次邪恶法术（本纪元）'"),
    ("' Clicks This Reincarnation'", "' 次点击（本次重生）'"),
    ("' Clicks (This Era)'", "' 次点击（本纪元）'"),
    ("' Base Assistants'", "' 个基础助手'"),
    ("' Gems'", "' 宝石'"),
    ("'% individual Royal Exchange Bonus'", "'% 单项皇家贸易令加成'"),
    ("' individual Royal Exchange Bonus'", "' 单项皇家贸易令加成'"),
    ("' Research Budget Spent'", "' 研究点数已花费'"),
    ("' Excavation Resets this Era'", "' 次考古重置（本纪元）'"),
    ("' Excavation Resets (This Era)'", "' 次考古重置（本纪元）'"),
    ("' Consecutive Days logged in'", "' 天连续登录'"),
    ("' Combo Strike Counter'", "' 连击计数'"),
    ("' Buildings (Multipliers do NOT count)'", "' 个建筑（倍数不算）'"),
    ("' Assistants'", "' 个助手'"),
    ("' Alchemy Research Points'", "' 炼金学研究点数'"),
    ("'Level ' + Math.ceil(value) + ' total lineages'", "'世系总等级 ' + Math.ceil(value)"),
    ("'Level ' + Math.ceil(value) + ' Druid Lineage'", "'德鲁伊世系 ' + Math.ceil(value) + ' 级'"),
    ("'At least ' + util.render.time(value) + ' activity time (all time) for each of these spells: Fairy Chanting, Hellfire Blast and Brainwave'",
     "'仙灵吟唱、地狱火冲击、脑波共振的总生效时间都至少 ' + util.render.time(value)"),
]
# 「value + ' Farm' + (value>1?'s':'')」这种建筑/法术次数
ARTIFACT_COUNT = re.compile(r"""' ([A-Z](?:[\w ]|\\')+?)' \+ \(value ?> ?1 ?\? ?'s' ?: ?''\)""")
ARTIFACT_PLAIN = re.compile(r"""\+ ?' ([A-Z][A-Za-z' ]+?)';""")


def patch_artifacts(s, tr):
    """把 artifacts.js 里给人看的英文换成中文（只动字符串字面量）"""
    for a, b in ARTIFACT_TEXT:
        s = s.replace(a, b)

    def count(m):
        en = m.group(1).replace("\\'", "'")
        cast = en.endswith(' Cast')
        zh = tr(en[:-5] if cast else PLURAL.get(en + 's', en))
        if not zh:
            return m.group(0)
        return "' 次%s施放'" % zh if cast else "' 个%s'" % zh
    s = ARTIFACT_COUNT.sub(count, s)

    def plain(m):
        zh = tr(PLURAL.get(m.group(1), m.group(1)))
        return "+ ' 个%s';" % zh if zh else m.group(0)
    return ARTIFACT_PLAIN.sub(plain, s)
