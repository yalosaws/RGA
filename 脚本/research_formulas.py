"""从游戏客户端代码提取每项研究的效果公式，翻译成中文，存成 资料/研究公式（客户端）.json。

用法：python -X utf8 脚本/research_formulas.py
先跑 readable_client.py 生成 build/installed-as3-named（换回原名的 AS3）。
每项研究类里的效果函数（getBuildingMultiplier 等）一般只有一句 return，这里解析成语法树再翻成中文；
效果不在研究类里、或者写成多行的，在 MANUAL 里按代码手写（注明出处）。
统计口径：游戏的统计分三段——本局（这次退位以来）、本R 之前几局、之前几个 R。函数默认算到本R，参数切换「只算本局」「加上之前的 R」。
"""
import glob
import html
import json
import os
from pathlib import Path
import re
import sys

ROOT = Path(__file__).resolve().parent.parent
SRC = ROOT / 'build/installed-as3-named/scripts'
OUT = ROOT / '资料/研究公式（客户端）.json'

ALIGN = ['中立', '善良', '邪恶', '中立', '秩序', '混沌', '平衡']
FACTION = ['仙灵', '精灵', '天使', '地精', '亡灵', '恶魔', '泰坦', '德鲁伊', '无面者', '矮人', '卓尔', '佣兵', '龙族', '执政官', '巨灵', '永衡族']
# 直接用编号读的统计（名字取自游戏统计面板和用到它的研究描述）
STAT = {1: '时间', 2: '善良立场时间', 3: '邪恶立场时间', 14: '平衡立场时间', 36: '混沌立场时间', 48: '秩序立场时间',
        40: '施法次数', 54: '亡灵时间', 58: '无面者时间', 96: '助手数', 97: '有法术生效的时间',
        102: '获得的红宝石', 104: '考古重置次数', 133: '魔上限', 135: '免费考古重置次数', 146: '回魔', 155: '连击计数',
        156: '宏大平衡目标数', 39: '时间'}
MAXSTAT = {40, 96, 133, 146, 155, 156, 39}   # 这些统计记的是单局最高值
# 阵营时间：Utilities.getTimeConstant(阵营) = 50 + 阵营编号；龙族、执政官、巨灵、永衡族另有编号
for _k, _n in enumerate(FACTION):
    STAT[{12: 79, 13: 139, 14: 140, 15: 141}.get(_k, 50 + _k)] = _n + '时间'

METHOD = {
    'getProductionMultiplier': '所有建筑产能', 'getBuildingMultiplier': '建筑产能', 'getBuildingMultiplier_special': '建筑产能',
    'getAssistantsNumMultiplier': '助手数量', 'getAssistantsNumBonus': '助手数量', 'getAssistantsMultiplier': '助手产量',
    'getFCCChanceMultiplier': 'fc 获得率（乘算）', 'getFCCChanceBonus': 'fc 获得率',
    'getManaRegenBonus': '回魔', 'getManaRegenMultiplier': '回魔（乘算）',
    'getMaxManaBonus': '魔上限', 'getMaxManaMultiplier': '魔上限（乘算）',
    'getGemBonus': '宝石加成', 'getGemMultiplier': '宝石获得量', 'getGemMultiplier_special': '宝石获得量',
    'getOfflineMultiplier': '离线产能', 'getOfflineSPCast': '离线施法',
    'getSpellDurationMultiplier': '法术持续时间', 'getSpellDurationBonus': '法术持续时间', 'getSpellDurationFixed': '法术持续时间',
    'getClickMultiplier': '点击产量', 'getNumClicksMultiplier': '点击次数', 'getNumClicks': '点击次数',
    'getExchangeBonus': '皇家贸易令加成', 'getExchangeMultiplier': '皇家贸易令加成',
    'getSpellCostBonus': '法术消耗', 'getSpellCostMultiplier': '法术消耗', 'getCostReduction': '费用',
    'getElvenChanceBonus': '精灵幸运触发率', 'getCallToArmsBonus': '战争号令',
    'getGoodBonus': '善良建筑', 'getEvilBonus': '邪恶建筑', 'getOrderBonus': '秩序建筑', 'getChaosBonus': '混沌建筑',
    'getGoodOrderBonus': '善良+秩序建筑', 'getChaosEvilBonus': '混沌+邪恶建筑',
    'getSpecificBonus': '', 'getSpecificBonus2': '', 'getSpecificBonus_special': '',
}
SKIP = {'getDescription', 'getHint', 'condition', 'progress', 'spoilerCondition', 'purchasable', 'isCross', 'isQuestion',
        'isExclamation', 'onPurchase', 'update', 'getBloodline', 'getUnion', 'getSet', 'applyBonus'}


