"""打包「RGA.exe」：先重新生成界面 build/app/，加密成 RGA.dat 连同程序用 PyInstaller 打成单个 exe，再用 PyArmor 混淆程序代码，输出到 release/。

用法：python app/build_exe.py            自用版 → release/RGA.exe（带自动点击、不自动更新，只给作者本机用，不发布）
      python app/build_exe.py --public   发布版 → release/public/RGA.exe + RGA.exe.json（publish.py --exe 只上传这一份）
（需要 pip install pywebview pyinstaller pyarmor）
自动点击已从发布版永久移除（0.5.5）：发布版不带 auto_click.py，rg_app.py 里 # <private> … # </private> 之间的代码删掉，界面也不带连点胶囊。
exe 里带着当时的界面；之后表格、攻略更新只要跑 scripts/publish.py，已装的程序会自动更新，不用重新打包。
程序本身（app/ 下的 .py）改了才需要重新打包，再用 publish.py --exe 发布，已装的程序会自动换成新 exe。

- 界面文件按 content.py 加密成对象，装进 RGA.dat（zip）。密钥固定放在 keys/content.key（不进 git），
  打包时写进 build/pack/ 下的程序副本（源码里的 _K 永远是 None），再由 PyArmor 混淆，密钥不以明文出现在 exe 里；
- 同时写进 EXE_VERSION（自动更新判断 exe 是否要换），并生成 release/RGA.exe.json（版本、sha256），publish.py 据此上传。
"""
import hashlib
import json
import os
import re
import shutil
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
APP = os.path.join(ROOT, 'app')
APP_DIR = os.path.join(ROOT, 'build', 'app')  # build_html.py 生成，不进 git
ICON = os.path.join(APP, 'icon.ico')  # 由 app/make_icon.py 生成
PACK = os.path.join(ROOT, 'build', 'pack')  # 带密钥的程序副本和加密界面，不进 git
DIST = os.path.join(ROOT, 'release')
PUBLIC_DIST = os.path.join(DIST, 'public')
PRIVATE_ONLY = ['auto_click']  # 只进自用版的模块
MODULES = ['rg_app', 'auto_click', 'template_store', 'content', 'updater', 'ed25519', 'build_engine', 'save_sync', 'live_reader']

sys.path.insert(0, APP)
import content  # noqa: E402

PRIVATE_ENV = {k: v for k, v in os.environ.items() if k != 'RGA_PUBLIC'}

# PyArmor 混淆后的代码里看不出 import 了什么，PyInstaller 要靠这里列出来
HIDDEN = ['webview', 'pathlib', 'struct', 'datetime', 'ctypes', 'ctypes.wintypes', 'glob', 'hashlib', 'http.server',
                        'secrets', 'threading', 'zlib', 'json', 'queue', 'time', 'zipfile', 'mimetypes', 'urllib.request', 'ssl',
                        'subprocess', 'webbrowser', 'concurrent.futures', 'inspect', 'random', 'argparse',
                        'collections', 'functools', 'traceback', 'base64', 're', 'math', 'html', 'importlib',
                        'copy', 'contextlib', 'py_compile', 'importlib.machinery']


def inject(name, pattern, value, pack):
    src = open(os.path.join(APP, name + '.py'), encoding='utf-8').read()
    src, n = re.subn(pattern, value, src, count=1, flags=re.M)
    assert n == 1, '没找到 %s.py 里的 %s' % (name, pattern)
    open(os.path.join(pack, name + '.py'), 'w', encoding='utf-8').write(src)


def strip_private(pack):
    """发布版：删掉 rg_app.py 里只给自用版的代码，PRIVATE 改成 False"""
    p = os.path.join(pack, 'rg_app.py')
    src = open(p, encoding='utf-8').read()
    src, n = re.subn(r'^[ \t]*# <private>[ \t]*\n.*?^[ \t]*# </private>[ \t]*\n', '', src, flags=re.M | re.S)
    assert n >= 3 and 'AutoClicker' not in src and 'click_status' not in src, '没删干净 rg_app.py 的自用代码'
    src, n = re.subn(r'^PRIVATE = True\b.*$', 'PRIVATE = False', src, count=1, flags=re.M)
    assert n == 1
    open(p, 'w', encoding='utf-8').write(src)


