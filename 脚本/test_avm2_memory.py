"""校验只读权限、失效地址、数值校验及停止行为，不访问实际游戏。"""
import ctypes
import hashlib
from pathlib import Path
import struct
import sys
import tempfile
import threading
import types
import unittest
from unittest.mock import MagicMock, patch

sys.path.insert(0, str(Path(__file__).resolve().parent))
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / '应用'))
from game_memory_probe import GameMemory
from avm2_memory import Avm2Reader, UnstableRead
from read_game_live import LiveProbe
from live_reader import LiveClient
from live_state import StateCapture


class Memory:
    pointer_size = 4
    def __init__(self):
        self.data = {}
    def modules(self):
        return [dict(name='Adobe AIR.dll', base=0x100000, size=0x10000)]
    def put(self, address, data):
        self.data.update({address + i: value for i, value in enumerate(data)})
    def words(self, address, *values):
        self.put(address, struct.pack('<%dI' % len(values), *values))
    def read(self, address, size):
        try:
            return bytes(self.data[address + i] for i in range(size))
        except KeyError:
            return b''


def secure_fixture(value=7.75, kind='4l'):
    memory = Memory()
    memory.words(0x20000, 0x100100, 2, 0x21000, 0, 500, 50, 0, 10, 0, 0, 0x23001, 0)
    memory.words(0x21000, 0x100100, 0, 0, 0, 0, 0x22000)
    memory.words(0x22000 + 72, 0x30000)
    strings = [('type', kind), ('v', 'v'), ('f', 'f'), ('c', 'c')]
    for i, (_, text) in enumerate(strings):
        memory.words(0x30000 + i * 32, 0x100100, 2, 0x40000 + i * 32, 0, len(text), 0)
        memory.put(0x40000 + i * 32, text.encode())
    memory.words(0x23000, 0x100100, 2, 0, 0, 0x24001, 0x28000003)
    expected = Avm2Reader.int32(Avm2Reader.int32(value) * .9) if kind == '4l' else int(value)
    f = (expected ^ 500) & 0xffffffff
    c = ((expected + 500) ^ 500) & 0xffffffff
    memory.put(0x25000, struct.pack('<d', value))
    memory.words(0x24000, 0x100100, 0x30022, 0x25007, 0x30042, ((f << 3) | 6) & 0xffffffff,
                 0x30062, ((c << 3) | 6) & 0xffffffff, *([0] * 10))
    return memory


