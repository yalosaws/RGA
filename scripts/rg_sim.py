"""用转写出来的游戏代码读存档、算当前产出。

用法：python scripts/rg_sim.py <rg_game.py 所在目录或文件> [存档 .sol 路径]
rg_game.py 由 `scripts/as2py.py <ffdec 导出的 AS3 目录> <rg_game.py>` 生成（游戏的 AS3 → Python）。
存档默认读本机游戏的 realm-grinder.sol。
"""
import base64
import functools
import os
from pathlib import Path
import re
import struct
import sys
import traceback
import zlib

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
sys.setrecursionlimit(20000)
import as_runtime as R  # noqa: E402

KEY = b'therealmisalie'
SOL = os.path.join(os.environ.get('APPDATA', ''), 'com.kongregate.mobile.realmgrinder.air', 'Local Store',
                   '#SharedObjects', 'RealmGrinderDesktop.swf', 'realm-grinder.sol')
MEMBER_NAMES = Path(__file__).resolve().parents[1] / 'build' / 'client-audit' / 'member-names.json'  # 当前安装客户端的对照


@functools.lru_cache(maxsize=2)
def _compiled_game(path, size, modified):
    """只缓存不可变代码；每份游戏仍有独立命名空间和状态。"""
    from importlib.machinery import SourceFileLoader
    from importlib.util import cache_from_source
    import py_compile
    cache = Path(cache_from_source(path))
    try:
        with cache.open('rb') as stream:
            header = stream.read(8)
    except FileNotFoundError:
        header = b''
    if len(header) != 8 or struct.unpack('<I', header[4:8])[0] != 3:
        # 时间戳缓存只有秒级精度，同一秒内等长改动可能误用旧公式。
        py_compile.compile(path, doraise=True, invalidation_mode=py_compile.PycInvalidationMode.CHECKED_HASH)
    # 使用 Python 自己校验的字节码缓存；版本/源代码不符会自动重编译。
    return SourceFileLoader('_rg_formula_source', path).get_code('_rg_formula_source')


def read_u29(raw, i):
    n = 0
    for k in range(4):
        b = raw[i]
        i += 1
        if k < 3:
            n = (n << 7) | (b & 0x7f)
            if not b & 0x80:
                break
        else:
            n = (n << 8) | b
    return n, i


def save_text(sol_path=SOL):
    """.sol 里 save 键的字符串（形如 $00s…$e）"""
    raw = Path(sol_path).read_bytes()
    i = raw.index(b'\tsave\x06') + 5
    assert raw[i] == 0x06, 'save 不是字符串'
    n, i = read_u29(raw, i + 1)
    return raw[i:i + (n >> 1)].decode('ascii')


def save_bytes(sol_path=SOL):
    """游戏内部的存档字节（与 Game.save() 写的 ByteArray 一致）"""
    return decode_save_bytes(save_text(sol_path))


def decode_save_bytes(text):
    """解开导出串，供格式版本校验和客户端载入共用。"""
    m = re.match(r'^\$([0-9]{2})s(.*)\$e$', text)
    if not m:
        raise ValueError('不认识的存档格式：' + text[:20])
    blob = zlib.decompress(base64.b64decode(m.group(2), validate=True))
    return bytes(x ^ KEY[j % len(KEY)] for j, x in enumerate(blob))


class _SO:
    def __init__(self, text):
        self.data = R.Obj({'save': text})

    def flush(self, *a):
        return 'flushed'

    def close(self):
        pass

    def clear(self):
        pass


_HAS_UPGRADE_SOURCE = '''    @staticmethod
    def S_7d(param1=_UNSET):
        param1 = touint(param1)
        return tobool(idx_get(S_8G.S__2d__21_4, param1).S__3c__21_7)
'''


def _install_fast_paths(ns):
    """给最热的游戏函数换上结果相同的快速版本（连续模拟里每秒调用几万次）。

    Game.hasUpgrade(id) = §-!4§[id].§<!7§。只有转写源码和预期逐字相同时才替换，
    客户端更新后对不上就保持原样；参数不是常见情况（非整数、越界）时交回原函数。
    """
    import inspect
    if os.environ.get('RGA_NO_FAST_PATHS') == '1':   # 核对用：关掉后结果应逐位相同
        return
    G = ns['S_8G']
    original = G.S_7d
    try:
        source = inspect.getsource(original)
    except (OSError, TypeError):
        return
    if source != _HAS_UPGRADE_SOURCE:
        return
    vector_type, truthy = R.TypedVector, R.T

    def has_upgrade(param1=R._UNSET):
        if type(param1) is int and 0 <= param1 <= 4294967295:
            upgrades = G.S__2d__21_4
            if type(upgrades) is vector_type and param1 < len(upgrades):
                owned = list.__getitem__(upgrades, param1).S__3c__21_7
                return owned if type(owned) is bool else truthy(owned)
        return original(param1)
    type.__setattr__(G, 'S_7d', staticmethod(has_upgrade))


