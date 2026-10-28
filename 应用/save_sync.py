"""只读、去重的存档读取，以及 Windows 文件变化通知。"""
import base64
import ctypes
from ctypes import wintypes
import glob
import hashlib
import os
from pathlib import Path
import re
import threading
import time
import zlib

SAVE_RE = re.compile(rb'\$\d{2}s[A-Za-z0-9+/=]+\$e')


def find_saves():
    root = os.environ.get('APPDATA', '')
    patterns = [os.path.join(root, '*', 'Local Store', '#SharedObjects', '*', 'realm-grinder.sol'),
                os.path.join(root, '*', 'Local Store', '#SharedObjects', '*', '*', 'realm-grinder.sol')]
    files = []
    for path in {path for pattern in patterns for path in glob.glob(pattern)}:
        try:
            files.append((os.stat(path).st_mtime_ns, path))
        except OSError:
            continue
    return [path for _, path in sorted(files, reverse=True)]


def stamp(info):
    return info.st_dev, info.st_ino, info.st_size, info.st_mtime_ns


class SaveReader:
    def __init__(self, discover=find_saves, scan_interval=2, verify_interval=5):
        self._discover = discover
        self._scan_interval = scan_interval
        self._verify_interval = verify_interval
        self._verified_at = 0
        self._next_scan = 0
        self._path = None
        self._signature = None
        self._cached = None
        self._raw_digest = None
        self._sequence = 0
        self._lock = threading.RLock()

    def watch_path(self):
        with self._lock:
            now = time.monotonic()
            if now >= self._next_scan or (self._path and not os.path.isfile(self._path)):
                paths = self._discover()
                self._path = str(paths[0]) if paths else None
                self._next_scan = now + (self._scan_interval if self._path else .25)
            return self._path

    def read(self, force=False):
        with self._lock:
            path = self.watch_path()
            if path is None:
                return dict(ok=False, retryable=True, error='没有找到游戏存档。请打开游戏，让它保存一次。')
            try:
                before = os.stat(path)
                signature = path, stamp(before)
                if (not force and signature == self._signature and self._cached is not None
                        and time.monotonic() - self._verified_at < self._verify_interval):
                    return dict(self._cached)
                with open(path, 'rb') as stream:
                    opened = os.fstat(stream.fileno())
                    raw = stream.read()
                    finished = os.fstat(stream.fileno())
                after = os.stat(path)
                if not stamp(before) == stamp(opened) == stamp(finished) == stamp(after):
                    raise ValueError('游戏正在写入存档，稍后重试')
                # 元数据没变时定期复核内容；字节相同就直接复用，不再解码。
                raw_digest = hashlib.sha256(raw).digest()
                if signature == self._signature and raw_digest == self._raw_digest and self._cached is not None:
                    self._verified_at = time.monotonic()
                    return dict(self._cached)
                matches = SAVE_RE.findall(raw)
                if not matches:
                    raise ValueError('存档数据尚未写完整，稍后重试')
                encoded = max(matches, key=len)
                # Regex 也可能匹配到写入一半的字符串，校验压缩数据完整性。
                decoded = zlib.decompress(base64.b64decode(encoded[4:-2], validate=True))
                if len(decoded) < 2:
                    raise ValueError('存档数据不完整')
                version = hashlib.sha256((path + str(stamp(after))).encode() + encoded).hexdigest()
                if self._cached is None or version != self._cached['version']:
                    self._sequence += 1
                result = dict(ok=True, path=path, mtime=int(after.st_mtime * 1000),
                              version=version, sequence=self._sequence, save=encoded.decode('ascii'))
                self._signature, self._cached, self._raw_digest = signature, result, raw_digest
                self._verified_at = time.monotonic()
                return dict(result)
            except (OSError, ValueError, zlib.error) as error:
                # 不覆盖上一份完整快照，后续通知或兜底检查继续重试。
                return dict(ok=False, path=path, retryable=True, error='暂时读不到完整存档：' + str(error))


