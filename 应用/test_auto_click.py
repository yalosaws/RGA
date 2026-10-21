"""连点器回归测试。模拟鼠标输入，绝不向游戏发送点击。"""
import ctypes
import queue
import time
import unittest
from types import SimpleNamespace

from auto_click import AutoClicker, DEFAULTS, Input, WindowsInput, w


def wait_for(predicate, timeout=1):
    limit = time.monotonic() + timeout
    while time.monotonic() < limit:
        if predicate():
            return
        time.sleep(.005)
    raise AssertionError('等待后台状态超时')


class FakeInput:
    def __init__(self):
        self.registrations = {}
        self.blocked = set()
        self.keys = queue.Queue()
        self.game = False
        self.sent = []
        self.fail = False

    def register(self, ident, settings):
        if settings['key'] in self.blocked:
            return False
        self.registrations[ident] = settings['key']
        return True

    def unregister(self, ident):
        self.registrations.pop(ident, None)

    def hotkeys(self):
        result = []
        while not self.keys.empty():
            result.append(self.keys.get_nowait())
        return result

    def in_game(self):
        return self.game

    def click(self):
        self.sent.append(time.perf_counter())
        return not self.fail


class ClickerTest(unittest.TestCase):
    def setUp(self):
        self.native = FakeInput()
        self.clicker = AutoClicker(self.native)

    def tearDown(self):
        self.clicker.close()

    def test_defaults_and_hotkey_toggle(self):
        self.assertEqual(self.clicker.status()['hotkey'], 'F8')
        self.assertFalse(self.clicker.status()['enabled'])
        self.native.keys.put(1)
        wait_for(lambda: self.clicker.status()['enabled'])
        time.sleep(.05)
        self.assertEqual(self.native.sent, [])  # 不在游戏内不发送点击。
        self.native.game = True
        wait_for(lambda: len(self.native.sent) >= 4)
        self.assertTrue(all(b-a >= .033 for a, b in zip(self.native.sent, self.native.sent[1:])))
        self.native.game = False
        wait_for(lambda: not self.clicker.status()['clicking'])
        count = len(self.native.sent)
        time.sleep(.07)
        self.assertEqual(len(self.native.sent), count)
        self.native.keys.put(1)
        wait_for(lambda: not self.clicker.status()['enabled'])

    def test_fixed_settings(self):
        self.assertEqual(self.clicker.status()['settings'], DEFAULTS)
        self.assertEqual(DEFAULTS['key'], 'F8')
        self.assertEqual(DEFAULTS['interval'], 35)
        self.assertEqual(self.native.registrations, {1: 'F8'})
        self.assertFalse(hasattr(self.clicker, 'command'))

    def test_initial_hotkey_conflict_reports_error(self):
        self.clicker.close()
        self.native.blocked.add('F8')
        self.clicker = AutoClicker(self.native)
        self.assertFalse(self.clicker.status()['registered'])
        self.assertTrue(self.clicker.status()['error'])
        self.native.keys.put(1)
        time.sleep(.05)
        self.assertFalse(self.clicker.status()['enabled'])

    def test_send_failure_stops_and_shutdown_releases(self):
        self.native.game = self.native.fail = True
        self.native.keys.put(1)
        wait_for(lambda: bool(self.clicker.status()['error']))
        self.assertFalse(self.clicker.status()['enabled'])
        self.clicker.close()
        self.assertFalse(self.clicker.thread.is_alive())
        self.assertEqual(self.native.registrations, {})
        count = len(self.native.sent)
        time.sleep(.05)
        self.assertEqual(count, len(self.native.sent))

    def test_native_layout_and_message_routing_without_real_clicks(self):
        native = WindowsInput()
        self.assertEqual(ctypes.sizeof(Input), 40 if ctypes.sizeof(ctypes.c_void_p) == 8 else 28)
        self.assertEqual([item.data.mi.dwFlags for item in native.inputs], [2,4])
        # 真正注册 Windows 热键，再向该线程投递 WM_HOTKEY；不注入键盘或鼠标事件。
        class NativeTest(WindowsInput):
            def register(self, ident, settings):
                self.tid = ctypes.windll.kernel32.GetCurrentThreadId()
                # 测试时换成不常用的组合键，避免和正在运行的 RGA 抢 F8。
                return super().register(ident, dict(settings, key='F11', ctrl=True, alt=True, shift=True))
            def in_game(self):
                return False
            def click(self):
                raise AssertionError('测试中不应发送鼠标输入')
        real = NativeTest()
        clicker = AutoClicker(real)
        try:
            self.assertTrue(clicker.status()['registered'])
            ctypes.windll.user32.PostThreadMessageW(real.tid, 0x0312, 1, 0)
            wait_for(lambda: clicker.status()['enabled'])
            ctypes.windll.user32.PostThreadMessageW(real.tid, 0x0312, 1, 0)
            wait_for(lambda: not clicker.status()['enabled'])
        finally:
            clicker.close()

    def test_native_foreground_cursor_and_modifier_guards(self):
        native = WindowsInput()
        state = SimpleNamespace(exe=r'C:\games\RealmGrinderDesktop.exe', x=50, y=60, root=100, modifier=0)
        def cursor(pointer):
            point = ctypes.cast(pointer, ctypes.POINTER(w.POINT)).contents
            point.x, point.y = state.x, state.y
            return True
        def rect(hwnd, pointer):
            area = ctypes.cast(pointer, ctypes.POINTER(w.RECT)).contents
            area.left, area.top, area.right, area.bottom = 0, 0, 500, 400
            return True
        def process_name(handle, flags, buffer, size):
            buffer.value = state.exe
            return True
        native.user = SimpleNamespace(GetForegroundWindow=lambda:100,
            GetWindowThreadProcessId=lambda *args:1, GetCursorPos=cursor,
            WindowFromPoint=lambda point:state.root, GetAncestor=lambda hwnd, flags:hwnd,
            ScreenToClient=lambda *args:True, GetClientRect=rect, GetAsyncKeyState=lambda vk:state.modifier)
        native.kernel = SimpleNamespace(OpenProcess=lambda *args:1,
            QueryFullProcessImageNameW=process_name, CloseHandle=lambda handle:True)
        self.assertTrue(native.in_game())
        state.exe = r'C:\Windows\notepad.exe'
        self.assertFalse(native.in_game())
        state.exe = r'C:\games\RealmGrinderDesktop.exe'
        state.root = 200  # 鼠标被另一个浮层窗口盖住。
        self.assertFalse(native.in_game())
        state.root, state.y = 100, -1  # 客户区外（例如标题栏）。
        self.assertFalse(native.in_game())
        state.y, state.x = 60, 500
        self.assertFalse(native.in_game())
        state.x, state.modifier = 50, 0x8000
        self.assertFalse(native.in_game())

    def test_partial_input_sends_release_without_real_clicks(self):
        native = WindowsInput()
        calls = []
        def send(count, inputs, size):
            calls.append((count, size))
            return 1
        native.user = SimpleNamespace(SendInput=send)
        self.assertFalse(native.click())
        self.assertEqual(calls, [(2, ctypes.sizeof(Input)), (1, ctypes.sizeof(Input))])


if __name__ == '__main__':
    unittest.main(verbosity=2)