def make_game(game_py, sol_path=SOL, *, offline=False, timestamp=None, season=None, event_cache=None, require_pcode=False, encoded_save=None):
    """载入内存中的独立游戏；默认保留存档时刻，offline=True 才补算离线时间。

    SharedObject 只存在内存里，游戏的 save/flush 不会写回本机存档。
    """
    data = save_text(sol_path) if encoded_save is None else encoded_save.strip()
    if not re.fullmatch(r'\$\d{2}s[A-Za-z0-9+/=]+\$e', data):
        raise ValueError('不支持的存档格式，请使用游戏导出的完整存档')
    raw = decode_save_bytes(data)
    if len(raw) < 2:
        raise ValueError('存档数据不完整')
    save_version = struct.unpack('>H', raw[:2])[0]
    # 当前客户端 load 遇到 >58 会直接返回，留下初始化默认值。对外必须报错。
    if not 1 <= save_version <= 58:
        raise ValueError('不支持存档格式版本 %s；当前计算模块最高支持 58，请重新核对客户端版本' % save_version)

    class SharedObject:
        @staticmethod
        def getLocal(name, *a):
            return _SO(data)

    game_path = Path(game_py).resolve()
    game_stat = game_path.stat()
    if timestamp is None and not offline:
        if encoded_save is not None:
            raise ValueError('试算导出存档时必须提供存档时间')
        timestamp = Path(sol_path).stat().st_mtime

    clock = {'timestamp': timestamp, 'timer_ms': 0}

    class SnapshotDate(R.Date):
        def __init__(self, *args):
            now = clock['timestamp']
            super().__init__(*(args if args or now is None else (now * 1000,)))

    # Main 类因包含 SWF/界面入口而跳过；计算只需要它持有的 rg-cache 数据。
    class BootState(R.AsObject):
        S__2b__21_J = R.Obj(data=R.Obj(event_cache or {}))
        # Main 源码中的六个平台常量；当前模拟目标是 Steam 桌面客户端。
        S__5e__2b_ = 0
        S_9_25_ = 1
        S_7_21_G = 2
        S__23__21__25_ = 3
        S_6_3d_ = 4
        S__3c__21_h = 5
        S__3d_x = 5

    extra = {'SharedObject': SharedObject, 'Date': SnapshotDate, 'S__3c__21_d': BootState}
    if timestamp is not None:
        extra.update(getTimer=lambda: clock['timer_ms'], A_getTimer=lambda: clock['timer_ms'])
    ns = R.make_namespace(extra)
    exec(_compiled_game(str(game_path), game_stat.st_size, game_stat.st_mtime_ns), ns)
    for required in ('S_8G', 'S__23__21__21_', 'S__26_c'):
        if required not in ns or ns[required] is R.Stub:
            raise ValueError('游戏计算模块缺少必需的类：' + required + '；请检查转写日志')
    _install_fast_paths(ns)
    provenance = ns.get('_source_provenance', {})
    if require_pcode and not provenance.get('pcode'):
        raise ValueError('该模块未关联原始字节码；请用 as2py.py --pcode 重新生成后再试算')
    ns['_static_init_errors'] = ns['_static_init']()
    G = ns['S_8G']
    g = G()
    g.S__5b__21_C()   # initialize
    warp = _real2obf('§8G§')['timeWarp']
    if not offline:
        setattr(g, warp, lambda *args: None)
    try:
        g.S__25_R()   # load
    finally:
        if not offline:
            delattr(g, warp)
    # 客户端把保存时的活动编号读到实例 ^4，而在线平台状态由服务器另行更新。
    # 当前存档试算恢复保存时的编号；预测未来时应传入相应活动上下文。
    saved_season = g.S__5e_4
    service = ns.get('PlayFab')
    if service is not None:
        service.season = saved_season if season is None else season
        getattr(g, _real2obf('§8G§')['invalidateAllCache'])()
    # 原界面 RoyalExchangeContainer.initializeElement 建立此表，Stats 的购买量
    # 计算会读取它。无界面运行时执行同一筛选/索引规则，保持对象身份不变。
    exchanges = ns.get('S_7_21_1')
    exchange_base = ns.get('S__3b_E')
    if exchanges is not None and exchange_base is not None:
        table = exchanges.S_2_21_6
        for upgrade in G.S__2d__21_4:
            if isinstance(upgrade, exchange_base) and upgrade.S__2d__21__5e_ != -1:
                table[upgrade.S__2d__21__5e_] = upgrade
    ns['_snapshot_context'] = dict(timestamp=timestamp, season=saved_season if season is None else season,
                                   season_source='save' if season is None else 'override', offline=offline,
                                   event_cache_source='provided' if event_cache is not None else 'empty_offline_cache')
    ns['_snapshot_clock'] = clock
    return ns, G, g


