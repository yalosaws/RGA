"""发布到 yalosaws.com/rga：项目主页 + 自动更新（已装的 RGA 会在 15 分钟内自己更新）。

用法：python scripts/publish.py [--exe] [--no-upload]
  默认：重新生成界面（build_html.py），加密成对象，写清单并签名，生成主页，上传到服务器。
  界面一律按发布版生成（RGA_PUBLIC=1，不带自动点击），做完再把 build/app 换回本机自用版。
  --exe       同时发布 release/public/RGA.exe（先用 app/build_exe.py --public 打包；它写的 RGA.exe.json 记着版本和校验值）。
              不加时沿用服务器上现有清单里的 exe，只更新界面。
  --no-upload 只生成到 build/site/，不上传（用来检查）。

服务器：ubuntu@124.222.182.40 的 ~/workspace/pages/rga/，Caddy 把 yalosaws.com/rga/ 指到这里（静态文件）。
  index.html、icon.png、shot-*.png   主页（模板 scripts/site/index.html）
  download/RGA-<版本>.exe             下载
  update/manifest.json + .sig        清单和签名；update/o/<id> 加密的界面文件
密钥在 keys/（不进 git）：sign.key 签名私钥、content.key 界面加密密钥。丢了的话已装的程序收不到更新，只能让大家重新下载。
"""
import argparse
import hashlib
import html
import io
import json
import os
import shutil
import subprocess
import sys
import tarfile
import urllib.request

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, 'app'))
sys.path.insert(0, os.path.join(ROOT, 'scripts'))
import content  # noqa: E402
import updater  # noqa: E402

HOST = 'ubuntu@124.222.182.40'
REMOTE = '/home/ubuntu/workspace/pages/rga'
APP_DIR = os.path.join(ROOT, 'build', 'app')
OUT = os.path.join(ROOT, 'build', 'site')
SITE = os.path.join(ROOT, 'scripts', 'site')
EXE = os.path.join(ROOT, 'release', 'public', 'RGA.exe')  # build_exe.py --public 的输出；release/RGA.exe 是自用版，不发布


def sign(raw):
    from cryptography.hazmat.primitives.asymmetric.ed25519 import Ed25519PrivateKey
    seed = bytes.fromhex(open(os.path.join(ROOT, 'keys', 'sign.key')).read().strip())
    sig = Ed25519PrivateKey.from_private_bytes(seed).sign(raw)
    assert updater.verify(raw, sig), '签名私钥和程序里的公钥对不上'
    return sig


def remote_exe():
    """服务器上现在清单里的 exe（验过签名）；没有就 None"""
    try:
        raw = updater.fetch(updater.HOME + 'update/manifest.json')
        sig = bytes.fromhex(updater.fetch(updater.HOME + 'update/manifest.sig').decode().strip())
        return json.loads(raw).get('exe') if updater.verify(raw, sig) else None
    except Exception:
        return None


def changes_html():
    import build_html
    out = []
    for i, (v, d, items) in enumerate(build_html.CHANGES):
        out.append('<div class="ver%s"><button aria-expanded="%s"><b class="num">%s</b><small class="num">%s</small></button>'
                   '<div class="body"><div><ul>%s</ul></div></div></div>' % (
            ' open' if i == 0 else '', 'true' if i == 0 else 'false', v, d, ''.join('<li>%s</li>' % html.escape(x) for x in items)))
    return ''.join(out)


def ssh(cmd, data=None):
    return subprocess.run(['ssh', '-o', 'BatchMode=yes', HOST, cmd], input=data, capture_output=True, check=True).stdout


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--exe', action='store_true')
    ap.add_argument('--no-upload', action='store_true')
    a = ap.parse_args()
    try:
        publish(a)
    finally:  # build/app 换回本机自用版
        subprocess.check_call([sys.executable, '-X', 'utf8', os.path.join(ROOT, 'scripts', 'build_html.py')], cwd=ROOT,
                              env={k: v for k, v in os.environ.items() if k != 'RGA_PUBLIC'})