def latest_tsv():
    files = sorted(glob.glob(str(ROOT / '资料/汉化文本（PC_*）.tsv')), key=lambda p: re.search(r'PC_(\d+)', p)[1])
    zh = {}
    for line in open(files[-1], encoding='utf-8', errors='replace'):
        en, _, cn = line.rstrip('\n').partition('\t')
        en = re.split(r'\x00|\\0', en)[0]   # 单复数用 \0 隔开
        if cn and en not in zh:
            zh[en] = re.split(r'\x00|\\0', cn)[0]
    return zh


ZH = latest_tsv()
FILES = {}
for f in SRC.rglob('*.as'):
    # 按文件里声明的类名登记（改名后撞名的文件名会带 _2 之类的后缀）
    m = re.search(r'public (?:final )?(?:dynamic )?(?:class|interface) (\S+)', f.read_text(encoding='utf-8'))
    FILES.setdefault(m[1] if m else f.stem, f)
_names = {}


def class_name(cls):
    """类 → 中文名：构造函数里的英文名（字段 §1i§）查汉化文本；建筑名用 getBuildingName 的写法同样落到这里。"""
    if cls in _names:
        return _names[cls]
    en = None
    f = FILES.get(cls)
    if f:
        m = re.search(r'§1i§ = (?:_\()?"((?:[^"\\]|\\.)*)"', f.read_text(encoding='utf-8'))
        en = m[1].replace("\\'", "'") if m else None
    if not en:
        en = re.sub(r'(?<=[a-z])(?=[A-Z])', ' ', cls)
    _names[cls] = ZH.get(en, en)
    return _names[cls]


# ---------- 表达式解析 ----------
TOK = re.compile(r'\s*(?:(\d+\.\d*(?:e[+-]?\d+)?|\.\d+|\d+(?:e[+-]?\d+)?)|(§[^§]*§|[A-Za-z_$][\w$]*)|"((?:[^"\\]|\\.)*)"|(===|!==|==|!=|<=|>=|&&|\|\||[-+*/%<>!?:()\[\],.]))')


def tokenize(s):
    out, i = [], 0
    s = s.strip()
    while i < len(s):
        m = TOK.match(s, i)
        if not m or m.end() == i:
            raise ValueError('无法解析：' + s[i:i + 30])
        i = m.end()
        if m[1]:
            out.append(('num', float(m[1])))
        elif m[2]:
            out.append(('id', m[2]))
        elif m[3] is not None:
            out.append(('str', m[3]))
        else:
            out.append(('op', m[4]))
    return out


class Parser:
    BIN = [('||',), ('&&',), ('==', '!=', '===', '!=='), ('<', '>', '<=', '>='), ('+', '-'), ('*', '/', '%')]

    def __init__(self, s):
        self.t, self.i = tokenize(s), 0

    def peek(self, v=None):
        if self.i >= len(self.t):
            return None
        k = self.t[self.i]
        return k if v is None or k == ('op', v) else None

    def take(self, v=None):
        k = self.peek(v)
        if k is None:
            raise ValueError('缺少 %s' % v)
        self.i += 1
        return k

    def parse(self):
        e = self.cond()
        if self.i != len(self.t):
            raise ValueError('多余的内容')
        return e

    def cond(self):
        c = self.binary(0)
        if self.peek('?'):
            self.take('?')
            a = self.cond()
            self.take(':')
            return ('cond', c, a, self.cond())
        return c

    def binary(self, level):
        if level == len(self.BIN):
            return self.unary()
        left = self.binary(level + 1)
        while self.peek() and self.peek()[0] == 'op' and self.peek()[1] in self.BIN[level]:
            op = self.take()[1]
            left = ('bin', op, left, self.binary(level + 1))
        return left

    def unary(self):
        if self.peek('!') or self.peek('-'):
            return ('un', self.take()[1], self.unary())
        return self.postfix(self.atom())

    def atom(self):
        k = self.take()
        if k[0] in ('num', 'str'):
            return k
        if k[0] == 'id':
            return ('name', k[1])
        if k == ('op', '('):
            e = self.cond()
            self.take(')')
            return e
        raise ValueError('意外的 %s' % (k,))

    def postfix(self, e):
        while True:
            if self.peek('.'):
                self.take('.')
                e = ('member', e, self.take()[1])
            elif self.peek('('):
                self.take('(')
                args = []
                while not self.peek(')'):
                    args.append(self.cond())
                    if self.peek(','):
                        self.take(',')
                self.take(')')
                e = ('call', e, args)
            elif self.peek('['):
                self.take('[')
                idx = self.cond()
                self.take(']')
                e = ('index', e, idx)
            else:
                return e


