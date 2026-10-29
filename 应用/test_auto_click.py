"""连点器回归测试。模拟鼠标输入，绝不向游戏发送点击。"""
import ctypes
import json
import queue
import tempfile
import time
import unittest
from pathlib import Path
from types import SimpleNamespace
from unittest.mock import patch

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
        self.keylog, self.key_time = [], []

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

    def key(self, name, down):
        self.keylog.append((name, down))
        self.key_time.append(time.perf_counter())
        return True

    def click(self):
        self.sent.append(time.perf_counter())
        return not self.fail


class ClickerTest(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.path = str(Path(self.temp.name, 'settings.json'))
        self.native = FakeInput()
        self.clicker = AutoClicker(self.path, self.native)

    def tearDown(self):
        self.clicker.close()
        self.temp.cleanup()

    def test_defaults_and_hotkey_toggle(self):
        self.assertEqual(self.clicker.status()['settings'], DEFAULTS)
        self.assertEqual(self.native.registrations, {1: 'F8'})
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

    def test_ui_toggle(self):
        self.assertTrue(self.clicker.command('toggle')['enabled'])
        self.assertFalse(self.clicker.command('toggle')['enabled'])

    def test_settings_persist(self):
        settings = dict(DEFAULTS, key='J', ctrl=True, shift=True, interval=70, hold=True, hold_key='Q')
        self.clicker.command('toggle')
        result = self.clicker.command('configure', settings)
        self.assertTrue(result['ok'])
        self.assertTrue(result['enabled'])  # 改设置不打断正在进行的连点
        self.assertEqual(result['hotkey'], 'Ctrl+Shift+J')
        self.assertEqual(json.loads(Path(self.path).read_text()), settings)
        self.assertEqual(self.native.registrations, {2: 'J'})
        self.clicker.close()
        self.clicker = AutoClicker(self.path, self.native)
        self.assertEqual(self.clicker.status()['settings'], settings)
        self.assertFalse(self.clicker.status()['enabled'])

    def test_old_settings_file_gets_hold_defaults(self):
        self.clicker.close()
        Path(self.path).write_text(json.dumps({'key': 'F9', 'ctrl': False, 'alt': False, 'shift': False, 'interval': 50}))
        self.clicker = AutoClicker(self.path, self.native)
        self.assertEqual(self.clicker.status()['settings'], dict(DEFAULTS, key='F9', interval=50))

    def test_hold_key_pressed_only_while_clicking(self):
        self.assertTrue(self.clicker.command('configure', dict(DEFAULTS, hold=True))['ok'])
        self.clicker.command('toggle')
        time.sleep(.05)
        self.assertEqual(self.native.keylog, [])  # 不在游戏里：不按键也不点
        self.native.game = True
        wait_for(lambda: len(self.native.sent) >= 2)
        self.assertEqual(self.native.keylog, [('R', True)])
        self.assertLess(self.native.key_time[0], self.native.sent[0])  # 先按住键再点
        self.native.game = False
        wait_for(lambda: self.native.keylog[-1] == ('R', False))
        self.native.game = True
        wait_for(lambda: self.native.keylog[-1] == ('R', True))
        self.clicker.command('configure', dict(DEFAULTS, hold=True, hold_key='T'))  # 换键：松开旧的再按新的
        wait_for(lambda: self.native.keylog[-1] == ('T', True))
        self.assertEqual(self.native.keylog[-2], ('R', False))
        self.clicker.command('toggle')
        wait_for(lambda: self.native.keylog[-1] == ('T', False))
        self.clicker.command('toggle')
        wait_for(lambda: self.native.keylog[-1] == ('T', True))
        self.clicker.close()  # 关程序时一定松开
        self.assertEqual(self.native.keylog[-1], ('T', False))

    def test_hold_off_never_presses(self):
        self.native.game = True
        self.clicker.command('toggle')
        wait_for(lambda: len(self.native.sent) >= 3)
        self.assertEqual(self.native.keylog, [])

    def test_conflict_keeps_old_hotkey_and_settings(self):
        self.native.blocked.add('F9')
        result = self.clicker.command('configure', dict(DEFAULTS, key='F9'))
        self.assertFalse(result['ok'])
        self.assertEqual(self.native.registrations, {1: 'F8'})
        self.assertEqual(self.clicker.status()['hotkey'], 'F8')

    def test_bad_settings_rejected(self):
        for value in [0, -1, 9, 1001, 35.2, '35', True, float('nan'), float('inf')]:
            self.assertFalse(self.clicker.command('configure', dict(DEFAULTS, interval=value))['ok'])
        self.assertFalse(self.clicker.command('configure', dict(DEFAULTS, key='F12'))['ok'])
        self.assertFalse(self.clicker.command('configure', dict(DEFAULTS, hold_key='Tab'))['ok'])
        self.assertFalse(self.clicker.command('configure', dict(DEFAULTS, hold='yes'))['ok'])
        self.assertFalse(self.clicker.command('configure', dict(DEFAULTS, hold=True, hold_key='F8'))['ok'])
        self.assertTrue(self.clicker.command('configure', dict(DEFAULTS, ctrl=True, hold=True, hold_key='F8'))['ok'])

    def test_write_failure_rolls_back_hotkey(self):
        with patch.object(self.clicker, '_save', side_effect=OSError('disk')):
            result = self.clicker.command('configure', dict(DEFAULTS, key='F9'))
        self.assertFalse(result['ok'])
        self.assertEqual(self.native.registrations, {1: 'F8'})
        self.assertEqual(self.clicker.status()['hotkey'], 'F8')

    def test_initial_hotkey_conflict_can_recover(self):
        self.clicker.close()
        self.native.blocked.add('F8')
        self.clicker = AutoClicker(self.path, self.native)
        self.assertFalse(self.clicker.status()['registered'])
        self.assertTrue(self.clicker.status()['error'])
        self.assertTrue(self.clicker.command('configure', dict(DEFAULTS, key='F10'))['ok'])
        self.assertTrue(self.clicker.status()['registered'])

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
        clicker = AutoClicker(None, real)
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

    def test_key_input_layout_without_real_keys(self):
        native = WindowsInput()
        calls = []
        def send(count, pointer, size):
            item = ctypes.cast(pointer, ctypes.POINTER(Input)).contents
            calls.append((count, item.type, item.data.ki.wVk, item.data.ki.wScan, item.data.ki.dwFlags, size))
            return 1
        native.user = SimpleNamespace(SendInput=send, MapVirtualKeyW=lambda vk, kind: 0x13)
        self.assertTrue(native.key('R', True))
        self.assertTrue(native.key('R', False))
        self.assertEqual(calls, [(1, 1, 0x52, 0x13, 0, ctypes.sizeof(Input)), (1, 1, 0x52, 0x13, 2, ctypes.sizeof(Input))])

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