class DirectorySignal:
    """目录通知只负责唤醒；读取时仍检查目标文件及完整性。"""
    def __init__(self, path):
        if os.name != 'nt':
            raise OSError('当前系统不支持 Windows 目录通知')
        self.kernel = ctypes.WinDLL('kernel32', use_last_error=True)
        self.kernel.FindFirstChangeNotificationW.argtypes = [wintypes.LPCWSTR, wintypes.BOOL, wintypes.DWORD]
        self.kernel.FindFirstChangeNotificationW.restype = wintypes.HANDLE
        self.kernel.FindNextChangeNotification.argtypes = [wintypes.HANDLE]
        self.kernel.FindNextChangeNotification.restype = wintypes.BOOL
        self.kernel.FindCloseChangeNotification.argtypes = [wintypes.HANDLE]
        self.kernel.FindCloseChangeNotification.restype = wintypes.BOOL
        self.kernel.WaitForSingleObject.argtypes = [wintypes.HANDLE, wintypes.DWORD]
        self.kernel.WaitForSingleObject.restype = wintypes.DWORD
        # 文件名、目录名、长度、修改时间：覆盖原地写入和临时文件替换。
        self.handle = self.kernel.FindFirstChangeNotificationW(str(Path(path).parent), False, 0x1 | 0x2 | 0x8 | 0x10)
        if self.handle in (None, ctypes.c_void_p(-1).value):
            raise ctypes.WinError(ctypes.get_last_error())

    def wait(self, milliseconds):
        result = self.kernel.WaitForSingleObject(self.handle, milliseconds)
        if result == 0:
            if not self.kernel.FindNextChangeNotification(self.handle):
                raise ctypes.WinError(ctypes.get_last_error())
            return True
        if result == 258:
            return False
        raise ctypes.WinError(ctypes.get_last_error())

    def close(self):
        if self.handle is not None:
            self.kernel.FindCloseChangeNotification(self.handle)
            self.handle = None


class SaveWatcher:
    def __init__(self, reader, notify):
        self.reader, self.notify = reader, notify
        self._stop = threading.Event()
        self._thread = None
        self._start_lock = threading.Lock()
        self.mode = 'starting'

    def start(self):
        with self._start_lock:
            if self._stop.is_set():
                return False
            if self._thread is None:
                self._thread = threading.Thread(target=self._run, name='rga-save-watch', daemon=True)
                self._thread.start()
            return True

    def close(self):
        self._stop.set()
        if self._thread is not None and self._thread is not threading.current_thread():
            self._thread.join(timeout=1)

    def _run(self):
        signal, path, version = None, None, None
        pending, last_check = 0, 0
        try:
            while not self._stop.is_set():
                selected = self.reader.watch_path()
                if selected != path:
                    if signal:
                        signal.close()
                    path, signal, pending = selected, None, time.monotonic()
                    if path:
                        try:
                            signal = DirectorySignal(path)
                        except OSError:
                            pass
                    self.mode = 'file_notifications' if signal else 'stat_fallback'
                changed = False
                if signal:
                    try:
                        changed = signal.wait(50)
                    except OSError:
                        signal.close()
                        signal = None
                        self.mode = 'stat_fallback'
                else:
                    self._stop.wait(.05)
                now = time.monotonic()
                if changed:
                    pending = now + .08  # 合并一次保存产生的连续通知。
                # 原生通知为主，低频元数据检查兜底；不反复打开未变化的文件。
                if (pending and now >= pending) or now - last_check >= (2 if signal else .25):
                    result = self.reader.read(force=bool(pending))
                    last_check, pending = now, 0
                    if not result['ok']:
                        pending = now + .15
                    elif result['version'] != version:
                        try:
                            delivered = self.notify(result)
                            if delivered is False:
                                pending = now + .15
                            else:
                                version = result['version']
                        except Exception:
                            pending = now + .15
        finally:
            if signal:
                signal.close()