def dotted(e):
    if e[0] == 'name':
        return e[1]
    if e[0] == 'member':
        d = dotted(e[1])
        return d and d + '.' + e[2]
    return None


# ---------- 翻成中文 ----------
class Unknown(Exception):
    pass


def num(v):
    if v >= 1e300:
        return '∞'
    if v == int(v) and abs(v) < 1e15:
        return '{:d}'.format(int(v))
    return ('%.6g' % v).replace('e+', 'e')


def flag(args, i, default=False):
    if i >= len(args):
        return default
    a = args[i]
    if a == ('name', 'true'):
        return True
    if a == ('name', 'false'):
        return False
    raise Unknown('参数不是常量')


def scope(this_game, all_r=False):
    """统计口径：本局 / 本R / 含之前的 R"""
    return '本局' if this_game else ('全部' if all_r else '本R')


def cls_arg(a):
    d = dotted(a)
    if d and d.endswith('.id'):
        return class_name(d[:-3])
    raise Unknown('不是 X.id：%s' % (a,))


def int_arg(a):
    if a[0] == 'num':
        return int(a[1])
    if a[0] == 'un' and a[1] == '-' and a[2][0] == 'num':
        return -int(a[2][1])
    raise Unknown('不是数字')


def time_of(a):
    """getTimeStat 的第一个参数：统计编号，或 getTimeConstant(阵营) 算出的阵营时间"""
    if a[0] == 'call' and dotted(a[1]) == 'Utilities.getTimeConstant':
        x = a[2][0]
        if dotted(x) == 'Game.§-!^§':
            return '当前阵营时间'
        if x[0] == 'call' and dotted(x[1]) == 'Utilities.getAlignmentFaction' and \
                all(y[0] == 'call' and dotted(y[1]) == 'Utilities.invertAlignment' for y in x[2]):
            return '相反立场对应的阵营的时间'
        raise Unknown('未知的阵营时间')
    return STAT[int_arg(a)]


# 公式运行时所在的类，以及函数参数的含义（param1 这类在调用处才知道是什么）
CTX = {'cls': None, 'params': {}}
PARAMS = {
    # Formulas.getSpellDuration 里按法术的要求传进来：阵营法术是那个阵营的本R时间，立场法术是那个立场的本R时间
    ('DivineScriptures', 'getSpecificBonus_special'): {'param1': '该法术所需阵营（或立场）的本R时间'},
}
_statics = {}


def class_static(cls, field):
    """类里 `public static var 字段:Number = 数字;` 的初始值（游戏里不改的常量）"""
    if cls not in _statics:
        f = FILES.get(cls)
        text = f.read_text(encoding='utf-8') if f else ''
        _statics[cls] = {m[1]: float(m[2]) for m in re.finditer(
            r'public static (?:var|const) (§[^§]*§|\w+):(?:Number|int|uint) = (-?[\d.]+(?:e[+-]?\d+)?);', text)}
    return _statics[cls].get(field)


def local_function(name):
    """本类里只有一句 return 的静态函数，调用处直接展开"""
    f = FILES.get(CTX['cls'])
    for n, a, t, b in FN.findall(f.read_text(encoding='utf-8')) if f else []:
        m = re.fullmatch(r'return ([^;]*);', b.strip(), re.S)
        if n == name and m:
            params = [p.split(':')[0].strip() for p in a.split(',') if p.strip()]
            return params, Parser(m[1]).parse()
    return None


def substitute(e, env):
    if e[0] == 'name' and e[1] in env:
        return env[e[1]]
    if isinstance(e, tuple):
        return tuple(substitute(x, env) if isinstance(x, tuple) else
                     [substitute(y, env) for y in x] if isinstance(x, list) else x for x in e)
    return e


