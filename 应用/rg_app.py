"""Realm Grinder 助手：把「Realm Grinder 资料.html」装进桌面窗口，并直接读取本机游戏存档。

运行：python 应用/rg_app.py（需要 pywebview）；打包成 exe：python 应用/build_exe.py
网页通过 window.pywebview.api 调用下面 Api 的方法（只读，不会改动存档）。
"""
import glob
import os
import re
import sys

import webview

TITLE = 'Realm Grinder 助手'
PAGE = 'Realm Grinder 资料.html'
SAVE_RE = re.compile(rb'\$\d{2}s[A-Za-z0-9+/=]+\$e')


def page_path():
    if getattr(sys, 'frozen', False):  # PyInstaller 打包后，网页在临时解压目录里
        return os.path.join(sys._MEIPASS, PAGE)
    return os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))), PAGE)


def find_saves():
    """游戏（Adobe AIR）的本地存档：%APPDATA%\\<应用 id>\\Local Store\\#SharedObjects\\<swf>\\realm-grinder.sol，按修改时间新→旧"""
    root = os.environ.get('APPDATA', '')
    pats = [os.path.join(root, '*', 'Local Store', '#SharedObjects', '*', 'realm-grinder.sol'),
            os.path.join(root, '*', 'Local Store', '#SharedObjects', '*', '*', 'realm-grinder.sol')]
    files = {f for p in pats for f in glob.glob(p)}
    return sorted(files, key=os.path.getmtime, reverse=True)


class Api:
    def read_save(self):
        """返回最新的存档字符串和文件修改时间（毫秒）"""
        files = find_saves()
        if not files:
            return {'ok': False, 'error': '没有找到游戏存档。请先打开一次游戏（Steam 版 Realm Grinder），让它保存一次。'}
        path = files[0]
        try:
            with open(path, 'rb') as f:
                data = f.read()
        except OSError as e:
            return {'ok': False, 'path': path, 'error': '读不了存档文件：%s' % e}
        found = SAVE_RE.findall(data)
        if not found:
            return {'ok': False, 'path': path, 'error': '存档文件里没有找到存档数据（游戏可能正在写入，稍后再试）。'}
        return {'ok': True, 'path': path, 'mtime': int(os.path.getmtime(path) * 1000),
                'save': max(found, key=len).decode('ascii')}

    def open_folder(self, path):
        folder = os.path.dirname(path)
        if os.path.isdir(folder):
            os.startfile(folder)


def main():
    storage = os.path.join(os.environ.get('LOCALAPPDATA', os.path.expanduser('~')), 'RealmGrinder助手')
    webview.create_window(TITLE, page_path(), js_api=Api(), width=1280, height=860,
                          min_size=(480, 400), text_select=True, zoomable=True)
    # private_mode=False + storage_path：网页的 localStorage（保存过的存档、页面设置）在关掉程序后还在
    webview.start(private_mode=False, storage_path=storage)


if __name__ == '__main__':
    main()
