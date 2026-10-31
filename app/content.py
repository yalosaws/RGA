"""界面文件的存放和本地服务。

界面不再是一个大 HTML，而是 build_html.py 生成的一组文件（index.html、pages/、js/、css/、img/），
清单 manifest 列出每个文件。分三种来源，程序启动时用版本最新、文件齐全的那个：
  - 源码运行：build/app/ 下的明文文件（先跑 scripts/build_html.py）
  - exe 自带：RGA.dat（zip，内含 manifest.json 和 o/<对象 id>）
  - 自动更新下载的：%LOCALAPPDATA%\\RGA\\update\\（manifest.json、manifest.sig、o/<对象 id>）

对象 = 一个文件压缩后加密（seal），对象 id 是加密后内容的 sha256；同样的文件每次加密结果一样，
所以发布新版时只有改过的文件会变成新对象，客户端也只下载这些。
界面只在内存里解密，由本地服务按一次性的随机路径提供，别的路径一律 404。
"""
import hashlib
import http.server
import json
import mimetypes
import os
import re
import secrets
import threading
import time
import zipfile
import zlib

MAGIC = b'RGA2'
_K = None  # 打包时由 build_exe.py 填入界面加密密钥；源码运行时从 keys/content.key 读
ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
INCLUDE = re.compile(rb'<!--#include ([\w./-]+)-->')
TYPES = {'.html': 'text/html; charset=utf-8', '.js': 'text/javascript; charset=utf-8', '.css': 'text/css; charset=utf-8',
         '.json': 'application/json', '.png': 'image/png', '.jpg': 'image/jpeg', '.gif': 'image/gif', '.webp': 'image/webp',
         '.svg': 'image/svg+xml'}


def key():
    if _K is not None:
        return _K
    path = os.path.join(ROOT, 'keys', 'content.key')
    return bytes.fromhex(open(path).read().strip()) if os.path.exists(path) else None


def version_tuple(v):
    return tuple(int(x) for x in re.findall(r'\d+', str(v)))


