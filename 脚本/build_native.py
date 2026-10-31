"""编译原生计算引擎：转写（as2cpp）→ 并行编译（最多 3 个低优先级进程）→ 链接。

用法：
  python 脚本/build_native.py            转写 + 编译 + 链接 rgcore.pyd
  python 脚本/build_native.py --test     另外链接 build/native/rgtest.exe（不经过 Python 的启动测试）
  python 脚本/build_native.py --no-gen   不重新转写
"""
import argparse
import hashlib
import os
import subprocess
import sys
import sysconfig
import time

HERE = os.path.dirname(os.path.abspath(__file__))
ROOT = os.path.dirname(HERE)
NATIVE = os.path.join(HERE, 'native')
OUT = os.path.join(ROOT, 'build', 'native')
GEN = os.path.join(OUT, 'gen')
OBJ = os.path.join(OUT, 'obj')
WORKERS = 3
PYINC = sysconfig.get_paths()['include']
PYLIB = os.path.join(os.path.dirname(PYINC), 'libs', 'python%d%d.lib' % sys.version_info[:2])
CXX = [sys.executable, '-m', 'ziglang', 'c++']
FLAGS = ['-std=c++20', '-ffp-contract=off', '-fno-strict-aliasing', '-target', 'x86_64-windows-gnu',
         '-Wno-nullability-completeness', '-Wno-nontrivial-memcall', '-Wno-unused-value',
         '-Wno-parentheses-equality', '-I' + NATIVE, '-I' + GEN]
IDLE = 0x00000040   # IDLE_PRIORITY_CLASS


def sources(test):
    gen = sorted(f for f in os.listdir(GEN) if f.endswith('.cpp'))
    src = [os.path.join(NATIVE, 'rt.cpp')] + [os.path.join(GEN, f) for f in gen]
    return src


def obj_of(src, opt):
    return os.path.join(OBJ, os.path.basename(src)[:-4] + '.' + opt + '.o')


def stamp(src, deps):
    h = hashlib.sha256()
    for p in [src] + deps:
        h.update(open(p, 'rb').read())
    return h.hexdigest()


def compile_all(srcs, opt):
    os.makedirs(OBJ, exist_ok=True)
    deps_rt = [os.path.join(NATIVE, 'rt.h')]
    deps_gen = deps_rt + [os.path.join(GEN, 'gen.h')]
    todo = []
    for s in srcs:
        deps = deps_gen if s.startswith(GEN) else deps_rt
        o = obj_of(s, opt)
        st = stamp(s, deps)
        if os.path.exists(o) and os.path.exists(o + '.stamp') and open(o + '.stamp').read() == st:
            continue
        todo.append((s, o, st))
    running, failed = [], []
    t0 = time.time()
    while todo or running:
        while todo and len(running) < WORKERS:
            s, o, st = todo.pop(0)
            log = open(o + '.log', 'w', encoding='utf-8')
            cmd = CXX + ['-c', '-' + opt.rstrip('t')] + FLAGS + [s, '-o', o]
            p = subprocess.Popen(cmd, stdout=log, stderr=subprocess.STDOUT, creationflags=IDLE)
            running.append((p, s, o, st, log, time.time()))
        time.sleep(0.2)
        for item in list(running):
            p, s, o, st, log, ts = item
            if p.poll() is None:
                continue
            running.remove(item)
            log.close()
            if p.returncode == 0:
                open(o + '.stamp', 'w').write(st)
                print('  %-16s %5.1fs' % (os.path.basename(s), time.time() - ts), flush=True)
            else:
                failed.append(s)
                txt = open(o + '.log', encoding='utf-8', errors='replace').read()
                errs = [l for l in txt.splitlines() if 'error:' in l]
                print('  失败 %s：%d 个错误' % (os.path.basename(s), len(errs)), flush=True)
                for l in errs[:8]:
                    print('     ', l[-300:])
    print('编译用时 %.0fs' % (time.time() - t0))
    return failed


def link(objs, out, extra, shared):
    cmd = CXX + (['-shared'] if shared else []) + ['-target', 'x86_64-windows-gnu', '-s'] + objs + extra + ['-o', out]
    r = subprocess.run(cmd, capture_output=True, text=True, creationflags=IDLE)
    if r.returncode != 0:
        print(r.stdout[-3000:], r.stderr[-3000:])
        raise SystemExit('链接失败')
    print('链接', out)


def build():
    """打包用：转写 + 编译 rgcore，返回 .pyd 路径"""
    from pathlib import Path
    sys.path.insert(0, HERE)
    import as2cpp
    parsed, errors = as2cpp.load_sources()
    as2cpp.generate(parsed, GEN, as2cpp.GAME_HOOKS)
    global FLAGS
    flags0 = FLAGS
    FLAGS = FLAGS + ['-I' + PYINC]
    try:
        srcs = sources(False) + [os.path.join(NATIVE, 'pymod.cpp')]
        if compile_all(srcs, 'O2'):
            raise SystemExit('原生引擎编译失败')
        out = os.path.join(OUT, 'rgcore.cp%d%d-win_amd64.pyd' % sys.version_info[:2])
        link([obj_of(s, 'O2') for s in srcs], out, [PYLIB], True)
    finally:
        FLAGS = flags0
    return Path(out)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--test', action='store_true')
    ap.add_argument('--no-gen', action='store_true')
    ap.add_argument('--opt', default='O2')
    ap.add_argument('--trace', action='store_true', help='调试：记录调用栈（报错时列出）')
    a = ap.parse_args()
    if not a.no_gen:
        sys.path.insert(0, HERE)
        import as2cpp
        parsed, errors = as2cpp.load_sources()
        g, info = as2cpp.generate(parsed, GEN, as2cpp.GAME_HOOKS)
        print('转写：类 %d，名字 %d，字面量 %d' % (info['classes'], info['names'], info['literals']))
    srcs = sources(a.test)
    extra_src = []
    if a.test:
        extra_src.append(os.path.join(NATIVE, 'test_main.cpp'))
    else:
        extra_src.append(os.path.join(NATIVE, 'pymod.cpp'))
    global FLAGS
    if a.trace:
        FLAGS = FLAGS + ['-DRT_TRACE']
        a.opt = a.opt + 't'
    if not a.test:
        FLAGS = FLAGS + ['-I' + PYINC]
    failed = compile_all(srcs + extra_src, a.opt)
    if failed:
        raise SystemExit('有 %d 个文件编译失败' % len(failed))
    objs = [obj_of(s, a.opt) for s in srcs + extra_src]
    if a.test:
        link(objs, os.path.join(OUT, 'rgtest.exe'), [], False)
    else:
        link(objs, os.path.join(OUT, 'rgcore.cp%d%d-win_amd64.pyd' % sys.version_info[:2]), [PYLIB], True)


if __name__ == '__main__':
    main()
