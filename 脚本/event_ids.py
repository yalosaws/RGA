"""从游戏客户端（readable_client.py 输出的原名 AS3）导出活动页标记存档要用的编号，存成 资料/活动编号（客户端4.3.14）.json。

- up / tr：升级、奖杯的英文名（只留字母数字、小写）→ 编号列表。升级和奖杯各是一套编号，同名的分开放。
- quest：任务系列英文名 → 各阶段的奖杯编号（100000 + 系列编号 × 100 + 第几阶段，从 0 数，见 Trophy.initialize）。
- season：活动编号（存档的 season，即 PlayFab.season）→ 英文名和资源格（存档 eventResources 下标 special、累计统计 stat），取自 EventPanel.setUpEvent。
- monster：万圣节怪物（奖杯）→ 等级用的统计 / 资源格，以及各称号的等级门槛（getMonsterLevel、getName）。

游戏更新后先跑 readable_client.py，再跑：python 脚本/event_ids.py
"""
import glob
import json
import os
import re

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SRC = os.path.join(ROOT, 'build', 'installed-as3-named', 'scripts')
OUT = os.path.join(ROOT, '资料', '活动编号（客户端4.3.14）.json')
S = '§'
RID = re.compile(S + '6!Z' + S + r' = (\d+);')
RNM = re.compile(S + '1i' + S + r' = _\("((?:[^"\\]|\\.)*)"\)')


def key(name):
    return re.sub(r'[^a-z0-9]', '', name.replace("\\'", "'").lower())


def main():
    base, ids, names, files = {}, {}, {}, {}
    for f in glob.glob(os.path.join(SRC, '**', '*.as'), recursive=True):
        t = open(f, encoding='utf-8', errors='replace').read()
        m = re.search(r'public class (\S+) extends (\S+)', t)
        if not m:
            continue
        c = m.group(1)
        base[c], files[c] = m.group(2), t
        ctor = re.search(r'public function %s\((.*?)\n      \}' % re.escape(c), t, re.S)
        if ctor:
            i, n = RID.search(ctor.group(1)), RNM.search(ctor.group(1))
            if i:
                ids[c] = int(i.group(1))
            if n:
                names[c] = n.group(1)

    def kind(c):
        for _ in range(30):
            if c in ('Trophy', 'Upgrade'):
                return c
            if c not in base:
                return None
            c = base[c]

    up, tr = {}, {}
    for c, i in ids.items():
        k = kind(c)
        if k and c in names:
            (up if k == 'Upgrade' else tr).setdefault(key(names[c]), []).append(i)

    # 任务系列：GameInit 里 pushTrophy(new QuestX(目标, _("Name %0","n"), ...)) 依次是第 0、1、2… 阶段
    init = open(os.path.join(SRC, 'GameInit.as'), encoding='utf-8', errors='replace').read()
    quest = {}
    for c, n in re.findall(r'pushTrophy\(new (Quest\w+)\([^,]*,_\("((?:[^"\\]|\\.)*?) %0"', init):
        if c in ids:
            q = quest.setdefault(key(n), [])
            q.append(100000 + ids[c] * 100 + len(q))

    # 各活动的资源格（EventPanel.setUpEvent）
    panel = next(t for c, t in files.items() if c == 'EventPanel')
    season = {}
    for blk in re.split(r'else if\(|if\(' + S + r'\+&' + S + r' == 0\)', panel):
        m = re.match(S + r'\+&' + S + r' == (\d+)\)', blk)
        nm = re.search(r'_\("Current Event: %0",_\("([^"]+)"\)\)', blk)
        if not (m and nm):
            continue
        res = [{'special': int(a), 'stat': int(b), 'icon': ic} for a, b, ic in
               re.findall(r'"special":(\d+),\s*"stat":(\d+),\s*"icon":"(\w+)"', blk.split('populateElements')[0])]
        season[m.group(1)] = {'name': nm.group(1), 'res': res}
    season.setdefault('0', {'name': '', 'res': []})

    # 万圣节怪物：getLevel 用 Utilities.getMonsterLevel(统计, 资源格)；称号按等级（getName）
    monster = {}
    for c, t in files.items():
        lv = re.search(r'getMonsterLevel\((\d+),(\d+)\)', t)
        if not (lv and c in ids and kind(c) == 'Trophy'):
            continue
        g = re.search(r'function getName\(\) : String(.*?)\n      \}', t, re.S)
        tiers = []
        if g:
            for op, n, title in re.findall(r'_loc2_ (==|>=) (\d+)\)\s*\{\s*_loc1_ = _\("([^"]+)"\)', g.group(1)):
                tiers.append([key(title), int(n)])
        monster[str(ids[c])] = {'name': names.get(c, c), 'stat': int(lv.group(1)), 'special': int(lv.group(2)), 'tiers': tiers}

    data = {'note': '由 脚本/event_ids.py 从客户端代码导出，名字只留小写字母数字', 'up': up, 'tr': tr, 'quest': quest,
            'season': season, 'monster': monster}
    with open(OUT, 'w', encoding='utf-8') as f:
        json.dump(data, f, ensure_ascii=False, indent=0, sort_keys=True)
    print('升级 %d、奖杯 %d、任务 %d、活动 %d、怪物 %d → %s' % (len(up), len(tr), len(quest), len(season), len(monster), OUT))


if __name__ == '__main__':
    main()