def report_exc():
    tbo = sys.exc_info()[2]
    while tbo.tb_next:
        tbo = tbo.tb_next
    fr = tbo.tb_frame
    for _ in range(3):
        if fr is None:
            break
        print('FRAME', fr.f_code.co_name, fr.f_lineno, {k: repr(v)[:60] for k, v in list(fr.f_locals.items())[:6]})
        fr = fr.f_back
    print('\n'.join(traceback.format_exc().splitlines()[-3:]))


@functools.lru_cache(maxsize=None)
def _real2obf(cls='§#!!§'):
    """游戏里有真名的方法：真名 → 转写后的 Python 名（来自 build/client-audit/member-names.json）"""
    import json
    from as2py import mangle
    mn = json.loads(Path(MEMBER_NAMES).read_text(encoding='utf-8'))
    out = {}
    for k, v in mn.items():
        c, m = k.split('	')
        if c == cls:
            # useSpell/onEffect 等保留了原名，不能强加 § 后变成 S_useSpell。
            out[v] = mangle(m if m == v else '§' + m + '§')
    return out


def fmt(x):
    return ('%.6g' % x) if isinstance(x, (int, float)) else repr(x)


def production(ns, *, cached=False):
    """客户端统计/底栏口径：建筑每秒产出 + 助手每秒收入。

    助手使用 getResourcePerClickReal(true)，不能用玩家点击值替代。
    调用建筑产出在先，让依赖建筑统计的助手数等缓存得到更新。
    """
    C = ns['S__23__21__21_']
    r = _real2obf()
    call = lambda name: getattr(C, r[name])()
    buildings = call('getProductionPerSecond' if cached else 'getProductionPerSecondReal')
    click = call('getAssistantResourcePerClick')
    multiplier = call('getAssistantsMultiplier')
    count = call('getAssistantsNum')
    assistants = multiplier * click * count if count > 0 else 0
    return dict(total=buildings + assistants, buildings=buildings, assistants=assistants,
                assistant_click=click, assistant_multiplier=multiplier, assistant_count=count)


def report(ns, G):
    """用游戏自己的函数算当前存档的各项数值"""
    C = ns['S__23__21__21_']   # 核心计算类 Core
    r2o = _real2obf()
    p = production(ns)
    for label, key in [('总产出/秒', 'total'), ('建筑产出/秒', 'buildings'), ('助手收入/秒', 'assistants')]:
        print('%-10s %s' % (label, fmt(p[key])))
    rows = [('最大魔力', 'getMaxMana', 1), ('回魔/秒', 'getManaPerTick', 30),
            ('每次点击', 'getResourcePerClick', 1), ('助手数量', 'getAssistantsNum', 1),
            ('助手倍率', 'getAssistantsMultiplier', 1), ('FC 概率', 'getFactionCoinChance', 1),
            ('皇家贸易令倍率', 'getExchangeMultiplier', 1), ('离线加成', 'getOfflineBonus', 1),
            ('宝石倍率', 'getGemMultiplier', 1), ('红宝石加成', 'getRubyBonus', 1), ('奖杯数', 'getTrophyNum', 1)]
    for label, real, mult in rows:
        try:
            v = getattr(C, r2o[real])()
            print('%-10s %s' % (label, fmt(v * mult) if isinstance(v, (int, float)) else v))
        except Exception as e:  # noqa: BLE001
            print('%-10s 出错 %r' % (label, e))
    rp = getattr(C, r2o['getResourcePerTick'])
    print('各建筑基础产出/秒（未乘全局倍率，不含助手）：')
    for b in G.S__25__3c_:
        if b.S__21_a > 0:
            print('  %-18s ×%-6d %s' % (b.S_1i, b.S__21_a, fmt(rp(b) * 30)))


if __name__ == '__main__':
    path = sys.argv[1]
    if os.path.isdir(path):
        path = os.path.join(path, 'rg_game.py')
    try:
        ns, G, g = make_game(path, sys.argv[2] if len(sys.argv) > 2 else SOL)
        report(ns, G)
    except Exception:
        report_exc()
        raise SystemExit(1)
