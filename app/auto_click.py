"""Windows 全局热键与游戏内连点。所有输入操作都在独立线程中执行。
点击不走真实鼠标：直接给游戏窗口发鼠标消息（PostMessage），鼠标不动，自动全部购买时游戏在后台也行。
2026-10-30 实测汉化版 4.3.14 的 AIR 窗口认这种消息（后台点折叠箭头生效，不带停顿也认）。"""
import contextlib
import ctypes
from ctypes import wintypes as w
import json
import os
import queue
import threading
import time


KEYS = {**{'F%d' % n: 0x6f + n for n in range(1, 12)},
        **{c: ord(c) for c in 'ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789'},
        'Space': 0x20, 'Home': 0x24, 'End': 0x23, 'Insert': 0x2d, 'Delete': 0x2e}
# hold：连点期间同时按住 hold_key（游戏收到「按住该键 + 点击」），停下就松开
# cursor：在鼠标处连点；buy：每秒点一次升级和建筑的「全部购买」（位置固定，不能自己设）
DEFAULTS = {'key': 'F8', 'ctrl': False, 'alt': False, 'shift': False, 'interval': 35,
            'hold': False, 'hold_key': 'R', 'cursor': True, 'buy': True}
BUY_SECONDS = 1

# 按钮颜色（游戏画面取样，2026-10-30，汉化版 4.3.14）。有弹窗时画面变暗，颜色对不上就不点。
RED, TEAL, YELLOW, GREEN = (152, 12, 32), (5, 134, 127), (175, 164, 22), (15, 127, 32)


def _near(pixel, color, tolerance=40):
    return all(abs(a - b) <= tolerance for a, b in zip(pixel, color))


def _share(frame, x0, x1, y0, y1, color):
    """一块区域里颜色对得上的比例（隔 2 像素取样）。按钮上有文字，所以看比例不看单点。"""
    hits = total = 0
    for y in range(y0, y1, 2):
        for x in range(x0, x1, 2):
            total += 1
            hits += _near(frame.pixel(x, y), color)
    return hits / total if total else 0