def alignment_time(args):
    k = int_arg(args[0])
    return '%s%s立场时间' % (scope(flag(args, 2), flag(args, 1)), ALIGN[k])


HELPER = {
    'Utilities.getTimeStat': lambda a: scope(flag(a, 2), flag(a, 1)) + time_of(a[0]),
    'Utilities.getStatMax': lambda a: '单局最高' + STAT[int_arg(a[0])] + ('（全部）' if flag(a, 1) else '（本R）'),
    'Utilities.getFullStat': lambda a: '全部' + STAT[int_arg(a[0])],
    'Utilities.getAlignmentTime': alignment_time,
    'Utilities.getMinMaxAlignmentTimeStat': lambda a: '%s用得%s的立场的时间' % (scope(flag(a, 2), flag(a, 1)), '最少' if flag(a, 0) else '最多'),
    'Utilities.getMinMaxFactionTimeStat': lambda a: '%s用得%s的阵营的时间' % (scope(flag(a, 2), flag(a, 1)), '最少' if flag(a, 0) else '最多'),
    'Utilities.getFactionTime': lambda a: ('全部' if flag(a, 0) else '本R') + '当前阵营时间',
    'Utilities.getOfflineTime': lambda a: scope(flag(a, 0)) + '离线时间',
    'Utilities.getManaProduced': lambda a: scope(flag(a, 0), flag(a, 1)) + '产生的法力',
    'Utilities.getClicks': lambda a: scope(flag(a, 0), flag(a, 1)) + '点击次数',
    'Utilities.getFactionCoinTotal': lambda a: scope(flag(a, 0), flag(a, 1)) + ' fc 总数',
    'Utilities.getFactionCoin': lambda a: '本局' + ['仙灵', '精灵', '天使', '地精', '亡灵', '恶魔', '', '', '', '', '', '', '佣兵'][int_arg(a[0]) - 6 if int_arg(a[0]) < 12 else 12] + ' fc',
    'Utilities.getAllSpellCastStat': lambda a: scope(flag(a, 0), flag(a, 1)) + '施法次数',
    'Utilities.getAllSpellCast': lambda a: scope(flag(a, 2), flag(a, 1)) + ('' if int_arg(a[0]) == -1 else ALIGN[int_arg(a[0])] + '法术') + '施法次数' if a else '本R施法次数',
    'Utilities.getSpellCast': lambda a: scope(flag(a, 2), flag(a, 1)) + cls_arg(a[0]) + '施放次数',
    'Utilities.getCastTime': lambda a: scope(flag(a, 2, True), flag(a, 1)) + cls_arg(a[0]) + '生效时间',
    'Utilities.getSpellDuration': lambda a: cls_arg(a[0]) + '持续时间（秒）',
    'Utilities.getFactionSpellCast': lambda a: scope(flag(a, 0)) + '阵营法术施放次数',
    'Utilities.getFactionSpellCastTime': lambda a: scope(flag(a, 0)) + '阵营法术生效时间',
    'Utilities.getMinMaxSpellCastTime': lambda a: '%s生效时间%s的法术的生效时间' % (scope(flag(a, 1, False) is False and not flag(a, 1)), '最短' if flag(a, 0) else '最长') if False else
        ('%s生效时间%s的法术的生效时间' % ('本局' if flag(a, 1) else '本R', '最短' if flag(a, 0) else '最长')),
    'Utilities.getMinMaxSpellDuration': lambda a: '持续时间%s的法术的持续时间（秒）' % ('最短' if flag(a, 0) else '最长'),
    'Utilities.getActiveSpells': lambda a: '生效中的法术数（含阶层）',
    'Utilities.getAssistantsNum': lambda a: '助手数',
    'Utilities.getBuildingNumber': lambda a: ('' if not a or int_arg(a[0]) == -1 else ALIGN[int_arg(a[0])]) + '建筑总数',
    'Utilities.getNonUniqueBuildingNumber': lambda a: '非独特建筑总数',
    'Utilities.getUniqueBuildingNumber': lambda a: '独特建筑总数',
    'Utilities.getArtifact': lambda a: '遗物数',
    'Utilities.getExcavation': lambda a: '考古深度',
    'Utilities.getTotalExcavation': lambda a: scope(flag(a, 0, True), flag(a, 1)) + '考古次数',
    'Utilities.getExchange': lambda a: '本局皇家贸易令次数',
    'Utilities.getFactionCoinChance': lambda a: 'fc 获得率（%）',
    'Formulas.getFactionCoinChance': lambda a: 'fc 获得率（%）',
    'Utilities.getLineageMin': lambda a: '最低世系等级',
    'Utilities.getLineageTotal': lambda a: '世系等级总和',
    'Utilities.getDifferentLegacies': lambda a: '不同阵营的传承数',
    'Utilities.getResearchValue': lambda a: '已花研究点数',
    'Utilities.getManaPerTick': lambda a: '每帧回魔',
    'Utilities.getMaxMana': lambda a: '魔上限',
    'Utilities.getAutoClickNum': lambda a: '⌊' + render(a[0])[0] + '⌋',
    'Formulas.getTrophyNum': lambda a: '奖杯数',
    'Formulas.getTotalFactionUpgrades': lambda a: '其他阵营已买升级数',
    'Formulas.getExchangeBonus': lambda a: '皇家贸易令加成（%）',
    'Formulas.getOfflineBonus': lambda a: '离线产能加成',
    'Formulas.getGemMultiplier': lambda a: '宝石获得量倍数',
    'Formulas.getProductionPerSecond': lambda a: cls_arg(a[0]) + '每秒产量' if a else '每秒产量',
    'Game.getBuildingNum': lambda a: cls_arg(a[0]) + '数量',
    'Game.getUniqueMax': lambda a: cls_arg(a[0]) + '最高等级',
}
VALUE = {
    'Game.trophyNum': '奖杯数', 'Game.maxTrophy': '奖杯总数', 'Game.ascension': 'Ascension 次数',
    'Game.reincarnation': '重生次数', 'Formulas.reincarnation': '重生次数', 'Utilities.gems': '宝石数',
    'Utilities.resource': '金币', 'Game.artifactNum': '遗物数', 'Game.excavation': '考古深度',
    # Formulas.getTimeWarpBonus 计算时间跳跃收益时临时设置，平时为 0
    'Formulas.§2!P§': '时间跳跃时长', 'Formulas.§ !O§': '时间跳跃获得的 fc',
}
# 优先级：越大越紧
P_COND, P_OR, P_AND, P_EQ, P_CMP, P_ADD, P_MUL, P_UN, P_ATOM = range(9)
BINP = {'||': P_OR, '&&': P_AND, '==': P_EQ, '!=': P_EQ, '===': P_EQ, '!==': P_EQ, '<': P_CMP, '>': P_CMP,
        '<=': P_CMP, '>=': P_CMP, '+': P_ADD, '-': P_ADD, '*': P_MUL, '/': P_MUL, '%': P_MUL}
