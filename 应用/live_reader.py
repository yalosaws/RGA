"""实时读数与计算快照的只读连接管理。"""
import ctypes
from ctypes import wintypes
import importlib
import json
from pathlib import Path
import sys
import threading

ROOT = Path(__file__).resolve().parents[1]


class ProcessEntry(ctypes.Structure):
    _fields_ = [('size', wintypes.DWORD), ('usage', wintypes.DWORD), ('pid', wintypes.DWORD),
                ('heap', ctypes.c_size_t), ('module', wintypes.DWORD), ('threads', wintypes.DWORD),
                ('parent', wintypes.DWORD), ('priority', wintypes.LONG), ('flags', wintypes.DWORD),
                ('name', wintypes.WCHAR * 260)]


def game_pids():
    kernel = ctypes.WinDLL('kernel32', use_last_error=True)
    kernel.CreateToolhelp32Snapshot.argtypes = [wintypes.DWORD, wintypes.DWORD]
    kernel.CreateToolhelp32Snapshot.restype = wintypes.HANDLE
    kernel.Process32FirstW.argtypes = [wintypes.HANDLE, ctypes.POINTER(ProcessEntry)]
    kernel.Process32FirstW.restype = wintypes.BOOL
    kernel.Process32NextW.argtypes = [wintypes.HANDLE, ctypes.POINTER(ProcessEntry)]
    kernel.Process32NextW.restype = wintypes.BOOL
    kernel.CloseHandle.argtypes = [wintypes.HANDLE]
    kernel.CloseHandle.restype = wintypes.BOOL
    handle = kernel.CreateToolhelp32Snapshot(2, 0)
    if handle in (None, ctypes.c_void_p(-1).value):
        raise ctypes.WinError(ctypes.get_last_error())
    try:
        result = []
        entry = ProcessEntry()
        entry.size = ctypes.sizeof(entry)
        ok = kernel.Process32FirstW(handle, ctypes.byref(entry))
        while ok:
            if entry.name.lower() == 'realmgrinderdesktop.exe':
                result.append(entry.pid)
            ok = kernel.Process32NextW(handle, ctypes.byref(entry))
        return result
    finally:
        kernel.CloseHandle(handle)


class LiveClient:
    def __init__(self):
        self._lock = threading.Lock()
        self._cancel = threading.Event()
        self._memory = self._probe = None
        self._capture = None

    def _close(self):
        if self._memory is not None:
            self._memory.close()
        self._memory = self._probe = None
        self._capture = None

    def close(self):
        self._cancel.set()
        with self._lock:
            self._close()
        return True

    def _connect(self):
        pids = game_pids()
        if self._memory is not None and (len(pids) != 1 or pids[0] != self._memory.pid):
            self._close()
        if self._memory is None:
            self._cancel.clear()
            if len(pids) != 1:
                raise ValueError('没有找到正在运行的游戏' if not pids else '检测到多个游戏进程，暂不自动选择')
            assets = Path(sys._MEIPASS) / 'calculation' if getattr(sys, 'frozen', False) else ROOT / 'build/calculation'
            manifest = json.loads((assets / 'provenance.json').read_text(encoding='utf-8'))
            profile = json.loads((assets / 'live-profile.json').read_text(encoding='utf-8'))
            if profile['swf_sha256'] != manifest['swf_sha256']:
                raise ValueError('实时布局与客户端代码版本不匹配')
            if str(assets) not in sys.path:
                sys.path.insert(0, str(assets))
            memory_class = importlib.import_module('game_memory_probe').GameMemory
            probe_class = importlib.import_module('read_game_live').LiveProbe
            self._memory = memory_class(pids[0])
            self._memory.cancel = self._cancel
            self._probe = probe_class(self._memory, expected_swf_hash=manifest['swf_sha256'], expected_air_hash=profile['air_sha256'])

    def read(self):
        with self._lock:
            try:
                self._connect()
                data = self._probe.sample()
                data.update(swf_sha256=self._probe.swf_hash, locate_ms=self._probe.locate_ms)
                return dict(ok=True, **data)
            except Exception as error:
                self._close()
                return dict(ok=False, error=str(error))

    def snapshot(self):
        with self._lock:
            try:
                self._connect()
                if self._capture is None:
                    assets = Path(sys._MEIPASS) / 'calculation' if getattr(sys, 'frozen', False) else ROOT / 'build/calculation'
                    layout = json.loads((assets / 'live-layout.json').read_text(encoding='utf-8'))
                    if layout['schema'] != 1 or layout['swf_sha256'] != self._probe.swf_hash:
                        raise ValueError('计算对象布局与运行客户端不匹配')
                    index = json.loads((assets / 'index.json').read_text(encoding='utf-8'))
                    capture_class = importlib.import_module('live_state').StateCapture
                    self._capture = capture_class(self._probe, layout['classes'], {entry['cls'].strip('§') for entry in index['entries']})
                data = self._capture.stable_capture()
                return dict(ok=True, **data)
            except Exception as error:
                self._close()
                return dict(ok=False, error=str(error))
