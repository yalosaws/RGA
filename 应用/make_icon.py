"""画程序图标：16×16 的像素宝石（蓝紫色水晶），按整数倍放大，保持像素颗粒。输出 应用/icon.ico（多尺寸）和 icon.png。

用法：python 应用/make_icon.py（需要 Pillow）
"""
import os

from PIL import Image

HERE = os.path.dirname(os.path.abspath(__file__))

# 一个字符一个像素：. 透明  O 描边  H 高光  L 亮面  M 中间  D 暗面  P 紫色背光面
PIXELS = """
................
..........OOOO..
.........OHHHLO.
........OHHLLMO.
.......OLLLLMMDO
......OLLLMMMDDO
.....OLLLMMMDDO.
....OLLLMMMDDO..
...OLLLMMMDDO...
..OLLLMMMDDO....
..OLLMMMDDO.....
..OLMMMDDPO.....
..OMMMDDPO......
..OMDDPPO.......
...OPPPO........
....OOO.........
"""
COLORS = {
    'O': (30, 27, 75), 'H': (238, 242, 255), 'L': (165, 180, 252), 'M': (99, 102, 241),
    'D': (67, 56, 202), 'P': (124, 58, 237),
}


def draw():
    rows = PIXELS.strip().splitlines()
    img = Image.new('RGBA', (16, 16), (0, 0, 0, 0))
    for y, row in enumerate(rows):
        for x, ch in enumerate(row):
            if ch in COLORS:
                img.putpixel((x, y), COLORS[ch] + (255,))
    return img


def main():
    img = draw()
    big = lambda n: img.resize((n, n), Image.NEAREST)  # 最近邻放大，不糊
    big(256).save(os.path.join(HERE, 'icon.png'))
    sizes = [16, 32, 48, 64, 128, 256]
    big(256).save(os.path.join(HERE, 'icon.ico'), sizes=[(n, n) for n in sizes],
                  append_images=[big(n) for n in sizes[:-1]])
    print('写入 应用/icon.ico、icon.png')


if __name__ == '__main__':
    main()