def publish(a):
    subprocess.check_call([sys.executable, '-X', 'utf8', os.path.join(ROOT, 'scripts', 'build_html.py')], cwd=ROOT,
                          env=dict(os.environ, RGA_PUBLIC='1'))
    for root, _, files in os.walk(APP_DIR):  # 自动点击不能进发布版
        for f in files:
            if f.endswith(('.js', '.html', '.css')):
                text = open(os.path.join(root, f), encoding='utf-8').read()
                assert 'click_status' not in text, '发布版界面里有自动点击：' + f
                assert 'timeline_start' not in text, '发布版界面里有构筑辅助（只给自用版）：' + f
    shutil.rmtree(OUT, ignore_errors=True)
    shutil.copytree(SITE, OUT)
    k = content.key()
    assert k, '缺少 keys/content.key'
    m = content.make_objects(APP_DIR, k, os.path.join(OUT, 'update'))
    if a.exe:
        info = json.load(open(EXE + '.json', encoding='utf-8'))
        data = open(EXE, 'rb').read()
        assert hashlib.sha256(data).hexdigest() == info['sha256'], 'RGA.exe 和 RGA.exe.json 对不上，重新跑 build_exe.py --public'
        assert info['version'] == m['version'], 'exe 是 %s 打的，界面是 %s；先重新打包' % (info['version'], m['version'])
        url = 'download/RGA-%s.exe' % info['version']
        os.makedirs(os.path.join(OUT, 'download'))
        shutil.copyfile(EXE, os.path.join(OUT, *url.split('/')))
        m['exe'] = {'version': info['version'], 'url': url, 'sha256': info['sha256'], 'size': info['size']}
    else:
        exe = remote_exe()
        if exe:
            m['exe'] = exe
    raw = json.dumps(m, ensure_ascii=False, indent=1).encode()
    open(os.path.join(OUT, 'update', 'manifest.json'), 'wb').write(raw)
    open(os.path.join(OUT, 'update', 'manifest.sig'), 'w').write(sign(raw).hex())
    exe = m.get('exe')
    page = open(os.path.join(SITE, 'index.html'), encoding='utf-8').read()
    page = (page.replace('%%VERSION%%', m['version']).replace('%%DATE%%', m['date']).replace('%%CHANGES%%', changes_html())
            .replace('%%EXE%%', exe['url'] if exe else '#').replace('%%OFF%%', '' if exe else ' off')
            .replace('%%DLTEXT%%', '下载 RGA %s' % m['version'] if exe else '即将开放下载')  # exe 启动后几秒就自动更新到最新界面，按钮写最新版本
            .replace('%%SIZE%%', ' · %.1f MB' % (exe['size'] / 1e6) if exe else ''))
    open(os.path.join(OUT, 'index.html'), 'w', encoding='utf-8').write(page)
    print('生成', OUT, '版本', m['version'], '，exe', exe['version'] if exe else '无')
    if a.no_upload:
        return
    # 上传：服务器上已有的对象和 exe 跳过；清单最后放，保证客户端看到新清单时文件都已经在了
    # 按「路径 大小」比对：上次上传中断留下的半个文件大小对不上，会重新上传
    have = set(ssh("mkdir -p %s/update/o %s/download && cd %s && find update/o download -type f -printf '%%p %%s\n'" % (REMOTE, REMOTE, REMOTE)).decode().splitlines())
    buf = io.BytesIO()
    last = ['update/manifest.json', 'update/manifest.sig']
    with tarfile.open(fileobj=buf, mode='w') as t:
        files = []
        for d, _, names in os.walk(OUT):
            for n in names:
                rel = os.path.relpath(os.path.join(d, n), OUT).replace(os.sep, '/')
                if rel not in last and '%s %d' % (rel, os.path.getsize(os.path.join(d, n))) not in have:
                    files.append(rel)
        for rel in sorted(files) + last:
            t.add(os.path.join(OUT, *rel.split('/')), rel)
    ssh('tar -xf - -C %s' % REMOTE, buf.getvalue())
    print('已上传 %d 个文件到 %s:%s' % (len(files) + 2, HOST, REMOTE))
    # 核对：线上清单和本地一致
    online = urllib.request.urlopen(urllib.request.Request(updater.HOME + 'update/manifest.json', headers={'Cache-Control': 'no-cache'}), timeout=30).read()
    print('线上清单', '一致' if online == raw else '不一致（可能有缓存，稍后再看）')


if __name__ == '__main__':
    main()
