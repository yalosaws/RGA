"""本机 RealmGrinderDesktop.exe 只读探针。只保存命中地址和指定字段，不转储原始内存。

仅申请 QUERY_INFORMATION | VM_READ；不注入、不修改保护、不申请写入权限。
"""
import argparse
import ctypes
from ctypes import wintypes
import json
import os
from pathlib import Path
import struct
import time


class MemoryInfo(ctypes.Structure):
    _fields_ = [('base', ctypes.c_void_p), ('allocation', ctypes.c_void_p), ('allocation_protect', wintypes.DWORD),
                ('size', ctypes.c_size_t), ('state', wintypes.DWORD), ('protect', wintypes.DWORD), ('kind', wintypes.DWORD)]


class ModuleInfo(ctypes.Structure):
    _fields_ = [('base', ctypes.c_void_p), ('size', wintypes.DWORD), ('entry', ctypes.c_void_p)]


class GameMemory:
    def __init__(self, pid):
        self.cancel = None
        if os.name != 'nt':
            raise OSError('此探针仅支持 Windows')
        self.kernel = ctypes.WinDLL('kernel32', use_last_error=True)
        k = self.kernel
        k.OpenProcess.argtypes = [wintypes.DWORD, wintypes.BOOL, wintypes.DWORD]
        k.OpenProcess.restype = wintypes.HANDLE
        k.CloseHandle.argtypes = [wintypes.HANDLE]
        k.CloseHandle.restype = wintypes.BOOL
        k.ReadProcessMemory.argtypes = [wintypes.HANDLE, ctypes.c_void_p, ctypes.c_void_p, ctypes.c_size_t, ctypes.POINTER(ctypes.c_size_t)]
        k.ReadProcessMemory.restype = wintypes.BOOL
        k.VirtualQueryEx.argtypes = [wintypes.HANDLE, ctypes.c_void_p, ctypes.POINTER(MemoryInfo), ctypes.c_size_t]
        k.VirtualQueryEx.restype = ctypes.c_size_t
        k.QueryFullProcessImageNameW.argtypes = [wintypes.HANDLE, wintypes.DWORD, wintypes.LPWSTR, ctypes.POINTER(wintypes.DWORD)]
        k.QueryFullProcessImageNameW.restype = wintypes.BOOL
        k.IsWow64Process.argtypes = [wintypes.HANDLE, ctypes.POINTER(wintypes.BOOL)]
        k.IsWow64Process.restype = wintypes.BOOL
        self.handle = k.OpenProcess(0x0400 | 0x0010, False, int(pid))
        if not self.handle:
            raise ctypes.WinError(ctypes.get_last_error())
        self.pid = int(pid)
        try:
            buffer = ctypes.create_unicode_buffer(32768)
            length = wintypes.DWORD(len(buffer))
            if not k.QueryFullProcessImageNameW(self.handle, 0, buffer, ctypes.byref(length)):
                raise ctypes.WinError(ctypes.get_last_error())
            self.image = buffer.value
            if Path(self.image).name.lower() != 'realmgrinderdesktop.exe':
                raise ValueError('目标不是 RealmGrinderDesktop.exe，拒绝读取')
            wow = wintypes.BOOL()
            if not k.IsWow64Process(self.handle, ctypes.byref(wow)):
                raise ctypes.WinError(ctypes.get_last_error())
            self.pointer_size = 4 if wow.value else ctypes.sizeof(ctypes.c_void_p)
        except Exception:
            self.close()
            raise

    def close(self):
        if self.handle:
            self.kernel.CloseHandle(self.handle)
            self.handle = None

    def __enter__(self):
        return self

    def __exit__(self, *args):
        self.close()

    def read(self, address, size):
        if self.cancel is not None and self.cancel.is_set():
            raise InterruptedError('实时读取已停止')
        if size < 0 or size > 8 * 1024 * 1024:
            raise ValueError('单次读取长度超出探针限制')
        buffer = ctypes.create_string_buffer(size)
        count = ctypes.c_size_t()
        ok = self.kernel.ReadProcessMemory(self.handle, ctypes.c_void_p(address), buffer, size, ctypes.byref(count))
        if not ok and not count.value:
            return b''
        return buffer.raw[:count.value]

    def regions(self, private_only=True):
        address = 0
        limit = 2 ** (8 * self.pointer_size - 1) if self.pointer_size == 8 else 2 ** 32
        while address < limit:
            info = MemoryInfo()
            if not self.kernel.VirtualQueryEx(self.handle, ctypes.c_void_p(address), ctypes.byref(info), ctypes.sizeof(info)):
                break
            base, size = int(info.base or 0), int(info.size)
            if size <= 0 or base + size <= address:
                break
            if (info.state == 0x1000 and not info.protect & (0x100 | 0x1)
                    and info.protect & (0x2 | 0x4 | 0x8 | 0x20 | 0x40 | 0x80)
                    and (not private_only or info.kind == 0x20000)):
                yield dict(base=base, size=size, protect=int(info.protect), kind=int(info.kind))
            address = base + size

    def modules(self):
        api = ctypes.WinDLL('psapi', use_last_error=True)
        api.EnumProcessModulesEx.argtypes = [wintypes.HANDLE, ctypes.POINTER(ctypes.c_void_p), wintypes.DWORD, ctypes.POINTER(wintypes.DWORD), wintypes.DWORD]
        api.EnumProcessModulesEx.restype = wintypes.BOOL
        api.GetModuleFileNameExW.argtypes = [wintypes.HANDLE, ctypes.c_void_p, wintypes.LPWSTR, wintypes.DWORD]
        api.GetModuleFileNameExW.restype = wintypes.DWORD
        api.GetModuleInformation.argtypes = [wintypes.HANDLE, ctypes.c_void_p, ctypes.POINTER(ModuleInfo), wintypes.DWORD]
        api.GetModuleInformation.restype = wintypes.BOOL
        modules = (ctypes.c_void_p * 2048)()
        count = wintypes.DWORD()
        if not api.EnumProcessModulesEx(self.handle, modules, ctypes.sizeof(modules), ctypes.byref(count), 3):
            raise ctypes.WinError(ctypes.get_last_error())
        output = []
        for module in modules[:min(len(modules), count.value // ctypes.sizeof(ctypes.c_void_p))]:
            name = ctypes.create_unicode_buffer(32768)
            info = ModuleInfo()
            if api.GetModuleFileNameExW(self.handle, module, name, len(name)) and api.GetModuleInformation(self.handle, module, ctypes.byref(info), ctypes.sizeof(info)):
                row = dict(name=Path(name.value).name, base=int(info.base), size=int(info.size))
                if row['name'].lower() == 'adobe air.dll':
                    row['path'] = name.value
                output.append(row)
        return output

    def scan(self, patterns, maximum=200, private_only=True):
        hits = {key: [] for key in patterns}
        overlap = max(map(len, patterns.values()), default=1) - 1
        scanned = 0
        for region in self.regions(private_only):
            tail = b''
            for offset in range(0, region['size'], 1024 * 1024):
                if self.cancel is not None and self.cancel.is_set():
                    raise InterruptedError('实时读取已停止')
                address = region['base'] + offset
                data = self.read(address, min(1024 * 1024, region['size'] - offset))
                scanned += len(data)
                block = tail + data
                for name, pattern in patterns.items():
                    if len(hits[name]) >= maximum:
                        continue
                    pos = block.find(pattern)
                    while pos >= 0 and len(hits[name]) < maximum:
                        found = address - len(tail) + pos
                        if not hits[name] or found != hits[name][-1]:
                            hits[name].append(found)
                        pos = block.find(pattern, pos + 1)
                tail = data[-overlap:] if overlap else b''
        return hits, scanned

    def scan_regex(self, pattern, maximum=50, overlap=64):
        """固定数值结构筛选；结果只含命中地址，不保存匹配到的原始页。"""
        hits = []
        for region in self.regions():
            tail = b''
            for offset in range(0, region['size'], 1024 * 1024):
                if self.cancel is not None and self.cancel.is_set():
                    raise InterruptedError('实时读取已停止')
                address = region['base'] + offset
                data = self.read(address, min(1024 * 1024, region['size'] - offset))
                for match in pattern.finditer(tail + data):
                    found = address - len(tail) + match.start()
                    if found & 3 == 0 and (not hits or found != hits[-1]):
                        hits.append(found)
                        if len(hits) >= maximum:
                            return hits
                tail = data[-overlap:]
        return hits


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('pid', type=int)
    parser.add_argument('--output', default='build/memory-probe.json')
    parser.add_argument('--scan-names', action='store_true')
    args = parser.parse_args()
    with GameMemory(args.pid) as memory:
        regions = list(memory.regions())
        report = dict(pid=memory.pid, pointer_size=memory.pointer_size, access='QUERY_INFORMATION|VM_READ',
                      modules=memory.modules(), private_committed_bytes=sum(row['size'] for row in regions), regions=len(regions))
        if args.scan_names:
            patterns = {}
            for word in ('Farm', '农场', 'Tax Collection', '征税', 'getProductionPerSecondReal', 'getManaPerTickReal'):
                for encoding in ('utf-8', 'utf-16le'):
                    patterns[word + '/' + encoding] = word.encode(encoding)
            start = time.perf_counter()
            hits, scanned = memory.scan(patterns)
            report.update(name_hits={name: [hex(value) for value in values] for name, values in hits.items()},
                          scanned_bytes=scanned, scan_ms=(time.perf_counter() - start) * 1000)
        Path(args.output).write_text(json.dumps(report, ensure_ascii=False, indent=2), encoding='utf-8')
        print(json.dumps({key: value for key, value in report.items() if key not in ('modules', 'name_hits')}, ensure_ascii=False))
        if 'name_hits' in report:
            print(json.dumps({key: len(value) for key, value in report['name_hits'].items()}, ensure_ascii=False))
        print(json.dumps([module for module in report['modules'] if 'air' in module['name'].lower() or 'realm' in module['name'].lower()], ensure_ascii=False))


if __name__ == '__main__':
    main()
