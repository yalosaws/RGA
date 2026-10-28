"""自动更新：定时从 yalosaws.com/rga/update/ 取清单，有新版本就在后台下载，下好后通知界面。

服务器上（由 脚本/publish.py 上传）：
  update/manifest.json   版本、更新说明、每个界面文件的对象 id，以及最新 exe 的版本、地址、sha256
  update/manifest.sig    清单的 Ed25519 签名（私钥只在发布的电脑上，公钥写在下面 PUBKEY）
  update/o/<对象 id>     加密的界面文件（见 content.py），文件名就是内容的 sha256，永不改动
  download/RGA-<版本>.exe

- 界面更新：正在用的版本（exe 自带的或上次下载的）里已有的对象直接复用，只下载改过的，8 个一起下；逐个核对 sha256，齐了再换上清单；界面弹出提示，点「刷新」生效（下次启动也会直接用）。
- 程序（exe）更新：清单里 exe 的版本比自己新时下载新 exe，核对 sha256 后把正在运行的 RGA.exe 改名成 RGA.exe.old、
  新的放到原位，提示「重启」；放不进去（目录没有写权限）时提示到主页下载。
- 清单要求的 shell_api 比本程序高时（新界面要用新程序的功能），只更新 exe，不换界面。
签名不对、下载出错都当没有更新，下次再试；不会影响正在用的版本。
"""
import concurrent.futures
import hashlib
import json
import os
import subprocess
import sys
import threading
import time
import urllib.request

import content
import ed25519

BASE = os.environ.get('RGA_UPDATE_URL', 'https://yalosaws.com/rga/')
HOME = 'https://yalosaws.com/rga/'
PUBKEY = bytes.fromhex('e7555a6a13a3c5b1f6da7f3ddcaf610b1394945feb61bfd2db15b4a2f3b05be7')
SHELL_API = 5  # 增加 build_live：实时计算快照与独立试算
EXE_VERSION = None  # 打包时由 build_exe.py 填入；源码运行时是 None，不更新 exe
INTERVAL = 15 * 60
VER = lambda v: content.version_tuple(v)


def verify(raw, sig):
    return ed25519.verify(PUBKEY, raw, sig)


def fetch(url, timeout=30):
    req = urllib.request.Request(url, headers={'User-Agent': 'RGA/%s' % (EXE_VERSION or 'dev'), 'Cache-Control': 'no-cache'})
    with urllib.request.urlopen(req, timeout=timeout) as r:
        return r.read()


class Updater:
    def __init__(self, server, cache_dir, notify):
        self.server, self.cache, self.notify = server, cache_dir, notify
        self.state = {'version': server.store.version, 'exe_version': EXE_VERSION, 'latest': None, 'checked': 0,
                      'content': None, 'exe': None, 'error': '', 'home': HOME}
        self._pending, self._lock, self._wake = None, threading.Lock(), threading.Event()

    def start(self):
        threading.Thread(target=self._loop, daemon=True).start()

    def check_now(self):
        self._wake.set()

    def _loop(self):
        time.sleep(3)
        while True:
            try:
                self.check()
            except Exception as e:  # 没联网、服务器不在：下次再试
                self.state['error'] = str(e)[:200]
            self.state['checked'] = int(time.time() * 1000)
            self.notify(dict(self.state))
            self._wake.wait(INTERVAL)
            self._wake.clear()

    def check(self):
        with self._lock:
            raw = fetch(BASE + 'update/manifest.json')
            sig = bytes.fromhex(fetch(BASE + 'update/manifest.sig').decode().strip())
            if not verify(raw, sig):
                raise ValueError('更新清单签名不对，已忽略')
            m = json.loads(raw)
            self.state.update(latest=m['version'], error='')
            exe = m.get('exe')
            if EXE_VERSION and exe and VER(exe['version']) > VER(EXE_VERSION) and self.state['exe'] not in ('ready', 'manual'):
                self.state['exe'] = self._update_exe(exe)
                self.state['exe_new'] = exe['version']
            if VER(m['version']) > VER(self.server.store.version) and m.get('shell_api', 1) <= SHELL_API:
                if not self._pending or self._pending.version != m['version']:
                    self._pending = self._download(raw, sig, m)
                self.state['content'] = m['version']
                self.state['notes'] = m.get('notes', [])

    def _download(self, raw, sig, m):
        odir = os.path.join(self.cache, 'o')
        os.makedirs(odir, exist_ok=True)

        def save(oid, blob):
            if hashlib.sha256(blob).hexdigest() != oid:
                return False
            path = os.path.join(odir, oid)
            open(path + '.tmp', 'wb').write(blob)
            os.replace(path + '.tmp', path)
            return True

        need = []
        for oid in {f['o'] for f in m['files'].values()}:
            if os.path.exists(os.path.join(odir, oid)):
                continue
            blob = self.server.store.blob(oid)  # 没改过的文件：现在用的版本里就有（加密结果固定，id 相同）
            if not (blob and save(oid, blob)):
                need.append(oid)

        def get(oid):
            if not save(oid, fetch(BASE + 'update/o/' + oid, 60)):
                raise ValueError('下载的文件校验不对')
        with concurrent.futures.ThreadPoolExecutor(8) as ex:
            list(ex.map(get, need))  # 有一个出错就整体当没更新，下次再试
        for name, data in (('manifest.sig', sig.hex().encode()), ('manifest.json', raw)):
            p = os.path.join(self.cache, name)
            open(p + '.tmp', 'wb').write(data)
            os.replace(p + '.tmp', p)
        store = content.cache_store(self.cache, verify)
        if not store:
            raise ValueError('下载的界面不完整')
        return store

    def _update_exe(self, exe):
        """下载新 exe 换掉正在运行的那个；返回 'ready'（重启生效）或 'manual'（请到主页下载）"""
        me = sys.executable
        new = me + '.new'
        try:
            data = fetch(BASE + exe['url'], 300)
            if hashlib.sha256(data).hexdigest() != exe['sha256']:
                raise ValueError('下载的程序校验不对')
            open(new, 'wb').write(data)
            old = me + '.old'
            if os.path.exists(old):
                os.remove(old)
            os.replace(me, old)  # Windows 允许给正在运行的 exe 改名
            try:
                os.replace(new, me)
            except OSError:
                os.replace(old, me)  # 放不进去就改回原名，保持能用
                raise
            return 'ready'
        except PermissionError:
            return 'manual'
        except Exception as e:  # 下载失败等：下次再试，不影响界面更新
            self.state['error'] = str(e)[:200]
            return None
        finally:
            if os.path.exists(new):
                try:
                    os.remove(new)
                except OSError:
                    pass

    def use_pending(self):
        """界面点了「刷新」：换成下载好的新版本"""
        if self._pending:
            self.server.store = self._pending
            self.state.update(version=self._pending.version, content=None)
            self._pending = None
            return True
        return False


def cleanup_old_exe():
    if EXE_VERSION and getattr(sys, 'frozen', False):
        try:
            os.remove(sys.executable + '.old')
        except OSError:
            pass


def restart():
    """启动换好的新 exe（让它重新解压运行环境，不继承本进程的）"""
    env = dict(os.environ, PYINSTALLER_RESET_ENVIRONMENT='1')
    subprocess.Popen([sys.executable], env=env, close_fds=True)