class MemoryTests(unittest.TestCase):
    def test_numbers_must_pass_both_client_checks(self):
        memory = secure_fixture()
        reader = Avm2Reader(memory)
        self.assertEqual(reader.secure_number(0x20000, (50,10)), 7.75)
        memory.put(0x25000, struct.pack('<d', 99))
        with self.assertRaises(UnstableRead):
            reader.secure_number(0x20000, (50,10))

    def test_uint_and_double_use_their_own_formula(self):
        memory = secure_fixture(4190, '=!L')
        reader = Avm2Reader(memory)
        self.assertEqual(reader.secure_number(0x20000, (50,10), '=!L'), 4190)
        with self.assertRaises(UnstableRead):
            reader.secure_number(0x20000, (50,10), '4l')

    def test_invalid_address_is_not_reported_as_zero(self):
        with self.assertRaises(UnstableRead):
            Avm2Reader(Memory()).secure_number(0x22222)

    def test_only_query_and_read_access_are_requested_and_handle_is_closed(self):
        kernel = MagicMock()
        kernel.OpenProcess.return_value = 1234
        def image(handle, flags, buffer, length):
            buffer.value = r'C:\Game\RealmGrinderDesktop.exe'
            return True
        kernel.QueryFullProcessImageNameW.side_effect = image
        def architecture(handle, result):
            result._obj.value = True
            return True
        kernel.IsWow64Process.side_effect = architecture
        with patch.object(ctypes, 'WinDLL', return_value=kernel):
            with GameMemory(99) as memory:
                self.assertEqual(memory.pointer_size, 4)
                self.assertEqual(kernel.OpenProcess.call_args.args, (0x410, False, 99))
                memory.cancel = threading.Event()
                memory.cancel.set()
                with self.assertRaises(InterruptedError):
                    memory.read(0x20000, 4)
                kernel.ReadProcessMemory.assert_not_called()
            kernel.CloseHandle.assert_called_once_with(1234)

    def test_version_mismatch_is_rejected_before_scan(self):
        memory = Memory()
        with tempfile.TemporaryDirectory() as folder:
            memory.image = str(Path(folder) / 'RealmGrinderDesktop.exe')
            Path(memory.image).with_suffix('.swf').write_bytes(b'not the verified game')
            with self.assertRaisesRegex(ValueError, 'SWF'):
                LiveProbe(memory, expected_swf_hash=hashlib.sha256(b'verified').hexdigest())

    def test_no_game_is_a_failure_not_a_fake_snapshot(self):
        with patch('live_reader.game_pids', return_value=[]):
            result = LiveClient().read()
        self.assertFalse(result['ok'])
        self.assertNotIn('mana', result)

    def test_stop_interrupts_initial_scan_before_waiting_for_lock(self):
        entered = threading.Event()
        closed = threading.Event()
        class Handle:
            def __init__(self, pid): self.cancel = None
            def close(self): closed.set()
        class Probe:
            def __init__(self, memory, **kw):
                entered.set()
                memory.cancel.wait(2)
                if memory.cancel.is_set():
                    raise InterruptedError('stopped')
                raise RuntimeError('cancellation failed')
        modules = {'game_memory_probe': types.SimpleNamespace(GameMemory=Handle),
                   'read_game_live': types.SimpleNamespace(LiveProbe=Probe)}
        client = LiveClient()
        with patch('live_reader.game_pids', return_value=[99]), patch('live_reader.importlib.import_module', side_effect=modules.__getitem__):
            thread = threading.Thread(target=client.read)
            thread.start()
            self.assertTrue(entered.wait(1))
            client.close()
            thread.join(timeout=1)
            self.assertFalse(thread.is_alive())
            self.assertTrue(closed.is_set())

    def test_process_change_closes_the_old_connection(self):
        handles = []
        class Handle:
            def __init__(self, pid):
                self.pid, self.closed = pid, False
                handles.append(self)
            def close(self): self.closed = True
        class Probe:
            def __init__(self, memory, **kwargs):
                self.memory, self.swf_hash, self.locate_ms = memory, 'verified', 0
            def sample(self): return {'pid':self.memory.pid}
        modules={'game_memory_probe':types.SimpleNamespace(GameMemory=Handle),
                 'read_game_live':types.SimpleNamespace(LiveProbe=Probe)}
        client=LiveClient()
        with patch('live_reader.game_pids',side_effect=[[10],[20],[]]),patch('live_reader.importlib.import_module',side_effect=modules.__getitem__):
            self.assertEqual(client.read()['pid'],10)
            self.assertEqual(client.read()['pid'],20)
            self.assertTrue(handles[0].closed)
            self.assertFalse(client.read()['ok'])
            self.assertTrue(handles[1].closed)

    def test_changed_frame_or_new_page_is_not_a_calculation_snapshot(self):
        capture=StateCapture.__new__(StateCapture)
        invalid={'copy_consistent':False,'cold_pages':0,'skipped':[]}
        new_page={'copy_consistent':True,'cold_pages':1,'skipped':[]}
        valid={'copy_consistent':True,'cold_pages':0,'skipped':[]}
        with patch.object(capture,'capture',side_effect=[invalid,new_page,valid]):
            self.assertEqual(capture.stable_capture()['attempts'],3)
        with patch.object(capture,'capture',return_value=invalid):
            with self.assertRaises(UnstableRead): capture.stable_capture(maximum=2)


if __name__ == '__main__':
    unittest.main(verbosity=2)
