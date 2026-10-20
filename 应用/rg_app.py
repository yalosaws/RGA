"""RGA（Realm Grinder 助手）：把「RGA.html」装进无边框圆角窗口，并直接读取本机游戏存档。

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

TITLE = 'RGA'
PAGE = 'RGA.html'
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


def center(window):
    """放到屏幕中央（主屏幕去掉任务栏的区域）；窗口比屏幕大时缩到屏幕的 92%"""
    try:
        u = ctypes.windll.user32
        hwnd = ctypes.c_void_p(window.native.Handle.ToInt64())

        class RECT(ctypes.Structure):
            _fields_ = [('l', ctypes.c_long), ('t', ctypes.c_long), ('r', ctypes.c_long), ('b', ctypes.c_long)]
        wa, wr = RECT(), RECT()
        u.SystemParametersInfoW(0x30, 0, ctypes.byref(wa), 0)  # SPI_GETWORKAREA
        u.GetWindowRect(hwnd, ctypes.byref(wr))
        aw, ah = wa.r - wa.l, wa.b - wa.t
        w, h = min(wr.r - wr.l, int(aw * .92)), min(wr.b - wr.t, int(ah * .92))
        u.SetWindowPos(hwnd, None, wa.l + (aw - w) // 2, wa.t + (ah - h) // 2, w, h, 0x4 | 0x10)  # NOZORDER | NOACTIVATE
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
    base = os.environ.get('LOCALAPPDATA', os.path.expanduser('~'))
    storage = os.path.join(base, 'RGA')
    old = os.path.join(base, 'RealmGrinder助手')  # 改名前的数据目录，搬过来以保留存档记录和设置
    if os.path.isdir(old) and not os.path.exists(storage):
        try:
            os.rename(old, storage)
        except OSError:  # 被占用搬不动时先接着用旧目录，下次再搬
            storage = old
    api = Api()
    win = webview.create_window(TITLE, res_path(PAGE), js_api=api, width=1280, height=860, min_size=(640, 420),
                                frameless=True, easy_drag=False, shadow=True, text_select=True, zoomable=True,
                                background_color='#F5F3FA')
    api._win = win
    win.events.shown += lambda: (center(win), round_corners(win))
    # private_mode=False + storage_path：网页的 localStorage（保存过的存档、页面设置）在关掉程序后还在
    webview.start(private_mode=False, storage_path=storage, icon=res_path('icon.ico'))


if __name__ == '__main__':
    main()
