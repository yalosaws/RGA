"""画程序图标：纯蓝圆角方块 + 白色切面宝石。输出 应用/icon.ico（多尺寸）和 icon.png。

用法：python 应用/make_icon.py（需要 Pillow）
"""
import os

from PIL import Image, ImageDraw, ImageFilter

HERE = os.path.dirname(os.path.abspath(__file__))
N = 1024  # 先画大图再缩小，边缘更平滑


def draw():
    # 背景：纯蓝（和网页主色 #2563eb 一致）
    bg = Image.new('RGB', (N, N), (37, 99, 235))
    mask = Image.new('L', (N, N), 0)
    ImageDraw.Draw(mask).rounded_rectangle([40, 40, N - 40, N - 40], radius=220, fill=255)
    img = Image.new('RGBA', (N, N), (0, 0, 0, 0))
    img.paste(bg, (0, 0), mask)

    # 宝石：上面一条平边的切面钻石
    cx, top, mid, bot, w_top, w_mid = N / 2, 300, 430, 790, 230, 330
    pts = {
        'tl': (cx - w_top, top), 'tr': (cx + w_top, top),
        'ml': (cx - w_mid, mid), 'mr': (cx + w_mid, mid),
        'tm': (cx, top), 'mm1': (cx - w_mid / 3, mid), 'mm2': (cx + w_mid / 3, mid),
        'b': (cx, bot),
    }
    shadow = Image.new('RGBA', (N, N), (0, 0, 0, 0))
    ImageDraw.Draw(shadow).polygon([pts['tl'], pts['tr'], pts['mr'], pts['b'], pts['ml']], fill=(10, 30, 90, 110))
    shadow = shadow.filter(ImageFilter.GaussianBlur(28))
    img.alpha_composite(shadow, (0, 24))
    d = ImageDraw.Draw(img)
    faces = [  # 不同亮度的切面
        ([pts['tl'], pts['tm'], pts['mm1'], pts['ml']], (255, 255, 255, 255)),
        ([pts['tm'], pts['tr'], pts['mr'], pts['mm2']], (226, 234, 252, 255)),
        ([pts['tm'], pts['mm2'], pts['mm1']], (241, 245, 255, 255)),
        ([pts['ml'], pts['mm1'], pts['b']], (214, 226, 250, 255)),
        ([pts['mm1'], pts['mm2'], pts['b']], (240, 244, 255, 255)),
        ([pts['mm2'], pts['mr'], pts['b']], (190, 208, 248, 255)),
    ]
    for poly, col in faces:
        d.polygon(poly, fill=col)
    # 高光
    d.ellipse([cx - w_top + 40, top + 30, cx - w_top + 100, top + 90], fill=(255, 255, 255, 255))
    return img


def main():
    img = draw()
    img.resize((256, 256), Image.LANCZOS).save(os.path.join(HERE, 'icon.png'))
    img.save(os.path.join(HERE, 'icon.ico'), sizes=[(256, 256), (128, 128), (64, 64), (48, 48), (32, 32), (24, 24), (16, 16)])
    print('写入 应用/icon.ico、icon.png')


if __name__ == '__main__':
    main()