def build(pack, version, public):
    mods = [m for m in MODULES if not (public and m in PRIVATE_ONLY)]
    k = content.key()
    assert k, '缺少 keys/content.key'
    manifest = content.make_objects(APP_DIR, k, pack)
    content.write_bundle(manifest, pack, os.path.join(pack, 'RGA.dat'))
    for m in mods:
        shutil.copyfile(os.path.join(APP, m + '.py'), os.path.join(pack, m + '.py'))
    inject('content', r'^_K = None\b.*$', '_K = bytes.fromhex(%r)' % k.hex(), pack)
    inject('updater', r'^EXE_VERSION = None\b.*$', 'EXE_VERSION = %r' % version, pack)
    if public:
        strip_private(pack)
    # 先用 PyArmor 混淆（试用版不能用 --mix-str；常量在加密后的代码对象里），再把混淆后的脚本交给 PyInstaller。
    # （PyArmor 的 --pack 不支持新版 PyInstaller，所以按它文档里的「先混淆、再打包」做）
    obf = os.path.join(pack, 'obf')
    subprocess.check_call([sys.executable, '-m', 'pyarmor.cli', 'gen', '-O', obf] + [os.path.join(pack, m + '.py') for m in mods], cwd=pack)
    work = os.path.join(ROOT, 'build')
    cmd = [sys.executable, '-m', 'PyInstaller', '--noconfirm', '--onefile', '--windowed', '--name', 'RGA',
           '--paths', obf, '--hidden-import', next(d for d in os.listdir(obf) if d.startswith('pyarmor_runtime')),
           '--add-data', os.path.join(pack, 'RGA.dat') + os.pathsep + '.',
           '--add-data', ICON + os.pathsep + '.', '--icon', ICON,
           '--add-data', os.path.join(ROOT, 'build', 'calculation') + os.pathsep + 'calculation',
           '--distpath', PUBLIC_DIST if public else DIST, '--workpath', work, '--specpath', work]
    for m in mods[1:] + HIDDEN:  # 自用版带 auto_click，发布版不带
        cmd += ['--hidden-import', m]
    subprocess.check_call(cmd + ['--collect-submodules', 'webview', os.path.join(obf, 'rg_app.py')], cwd=pack)


def main():
    public = '--public' in sys.argv[1:]
    env = dict(os.environ, RGA_PUBLIC='1') if public else PRIVATE_ENV
    subprocess.check_call([sys.executable, '-X', 'utf8', os.path.join(ROOT, 'scripts', 'prepare_engine.py')], cwd=ROOT)
    subprocess.check_call([sys.executable, '-X', 'utf8', os.path.join(ROOT, 'scripts', 'build_html.py')], cwd=ROOT, env=env)
    version = json.load(open(os.path.join(APP_DIR, 'manifest.json'), encoding='utf-8'))['version']
    shutil.rmtree(PACK, ignore_errors=True)
    os.makedirs(PACK)
    try:
        build(PACK, version, public)
    finally:
        shutil.rmtree(PACK, ignore_errors=True)  # 带明文密钥的副本不留在硬盘上（打包失败也删）
        shutil.rmtree(os.path.join(ROOT, '.pyarmor'), ignore_errors=True)
    if not public:
        if os.path.exists(os.path.join(DIST, 'RGA.exe.json')):
            os.remove(os.path.join(DIST, 'RGA.exe.json'))  # 自用版不发布，不留校验文件
        print('完成（自用版，不发布）：', os.path.join(DIST, 'RGA.exe'), version)
        return
    exe = os.path.join(PUBLIC_DIST, 'RGA.exe')
    data = open(exe, 'rb').read()
    json.dump({'version': version, 'sha256': hashlib.sha256(data).hexdigest(), 'size': len(data)},
              open(exe + '.json', 'w', encoding='utf-8'))
    print('完成（发布版）：', exe, version)
    # 发布版界面盖掉了 build/app，换回自用版，本机程序接着用
    subprocess.check_call([sys.executable, '-X', 'utf8', os.path.join(ROOT, 'scripts', 'build_html.py')], cwd=ROOT, env=PRIVATE_ENV)


if __name__ == '__main__':
    main()
