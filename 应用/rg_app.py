"""RGA（Realm Grinder 助手）：把界面装进无边框圆角窗口，直接读取本机游戏存档，并自动更新。

运行：python 应用/rg_app.py（需要 pywebview，先跑 脚本/build_html.py 生成 build/app/）；打包成 exe：python 应用/build_exe.py
界面是一组文件（见 content.py），由本地服务按一次性的随机路径提供；网页通过 window.pywebview.api 调用下面 Api 的方法：
读存档（只读，不会改动存档）、窗口按钮、自动更新（见 updater.py）。
标题栏是网页自己画的（.appbar），带 pywebview-drag-region 的部分可以拖动窗口。
打包版的程序代码由 PyArmor 混淆，界面文件加密存放，见 build_exe.py。
"""
import ctypes
import glob
import json
import os
import re
import sys
import webbrowser

import webview
from auto_click import AutoClicker
import content
import template_store
import updater

TITLE = 'RGA'
DATA = 'RGA.dat'
PORT = 42001  # 和以前 pywebview 内置服务的端口一样，网页的 localStorage（同一个来源）才能接着用
SAVE_RE = re.compile(rb'\$\d{2}s[A-Za-z0-9+/=]+\$e')


def res_path(name):
    if getattr(sys, 'frozen', False):  # PyInstaller 打包后，资源在临时解压目录里
        return os.path.join(sys._MEIPASS, name)
    return os.path.join(os.path.dirname(os.path.abspath(__file__)), name)


def pick_store(cache_dir):
    """源码运行用 build/app/（设了 RGA_UPDATE_URL 时也看下载的版本，用来测试自动更新）；打包版用自带和下载的里面版本新的"""
    frozen = getattr(sys, 'frozen', False)
    if frozen:
        cands = [content.bundled_store(res_path(DATA))]
    else:
        cands = [content.dev_store(os.path.join(content.ROOT, 'build', 'app'))]
    if frozen or os.environ.get('RGA_UPDATE_URL'):
        c = content.cache_store(cache_dir, updater.verify)
        if c and c.manifest.get('shell_api', 1) <= updater.SHELL_API:
            cands.append(c)
    return max(cands, key=lambda s: content.version_tuple(s.version))


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
    def __init__(self, clicker=None):
        self._win = None
        self._max = False
        self._clicker = clicker
        self._upd = None

    # ---- 自动更新 ----
    def update_state(self):
        return dict(self._upd.state) if self._upd else {'off': True}

    def check_update(self):
        if self._upd:
            self._upd.check_now()

    def use_update(self):
        """换上下载好的新界面，网页随后自己刷新"""
        return bool(self._upd and self._upd.use_pending())

    def restart(self):
        """exe 已换成新版：启动新的，关掉自己"""
        updater.restart()
        self.close()

    def open_home(self):
        webbrowser.open(updater.HOME)

    def shutdown(self):
        if self._clicker:
            self._clicker.close()

    # ---- 存档 ----
    def read_templates(self):
        try:
            return {'ok': True, 'templates': template_store.read_templates()}
        except Exception as e:
            return {'ok': False, 'error': str(e)}

    def add_template(self, category, name, code):
        try:
            return template_store.add_template(category, name, code)
        except Exception as e:
            return {'ok': False, 'error': str(e)}

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
        self.shutdown()
        self._win.destroy()

    def size(self):
        return {'w': self._win.width, 'h': self._win.height}

    def resize(self, w, h):
        if not self._max:
            self._win.resize(max(640, int(w)), max(420, int(h)))


WEBVIEW2_URL = 'https://go.microsoft.com/fwlink/p/?LinkId=2124703'  # 微软官方 WebView2 运行时安装包


def has_webview2():
    """没装 Edge WebView2 运行时的话，pywebview 会悄悄退回旧的 IE 内核：页面能显示，但脚本跑不起来，点什么都没反应"""
    try:
        from webview.platforms import winforms
        return winforms.renderer != 'mshtml'
    except Exception:
        return True


def main():
    if sys.platform == 'win32' and not has_webview2():
        ctypes.windll.user32.MessageBoxW(
            None, 'RGA 需要 Microsoft Edge WebView2 运行时，这台电脑上没有找到。\n\n'
                  '点「确定」会打开微软的下载页，安装后重新打开 RGA 即可。', TITLE, 0x30)
        os.startfile(WEBVIEW2_URL)
        return
    base = os.environ.get('LOCALAPPDATA', os.path.expanduser('~'))
    storage = os.path.join(base, 'RGA')
    old = os.path.join(base, 'RealmGrinder助手')  # 改名前的数据目录，搬过来以保留存档记录和设置
    if os.path.isdir(old) and not os.path.exists(storage):
        try:
            os.rename(old, storage)
        except OSError:  # 被占用搬不动时先接着用旧目录，下次再搬
            storage = old
    if getattr(sys, 'frozen', False):  # 打包版不允许外部调试端口连进来读页面
        os.environ.pop('WEBVIEW2_ADDITIONAL_BROWSER_ARGUMENTS', None)
    cache = os.path.join(storage, 'update')
    updater.cleanup_old_exe()
    store = pick_store(cache)
    if getattr(sys, 'frozen', False):
        content.clean_cache(cache, store)
    server = content.Server(store, PORT)
    api = Api(AutoClicker())  # 固定 F8 启停、35 毫秒间隔，没有设置页
    win = webview.create_window(TITLE, server.url, js_api=api, width=1280, height=860, min_size=(640, 420),
                                frameless=True, easy_drag=False, shadow=True, text_select=True, zoomable=True,
                                background_color='#F5F3FA')
    api._win = win
    win.events.shown += lambda: (center(win), round_corners(win))
    win.events.closed += api.shutdown

    def notify(state):  # 有更新时告诉界面（界面也可以随时问 update_state）
        try:
            win.evaluate_js('window.dispatchEvent(new CustomEvent("rgaupdate",{detail:%s}))' % json.dumps(state, ensure_ascii=False))
        except Exception:
            pass
    if getattr(sys, 'frozen', False) or os.environ.get('RGA_UPDATE_URL'):
        api._upd = updater.Updater(server, cache, notify)
        api._upd.start()  # 界面打开后也会自己问一次 update_state，错过通知也没关系
    # private_mode=False + storage_path：网页的 localStorage（保存过的存档、页面设置）在关掉程序后还在
    try:
        webview.start(private_mode=False, storage_path=storage, icon=res_path('icon.ico'))
    finally:
        api.shutdown()


if __name__ == '__main__':
    main()