SHOW = {'*': ' × ', '/': ' ÷ ', '+': ' + ', '-': ' − ', '%': ' mod ', '<': ' < ', '>': ' > ', '<=': ' ≤ ', '>=': ' ≥ ',
        '==': ' = ', '===': ' = ', '!=': ' ≠ ', '!==': ' ≠ ', '&&': ' 且 ', '||': ' 或 '}


def var(s):
    return '<i>' + html.escape(s) + '</i>'


def stat_pair(e):
    """Game.§5!V§[n] + Game.§=y§[n] → 本R统计 n；Math.max(两者) → 单局最高"""
    if e[0] == 'bin' and e[1] == '+':
        a, b = e[2], e[3]
        if a[0] == b[0] == 'index' and dotted(a[1]) == 'Game.§5!V§' and dotted(b[1]) == 'Game.§=y§' and a[2] == b[2]:
            return int_arg(a[2])
    return None


def render(e):
    kind = e[0]
    if kind == 'num':
        return num(e[1]), P_ATOM
    if kind == 'cond':
        c, _ = render(e[1])
        a, _ = render(e[2])
        b, _ = render(e[3])
        if b == '0':
            return '%s（%s 时，否则为 0）' % (a, c), P_COND
        return '%s（%s 时），否则 %s' % (a, c, b), P_COND
    if kind == 'un':
        x, p = render(e[2])
        x = x if p >= P_UN else '(' + x + ')'
        return ('不是 ' if e[1] == '!' else '−') + x, P_UN
    if kind == 'bin':
        n = stat_pair(e)
        if n is not None:
            return var(('单局最高' if n in MAXSTAT else '本R') + STAT[n]), P_ATOM
        op, p = e[1], BINP[e[1]]
        if op == '*' and e[3] == ('num', 30.0) and e[2][0] == 'call' and dotted(e[2][1]) == 'Utilities.getManaPerTick':
            return var('每秒回魔'), P_ATOM
        cmp = enum_compare(e)
        if cmp:
            return cmp, P_EQ
        a, pa = render(e[2])
        b, pb = render(e[3])
        a = a if pa >= p else '(' + a + ')'
        b = b if pb > p or (pb == p and op in '+*') else '(' + b + ')'
        return a + SHOW[op] + b, p
    if kind in ('name', 'member'):
        d = dotted(e)
        if d in VALUE:
            return var(VALUE[d]), P_ATOM
        if d in CTX['params']:
            return var(CTX['params'][d]), P_ATOM
        if d and '.' in d and class_static(*d.rsplit('.', 1)) is not None:
            return num(class_static(*d.rsplit('.', 1))), P_ATOM
        if d and '.' not in d and class_static(CTX['cls'], d) is not None:
            return num(class_static(CTX['cls'], d)), P_ATOM
        if d in ('Game.§,!Y§',):
            return var('当前立场'), P_ATOM
        if d in ('Game.§9!m§',):
            return var('当前第二立场'), P_ATOM
        m = re.fullmatch(r'Game\.getSpell\((.+)\)\.tier', d or '')
        if e[0] == 'member' and e[2] == 'tier' and e[1][0] == 'call' and dotted(e[1][1]) == 'Game.getSpell':
            return var(cls_arg(e[1][2][0]) + '阶层'), P_ATOM
        raise Unknown('未知名字：%s' % (d or e,))
    if kind == 'index':
        d = dotted(e[1])
        if d in ('Game.§5!V§', 'Game.§=y§'):
            n = int_arg(e[2])
            return var(('本局' if d == 'Game.§5!V§' else '本R之前几局') + ('最高' if n in MAXSTAT else '') + STAT[n]), P_ATOM
        raise Unknown('未知下标：%s' % (d,))
    if kind == 'call':
        fn, args = dotted(e[1]), e[2]
        if fn == 'Math.pow':
            b, pb = render(args[0])
            x, _ = render(args[1])
            b = b if pb >= P_ATOM else '(' + b + ')'
            return '%s<sup>%s</sup>' % (b, x), P_ATOM
        if fn == 'Math.log':
            return 'ln(%s)' % render(args[0])[0], P_ATOM
        if fn == 'Math.floor':
            return '⌊%s⌋' % render(args[0])[0], P_ATOM
        if fn == 'Math.ceil':
            return '⌈%s⌉' % render(args[0])[0], P_ATOM
        if fn == 'Math.sqrt':
            return '√(%s)' % render(args[0])[0], P_ATOM
        if fn in ('Math.max', 'Math.min'):
            if fn == 'Math.max' and len(args) == 2 and all(a[0] == 'index' for a in args) and \
                    [dotted(a[1]) for a in args] == ['Game.§5!V§', 'Game.§=y§'] and args[0][2] == args[1][2]:
                return var('本R单局最高' + STAT[int_arg(args[0][2])]), P_ATOM
            return '%s(%s)' % (fn[5:], ', '.join(render(a)[0] for a in args)), P_ATOM
        if fn in HELPER:
            return var(HELPER[fn](args)), P_ATOM
        if fn == 'Utilities.applyTimeBonuses':   # 时间统计本来就带这一步，原样显示里面的式子
            return render(args[0])
        local = fn and '.' not in fn and local_function(fn)
        if local:
            params, body = local
            return render(substitute(body, dict(zip(params, args))))
        raise Unknown('未知函数：%s' % fn)
    raise Unknown('未知结构：%s' % kind)


