"""Windows 全局热键与游戏内连点。所有输入操作都在独立线程中执行。"""
import ctypes
from ctypes import wintypes as w
import os
import threading
import time


KEYS = {**{'F%d' % n: 0x6f + n for n in range(1, 12)},
        **{c: ord(c) for c in 'ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789'},
        'Space': 0x20, 'Home': 0x24, 'End': 0x23, 'Insert': 0x2d, 'Delete': 0x2e}
DEFAULTS = {'key': 'F8', 'ctrl': False, 'alt': False, 'shift': False, 'interval': 35}



def hotkey_text(settings):
    return '+'.join([name for key, name in [('ctrl', 'Ctrl'), ('alt', 'Alt'), ('shift', 'Shift')]
                     if settings[key]] + [settings['key']])


class MouseInput(ctypes.Structure):
    _fields_ = [('dx', w.LONG), ('dy', w.LONG), ('mouseData', w.DWORD),
                ('dwFlags', w.DWORD), ('time', w.DWORD), ('dwExtraInfo', ctypes.c_size_t)]


class InputUnion(ctypes.Union):
    _fields_ = [('mi', MouseInput)]  # MOUSEINPUT 是 INPUT 联合体中最大的成员。


class Input(ctypes.Structure):
    _fields_ = [('type', w.DWORD), ('data', InputUnion)]


class WindowsInput:
    def __init__(self):
        self.user = ctypes.WinDLL('user32', use_last_error=True)
        self.kernel = ctypes.WinDLL('kernel32', use_last_error=True)
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
            (self.user.GetAsyncKeyState, [ctypes.c_int], ctypes.c_short),
            (self.user.SendInput, [w.UINT, ctypes.POINTER(Input), ctypes.c_int], w.UINT),
            (self.kernel.OpenProcess, [w.DWORD, w.BOOL, w.DWORD], w.HANDLE),
            (self.kernel.QueryFullProcessImageNameW, [w.HANDLE, w.DWORD, w.LPWSTR, ctypes.POINTER(w.DWORD)], w.BOOL),
            (self.kernel.CloseHandle, [w.HANDLE], w.BOOL),
        ]
        for function, args, result in signatures:
            function.argtypes, function.restype = args, result
        self.inputs = (Input * 2)()
        self.inputs[0].data.mi.dwFlags = 0x0002  # LEFTDOWN
        self.inputs[1].data.mi.dwFlags = 0x0004  # LEFTUP

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

    def in_game(self):
        hwnd = self.user.GetForegroundWindow()
        if not hwnd:
            return False
        # 按进程名认游戏，兼容汉化版和窗口标题变化。
        pid = w.DWORD()
        self.user.GetWindowThreadProcessId(hwnd, ctypes.byref(pid))
        process = self.kernel.OpenProcess(0x1000, False, pid.value)
        if not process:
            return False
        try:
            name, size = ctypes.create_unicode_buffer(32768), w.DWORD(32768)
            if not self.kernel.QueryFullProcessImageNameW(process, 0, name, ctypes.byref(size)):
                return False
            if os.path.basename(name.value).lower() not in ('realmgrinderdesktop.exe', 'realmgrinder.exe'):
                return False
        finally:
            self.kernel.CloseHandle(process)
        point = w.POINT()
        if not self.user.GetCursorPos(ctypes.byref(point)):
            return False
        if self.user.GetAncestor(self.user.WindowFromPoint(point), 2) != hwnd:
            return False
        rect = w.RECT()
        if not self.user.ScreenToClient(hwnd, ctypes.byref(point)) or not self.user.GetClientRect(hwnd, ctypes.byref(rect)):
            return False
        if not rect.left <= point.x < rect.right or not rect.top <= point.y < rect.bottom:
            return False
        # 快捷键尚未松开时，避免把普通点击变成 Ctrl/Shift/Alt 点击。
        return not any(self.user.GetAsyncKeyState(vk) & 0x8000 for vk in (0x10, 0x11, 0x12, 0x5b, 0x5c))

    def click(self):
        sent = self.user.SendInput(2, self.inputs, ctypes.sizeof(Input))
        if sent != 2:
            # 即使只成功发送了按下，也补一次释放，避免鼠标保持按住。
            self.user.SendInput(1, ctypes.byref(self.inputs[1]), ctypes.sizeof(Input))
        return sent == 2


class AutoClicker:
    """固定用 F8 启停、每 35 毫秒点一次（暂不提供修改）。"""

    def __init__(self, native=None):
        self.native = native or WindowsInput()
        self.settings = dict(DEFAULTS)
        self.enabled = self.clicking = self.registered = False
        self.error = ''
        self.lock = threading.RLock()
        self.stop = threading.Event()
        self.ready = threading.Event()
        self.thread = threading.Thread(target=self._run, name='RGA-auto-click', daemon=True)
        self.thread.start()
        self.ready.wait(3)

    def status(self):
        with self.lock:
            return {'ok': True, 'settings': dict(self.settings), 'hotkey': hotkey_text(self.settings),
                    'enabled': self.enabled, 'clicking': self.clicking, 'registered': self.registered, 'error': self.error}

    def _run(self):
        ident, deadline = 1, 0
        try:
            self.registered = self.native.register(ident, self.settings)
            if not self.registered:
                self.error = '快捷键 %s 已被占用。' % hotkey_text(self.settings)
            self.ready.set()
            while not self.stop.is_set():
                with self.lock:
                    for key in self.native.hotkeys():
                        if self.registered and key == ident:
                            self.enabled = not self.enabled
                            self.error = ''
                    self.clicking = False
                    if self.enabled and self.native.in_game():
                        self.clicking = True
                        now = time.perf_counter()
                        if now >= deadline:
                            if not self.native.click():
                                self.enabled = self.clicking = False
                                self.error = '点击发送失败。若游戏以管理员运行，请以同样权限打开 RGA。'
                            deadline = now + self.settings['interval'] / 1000
                    else:
                        deadline = 0
                delay = max(0.001, min(0.01, deadline - time.perf_counter())) if deadline else 0.01
                self.stop.wait(delay)
        except Exception:
            with self.lock:
                self.enabled = self.clicking = False
                self.error = '自动点击服务出错，请重新打开程序。'
        finally:
            if self.registered:
                self.native.unregister(ident)
            self.registered = False
            self.ready.set()

    def close(self):
        self.stop.set()
        self.thread.join(timeout=3)
        with self.lock:
            self.enabled = self.clicking = False
