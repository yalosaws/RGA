"""Realm Grinder 助手：把「Realm Grinder 资料.html」装进无边框圆角窗口，并直接读取本机游戏存档。

运行：python 应用/rg_app.py（需要 pywebview）；打包成 exe：python 应用/build_exe.py
网页通过 window.pywebview.api 调用下面 Api 的方法：读存档（只读，不会改动存档）和窗口按钮。
标题栏是网页自己画的（.appbar），带 pywebview-drag-region 的部分可以拖动窗口。
"""
import ctypes
import glob
import os
import re
import sys

import webview

TITLE = 'Realm Grinder 助手'
PAGE = 'Realm Grinder 资料.html'
SAVE_RE = re.compile(rb'\$\d{2}s[A-Za-z0-9+/=]+\$e')


def res_path(name):
    if getattr(sys, 'frozen', False):  # PyInstaller 打包后，资源在临时解压目录里
        return os.path.join(sys._MEIPASS, name)
    here = os.path.dirname(os.path.abspath(__file__))
    return os.path.join(os.path.dirname(here) if name == PAGE else here, name)


def find_saves():
    """游戏（Adobe AIR）的本地存档：%APPDATA%\\<应用 id>\\Local Store\\#SharedObjects\\<swf>\\realm-grinder.sol，按修改时间新→旧"""
    root = os.environ.get('APPDATA', '')
    pats = [os.path.join(root, '*', 'Local Store', '#SharedObjects', '*', 'realm-grinder.sol'),
            os.path.join(root, '*', 'Local Store', '#SharedObjects', '*', '*', 'realm-grinder.sol')]
    files = {f for p in pats for f in glob.glob(p)}
    return sorted(files, key=os.path.getmtime, reverse=True)


def round_corners(window):
    """Windows 11：让无边框窗口用系统的圆角和阴影（Windows 10 上没有效果，也不报错）"""
    try:
        hwnd = window.native.Handle.ToInt64()
        pref = ctypes.c_int(2)  # DWMWCP_ROUND
        ctypes.windll.dwmapi.DwmSetWindowAttribute(ctypes.c_void_p(hwnd), 33, ctypes.byref(pref), ctypes.sizeof(pref))
    except Exception:
        pass


class Api:
    def __init__(self):
        self._win = None
        self._max = False

    # ---- 存档 ----
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

    # ---- 窗口按钮（无边框窗口自己画标题栏） ----
    def minimize(self):
        self._win.minimize()

    def toggle_maximize(self):
        if self._max:
            self._win.restore()
        else:
            self._win.maximize()
        self._max = not self._max
        return self._max

    def close(self):
        self._win.destroy()

    def size(self):
        return {'w': self._win.width, 'h': self._win.height}

    def resize(self, w, h):
        if not self._max:
            self._win.resize(max(640, int(w)), max(420, int(h)))


def main():
    storage = os.path.join(os.environ.get('LOCALAPPDATA', os.path.expanduser('~')), 'RealmGrinder助手')
    api = Api()
    win = webview.create_window(TITLE, res_path(PAGE), js_api=api, width=1280, height=860, min_size=(640, 420),
                                frameless=True, easy_drag=False, shadow=True, text_select=True, zoomable=True,
                                background_color='#F5F3FA')
    api._win = win
    win.events.shown += lambda: round_corners(win)
    # private_mode=False + storage_path：网页的 localStorage（保存过的存档、页面设置）在关掉程序后还在
    webview.start(private_mode=False, storage_path=storage, icon=res_path('icon.ico'))


if __name__ == '__main__':
    main()