def enum_compare(e):
    """当前立场 / 阵营 == 编号 → 中文"""
    if e[1] not in ('==', '!=', '===', '!==') or e[3][0] != 'num':
        return None
    d, k = dotted(e[2]), int(e[3][1])
    neg = e[1] in ('!=', '!==')
    if d == 'Game.§,!Y§':
        return '%s立场%s%s' % ('当前', '不是' if neg else '是', ALIGN[k])
    if d == 'Game.§9!m§':
        return '第二立场%s%s' % ('不是' if neg else '是', ALIGN[k])
    if d == 'Game.§-!^§':
        return '阵营%s%s' % ('不是' if neg else '是', FACTION[k])
    return None


# ---------- 单位：看描述里怎么显示这个值 ----------
STRING = re.compile(r'"(?:[^"\\]|\\.)*"')


def translations(desc):
    """描述里每个 _("模板", 参数…) → (模板, [参数])，按括号配对切参数"""
    for m in re.finditer(r'_\("((?:[^"\\]|\\.)*)"', desc):
        i, depth, cur, args = m.end(), 1, '', []
        while i < len(desc) and depth:
            ch = desc[i]
            s = STRING.match(desc, i) if ch == '"' else None
            if s:
                cur += s[0]
                i += len(s[0])
                continue
            if ch in '([':
                depth += 1
            elif ch in ')]':
                depth -= 1
            if depth == 1 and ch == ',':
                args.append(cur)
                cur = ''
            elif depth:
                cur += ch
            i += 1
        args.append(cur)
        yield m[1], [a.strip() for a in args[1:]]


