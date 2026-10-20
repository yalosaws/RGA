"""打包「RGA.exe」：先重新生成资料网页，再用 PyInstaller 打成单个 exe，输出到 发布/。

用法：python 应用/build_exe.py   （需要 pip install pywebview pyinstaller）
exe 里带着当时的网页；表格、攻略或 RG-tools 更新后要重新打包。
"""
import os
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
PAGE = os.path.join(ROOT, 'RGA.html')
ICON = os.path.join(ROOT, '应用', 'icon.ico')  # 由 应用/make_icon.py 生成


def main():
    subprocess.check_call([sys.executable, '-X', 'utf8', os.path.join(ROOT, '脚本', 'build_html.py')], cwd=ROOT)
    work = os.path.join(ROOT, 'build')
    subprocess.check_call([
        sys.executable, '-m', 'PyInstaller', '--noconfirm', '--onefile', '--windowed',
        '--name', 'RGA',
        '--add-data', PAGE + os.pathsep + '.',
        '--add-data', ICON + os.pathsep + '.', '--icon', ICON,
        '--distpath', os.path.join(ROOT, '发布'), '--workpath', work, '--specpath', work,
        os.path.join(ROOT, '应用', 'rg_app.py')], cwd=ROOT)
    print('完成：', os.path.join(ROOT, '发布', 'RGA.exe'))


if __name__ == '__main__':
    main()
