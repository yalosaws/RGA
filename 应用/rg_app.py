"""RGA（Realm Grinder 助手）：把界面「RGA.html」（build_html.py 生成到 build/）装进无边框圆角窗口，并直接读取本机游戏存档。

运行：python 应用/rg_app.py（需要 pywebview）；打包成 exe：python 应用/build_exe.py
网页通过 window.pywebview.api 调用下面 Api 的方法：读存档（只读，不会改动存档）和窗口按钮。
标题栏是网页自己画的（.appbar），带 pywebview-drag-region 的部分可以拖动窗口。

打包版（内测）：界面加密成 RGA.dat 装进 exe，启动时在内存里解密，由下面的本地服务按一次性的随机路径提供，
别的路径一律 404（直接在浏览器里开 127.0.0.1:42001 看不到内容）；程序本身再由 PyArmor 混淆，见 build_exe.py。
"""
import ctypes
import glob
import hashlib
import http.server
import os
import re
import secrets
import sys
import threading
import zlib

import webview
from auto_click import AutoClicker

TITLE = 'RGA'
PAGE = 'RGA.html'
DATA = 'RGA.dat'
PORT = 42001  # 和以前 pywebview 内置服务的端口一样，网页的 localStorage（同一个来源）才能接着用
_K = None  # 打包时由 build_exe.py 填入密钥（源码里永远是 None）
MAGIC = b'RGA1'
SAVE_RE = re.compile(rb'\$\d{2}s[A-Za-z0-9+/=]+\$e')


def res_path(name):
    if getattr(sys, 'frozen', False):  # PyInstaller 打包后，资源在临时解压目录里
        return os.path.join(sys._MEIPASS, name)
    here = os.path.dirname(os.path.abspath(__file__))
    # 直接用源码运行时：界面在 build/（先跑 脚本/build_html.py），图标在 应用/
    return os.path.join(os.path.dirname(here), 'build', name) if name == PAGE else os.path.join(here, name)


def crypt(data, key):
    """SHA-256 计数器生成密钥流，和数据异或（加密、解密是同一个操作）"""
    n = len(data)
    stream = b''.join(hashlib.sha256(key + i.to_bytes(8, 'little')).digest() for i in range((n + 31) // 32))[:n]
    return (int.from_bytes(data, 'little') ^ int.from_bytes(stream, 'little')).to_bytes(n, 'little')


def seal(html, key):
    """打包时用：界面 HTML → 加密数据"""
    return crypt(MAGIC + zlib.compress(html, 9), key)


def load_page():
    """打包版：解密 RGA.dat；源码运行：读 build/RGA.html"""
    if _K is None:
        with open(res_path(PAGE), 'rb') as f:
            return f.read()
    with open(res_path(DATA), 'rb') as f:
        plain = crypt(f.read(), _K)
    if not plain.startswith(MAGIC):
        raise SystemExit('界面数据损坏')
    return zlib.decompress(plain[len(MAGIC):])


def serve(page):
    """只在本机、只按随机路径提供界面；返回网址"""
    token = '/%s/' % secrets.token_urlsafe(24)

    class Handler(http.server.BaseHTTPRequestHandler):
        def do_GET(self):
            ok = self.path.split('?')[0] == token
            body = page if ok else b''
            self.send_response(200 if ok else 404)
            self.send_header('Content-Type', 'text/html; charset=utf-8')
            self.send_header('Content-Length', str(len(body)))
            self.send_header('Cache-Control', 'no-store')
            self.end_headers()
            self.wfile.write(body)

        def log_message(self, *a):
            pass
    try:
        srv = http.server.ThreadingHTTPServer(('127.0.0.1', PORT), Handler)
    except OSError:  # 端口被占用：换一个（这次的 localStorage 会是空的）
        srv = http.server.ThreadingHTTPServer(('127.0.0.1', 0), Handler)
    threading.Thread(target=srv.serve_forever, daemon=True).start()
    return 'http://127.0.0.1:%d%s' % (srv.server_address[1], token)


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

    def click_status(self):
        return self._clicker.status()

    def click_configure(self, settings):
        return self._clicker.command('configure', settings)

    def click_toggle(self):
        return self._clicker.command('toggle')

    def shutdown(self):
        if self._clicker:
            self._clicker.close()

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
    if _K is not None:  # 打包版不允许外部调试端口连进来读页面
        os.environ.pop('WEBVIEW2_ADDITIONAL_BROWSER_ARGUMENTS', None)
    api = Api(AutoClicker(os.path.join(storage, 'autoclick.json')))
    win = webview.create_window(TITLE, serve(load_page()), js_api=api, width=1280, height=860, min_size=(640, 420),
                                frameless=True, easy_drag=False, shadow=True, text_select=True, zoomable=True,
                                background_color='#F5F3FA')
    api._win = win
    win.events.shown += lambda: (center(win), round_corners(win))
    win.events.closed += api.shutdown
    # private_mode=False + storage_path：网页的 localStorage（保存过的存档、页面设置）在关掉程序后还在
    try:
        webview.start(private_mode=False, storage_path=storage, icon=res_path('icon.ico'))
    finally:
        api.shutdown()


if __name__ == '__main__':
    main()