def unit_of(desc, method):
    """返回 (单位, Ascension 折算起点)。bonusToText(值, n) 从 An 起按 Ascension 折算百分比，n 默认 1。"""
    for tpl, args in translations(desc):
        for k, a in enumerate(args):
            if not re.search(r'\b%s\(' % method, a):
                continue
            mark = '%%%d' % k
            after = tpl[tpl.find(mark) + len(mark):] if mark in tpl else ''
            unit = '%' if after.startswith('%') else ('秒' if 'timeToText' in a else '')
            b = re.search(r'bonusToText\(%s\(\)\s*(?:,\s*(\d+))?' % method, a)
            return unit, int(b[1] or 1) if b else None
    return '', None


FN = re.compile(r'(?:override )?public (?:static )?function (?:get )?(\w+)\(([^)]*)\)\s*:\s*(\w+)\s*\{(.*?)\n      \}', re.S)


def extract(entry):
    f = FILES.get(entry['class'])
    if not f:
        return None, ['找不到类文件']
    text = f.read_text(encoding='utf-8')
    fns = FN.findall(text)
    desc = next((b for n, a, t, b in fns if n == 'getDescription'), '')
    rows, problems = [], []
    CTX['cls'] = entry['class']
    for name, args, ret, body in fns:
        if name in SKIP or name == entry['class'] or ret not in ('Number', 'int', 'uint'):
            continue
        CTX['params'] = PARAMS.get((entry['class'], name), {})
        body = body.strip()
        m = re.fullmatch(r'return ([^;]*);', body, re.S)
        if not m:
            problems.append('%s 是多行代码' % name)
            continue
        unit, asc = unit_of(desc, name)
        unit = '%' if asc else unit   # bonusToText 显示的都是百分比
        try:
            tree = Parser(m[1]).parse()
            cond = None
            if tree[0] == 'cond':   # 条件写在单位后面：值 单位（条件 时，否则 …）
                cond = render(tree[1])[0], render(tree[3])[0]
                tree = tree[2]
            expr, _ = render(tree)
        except (Unknown, ValueError, KeyError, IndexError) as exc:
            problems.append('%s：%s' % (name, exc))
            continue
        r = dict(method=name, label=METHOD.get(name, ''), html=expr, unit=unit, asc=asc,
                 source='%s.%s' % (entry['class'], name))
        if cond:
            r['when'] = '%s 时%s' % (cond[0], '，否则为 0' if cond[1] == '0' else '，否则 ' + cond[1])
        rows.append(r)
    return rows, problems


def row(label, expr, unit='', asc=None, source='', note=''):
    """手写公式：expr 里 {名字} 写成变量（斜体），^(x) 写成上标"""
    h = html.escape(expr)
    h = re.sub(r'\{([^}]+)\}', r'<i>\1</i>', h)
    h = re.sub(r'\^\(([^)]+)\)', r'<sup>\1</sup>', h)
    out = dict(method='', label=label, html=h, unit=unit, asc=asc, source=source)
    if note:
        out['note'] = note
    return out


