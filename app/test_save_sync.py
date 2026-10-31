"""完整性、去重、原生通知、替换文件及退出行为；不触碰实际游戏存档。"""
import base64
import os
from pathlib import Path
import queue
import statistics
import sys
import tempfile
import threading
import time
import unittest
import zlib

sys.path.insert(0, str(Path(__file__).resolve().parent))
from save_sync import SaveReader, SaveWatcher


def encoded(marker):
    return b'$00s' + base64.b64encode(zlib.compress(('complete-' + marker).encode())) + b'$e'


class SaveSyncTests(unittest.TestCase):
    latencies = []

    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.path = Path(self.temp.name) / 'realm-grinder.sol'
        self.path.write_bytes(encoded('first'))
        self.paths = [self.path]
        self.reader = SaveReader(lambda: list(self.paths), scan_interval=.05)

    def watch(self, notify=None):
        events = queue.Queue()
        watcher = SaveWatcher(self.reader, notify or events.put)
        self.addCleanup(watcher.close)
        self.assertTrue(watcher.start())
        return watcher, events

    def test_unchanged_snapshot_is_deduplicated_and_changed_content_has_new_sequence(self):
        first = self.reader.read()
        self.assertTrue(first['ok'], first)
        self.assertEqual(first, self.reader.read())
        first['save'] = 'caller changed result'
        self.assertEqual(self.reader.read()['save'], encoded('first').decode())
        self.path.write_bytes(encoded('second'))
        # 通知通道强制校验内容，不依赖 Windows 快速覆盖时的时间戳精度。
        second = self.reader.read(force=True)
        self.assertGreater(second['sequence'], first['sequence'])
        self.assertNotEqual(second['version'], first['version'])

    def test_checksum_rejects_incomplete_save_and_recovers(self):
        first = self.reader.read()
        self.path.write_bytes(b'$00sAAAA$e')
        self.assertFalse(self.reader.read(force=True)['ok'])
        self.path.write_bytes(encoded('recovered'))
        second = self.reader.read(force=True)
        self.assertTrue(second['ok'], second)
        self.assertEqual(second['sequence'], first['sequence'] + 1)

    def test_fallback_revalidates_content_even_if_file_timestamp_is_unchanged(self):
        first_text, second_text = encoded('aaaaa'), encoded('bbbbb')
        self.assertEqual(len(first_text), len(second_text))
        self.path.write_bytes(first_text)
        reader = SaveReader(lambda: [self.path], verify_interval=.05)
        first = reader.read()
        info = self.path.stat()
        self.path.write_bytes(second_text)
        os.utime(self.path, ns=(info.st_atime_ns, info.st_mtime_ns))
        threading.Event().wait(.06)
        second = reader.read()
        self.assertEqual(second['save'], second_text.decode())
        self.assertEqual(second['sequence'], first['sequence'] + 1)

    def test_native_notification_arrives_without_waiting_for_poll(self):
        watcher, events = self.watch()
        events.get(timeout=2)
        if os.name == 'nt':
            self.assertEqual(watcher.mode, 'file_notifications')
        start = time.perf_counter()
        self.path.write_bytes(encoded('changed'))
        result = events.get(timeout=1.5)
        elapsed = (time.perf_counter() - start) * 1000
        self.latencies.append(elapsed)
        self.assertEqual(result['save'], encoded('changed').decode())
        self.assertLess(elapsed, 1500)
        with self.assertRaises(queue.Empty):
            events.get(timeout=.2)

    def test_atomic_replacement_is_detected(self):
        _, events = self.watch()
        events.get(timeout=2)
        replacement = self.path.with_name('temporary.sol')
        replacement.write_bytes(encoded('replacement'))
        replacement.replace(self.path)
        self.assertEqual(events.get(timeout=1.5)['save'], encoded('replacement').decode())

    def test_half_written_file_is_not_pushed(self):
        _, events = self.watch()
        first = events.get(timeout=2)
        self.path.write_bytes(b'$00sAAAA$e')
        with self.assertRaises(queue.Empty):
            events.get(timeout=.2)
        self.path.write_bytes(encoded('finished'))
        result = events.get(timeout=1.5)
        self.assertEqual(result['save'], encoded('finished').decode())
        self.assertEqual(result['sequence'], first['sequence'] + 1)

    def test_initially_missing_file_is_discovered(self):
        self.paths.clear()
        _, events = self.watch()
        self.paths.append(self.path)
        self.assertEqual(events.get(timeout=2)['save'], encoded('first').decode())

    def test_failed_delivery_is_retried(self):
        delivered = threading.Event()
        attempts = []

        def notify(result):
            attempts.append(result)
            if len(attempts) == 1:
                return False
            delivered.set()

        self.watch(notify)
        self.assertTrue(delivered.wait(2))
        self.assertEqual(attempts[0]['sequence'], attempts[1]['sequence'])

    def test_close_releases_notification_handle_and_stops_pushes(self):
        watcher, events = self.watch()
        events.get(timeout=2)
        watcher.close()
        self.assertFalse(watcher._thread.is_alive())
        self.path.write_bytes(encoded('after-close'))
        with self.assertRaises(queue.Empty):
            events.get(timeout=.15)

    def test_program_api_pushes_the_same_version_as_initial_read(self):
        from rg_app import Api
        api = Api()
        api._save_watcher.close()
        events = queue.Queue()

        class Window:
            def evaluate_js(self, script):
                events.put(script)

        api._win = Window()
        api._save_reader = self.reader
        api._save_watcher = SaveWatcher(self.reader, api._notify_save)
        self.addCleanup(api.shutdown)
        initial = api.read_save()
        self.assertTrue(api.watch_save()['ok'])
        script = events.get(timeout=2)
        import json
        pushed = json.loads(script.split('detail:', 1)[1][:-3])
        self.assertIn('"rgasave"', script)
        self.assertEqual(pushed['version'], initial['version'])
        self.path.write_bytes(encoded('api-updated'))
        script = events.get(timeout=1.5)
        pushed = json.loads(script.split('detail:', 1)[1][:-3])
        self.assertEqual(pushed['save'], encoded('api-updated').decode())
        self.assertEqual(api.read_save()['sequence'], pushed['sequence'])

    @classmethod
    def tearDownClass(cls):
        if cls.latencies:
            print('写入后通知延迟（毫秒）：', round(statistics.median(cls.latencies), 2))


if __name__ == '__main__':
    unittest.main(verbosity=2)