def find_buy_buttons(frame):
    """在游戏画面上找两个「全部购买」，返回 [(名字, x, y)]（游戏坐标），没把握的不返回。
    升级的在左栏顶上（左栏不随窗口缩放）：先确认上面是青色「退位」和黄色「第 N 次重生」（说明在升级页），
    有模板时按钮在左（右边是「载入模板」「保存模板」，也是红色），没模板时在中间（左边是浅灰底）。
    建筑的在右下，上下位置会随窗口高度变，所以在右下区域找「红色按钮、右边隔 103 像素是绿色的购买最大」。"""
    found = []
    if _share(frame, 135, 295, 12, 38, TEAL) >= .4 and _share(frame, 315, 475, 12, 38, YELLOW) >= .4:
        left = _share(frame, 98, 216, 50, 68, RED)
        if left >= .5:
            found.append(('升级', 157, 60))
        elif left < .1 and _share(frame, 238, 358, 50, 68, RED) >= .5:
            found.append(('升级', 298, 60))
    xs, ys = [], []
    for y in range(max(0, frame.height - 140), frame.height - 30, 2):
        for x in range(max(0, frame.width - 400), frame.width - 320, 2):
            if x + 103 < frame.width and _near(frame.pixel(x, y), RED) and _near(frame.pixel(x + 103, y), GREEN):
                xs.append(x)
                ys.append(y)
    if len(xs) >= 20:
        # 熔岩等背景也有接近的红色，取中位数当中心，再核对中心附近确实是红按钮、右边是绿按钮
        x, y = sorted(xs)[len(xs) // 2], sorted(ys)[len(ys) // 2]
        if _share(frame, x - 14, x + 14, y - 12, y + 12, RED) >= .25 and _share(frame, x + 89, x + 117, y - 12, y + 12, GREEN) >= .5:
            found.append(('建筑', x, y))
    return found


class Frame:
    """游戏画面（BGRA 字节），坐标是游戏自己的坐标。"""
    def __init__(self, width, height, data):
        self.width, self.height, self.data = width, height, data

    def pixel(self, x, y):
        if not (0 <= x < self.width and 0 <= y < self.height):
            return (0, 0, 0)
        i = (y * self.width + x) * 4
        return self.data[i + 2], self.data[i + 1], self.data[i]


def validate(settings):
    if not isinstance(settings, dict):
        raise ValueError('设置格式错误。')
    settings = {**DEFAULTS, **settings}  # 旧设置文件没有 hold 字段
    if settings['key'] not in KEYS:
        raise ValueError('请选择有效的快捷键。')
    if settings['hold_key'] not in KEYS:
        raise ValueError('请选择有效的按住键。')
    interval = settings['interval']
    if isinstance(interval, bool) or not isinstance(interval, (int, float)) or not 10 <= interval <= 1000 or int(interval) != interval:
        raise ValueError('点击间隔请设为 10～1000 毫秒。')
    if any(type(settings[k]) is not bool for k in ('ctrl', 'alt', 'shift', 'hold', 'cursor', 'buy')):
        raise ValueError('设置无效。')
    if settings['hold'] and settings['hold_key'] == settings['key'] and not (settings['ctrl'] or settings['alt'] or settings['shift']):
        raise ValueError('按住键不能和启停快捷键相同。')
    settings['interval'] = int(interval)
    return {k: settings[k] for k in DEFAULTS}


def hotkey_text(settings):
    return '+'.join([name for key, name in [('ctrl', 'Ctrl'), ('alt', 'Alt'), ('shift', 'Shift')]
                     if settings[key]] + [settings['key']])


class MouseInput(ctypes.Structure):
    _fields_ = [('dx', w.LONG), ('dy', w.LONG), ('mouseData', w.DWORD),
                ('dwFlags', w.DWORD), ('time', w.DWORD), ('dwExtraInfo', ctypes.c_size_t)]


class KeybdInput(ctypes.Structure):
    _fields_ = [('wVk', w.WORD), ('wScan', w.WORD), ('dwFlags', w.DWORD),
                ('time', w.DWORD), ('dwExtraInfo', ctypes.c_size_t)]


class InputUnion(ctypes.Union):
    _fields_ = [('mi', MouseInput), ('ki', KeybdInput)]  # MOUSEINPUT 是 INPUT 联合体中最大的成员。


class Input(ctypes.Structure):
    _fields_ = [('type', w.DWORD), ('data', InputUnion)]


class WindowsInput:
    def __init__(self):
        self.user = ctypes.WinDLL('user32', use_last_error=True)
        self.kernel = ctypes.WinDLL('kernel32', use_last_error=True)
        self.gdi = ctypes.WinDLL('gdi32', use_last_error=True)
        signatures = [
            (self.user.RegisterHotKey, [w.HWND, ctypes.c_int, w.UINT, w.UINT], w.BOOL),
            (self.user.UnregisterHotKey, [w.HWND, ctypes.c_int], w.BOOL),
            (self.user.PeekMessageW, [ctypes.POINTER(w.MSG), w.HWND, w.UINT, w.UINT, w.UINT], w.BOOL),
            (self.user.GetForegroundWindow, [], w.HWND),
            (self.user.GetWindowThreadProcessId, [w.HWND, ctypes.POINTER(w.DWORD)], w.DWORD),
            (self.user.GetCursorPos, [ctypes.POINTER(w.POINT)], w.BOOL),
            (self.user.ScreenToClient, [w.HWND, ctypes.POINTER(w.POINT)], w.BOOL),
            (self.user.GetClientRect, [w.HWND, ctypes.POINTER(w.RECT)], w.BOOL),
            (self.user.WindowFromPoint, [w.POINT], w.HWND),
            (self.user.GetAncestor, [w.HWND, w.UINT], w.HWND),
            (self.user.ClientToScreen, [w.HWND, ctypes.POINTER(w.POINT)], w.BOOL),
            (self.user.PostMessageW, [w.HWND, w.UINT, w.WPARAM, w.LPARAM], w.BOOL),
            (self.user.IsWindow, [w.HWND], w.BOOL),
            (self.user.IsWindowVisible, [w.HWND], w.BOOL),
            (self.user.IsIconic, [w.HWND], w.BOOL),
            (self.user.GetClassNameW, [w.HWND, w.LPWSTR, ctypes.c_int], ctypes.c_int),
            (self.user.EnumWindows, [ctypes.c_void_p, w.LPARAM], w.BOOL),
            (self.user.GetWindowDpiAwarenessContext, [w.HWND], ctypes.c_void_p),
            (self.user.SetThreadDpiAwarenessContext, [ctypes.c_void_p], ctypes.c_void_p),
            (self.user.GetAsyncKeyState, [ctypes.c_int], ctypes.c_short),
            (self.user.MapVirtualKeyW, [w.UINT, w.UINT], w.UINT),
            (self.user.SendInput, [w.UINT, ctypes.POINTER(Input), ctypes.c_int], w.UINT),
            (self.kernel.OpenProcess, [w.DWORD, w.BOOL, w.DWORD], w.HANDLE),
            (self.kernel.QueryFullProcessImageNameW, [w.HANDLE, w.DWORD, w.LPWSTR, ctypes.POINTER(w.DWORD)], w.BOOL),
            (self.kernel.CloseHandle, [w.HANDLE], w.BOOL),
            (self.user.GetDC, [w.HWND], w.HDC),
            (self.user.ReleaseDC, [w.HWND, w.HDC], ctypes.c_int),
            (self.user.PrintWindow, [w.HWND, w.HDC, w.UINT], w.BOOL),
            (self.gdi.CreateCompatibleDC, [w.HDC], w.HDC),
            (self.gdi.CreateCompatibleBitmap, [w.HDC, ctypes.c_int, ctypes.c_int], w.HBITMAP),
            (self.gdi.SelectObject, [w.HDC, w.HGDIOBJ], w.HGDIOBJ),
            (self.gdi.DeleteObject, [w.HGDIOBJ], w.BOOL),
            (self.gdi.DeleteDC, [w.HDC], w.BOOL),
            (self.gdi.GetDIBits, [w.HDC, w.HBITMAP, w.UINT, w.UINT, ctypes.c_void_p, ctypes.c_void_p, w.UINT], ctypes.c_int),
        ]
        for function, args, result in signatures:
            function.argtypes, function.restype = args, result
        self.game = 0  # 找到的游戏窗口（缓存）

    def register(self, ident, settings):
        modifiers = 0x4000 | (2 if settings['ctrl'] else 0) | (1 if settings['alt'] else 0) | (4 if settings['shift'] else 0)
        return bool(self.user.RegisterHotKey(None, ident, modifiers, KEYS[settings['key']]))

    def unregister(self, ident):
        self.user.UnregisterHotKey(None, ident)

    def hotkeys(self):
        msg = w.MSG()
        result = []
        while self.user.PeekMessageW(ctypes.byref(msg), None, 0x0312, 0x0312, 1):
            result.append(msg.wParam)
        return result

    def game_window(self):
        """前台是游戏窗口就返回它的句柄，否则返回 0。"""
        hwnd = self.user.GetForegroundWindow()
        return hwnd if hwnd and self._is_game(hwnd) else 0

    def find_game(self):
        """找游戏主窗口（不管在不在前台），找不到或最小化时返回 0。"""
        hwnd = self.game
        if not (hwnd and self.user.IsWindow(hwnd) and self.user.IsWindowVisible(hwnd) and self._is_game(hwnd)):
            found = []
            callback = ctypes.WINFUNCTYPE(w.BOOL, w.HWND, w.LPARAM)(
                lambda h, _: found.append(h) or True if self.user.IsWindowVisible(h) and self._is_game(h) else True)
            self.user.EnumWindows(callback, 0)
            self.game = hwnd = found[0] if found else 0
        return 0 if not hwnd or self.user.IsIconic(hwnd) else hwnd

    def _is_game(self, hwnd):
        """按进程名认游戏（兼容汉化版和窗口标题变化），并且是 AIR 的内容窗口。"""
        name = ctypes.create_unicode_buffer(64)
        if not self.user.GetClassNameW(hwnd, name, 64) or name.value != 'ApolloRuntimeContentWindow':
            return False
        pid = w.DWORD()
        self.user.GetWindowThreadProcessId(hwnd, ctypes.byref(pid))
        process = self.kernel.OpenProcess(0x1000, False, pid.value)
        if not process:
            return False
        try:
            name, size = ctypes.create_unicode_buffer(32768), w.DWORD(32768)
            if not self.kernel.QueryFullProcessImageNameW(process, 0, name, ctypes.byref(size)):
                return False
            return os.path.basename(name.value).lower() in ('realmgrinderdesktop.exe', 'realmgrinder.exe')
        finally:
            self.kernel.CloseHandle(process)

    def modifiers(self):
        """Ctrl/Shift/Alt/Win 按着时不点，避免把普通点击变成组合键点击（快捷键刚按下还没松开时也是）。"""
        return any(self.user.GetAsyncKeyState(vk) & 0x8000 for vk in (0x10, 0x11, 0x12, 0x5b, 0x5c))

    def _client(self, hwnd):
        rect = w.RECT()
        if not self.user.GetClientRect(hwnd, ctypes.byref(rect)) or rect.right <= 0 or rect.bottom <= 0:
            return None
        return rect

    def _visible(self, hwnd, point):
        """屏幕上这一点露出来的是游戏窗口（没被别的窗口盖住）。"""
        return self.user.GetAncestor(self.user.WindowFromPoint(point), 2) == hwnd

    def cursor_spot(self, hwnd):
        """鼠标在游戏画面上时返回它在客户区里的比例位置 (x, y)，否则 None。"""
        point = w.POINT()
        if not self.user.GetCursorPos(ctypes.byref(point)) or not self._visible(hwnd, point):
            return None
        rect = self._client(hwnd)
        if not rect or not self.user.ScreenToClient(hwnd, ctypes.byref(point)):
            return None
        if not 0 <= point.x < rect.right or not 0 <= point.y < rect.bottom:
            return None
        return point.x / rect.right, point.y / rect.bottom

    def in_game(self):
        hwnd = self.game_window()
        return bool(hwnd) and self.cursor_spot(hwnd) is not None and not self.modifiers()

    @contextlib.contextmanager
    def _as_window(self, hwnd):
        """临时把本线程切到游戏窗口的 DPI 模式。游戏不感知缩放、RGA 感知：不切的话，
        取到的客户区是实际像素，发出去的鼠标消息坐标还会被 Windows 按缩放比换算（150% 时缩成 2/3，点歪）。"""
        old = self.user.SetThreadDpiAwarenessContext(self.user.GetWindowDpiAwarenessContext(hwnd))
        try:
            yield
        finally:
            if old:
                self.user.SetThreadDpiAwarenessContext(old)

    def game_size(self, hwnd):
        """游戏客户区大小（游戏自己的坐标）。"""
        with self._as_window(hwnd):
            rect = self._client(hwnd)
        return (rect.right, rect.bottom) if rect else None

    def capture(self, hwnd):
        """截游戏客户区（后台、被挡住都能截，最小化不行），返回 Frame；失败返回 None。"""
        with self._as_window(hwnd):
            rect = self._client(hwnd)
            if not rect:
                return None
            width, height = rect.right, rect.bottom
            screen = self.user.GetDC(hwnd)
            memory = self.gdi.CreateCompatibleDC(screen)
            bitmap = self.gdi.CreateCompatibleBitmap(screen, width, height)
            old = self.gdi.SelectObject(memory, bitmap)
            try:
                if not self.user.PrintWindow(hwnd, memory, 3):  # PW_CLIENTONLY | PW_RENDERFULLCONTENT
                    return None
                header = (ctypes.c_uint32 * 10)(40, width, (-height) & 0xffffffff, 1 | (32 << 16), 0, 0, 0, 0, 0, 0)
                data = ctypes.create_string_buffer(width * height * 4)
                if self.gdi.GetDIBits(memory, bitmap, 0, height, data, header, 0) != height:
                    return None
                return Frame(width, height, data.raw)
            finally:
                self.gdi.SelectObject(memory, old)
                self.gdi.DeleteObject(bitmap)
                self.gdi.DeleteDC(memory)
                self.user.ReleaseDC(hwnd, screen)

    def post_click(self, hwnd, x, y):
        """给游戏窗口发一次点击（移入、按下、松开），x、y 是游戏坐标。鼠标不动。"""
        spot = (y << 16) | x
        with self._as_window(hwnd):
            return all([self.user.PostMessageW(hwnd, message, flag, spot)
                        for message, flag in ((0x0200, 0), (0x0201, 0x0001), (0x0202, 0))])  # MOUSEMOVE、LBUTTONDOWN、LBUTTONUP

    def click(self):
        """在鼠标当前位置点一下（同样是发消息，不产生真实鼠标点击）。返回 None 表示这次没点。"""
        hwnd = self.game_window()
        spot = hwnd and self.cursor_spot(hwnd)
        size = spot and self.game_size(hwnd)
        if not size:
            return None
        return self.post_click(hwnd, min(size[0] - 1, int(spot[0] * size[0])), min(size[1] - 1, int(spot[1] * size[1])))

    def key(self, name, down):
        """模拟按下或松开一个键（带虚拟键码和扫描码，游戏两种都认）。"""
        item = Input()
        item.type = 1  # INPUT_KEYBOARD
        item.data.ki.wVk = KEYS[name]
        item.data.ki.wScan = self.user.MapVirtualKeyW(KEYS[name], 0)
        item.data.ki.dwFlags = 0 if down else 0x0002  # KEYEVENTF_KEYUP
        return self.user.SendInput(1, ctypes.byref(item), ctypes.sizeof(Input)) == 1



class AutoClicker:
    """快捷键启停连点，可选连点期间同时按住一个键，另有每秒自动点「全部购买」；设置存在 settings_path（JSON）。"""

    def __init__(self, settings_path=None, native=None):
        self.path = settings_path
        self.native = native or WindowsInput()
        self.settings = dict(DEFAULTS)
        if self.path:
            try:
                with open(self.path, encoding='utf-8') as file:
                    self.settings = validate(json.load(file))
            except (OSError, ValueError, TypeError):
                pass
        self.enabled = self.clicking = self.registered = False
        self.pressed = ''  # 当前替用户按住的键
        self.buy_due = 0  # 下次检查「全部购买」的时间
        self.found = []  # 上次在画面上找到的按钮名字
        self.error = ''
        self.commands = queue.Queue()
        self.lock = threading.RLock()
        self.stop = threading.Event()
        self.ready = threading.Event()
        self.thread = threading.Thread(target=self._run, name='RGA-auto-click', daemon=True)
        self.thread.start()
        self.ready.wait(3)

    def status(self):
        with self.lock:
            return {'ok': True, 'settings': dict(self.settings), 'hotkey': hotkey_text(self.settings),
                    'enabled': self.enabled, 'clicking': self.clicking, 'registered': self.registered, 'error': self.error,
                    'found': list(self.found)}

    def command(self, action, settings=None):
        if self.stop.is_set() or not self.thread.is_alive():
            return {'ok': False, 'error': '自动点击服务已停止，请重新打开程序。'}
        if action == 'configure':
            try:
                settings = validate(settings)
            except (ValueError, TypeError) as error:
                return {'ok': False, 'error': str(error)}
        done, result = threading.Event(), {}
        self.commands.put((action, settings, done, result))
        if not done.wait(3):
            return {'ok': False, 'error': '自动点击服务没有响应，请重新打开程序。'}
        return result

    def _save(self, settings):
        if not self.path:
            return
        os.makedirs(os.path.dirname(self.path), exist_ok=True)
        temp = self.path + '.tmp'
        try:
            with open(temp, 'w', encoding='utf-8') as file:
                json.dump(settings, file, ensure_ascii=False)
            os.replace(temp, self.path)
        finally:
            if os.path.exists(temp):
                os.remove(temp)

    def _configure(self, ident, settings):
        """换快捷键时先注册新的，成功再放掉旧的；返回当前热键编号。"""
        changed = hotkey_text(settings) != hotkey_text(self.settings) or not self.registered
        new_ident = 3 - ident
        if changed and not self.native.register(new_ident, settings):
            raise ValueError('快捷键 %s 已被占用，请换一个。' % hotkey_text(settings))
        try:
            self._save(settings)
        except OSError:
            if changed:
                self.native.unregister(new_ident)
            raise ValueError('设置保存失败，请检查本机 RGA 数据目录是否可写。')
        if changed:
            if self.registered:
                self.native.unregister(ident)
            ident = new_ident
        self.settings, self.registered = settings, True
        self.error = ''
        return ident

    def _run(self):
        ident, deadline = 1, 0
        try:
            self.registered = self.native.register(ident, self.settings)
            if not self.registered:
                self.error = '快捷键 %s 已被占用，请换一个。' % hotkey_text(self.settings)
            self.ready.set()
            while not self.stop.is_set():
                with self.lock:
                    while not self.commands.empty():
                        action, settings, done, result = self.commands.get_nowait()
                        try:
                            if action == 'configure':
                                ident = self._configure(ident, settings)
                            elif action == 'toggle':
                                self._toggle()
                            else:
                                raise ValueError('未知的自动点击操作。')
                            result.update(self.status())
                        except ValueError as error:
                            result.update(ok=False, error=str(error))
                        finally:
                            done.set()
                    for key in self.native.hotkeys():
                        if self.registered and key == ident:
                            self._toggle()
                    self.clicking = self.enabled and self.settings['cursor'] and self.native.in_game()
                    want = self.settings['hold_key'] if self.clicking and self.settings['hold'] else ''
                    if want != self.pressed:
                        self._release()
                        if want:
                            self.native.key(want, True)
                            self.pressed = want
                    if self.clicking:
                        now = time.perf_counter()
                        if now >= deadline:
                            if self.native.click() is False:
                                self.enabled = self.clicking = False
                                self.error = '点击发送失败。若游戏以管理员运行，请以同样权限打开 RGA。'
                            deadline = now + self.settings['interval'] / 1000
                    else:
                        deadline = 0
                    if self.enabled and self.settings['buy']:
                        self._buy()
                    else:
                        self.found = []
                delay = max(0.001, min(0.01, deadline - time.perf_counter())) if deadline else 0.01
                self.stop.wait(delay)
        except Exception:
            with self.lock:
                self.enabled = self.clicking = False
                self.error = '自动点击服务出错，请重新打开程序。'
        finally:
            self._release()
            if self.registered:
                self.native.unregister(ident)
            self.registered = False
            self.ready.set()

    def _toggle(self):
        self.enabled = not self.enabled
        self.error = ''
        self.buy_due = 0  # 开启时马上检查一次

    def _buy(self):
        """每秒截一次游戏画面，找到的「全部购买」各点一下。游戏没开、最小化、画面上没有按钮就跳过。"""
        now = time.perf_counter()
        if now < self.buy_due:
            return
        self.buy_due = now + BUY_SECONDS
        hwnd = self.native.find_game()
        frame = hwnd and self.native.capture(hwnd)
        buttons = find_buy_buttons(frame) if frame else []
        self.found = [name for name, _, _ in buttons]
        if buttons:
            self._release()  # 点按钮时不带着「按住的键」
        for _, x, y in buttons:
            if self.native.post_click(hwnd, x, y) is False:
                self.enabled = self.clicking = False
                self.error = '点击发送失败。若游戏以管理员运行，请以同样权限打开 RGA。'
                return

    def _release(self):
        if self.pressed:
            self.native.key(self.pressed, False)
            self.pressed = ''

    def close(self):
        self.stop.set()
        self.thread.join(timeout=3)
        with self.lock:
            self.enabled = self.clicking = False