def _stream(k, nonce, n):
    return b''.join(hashlib.sha256(k + nonce + i.to_bytes(8, 'little')).digest() for i in range((n + 31) // 32))[:n]


def _xor(a, b):
    return (int.from_bytes(a, 'little') ^ int.from_bytes(b, 'little')).to_bytes(len(a), 'little')


def seal(data, k):
    """文件 → 对象：MAGIC + 16 字节 nonce（由内容决定）+ 压缩后异或密钥流"""
    nonce = hashlib.sha256(b'nonce' + data).digest()[:16]
    body = zlib.compress(data, 9)
    return MAGIC + nonce + _xor(body, _stream(k, nonce, len(body)))


def unseal(blob, k):
    if not blob.startswith(MAGIC):
        raise ValueError('不是界面对象')
    nonce, body = blob[4:20], blob[20:]
    return zlib.decompress(_xor(body, _stream(k, nonce, len(body))))


def make_objects(app_dir, k, out_dir):
    """build/app → 加密对象写到 out_dir/o/，返回发布用的清单（不含 exe、签名）"""
    plain = json.load(open(os.path.join(app_dir, 'manifest.json'), encoding='utf-8'))
    os.makedirs(os.path.join(out_dir, 'o'), exist_ok=True)
    files = {}
    for name in plain['files']:
        data = open(os.path.join(app_dir, *name.split('/')), 'rb').read()
        blob = seal(data, k)
        oid = hashlib.sha256(blob).hexdigest()
        path = os.path.join(out_dir, 'o', oid)
        if not os.path.exists(path):
            open(path, 'wb').write(blob)
        files[name] = {'o': oid, 'size': len(blob)}
    from updater import SHELL_API
    return {'version': plain['version'], 'date': plain['date'], 'notes': plain['notes'], 'shell_api': SHELL_API, 'files': files}


class Store:
    """一个版本的界面。get(path) 取明文；读出来的对象都核对 sha256"""
    def __init__(self, manifest, origin, reader=None, plain_dir=None):
        self.manifest, self.version, self.origin = manifest, manifest['version'], origin
        self._reader, self._plain = reader, plain_dir
        self._cache, self._index = {}, None

    def get(self, path):
        if path in self._cache:
            return self._cache[path]
        info = self.manifest['files'].get(path)
        if not info:
            return None
        if self._plain:
            data = open(os.path.join(self._plain, *path.split('/')), 'rb').read()
        else:
            blob = self._reader(info['o'])
            if hashlib.sha256(blob).hexdigest() != info['o']:
                raise ValueError('界面文件损坏：' + path)
            data = unseal(blob, key())
        if path.endswith(('.html', '.css', '.js')):
            self._cache[path] = data
        return data

    def blob(self, oid):
        """这个版本里已有的加密对象（更新时拿来复用，不用重新下载）；没有就 None"""
        if self._plain:
            return None
        try:
            return self._reader(oid)
        except (KeyError, OSError):
            return None

    def index(self):
        """index.html 里的 <!--#include pages/x.html--> 换成那一页"""
        if self._index is None:
            self._index = INCLUDE.sub(lambda m: self.get(m.group(1).decode()) or b'', self.get('index.html'))
        return self._index

    def complete(self, has):
        return all(has(f['o']) for f in self.manifest['files'].values())


def dev_store(app_dir):
    m = json.load(open(os.path.join(app_dir, 'manifest.json'), encoding='utf-8'))
    return Store(m, 'dev', plain_dir=app_dir)


def bundled_store(dat_path):
    z = zipfile.ZipFile(dat_path)
    lock = threading.Lock()

    def read(oid):
        with lock:
            return z.read('o/' + oid)
    return Store(json.loads(z.read('manifest.json')), 'bundled', read)


def write_bundle(manifest, obj_dir, dat_path):
    """打包时用：清单和用到的对象装进 RGA.dat"""
    with zipfile.ZipFile(dat_path, 'w', zipfile.ZIP_STORED) as z:
        z.writestr('manifest.json', json.dumps(manifest, ensure_ascii=False))
        for f in manifest['files'].values():
            z.write(os.path.join(obj_dir, 'o', f['o']), 'o/' + f['o'])


def cache_store(cache_dir, verify):
    """自动更新下载的版本；清单签名不对、对象不齐时返回 None"""
    try:
        raw = open(os.path.join(cache_dir, 'manifest.json'), 'rb').read()
        sig = bytes.fromhex(open(os.path.join(cache_dir, 'manifest.sig')).read().strip())
        if not verify(raw, sig):
            return None
        m = json.loads(raw)
    except (OSError, ValueError):
        return None
    obj = lambda oid: os.path.join(cache_dir, 'o', oid)
    s = Store(m, 'cache', lambda oid: open(obj(oid), 'rb').read())
    return s if s.complete(lambda oid: os.path.exists(obj(oid))) else None


def clean_cache(cache_dir, keep):
    """删掉当前版本用不到的对象（只在启动时做，免得删掉正在显示的页面要用的文件）"""
    used = {f['o'] for f in keep.manifest['files'].values()} if keep and keep.origin == 'cache' else set()
    d = os.path.join(cache_dir, 'o')
    for name in os.listdir(d) if os.path.isdir(d) else ():
        if name not in used:
            try:
                os.remove(os.path.join(d, name))
            except OSError:
                pass


class Server:
    """只在本机、只按随机路径提供界面。store 可以在运行中换成新版本（刷新页面后生效）"""
    def __init__(self, store, port):
        self.store = store
        self.token = '/%s/' % secrets.token_urlsafe(24)
        srv_ref = self

        class Handler(http.server.BaseHTTPRequestHandler):
            def do_GET(self):
                path = self.path.split('?')[0].split('#')[0]
                body, ctype = None, 'text/plain'
                if path.startswith(srv_ref.token):
                    rel = path[len(srv_ref.token):]
                    try:
                        if rel in ('', 'index.html'):
                            body, ctype = srv_ref.store.index(), TYPES['.html']
                        elif '..' not in rel:
                            body = srv_ref.store.get(rel)
                            ext = os.path.splitext(rel)[1].lower()
                            ctype = TYPES.get(ext) or mimetypes.guess_type(rel)[0] or 'application/octet-stream'
                    except Exception:
                        body = None
                self.send_response(200 if body is not None else 404)
                body = body or b''
                self.send_header('Content-Type', ctype)
                self.send_header('Content-Length', str(len(body)))
                self.send_header('Cache-Control', 'no-store')
                self.end_headers()
                self.wfile.write(body)

            def log_message(self, *a):
                pass
        srv = None
        # 重启（自动更新换了 exe）时旧窗口可能还占着端口，等一会儿；端口不变，网页的 localStorage 才能接着用
        for _ in range(30):
            try:
                srv = http.server.ThreadingHTTPServer(('127.0.0.1', port), Handler)
                break
            except OSError:
                time.sleep(.25)
        if srv is None:
            srv = http.server.ThreadingHTTPServer(('127.0.0.1', 0), Handler)
        threading.Thread(target=srv.serve_forever, daemon=True).start()
        self.url = 'http://127.0.0.1:%d%s' % (srv.server_address[1], self.token)