# 效果不在研究类里、或者写成多行的：按代码手写，source 写实际出处。
# 「价格增长率」是每买一个价格乘的系数；建筑「档位」是游戏里的 tier（农场 0 档，越高级越大）。
# 乘算的产能写成百分比：代码 ×(1 + 0.001×X) 记作 0.1×X %。
MANUAL = {
    'E50': [row('农场价格增长率', '−0.02', source='Formulas.getBuildingCostReal')],
    'E135': [row('独特建筑价格增长率', '−0.01', source='Formulas.getBuildingCostReal')],
    'E145': [row('征税奖励', '+30', '秒的产量', source='TaxCollection.getSpecificBonus')],
    'W180': [row('战争号令计算的建筑数', '× 15', source='CallToArms.getBuildingNumber')],
    'S375': [row('脑波提供的临时助手', '1 + 0.25 × {脑波已生效秒数（含起步时间）}^(1.5)', source='Brainwave.onUpdate')],
    'W400': [row('第 9 档及以上建筑的数量', '× 2', source='Utilities.applyBuildingBonuses')],
    'S550': [row('建筑产能（乘算）', '0.1 × {本局产生的法力}^(0.45) × (12 − {建筑档位})^(2)', '%', source='Formulas 建筑产能')],
    'D1275': [row('独特建筑产能（乘算）', '0.3 × {同种建筑数量}', '%', source='Formulas 建筑产能'),
              row('非独特建筑产能（乘算）', '30 × {同种建筑数量}', '%', source='Formulas 建筑产能')],
    'E1325': [row('皇家贸易令价格增长率', '−0.025', source='FactionExchangeUpgrade.costMultiplier')],
    'S1275': [row('法术阶层价格', '价格指数 1 + 0.6 × {阶层} 改成 1 + 0.5 × {阶层}', source='Formulas.getSpellCost',
                  note='征税（配圆桌）、扭曲虚空按 3^(阶层) 涨价的，底数改成 2.5')],
    'W3150': [row('建筑产能（乘算）', '0.5 × (60 + {用得最少的立场编号})^(0.75) × (12 − {建筑档位})^(2.15)', '%', source='Formulas 建筑产能',
                  note='代码里加的是立场编号（1–6），不是描述说的时间（已对照原始指令），效果基本只随建筑档位变')],
    'A5625': [row('法术消耗', '−max(10, min(90, ln(1 + {持续时间} ÷ {基础持续时间})^(2)))', '%', source='Formulas.getSpellCost',
                  note='只对有持续时间的法术')],
    'E5125': [row('建筑产能', '(3 − 0.25 × {建筑档位})^(4) × {建筑总数}^(0.6)', '%', 4, source='Formulas 建筑产能')],
    'C11125': [row('建筑产能（乘算）', '1.3 × {该建筑数量}^(0.7)', '%', source='Formulas 建筑产能')],
    'C12250': [row('fc 获得率', '1.5 × ({脑波已生效秒数（含起步时间）} ÷ 60)^(2.25)', '%', source='Brainwave.onUpdate')],
    'S11875': [row('其他法术消耗', '× 0.15', source='Formulas.getSpellCost', note='神圣之光和仙灵吟唱都生效时')],
    'E13125': [row('皇家贸易令、考古、建筑价格增长率', '−0.02', source='Formulas.getBuildingCostReal 等')],
    'C200': [row('独特建筑产能', '25 + 1.25 × {该独特建筑所属立场的本R时间}^(0.75)', '%', source='CraftsmanshipJourneymen.getBuildingMultiplier_special',
                 note='独特建筑属于两个立场时，两段时间相加')],
    'C425': [row('宝石加成（乘算）', '0.4 × {本R和当前立场不同的立场时间}^(0.6)', '%', source='CraftsmanshipDistribution.getGemMultiplier_special',
                 note='善良、邪恶、中立三者里去掉当前立场；A2 起有第二立场时，再按秩序、混沌、平衡算一遍加上')],
}


def main():
    research = json.loads((ROOT / '资料/客户端研究对照.json').read_text(encoding='utf-8'))
    out, report = {}, {}
    for entry in research:
        rows, problems = extract(entry)
        if entry['code'] in MANUAL:
            rows = MANUAL[entry['code']]
            problems = []
        if rows:
            out[entry['code']] = rows
        if problems or not rows:
            report[entry['code'] + ' ' + entry['name']] = problems or ['没有数值效果函数']
    OUT.write_text(json.dumps(dict(
        note='由 脚本/research_formulas.py 从游戏客户端（build/installed-as3-named）提取；html 是中文公式，unit 是游戏描述里的单位，asc 是百分比开始按 Ascension 折算的 A 数',
        formulas=out), ensure_ascii=False, indent=1) + '\n', encoding='utf-8')
    print('有公式', len(out), '／', len(research))
    for k, v in report.items():
        print(' ', k, '：', '；'.join(v))


if __name__ == '__main__':
    main()
