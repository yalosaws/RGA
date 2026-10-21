"""打包「RGA.exe」：先重新生成程序界面 build/RGA.html，加密后连同程序用 PyInstaller 打成单个 exe，再用 PyArmor 混淆程序代码，输出到 发布/。

用法：python 应用/build_exe.py   （需要 pip install pywebview pyinstaller pyarmor）
exe 里带着当时的界面；表格、攻略或 RG-tools 更新后要重新打包。

内测版的保护（只能提高门槛，装在用户电脑上的东西不可能做到绝对拆不开）：
- 界面 HTML 压缩后加密成 RGA.dat，每次打包随机生成密钥，写进 build/pack/ 下的程序副本（源码里的 _K 永远是 None）；
- 程序副本先由 PyArmor 混淆再交给 PyInstaller，密钥不以明文出现在 exe 里；
- 运行时界面只在内存里，由本地服务按随机路径提供，见 rg_app.py。
"""
import os
import re
import secrets
import shutil
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
APP = os.path.join(ROOT, '应用')
PAGE = os.path.join(ROOT, 'build', 'RGA.html')  # build_html.py 临时生成，不进 git
ICON = os.path.join(APP, 'icon.ico')  # 由 应用/make_icon.py 生成
PACK = os.path.join(ROOT, 'build', 'pack')  # 带密钥的程序副本和加密界面，不进 git
DIST = os.path.join(ROOT, '发布')

sys.path.insert(0, APP)
import rg_app  # noqa: E402  只用它的 seal()


# PyArmor 混淆后的代码里看不出 import 了什么，PyInstaller 要靠这里列出来
HIDDEN = ['webview', 'auto_click', 'ctypes', 'ctypes.wintypes', 'glob', 'hashlib', 'http.server',
          'secrets', 'threading', 'zlib', 'json', 'queue', 'time']


def build(pack):
    key = secrets.token_bytes(32)
    with open(PAGE, 'rb') as f:
        sealed = rg_app.seal(f.read(), key)
    with open(os.path.join(pack, rg_app.DATA), 'wb') as f:
        f.write(sealed)
    src = open(os.path.join(APP, 'rg_app.py'), encoding='utf-8').read()
    src, n = re.subn(r'^_K = None\b.*$', '_K = bytes.fromhex(%r)' % key.hex(), src, count=1, flags=re.M)
    assert n == 1, '没找到 rg_app.py 里的 _K = None'
    script = os.path.join(pack, 'rg_app.py')
    open(script, 'w', encoding='utf-8').write(src)
    # 先用 PyArmor 混淆（试用版不能用 --mix-str；常量在加密后的代码对象里），再把混淆后的脚本交给 PyInstaller。
    # （PyArmor 的 --pack 不支持新版 PyInstaller，所以按它文档里的「先混淆、再打包」做）
    obf = os.path.join(pack, 'obf')
    click_script = os.path.join(pack, 'auto_click.py')
    shutil.copyfile(os.path.join(APP, 'auto_click.py'), click_script)
    subprocess.check_call([sys.executable, '-m', 'pyarmor.cli', 'gen', '-O', obf, script, click_script], cwd=pack)
    work = os.path.join(ROOT, 'build')
    cmd = [sys.executable, '-m', 'PyInstaller', '--noconfirm', '--onefile', '--windowed', '--name', 'RGA',
           '--paths', obf, '--hidden-import', next(d for d in os.listdir(obf) if d.startswith('pyarmor_runtime')),
           '--add-data', os.path.join(pack, rg_app.DATA) + os.pathsep + '.',
           '--add-data', ICON + os.pathsep + '.', '--icon', ICON,
           '--distpath', DIST, '--workpath', work, '--specpath', work]
    for m in HIDDEN:
        cmd += ['--hidden-import', m]
    subprocess.check_call(cmd + ['--collect-submodules', 'webview', os.path.join(obf, 'rg_app.py')], cwd=pack)


def main():
    subprocess.check_call([sys.executable, '-X', 'utf8', os.path.join(ROOT, '脚本', 'build_html.py')], cwd=ROOT)
    assert os.path.isfile(PAGE), PAGE
    shutil.rmtree(PACK, ignore_errors=True)
    os.makedirs(PACK)
    try:
        build(PACK)
    finally:
        shutil.rmtree(PACK, ignore_errors=True)  # 带明文密钥的副本不留在硬盘上（打包失败也删）
        shutil.rmtree(os.path.join(ROOT, '.pyarmor'), ignore_errors=True)
    print('完成：', os.path.join(DIST, 'RGA.exe'))


if __name__ == '__main__':
    main()
