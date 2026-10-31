"""画程序图标：照游戏里宝石（Gem）的样子画的低像素六边形宝石——顶面浅蓝、正面蓝紫、左下紫色、右侧深蓝，略向右倾斜。
14×14 的像素画放在 16×16 画布中间，按整数倍最近邻放大，保持像素颗粒。输出 app/icon.ico（多尺寸）和 icon.png。

用法：python app/make_icon.py（需要 Pillow）
"""
import os

from PIL import Image

HERE = os.path.dirname(os.path.abspath(__file__))

# 一个字符一个像素：. 透明  O 描边  H 高光  T 顶面  L 左侧亮面  M 正面  D 右侧暗面  P 左下紫色面
PIXELS = """
..............
......OOOO....
....OOTTTTOO..
...OTTHTTTTTO.
..OLTTTTTTTTO.
.OLLTTTTTTMMO.
.OLLLMMMMMMDO.
.OLLLMMMMMMDO.
.OLLLMMMMMMDO.
.OPPPMMMMMDDO.
.OPPPMMMMDDO..
..OOPPMDDOO...
....OOOO......
..............
"""
COLORS = {
    'O': (30, 27, 75), 'H': (238, 242, 255), 'T': (186, 206, 255), 'L': (150, 162, 248), 'M': (99, 102, 241),
    'D': (55, 48, 163), 'P': (124, 58, 237),
}


def draw():
    rows = PIXELS.strip().splitlines()
    img = Image.new('RGBA', (16, 16), (0, 0, 0, 0))
    off = (16 - len(rows)) // 2  # 放在 16×16 画布中间，放大到 256 时是整数倍
    for y, row in enumerate(rows):
        for x, ch in enumerate(row):
            if ch in COLORS:
                img.putpixel((x + off, y + off), COLORS[ch] + (255,))
    return img


def main():
    img = draw()
    big = lambda n: img.resize((n, n), Image.NEAREST)  # 最近邻放大，不糊
    big(256).save(os.path.join(HERE, 'icon.png'))
    sizes = [16, 32, 48, 64, 128, 256]
    big(256).save(os.path.join(HERE, 'icon.ico'), sizes=[(n, n) for n in sizes],
                  append_images=[big(n) for n in sizes[:-1]])
    print('写入 app/icon.ico、icon.png')


if __name__ == '__main__':
    main()
