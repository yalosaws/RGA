"""检查回滚、异常和代码缓存边界，防止优化破坏存档隔离。"""
import inspect
from pathlib import Path
import random
import sys
import tempfile
import unittest

sys.path.insert(0, str(Path(__file__).resolve().parent))
import as_runtime as R
from simulation_state import StateSnapshot
import rg_sim


class SnapshotTests(unittest.TestCase):
    def test_restores_aliases_buffers_vectors_and_memory_shared_object(self):
        class PlainSO:
            def __init__(self):
                self.data = R.Obj(save='original')

        class Root(R.AsObject):
            shared = PlainSO()

        root = Root()
        child = R.Obj(value=5)
        root.items = R.Arr(child, child)
        root.buffer = R.ByteArray(b'abc')
        root.date = R.Date(1000)
        snap = StateSnapshot({'Root': Root}, root)
        root.items[0]['value'] = 9
        root.items.append(None)
        root.buffer.data[:] = b'changed'
        root.buffer.position = 5
        root.date.time = 9000
        root.extra = 'new'
        Root.extra_static = 'new'
        Root.shared.data.save = 'changed'
        snap.restore()
        self.assertEqual(root.items, [dict(value=5), dict(value=5)])
        self.assertIs(root.items[0], child)
        self.assertIs(root.items[0], root.items[1])
        self.assertEqual(root.buffer.data, b'abc')
        self.assertEqual(root.buffer.position, 0)
        self.assertEqual(root.date.time, 1000)
        self.assertEqual(Root.shared.data.save, 'original')
        with self.assertRaises(AttributeError):
            inspect.getattr_static(Root, 'extra_static')
        with self.assertRaises(AttributeError):
            inspect.getattr_static(root, 'extra')

    def test_exception_restores_resources_and_random_position(self):
        class Root(R.AsObject):
            coins = 20
        random.seed(1234)
        root = Root()
        snap = StateSnapshot({'Root': Root}, root)
        expected = random.random()
        with self.assertRaisesRegex(RuntimeError, 'deliberate'):
            with snap.transaction():
                Root.coins = 0
                random.random()
                raise RuntimeError('deliberate')
        self.assertEqual(Root.coins, 20)
        self.assertEqual(random.random(), expected)

    def test_same_size_source_change_does_not_reuse_old_python_code(self):
        with tempfile.TemporaryDirectory() as folder:
            path = Path(folder) / 'formula.py'
            path.write_text('answer = 1\n', encoding='utf-8')
            info = path.stat()
            first = rg_sim._compiled_game(str(path), info.st_size, info.st_mtime_ns)
            path.write_text('answer = 2\n', encoding='utf-8')
            # 即使文件系统报告相同时间，新的内容也必须通过哈希校验。
            rg_sim._compiled_game.cache_clear()
            info = path.stat()
            second = rg_sim._compiled_game(str(path), info.st_size, info.st_mtime_ns)
            ns1, ns2 = {}, {}
            exec(first, ns1)
            exec(second, ns2)
            self.assertEqual(ns1['answer'], 1)
            self.assertEqual(ns2['answer'], 2)


if __name__ == '__main__':
    unittest.main(verbosity=2)
