"""保存内存游戏状态并按原对象身份恢复，供试算与字节码差分共用。"""
import random
from contextlib import contextmanager

import as_runtime as R


class StateSnapshot:
    def __init__(self, ns, root):
        self.classes, self.containers, self.objects = [], [], []
        seen = set()

        def walk(value):
            if id(value) in seen or isinstance(value, (str, int, float, bool, type(None), type)) or callable(value):
                return
            seen.add(id(value))
            if isinstance(value, tuple):
                for item in value:
                    walk(item)
            elif isinstance(value, list):
                data = list(value)
                self.containers.append((value, data))
                for item in data:
                    walk(item)
            elif isinstance(value, dict):
                data = dict(value)
                self.containers.append((value, data))
                for item in data.values():
                    walk(item)
            elif isinstance(value, bytearray):
                self.containers.append((value, bytes(value)))
            # 包括向量的类型字段、ByteArray 游标和内存 SharedObject。
            # 直接取 __dict__，不触发界面 Stub 的 __getattr__。
            try:
                data = dict(object.__getattribute__(value, '__dict__'))
            except (AttributeError, TypeError):
                return
            self.objects.append((value, data))
            for item in data.values():
                walk(item)

        walk(root)
        for cls in ns.values():
            if isinstance(cls, type) and issubclass(cls, R.AsObject):
                data = {key: value for key, value in cls.__dict__.items() if not key.startswith('__')
                        and not isinstance(value, (staticmethod, classmethod, property, type)) and not callable(value)}
                self.classes.append((cls, data, frozenset(cls.__dict__)))
                for value in data.values():
                    walk(value)
        self.random_state = random.getstate()

    def restore(self):
        for obj, data in self.objects:
            attributes = object.__getattribute__(obj, '__dict__')
            attributes.clear()
            attributes.update(data)
        for obj, data in self.containers:
            if isinstance(obj, dict):
                dict.clear(obj)
                dict.update(obj, data)
            elif isinstance(obj, list):
                list.__setitem__(obj, slice(None), data)
            else:
                obj[:] = data
        for cls, data, keys in self.classes:
            for key in cls.__dict__.keys() - keys:
                if not key.startswith('__'):
                    type.__delattr__(cls, key)
            for key, value in data.items():
                type.__setattr__(cls, key, value)
        random.setstate(self.random_state)

    @contextmanager
    def transaction(self):
        self.restore()
        try:
            yield
        finally:
            self.restore()
