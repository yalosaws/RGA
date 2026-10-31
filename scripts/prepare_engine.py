"""整理程序使用的计算资源；不打包、不发布，不依赖运行时 ffdec。"""
import hashlib
import json
import py_compile
import re
from pathlib import Path
import shutil

ROOT = Path(__file__).resolve().parents[1]


def prepare():
    source = ROOT / 'build/rg_installed_game.py'
    index = ROOT / 'docs/客户端计算方法索引（实际安装版）.json'
    data = json.loads(index.read_text(encoding='utf-8'))
    if hashlib.sha256(source.read_bytes()).hexdigest() != data['module_sha256']:
        raise ValueError('转写模块与核对索引的 SHA256 不一致，拒绝混用')
    destination = ROOT / 'build/calculation'
    destination.mkdir(parents=True, exist_ok=True)
    for src, name in [(source, 'game.py'), (index, 'index.json'),
                      (ROOT / 'build/rg_installed_game.py.manifest.json', 'provenance.json'),
                      (ROOT / 'docs/只读内存布局（当前安装版）.json', 'live-profile.json'),
                      (ROOT / 'build/client-audit/member-names.json', 'member-names.json'),
                      (ROOT / 'docs/客户端研究对照.json', 'research.json'),
                      (ROOT / 'docs/依赖图（客户端4.3.14）.json', 'depgraph.json')]:
        shutil.copyfile(src, destination / name)
    for name in ('as2py', 'as_runtime', 'rg_sim', 'rg_growth', 'rg_timeline', 'rg_goal', 'rg_optimize', 'simulation_state',
                 'game_memory_probe', 'avm2_memory', 'read_game_live', 'live_state', 'live_snapshot', 'rg_native'):
        shutil.copyfile(ROOT / 'scripts' / (name + '.py'), destination / (name + '.py'))
    # 原生（C++）计算引擎：转写 + 增量编译（最多 3 个低优先级进程），和 Python 版逐 tick 一致，快一百多倍
    import build_native
    pyd = build_native.build()
    for old in destination.glob('rgcore*.pyd'):
        old.unlink()
    shutil.copyfile(pyd, destination / pyd.name)
    from live_layout import generate
    (destination / 'live-layout.json').write_text(json.dumps(generate(), ensure_ascii=False), encoding='utf-8')
    py_compile.compile(str(destination / 'game.py'), doraise=True,
                       invalidation_mode=py_compile.PycInvalidationMode.CHECKED_HASH)
    translations = {}
    # 取 PC 版里日期最新的一份（CLAUDE.md：取日期最新的一份），不按文件名字典序。
    dated = [(m[1], path) for path in (ROOT / 'docs').glob('汉化文本（PC_*）.tsv')
             if (m := re.fullmatch(r'汉化文本（PC_(\d{8})）\.tsv', path.name))]
    if not dated:
        raise ValueError('docs/ 里没有 汉化文本（PC_日期）.tsv')
    tsv = max(dated)[1]
    for line in tsv.read_text(encoding='utf-8').splitlines():
        if '\t' not in line:
            continue
        english, chinese = line.split('\t', 1)
        for variant in english.split('\x00'):
            if variant.strip() and chinese.strip():
                translations.setdefault(variant, chinese.split('\x00')[0])
    (destination / 'translations.json').write_text(json.dumps(translations, ensure_ascii=False), encoding='utf-8')
    print('已准备计算资源：', destination)
    return destination


if __name__ == '__main__':
    prepare()
