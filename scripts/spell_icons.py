"""从游戏图集导出法术图标、法术奖杯图标，存到 docs/spell_icons/<key>.png（key = 英文名去掉非字母数字、小写）。
法术页（build_html.build_spells）读这个目录。游戏更新后重跑。

用法：python scripts/spell_icons.py [游戏目录]
图集是 TexturePacker 的 Starling 格式（images/*.png + 同名 .xml）：
  realmgrinderui_new 里的「XxxIcon」是法术图标（50×50），realmgrinder_new0/1 里的「XxxTrophy」是奖杯图标。
"""
import os
import re
import sys

from PIL import Image

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
GAME = sys.argv[1] if len(sys.argv) > 1 else r'D:\steam\steamapps\common\Realm Grinder'
OUT = os.path.join(ROOT, 'docs', 'spell_icons')
TROPHIES = ['Fairy Choir', 'Sun Blessing', "God's Rest", 'Greed Drive', 'True Night', 'Hell Rush', 'Lightning Storm', 'Halls Of Balance',
            'Faceless Overmind', 'Minedwarf', 'Perfect Combo', "Dragon's Roar", 'Chrono Loading', 'Persistent Entropy', 'Reality Crater', 'Coin Pillage']


def key(s):
    return re.sub(r'[^a-z0-9]', '', s.lower())


def sprites(atlas):
    img = Image.open(os.path.join(GAME, 'images', atlas + '.png')).convert('RGBA')
    xml = open(os.path.join(GAME, 'images', atlas + '.xml'), encoding='utf-8').read()
    for m in re.finditer(r'<SubTexture ([^>]*)/>', xml):
        a = dict(re.findall(r'(\w+)="([^"]*)"', m.group(1)))
        x, y, w, h = (int(a[k]) for k in ('x', 'y', 'width', 'height'))
        fw, fh = int(a.get('frameWidth', w)), int(a.get('frameHeight', h))
        out = Image.new('RGBA', (fw, fh))
        out.paste(img.crop((x, y, x + w, y + h)), (-int(a.get('frameX', 0)), -int(a.get('frameY', 0))))
        yield a['name'], out


def main():
    os.makedirs(OUT, exist_ok=True)
    n = 0
    for name, im in sprites('realmgrinderui_new'):
        if name.endswith('Icon') and im.size == (50, 50):
            im.save(os.path.join(OUT, key(name[:-4]) + '.png'), optimize=True)
            n += 1
    want = {key(t) + 'trophy': key(t) for t in TROPHIES}
    for atlas in ('realmgrinder_new0', 'realmgrinder_new1'):
        for name, im in sprites(atlas):
            if key(name) in want:
                im.save(os.path.join(OUT, want.pop(key(name)) + '.png'), optimize=True)
                n += 1
    if want:
        raise SystemExit('图集里找不到奖杯图标：' + ', '.join(want))
    print('导出 %d 个图标到 %s' % (n, OUT))


if __name__ == '__main__':
    main()
