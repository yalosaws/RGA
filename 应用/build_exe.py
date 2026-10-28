"""打包「RGA.exe」：先重新生成界面 build/app/，加密成 RGA.dat 连同程序用 PyInstaller 打成单个 exe，再用 PyArmor 混淆程序代码，输出到 发布/。

用法：python 应用/build_exe.py   （需要 pip install pywebview pyinstaller pyarmor）
exe 里带着当时的界面；之后表格、攻略更新只要跑 脚本/publish.py，已装的程序会自动更新，不用重新打包。
程序本身（应用/ 下的 .py）改了才需要重新打包，再用 publish.py --exe 发布，已装的程序会自动换成新 exe。

- 界面文件按 content.py 加密成对象，装进 RGA.dat（zip）。密钥固定放在 密钥/content.key（不进 git），
  打包时写进 build/pack/ 下的程序副本（源码里的 _K 永远是 None），再由 PyArmor 混淆，密钥不以明文出现在 exe 里；
- 同时写进 EXE_VERSION（自动更新判断 exe 是否要换），并生成 发布/RGA.exe.json（版本、sha256），publish.py 据此上传。
"""
import hashlib
import json
import os
import re
import shutil
import subprocess
import sys

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
APP = os.path.join(ROOT, '应用')
APP_DIR = os.path.join(ROOT, 'build', 'app')  # build_html.py 生成，不进 git
ICON = os.path.join(APP, 'icon.ico')  # 由 应用/make_icon.py 生成
PACK = os.path.join(ROOT, 'build', 'pack')  # 带密钥的程序副本和加密界面，不进 git
DIST = os.path.join(ROOT, '发布')
MODULES = ['rg_app', 'auto_click', 'template_store', 'content', 'updater', 'ed25519', 'build_engine', 'save_sync', 'live_reader']

sys.path.insert(0, APP)
import content  # noqa: E402

# PyArmor 混淆后的代码里看不出 import 了什么，PyInstaller 要靠这里列出来
HIDDEN = MODULES[1:] + ['webview', 'pathlib', 'struct', 'datetime', 'ctypes', 'ctypes.wintypes', 'glob', 'hashlib', 'http.server',
                        'secrets', 'threading', 'zlib', 'json', 'queue', 'time', 'zipfile', 'mimetypes', 'urllib.request', 'ssl',
                        'subprocess', 'webbrowser', 'concurrent.futures', 'inspect', 'random', 'argparse',
                        'collections', 'functools', 'traceback', 'base64', 're', 'math', 'html', 'importlib',
                        'copy', 'contextlib', 'py_compile', 'importlib.machinery']


def inject(name, pattern, value, pack):
    src = open(os.path.join(APP, name + '.py'), encoding='utf-8').read()
    src, n = re.subn(pattern, value, src, count=1, flags=re.M)
    assert n == 1, '没找到 %s.py 里的 %s' % (name, pattern)
    open(os.path.join(pack, name + '.py'), 'w', encoding='utf-8').write(src)


def build(pack, version):
    k = content.key()
    assert k, '缺少 密钥/content.key'
    manifest = content.make_objects(APP_DIR, k, pack)
    content.write_bundle(manifest, pack, os.path.join(pack, 'RGA.dat'))
    for m in MODULES:
        shutil.copyfile(os.path.join(APP, m + '.py'), os.path.join(pack, m + '.py'))
    inject('content', r'^_K = None\b.*$', '_K = bytes.fromhex(%r)' % k.hex(), pack)
    inject('updater', r'^EXE_VERSION = None\b.*$', 'EXE_VERSION = %r' % version, pack)
    # 先用 PyArmor 混淆（试用版不能用 --mix-str；常量在加密后的代码对象里），再把混淆后的脚本交给 PyInstaller。
    # （PyArmor 的 --pack 不支持新版 PyInstaller，所以按它文档里的「先混淆、再打包」做）
    obf = os.path.join(pack, 'obf')
    subprocess.check_call([sys.executable, '-m', 'pyarmor.cli', 'gen', '-O', obf] + [os.path.join(pack, m + '.py') for m in MODULES], cwd=pack)
    work = os.path.join(ROOT, 'build')
    cmd = [sys.executable, '-m', 'PyInstaller', '--noconfirm', '--onefile', '--windowed', '--name', 'RGA',
           '--paths', obf, '--hidden-import', next(d for d in os.listdir(obf) if d.startswith('pyarmor_runtime')),
           '--add-data', os.path.join(pack, 'RGA.dat') + os.pathsep + '.',
           '--add-data', ICON + os.pathsep + '.', '--icon', ICON,
           '--add-data', os.path.join(ROOT, 'build', 'calculation') + os.pathsep + 'calculation',
           '--distpath', DIST, '--workpath', work, '--specpath', work]
    for m in HIDDEN:
        cmd += ['--hidden-import', m]
    subprocess.check_call(cmd + ['--collect-submodules', 'webview', os.path.join(obf, 'rg_app.py')], cwd=pack)


def main():
    subprocess.check_call([sys.executable, '-X', 'utf8', os.path.join(ROOT, '脚本', 'prepare_engine.py')], cwd=ROOT)
    subprocess.check_call([sys.executable, '-X', 'utf8', os.path.join(ROOT, '脚本', 'build_html.py')], cwd=ROOT)
    version = json.load(open(os.path.join(APP_DIR, 'manifest.json'), encoding='utf-8'))['version']
    shutil.rmtree(PACK, ignore_errors=True)
    os.makedirs(PACK)
    try:
        build(PACK, version)
    finally:
        shutil.rmtree(PACK, ignore_errors=True)  # 带明文密钥的副本不留在硬盘上（打包失败也删）
        shutil.rmtree(os.path.join(ROOT, '.pyarmor'), ignore_errors=True)
    exe = os.path.join(DIST, 'RGA.exe')
    data = open(exe, 'rb').read()
    json.dump({'version': version, 'sha256': hashlib.sha256(data).hexdigest(), 'size': len(data)},
              open(exe + '.json', 'w', encoding='utf-8'))
    print('完成：', exe, version)


if __name__ == '__main__':
    main()
