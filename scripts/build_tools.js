/* 程序构筑辅助：按目标找 build、连续模拟。数值只来自后台客户端引擎，界面不另写公式。 */
(function () {
  'use strict';
  var $ = function (id) { return document.getElementById(id); };
  var SVG = 'http://www.w3.org/2000/svg';
  var state = {save: null, revision: null, catalog: [], generation: 0, history: [], loading: false, loaded: false, queued: null,
    tab: 'goal', goalMode: 'reach', timeline: null, goal: null};
  var GOAL_NAMES = {assistants: '助手数', max_mana: '魔上限', mana_regen: '每秒回魔', production: '总产出 / 秒'};
  var ZH = {Fairy: '仙灵', Elven: '精灵', Angel: '天使', Goblin: '地精', Undead: '亡灵', Demon: '恶魔', Titan: '泰坦', Druid: '德鲁伊',
    Faceless: '无面者', Dwarven: '矮人', Drow: '卓尔', Dragon: '龙族', Mercenary: '佣兵', good: '善良', evil: '邪恶', neutral: '中立'};
  var ALIGN_SHORT = {good: '善', evil: '恶', neutral: '中'};

  function esc(value) { return String(value == null ? '' : value).replace(/[&<>"']/g, function (ch) { return {'&': '&amp;', '<': '&lt;', '>': '&gt;', '"': '&quot;', "'": '&#39;'}[ch]; }); }
  function fmt(v) {
    // 游戏里的大数：万、亿，更大用科学计数
    if (v == null || !Number.isFinite(v)) return '—';
    var a = Math.abs(v);
    if (a < 1e4) return (Math.round(v * 10) / 10).toLocaleString('zh-CN');
    if (a < 1e8) return (v / 1e4).toFixed(a < 1e5 ? 2 : a < 1e6 ? 1 : 0).replace(/\.0+$/, '') + '万';
    if (a < 1e12) return (v / 1e8).toFixed(a < 1e9 ? 2 : a < 1e10 ? 1 : 0).replace(/\.0+$/, '') + '亿';
    return v.toExponential(2).replace('e+', 'e');
  }
  function num(value) {
    if (value == null || !Number.isFinite(value)) return '—';
    if (Math.abs(value) >= 1e9 || (value !== 0 && Math.abs(value) < .001)) return value.toExponential(4).replace('e+', 'e');
    return value.toLocaleString('zh-CN', {maximumFractionDigits: 2});
  }
  function duration(seconds) {
    if (seconds == null || !Number.isFinite(seconds)) return '—';
    if (seconds < 90) return Math.round(seconds) + ' 秒';
    if (seconds < 5400) return (seconds / 60).toFixed(1).replace(/\.0$/, '') + ' 分钟';
    return (seconds / 3600).toFixed(1).replace(/\.0$/, '') + ' 小时';
  }
  function call(request) {
    var bridge = window.pywebview && window.pywebview.api;
    if (!bridge || !bridge.build_calculate) return Promise.reject(new Error('当前程序不支持构筑计算，请用自用版打开。'));
    return bridge.build_calculate(request).then(function (response) {
      if (!response || !response.ok) throw new Error(response && response.error || '没有收到计算结果');
      return response;
    });
  }
  function error(text) { $('bt-error').textContent = text || ''; $('bt-error').hidden = !text; }
  function visible() { return location.hash.split('/')[0] === '#calc'; }
  function controls() {
    $('bt-refresh').disabled = state.loading || !state.save;
    $('bx-dot').className = 'bx-dot' + (state.loading ? ' busy' : state.loaded ? ' ok' : '');
    var running = !!state.timeline, searching = !!state.goal;
    $('tl-run').disabled = running || !state.loaded || state.loading;
    ['tl-seconds', 'tl-interval', 'tl-upgrades', 'tl-buildings', 'tl-clicks'].forEach(function (id) { $(id).disabled = running; });
    $('gl-run').disabled = searching || !state.loaded || state.loading;
    $('gl-run').textContent = searching ? '搜索中…' : '开始搜索';
    ['gl-goal', 'gl-target', 'gl-spell', 'gl-limit'].forEach(function (id) { $(id).disabled = searching; });
    $('gl-mode').querySelectorAll('button').forEach(function (b) { b.disabled = searching; });
  }

  // ---- 存档 ----
  function clear() {
    state.revision = null; state.loaded = false; state.catalog = [];
    if (state.timeline) { state.timeline = null; $('tl-result').innerHTML = '<div class="gx-intro"><p>存档已更新，模拟已中止。</p></div>'; }
    controls();
  }
  function receive(save) {
    if (!save || !save.save || !Number.isFinite(save.timestamp)) return;
    if (state.save && state.save.save === save.save && state.save.timestamp === save.timestamp) return;
    state.save = save;
    // 最近 40 分钟的存档：连续模拟用来还原生效中法术施放时定下的结束时间（存档本身不存）
    var ts = save.timestamp / 1000;
    if (!state.history.some(function (h) { return h.timestamp === ts; })) state.history.push({save: save.save, timestamp: ts});
    state.history = state.history.filter(function (h) { return h.timestamp > ts - 2400; }).slice(-90);
    // 模拟进行中不打断：它用的是开始时的存档，结束后再换成新存档；搜索用自己的进程，不受影响
    if (state.timeline) { state.pendingSave = true; $('bt-status').textContent = '已读取新存档 · 模拟结束后更新'; return; }
    state.generation++; clear();
    $('bt-status').textContent = '已读取新存档';
    if (visible()) load();
  }
  function load() {
    if (!state.save || !visible()) return;
    if (state.loading) { state.queued = true; return; }
    state.queued = null; state.loading = true;
    var generation = state.generation, save = state.save;
    error(''); $('bt-status').textContent = '正在按当前存档计算…'; controls();
    call({op: 'load', save: save.save, timestamp: save.timestamp / 1000}).then(function (response) {
      if (generation !== state.generation) return;
      state.revision = response.revision; state.catalog = response.catalog; state.loaded = true;
      $('bt-status').textContent = '存档 ' + new Date(response.timestamp * 1000).toLocaleString('zh-CN', {hour12: false});
      goalSpells();
    }).catch(function (e) { if (generation === state.generation) { clear(); error(e.message); $('bt-status').textContent = '当前存档计算失败'; } }).finally(function () {
      state.loading = false; controls();
      if (state.queued || generation !== state.generation) load();
    });
  }
  function setTab(tab) {
    state.tab = tab;
    $('bx-tabs').querySelectorAll('button').forEach(function (b) { b.classList.toggle('on', b.dataset.tab === tab); });
    $('bx-goal').hidden = tab !== 'goal'; $('bx-tl').hidden = tab !== 'tl';
  }

  // ---- 连续模拟：后台分段推进，每段约 4 秒，界面画进度和曲线 ----
  function chart(samples) {
    if (samples.length < 2) return '';
    var W = 600, H = 160, L = 46, R = 46, T = 10, B = 20;
    function series(key) { return samples.map(function (s) { return s[key] > 0 ? Math.log10(s[key]) : null; }); }
    function path(values, lo, hi) {
      var t0 = samples[0].t, t1 = samples[samples.length - 1].t;
      return values.map(function (v, i) {
        if (v == null) return '';
        var x = L + (W - L - R) * (samples[i].t - t0) / ((t1 - t0) || 1);
        var y = T + (H - T - B) * (1 - (v - lo) / (hi - lo));
        return (i ? 'L' : 'M') + x.toFixed(1) + ' ' + y.toFixed(1);
      }).join(' ');
    }
    function range(values) {
      var v = values.filter(function (x) { return x != null; });
      if (!v.length) return [0, 1];
      var lo = Math.min.apply(null, v), hi = Math.max.apply(null, v);
      if (hi - lo < 1e-9) { lo -= .01; hi += .01; }
      return [lo, hi];
    }
    var prod = series('total'), gems = series('gems_reset'), rp = range(prod), rg = range(gems);
    var f = function (v) { return '1e' + v.toFixed(2); };
    return '<svg class="tl-chart" viewBox="0 0 ' + W + ' ' + H + '" preserveAspectRatio="none" role="img" aria-label="总产出和可得宝石随时间变化">' +
      '<line class="grid" x1="' + L + '" x2="' + (W - R) + '" y1="' + T + '" y2="' + T + '"/><line class="grid" x1="' + L + '" x2="' + (W - R) + '" y1="' + (H - B) + '" y2="' + (H - B) + '"/>' +
      '<text x="2" y="' + (T + 8) + '">' + f(rp[1]) + '</text><text x="2" y="' + (H - B) + '">' + f(rp[0]) + '</text>' +
      '<text x="' + (W - R + 4) + '" y="' + (T + 8) + '">' + f(rg[1]) + '</text><text x="' + (W - R + 4) + '" y="' + (H - B) + '">' + f(rg[0]) + '</text>' +
      '<text x="' + L + '" y="' + (H - 4) + '">0</text><text x="' + (W - R) + '" y="' + (H - 4) + '" text-anchor="end">' + esc(duration(samples[samples.length - 1].t - samples[0].t)) + '</text>' +
      '<path class="line2" d="' + path(gems, rg[0], rg[1]) + '"/><path class="line" d="' + path(prod, rp[0], rp[1]) + '"/></svg>' +
      '<div class="tl-legend"><span><i></i>总产出 / 秒（左轴，对数）</span><span><i class="l2"></i>重生可得宝石（右轴，对数）</span></div>';
  }
  function eventText(e) {
    if (e.kind === 'spell_on') return '施放 ' + e.name;
    if (e.kind === 'spell_off') return e.name + ' 结束';
    var parts = [];
    if (e.upgrades) parts.push('升级 ' + e.upgrades.join('、'));
    if (e.exchanges) parts.push('皇家贸易令 ' + e.exchanges + ' 次');
    if (e.buildings) parts.push('建筑 ' + Object.keys(e.buildings).map(function (k) { return k + ' +' + e.buildings[k]; }).join('、'));
    return '全部购买：' + parts.join('；');
  }
  function spellNote(rows) {
    // 存档不存法术结束时间，载入时按现在的持续时间重算；能找到施放后那份存档的已经还原
    if (!rows || !rows.length) return '';
    var fixed = rows.filter(function (r) { return r.corrected && r.end !== r.loaded_end; });
    var unknown = rows.filter(function (r) { return !r.corrected; });
    var parts = [];
    if (fixed.length) parts.push('已按施放后的存档还原 ' + fixed.map(function (r) { return r.name + '（' + duration((r.loaded_end - r.end) / 30) + '）'; }).join('、') + ' 的结束时间');
    if (unknown.length) parts.push(unknown.map(function (r) { return r.name; }).join('、') + ' 施放时程序还没收到存档，结束时间按现在的持续时间估计，可能比游戏里晚一两秒');
    return parts.length ? '<p>' + esc(parts.join('；') + '。') + '</p>' : '';
  }
  function renderTimeline(run) {
    var s = run.samples, first = s[0], last = s[s.length - 1];
    var span = last.t - first.t, ratio = first.total ? last.total / first.total : null;
    var gems = last.gems_reset - first.gems_reset;
    var g = run.growth || {gems_per_hour: span ? gems / span * 3600 : null,
      production_doubling_seconds: ratio > 1 && span ? span * Math.log(2) / Math.log(ratio) : null};
    var head = run.done ? (run.finished ? '模拟完成' : '已停止') + ' · 游戏时间 ' + duration(span) + ' · 计算用时 ' + duration(run.wall)
      : '模拟中 ' + Math.round(run.progress * 100) + '% · 游戏时间 ' + duration(span) + ' / ' + duration(run.target);
    var buys = run.events.filter(function (e) { return e.kind === 'buy'; }).length;
    var casts = run.events.filter(function (e) { return e.kind === 'spell_on'; }).length;
    $('tl-result').innerHTML = '<div class="tl-head"><span>' + esc(head) + '</span>' + (run.done ? '' : '<button type="button" class="bx-ghost" id="tl-stop"' + (run.stopping ? ' disabled>正在停止…' : '>停止') + '</button>') + '</div>' +
      '<div class="tl-bar"><i style="width:' + (run.done ? 100 : Math.round(run.progress * 100)) + '%"></i></div>' +
      '<div class="tl-cards">' +
      [['宝石 / 小时', num(g.gems_per_hour)], ['宝石增加', num(gems)], ['总产出变化', ratio == null ? '—' : '×' + num(ratio)],
       ['产出翻倍用时', duration(g.production_doubling_seconds)], ['本局产出金币', num(last.coins_produced - first.coins_produced)], ['当前总产出 / 秒', num(last.total)]]
        .map(function (c) { return '<div><span>' + esc(c[0]) + '</span><strong title="' + esc(c[1]) + '">' + esc(c[1]) + '</strong></div>'; }).join('') + '</div>' +
      chart(s) +
      '<details><summary>过程记录（全部购买 ' + buys + ' 次 · 施法 ' + casts + ' 次）</summary><div class="tl-events">' +
      (run.events.length ? run.events.map(function (e) { return '<div><b>' + esc(duration(e.t - first.t)) + '</b>' + esc(eventText(e)) + '</div>'; }).join('') : '没有购买或施法') + '</div></details>' +
      spellNote(run.spellEnds) +
      '<p>宝石按游戏的「现在重生可得宝石」计算。玩家只按两个「全部购买」按钮；自动施法、助手、自动点击由游戏代码处理。手动施法、挑战、随机事件和活动不在模拟内。每次都从存档重新开始，结果不写回游戏。</p>' +
      (run.done ? '<details><summary>查看精确结果</summary><pre>' + esc(JSON.stringify({growth: run.growth, settings: run.settings, end: last}, null, 2)) + '</pre></details>' : '');
    var stop = $('tl-stop'); if (stop) stop.onclick = function () { run.stopping = true; stop.disabled = true; stop.textContent = '正在停止…'; };
  }
  function afterTimeline() {
    if (!state.pendingSave) return;
    state.pendingSave = false; state.generation++;
    var keep = $('tl-result').innerHTML;
    clear(); $('tl-result').innerHTML = keep; load();
  }
  function startTimeline() {
    if (!state.loaded || state.loading || state.timeline) return;
    var seconds = Number($('tl-seconds').value), interval = Number($('tl-interval').value), clicks = Number($('tl-clicks').value);
    if (!Number.isFinite(interval) || interval < 0 || interval > 3600) { error('全部购买间隔要在 0～3600 秒之间（0 表示不买）'); return; }
    if (!Number.isFinite(clicks) || clicks < 0 || clicks > 30) { error('手动点击每秒 0～30 次'); return; }
    error('');
    var revision = state.revision, generation = state.generation;
    var run = state.timeline = {samples: [], events: [], progress: 0, done: false, target: seconds, wall: 0};
    controls();
    $('tl-result').innerHTML = '<div class="tl-head"><span>正在准备模拟…</span></div><div class="tl-bar"><i style="width:2%"></i></div>';
    function alive() { return state.timeline === run && generation === state.generation && revision === state.revision; }
    function take(r) {
      if (r.spell_ends) run.spellEnds = r.spell_ends;
      run.samples = run.samples.concat(r.samples); run.events = run.events.concat(r.events);
      run.progress = r.progress; run.wall = r.wall_seconds; run.done = r.done;
      if (r.done) { run.growth = r.growth; run.settings = r.settings; run.finished = r.finished; }
      renderTimeline(run);
      if (r.done) { state.timeline = null; controls(); afterTimeline(); return; }
      return call({op: run.stopping ? 'timeline_stop' : 'timeline_step', revision: revision, budget: 4}).then(function (next) { if (alive()) return take(next); });
    }
    var now = state.save ? state.save.timestamp / 1000 : 0;
    var history = state.history.filter(function (h) { return h.timestamp < now; });
    call({op: 'timeline_start', revision: revision, history: history, options: {seconds: seconds, buy_interval: interval, clicks: clicks,
      buy_upgrades: $('tl-upgrades').checked, buy_buildings: $('tl-buildings').checked, building_mode: 'max'}})
      .then(function (r) { if (alive()) return take(r); })
      .catch(function (e) { if (state.timeline === run) { state.timeline = null; error(e.message); $('tl-result').innerHTML = '<div class="gx-intro"><p>模拟未完成，请核对提示后重试。</p></div>'; controls(); afterTimeline(); } });
  }

  // ---- 按目标找 build ----
  function goalSpells() {
    var keep = $('gl-spell').value;
    var spells = state.catalog.filter(function (item) { return item.kind === 'spell'; })
      .sort(function (a, b) { return a.zh.localeCompare(b.zh, 'zh-CN'); });
    $('gl-spell').innerHTML = '<option value="">不限</option>' + spells.map(function (item) {
      return '<option value="' + esc(item.name) + '"' + (item.name === keep ? ' selected' : '') + '>' + esc(item.zh) + '</option>';
    }).join('');
  }
  function parseTarget(text) {
    // 支持 40000、4万、1.5亿、1e60、4,000
    var s = String(text).trim().replace(/[,，\s]/g, ''), unit = 1;
    if (/万$/.test(s)) { unit = 1e4; s = s.slice(0, -1); } else if (/亿$/.test(s)) { unit = 1e8; s = s.slice(0, -1); }
    var v = Number(s) * unit;
    return Number.isFinite(v) && v > 0 ? v : null;
  }
  function goalMode(mode) {
    state.goalMode = mode;
    $('gl-mode').querySelectorAll('button').forEach(function (b) { b.classList.toggle('on', b.dataset.mode === mode); });
    $('gl-target-label').hidden = mode !== 'reach';
    $('gl-limit-name').textContent = mode === 'reach' ? '最长等多久' : '在第几分钟比较';
  }
  function unitKey(s) { return s.alignment + '/' + s.faction; }
  function unitName(s) { return s.faction === 'Mercenary' ? ZH[s.alignment] + '佣兵' : ZH[s.faction] || s.faction; }
  function buildName(e) {
    var parts = [e.bloodline ? (ZH[e.bloodline] || e.bloodline) + '血统' : '不选血统'];
    if (e.lineage) parts.push((ZH[e.lineage] || e.lineage) + '世系');
    if (e.prestige) parts.push('显赫 ' + (ZH[e.prestige] || e.prestige));
    return parts.join(' · ');
  }
  // 和后台 rank_key 一样：达到目标的按用时，没达到的按数值；没跑成的排最后
  function rankCmp(a, b) {
    var ka = a.ok ? (a.reached ? 0 : 1) : 2, kb = b.ok ? (b.reached ? 0 : 1) : 2;
    if (ka !== kb) return ka - kb;
    if (ka === 0 && Math.abs(a.time - b.time) > .05) return a.time - b.time;
    if (ka === 2) return a.id - b.id;
    // 同样快达到的（游戏每秒检查一次，用时常常相同），按达到那一刻的数值排：数值越高越早越过目标
    return (b.value || 0) - (a.value || 0) || a.id - b.id;
  }
  function resultText(e, reach) {
    if (!e || !e.ok) return '没跑成';
    if (e.reached) return duration(e.time) + ' · ' + fmt(e.value);
    return fmt(e.value);
  }
  // 0～1：和当前第一比
  function score(e, top, reach) {
    if (!e || !e.ok || !top || !top.ok) return 0;
    if (reach) {
      if (e.reached && top.reached && Math.abs(e.time - top.time) <= .05) return Math.min(1, e.value / (top.value || 1));   // 和第一同样快：比数值
      if (e.reached) return top.reached ? top.time / Math.max(e.time, .1) : 1;
      return top.reached ? Math.min(.5, .5 * e.value / (state.goalView.options.target || e.value)) : e.value / (top.value || 1);
    }
    return e.value / (top.value || 1);
  }

  // 星图：中间是当前最好，周围 12 个阵营；正在算的阵营和中心之间有流动的光束，验证过的按成绩变大
  function el(tag, attrs, parent) {
    var node = document.createElementNS(SVG, tag);
    for (var k in attrs) node.setAttribute(k, attrs[k]);
    if (parent) parent.appendChild(node);
    return node;
  }
  function buildOrbit(units) {
    var svg = $('gl-orbit'); svg.innerHTML = '';
    var C = 200, R = 150, PR = 112;
    el('circle', {class: 'ring', cx: C, cy: C, r: R}, svg);
    el('circle', {class: 'ring dash', cx: C, cy: C, r: R - 22}, svg);
    el('circle', {class: 'ring dash rev', cx: C, cy: C, r: 92}, svg);
    el('circle', {class: 'track', cx: C, cy: C, r: PR}, svg);
    var circ = 2 * Math.PI * PR;
    state.orbit = {C: C, R: R, circ: circ, nodes: {}, beams: el('g', {}, svg), sats: el('g', {}, svg)};
    state.orbit.prog = el('circle', {class: 'prog', cx: C, cy: C, r: PR, 'stroke-dasharray': circ, 'stroke-dashoffset': circ}, svg);
    units.forEach(function (u, i) {
      var a = -Math.PI / 2 + i * 2 * Math.PI / units.length;
      var x = C + R * Math.cos(a), y = C + R * Math.sin(a);
      var lx = C + (R + 32) * Math.cos(a), ly = C + (R + 32) * Math.sin(a);
      var g = el('g', {class: 'node', 'data-key': unitKey(u)}, svg);
      el('circle', {class: 'halo', cx: x, cy: y, r: 0}, g);
      el('circle', {class: 'pulse', cx: x, cy: y, r: 9}, g);
      el('circle', {class: 'dot', cx: x, cy: y, r: 7}, g);
      var t = el('text', {x: lx, y: ly - (u.faction === 'Mercenary' ? 0 : 5)}, g); t.textContent = u.faction === 'Mercenary' ? '佣兵' : ZH[u.faction];
      var al = el('text', {class: 'al', x: lx, y: ly + (u.faction === 'Mercenary' ? 12 : 8)}, g); al.textContent = ZH[u.alignment];
      if (u.faction === 'Mercenary') t.setAttribute('y', ly - 5);
      state.orbit.nodes[unitKey(u)] = {g: g, x: x, y: y};
    });
  }
  function updateSats(n) {
    var o = state.orbit;
    if (o.satCount === n) return;
    o.satCount = n; o.sats.innerHTML = '';
    for (var i = 0; i < n; i++) {
      var g = el('g', {class: 'sat', style: 'animation:gx-spin ' + (7 + i * 2.5) + 's linear infinite' + (i % 2 ? ' reverse' : '')}, o.sats);
      el('circle', {cx: o.C, cy: o.C - 92, r: 3.2}, g);
    }
  }
  function updateOrbit(run) {
    var o = state.orbit, st = run.status, reach = run.options.mode === 'reach';
    if (!o) return;
    var top = run.sorted[0];
    var running = {};
    (st.running || []).forEach(function (r) { running[unitKey(r)] = r; });
    (st.units || []).forEach(function (u) {
      var n = o.nodes[unitKey(u)];
      if (!n) return;
      var best = u.best && run.entries[u.best.id];
      var s = best ? score(best, top, reach) : 0;
      var r = best ? 8 + 9 * Math.sqrt(Math.max(0, s)) : u.state === 'ready' ? 8 : 7;
      n.g.querySelector('.dot').setAttribute('r', r.toFixed(1));
      n.g.querySelector('.pulse').setAttribute('r', r.toFixed(1));
      var isBest = !!(best && top && best.id === top.id);
      n.g.querySelector('.halo').setAttribute('r', isBest ? (r + 6).toFixed(1) : 0);
      n.g.setAttribute('class', 'node' + (u.state === 'ready' ? ' ready' : '') + (u.state === 'failed' ? ' failed' : '') +
        (best ? ' done' : '') + (running[unitKey(u)] ? ' run' : '') + (isBest ? ' best' : ''));
    });
    // 光束：每个进程一条，从中心连到它正在算的阵营，光点沿光束往外跑
    var keys = Object.keys(running).sort().join('|');
    if (o.beamKeys !== keys) {
      o.beamKeys = keys; o.beams.innerHTML = '';
      Object.keys(running).forEach(function (k, i) {
        var n = o.nodes[k]; if (!n) return;
        var dx = n.x - o.C, dy = n.y - o.C, d = Math.sqrt(dx * dx + dy * dy), sx = o.C + dx / d * 66, sy = o.C + dy / d * 66;
        el('line', {class: 'beam', x1: sx, y1: sy, x2: n.x - dx / d * 12, y2: n.y - dy / d * 12}, o.beams);
        var spark = el('circle', {class: 'spark', r: 2.6, cx: sx, cy: sy}, o.beams);
        var dur = (1.1 + i * .23).toFixed(2) + 's';
        el('animate', {attributeName: 'cx', from: sx, to: n.x, dur: dur, repeatCount: 'indefinite'}, spark);
        el('animate', {attributeName: 'cy', from: sy, to: n.y, dur: dur, repeatCount: 'indefinite'}, spark);
        el('animate', {attributeName: 'opacity', values: '0;1;1;0', dur: dur, repeatCount: 'indefinite'}, spark);
      });
    }
    updateSats(st.finished ? 0 : (st.workers || 3));
    // 进度环：三个阶段按大致耗时加权
    var w = [0, .35, .3, .35], p = 0;
    for (var i = 1; i < Math.min(st.phase, 4); i++) p += w[i];
    if (st.phase >= 1 && st.phase <= 3 && st.total) p += w[st.phase] * st.done / st.total;
    if (st.finished) p = 1;
    run.progress = Math.max(run.progress || 0, p);
    o.prog.setAttribute('stroke-dashoffset', (o.circ * (1 - run.progress)).toFixed(1));
    $('gl-progress').style.width = (run.progress * 100).toFixed(1) + '%';
  }
  // 数字从旧值滚到新值（对数插值，大数也平滑）
  function tweenValue(node, from, to, render) {
    var start = performance.now(), D = 700;
    if (!(from > 0) || !(to > 0)) { node.textContent = render(to); return; }
    var a = Math.log(from), b = Math.log(to);
    cancelAnimationFrame(node._raf);
    (function step(now) {
      var k = Math.min(1, (now - start) / D), e = 1 - Math.pow(1 - k, 3);
      node.textContent = render(Math.exp(a + (b - a) * e));
      if (k < 1) node._raf = requestAnimationFrame(step);
    })(start);
  }
  function updateCore(run) {
    var st = run.status, top = run.sorted[0], v = $('gl-core-value');
    $('gl-core-label').textContent = st.finished ? (st.error ? (st.error === '已停止' ? '已停止 · 当前最好' : '出错') : '搜索完成 · 最好') : top && top.ok ? '当前最好' : (st.stage || '正在启动');
    if (top && top.ok) {
      var key = top.id + ':' + (top.reached ? top.time : top.value);
      if (run.coreKey !== key) {
        var reached = top.reached, to = reached ? top.time : top.value;
        if (run.coreKey) { v.classList.remove('bump'); void v.offsetWidth; v.classList.add('bump'); }
        tweenValue(v, run.coreShown && run.coreShown.reached === reached ? run.coreShown.v : null, to,
          reached ? function (x) { return duration(x); } : fmt);
        run.coreShown = {v: to, reached: reached}; run.coreKey = key;
        $('gl-core-who').textContent = unitName(top) + ' · ' + buildName(top);
      }
    } else if (!run.coreKey) {
      v.textContent = st.finished ? '—' : fmt(0).replace('0', '…');
    }
  }
  function updateSteps(st) {
    $('gl-steps').querySelectorAll('li').forEach(function (li) {
      var p = Number(li.dataset.phase);
      li.className = st.finished || p < st.phase ? 'past' : p === st.phase ? 'now' : '';
    });
    $('gl-t-verified').textContent = st.verified || 0;
    $('gl-t-pruned').textContent = (st.pruned || 0) + (st.unexplored ? '+' + st.unexplored : '');
    $('gl-t-elapsed').textContent = duration(st.elapsed || 0);
  }
  function logZh(line) {
    return String(line).replace(/\b(good|evil|neutral|Fairy|Elven|Angel|Goblin|Undead|Demon|Titan|Druid|Faceless|Dwarven|Drow|Dragon|Mercenary)\b/g, function (w) { return ZH[w]; })
      .replace(/(善良|邪恶|中立) /g, '$1')
      .replace(/\d+(?:\.\d+)?e[+-]?\d+/g, function (x) { return fmt(Number(x)); });
  }
  function updateTicker(run) {
    var st = run.status, total = st.log_total || 0, shown = run.logShown || 0;
    if (total === shown) return;
    var fresh = (st.log || []).slice(-Math.min(6, total - shown));
    var box = $('gl-ticker');
    fresh.forEach(function (line) { var d = document.createElement('div'); d.textContent = logZh(line); box.appendChild(d); });
    while (box.children.length > 6) box.removeChild(box.firstChild);
    run.logShown = total;
  }

  // 各阵营条：顺序固定，只改宽度和文字
  function updateBars(run) {
    var st = run.status, reach = run.options.mode === 'reach', top = run.sorted[0], box = $('gl-bars');
    var running = {};
    (st.running || []).forEach(function (r) { running[unitKey(r)] = true; });
    var rows = (st.units || []).slice().sort(function (a, b) {
      var ea = a.best && run.entries[a.best.id], eb = b.best && run.entries[b.best.id];
      if (ea && eb) return rankCmp(ea, eb);
      return (eb ? 1 : 0) - (ea ? 1 : 0);
    });
    var first = {};
    box.querySelectorAll('.gx-bar').forEach(function (n) { first[n.dataset.key] = n.getBoundingClientRect().top; });
    var nodes = rows.map(function (u) {
      var key = unitKey(u), n = box.querySelector('.gx-bar[data-key="' + key + '"]');
      if (!n) {
        n = document.createElement('div'); n.className = 'gx-bar'; n.dataset.key = key;
        n.innerHTML = '<span>' + esc(u.faction === 'Mercenary' ? '佣兵' : ZH[u.faction]) + '<small>' + esc(ZH[u.alignment]) + '</small></span><div class="tr"><i></i><em></em></div><div class="sub"></div>';
      }
      return n;
    });
    arrange(box, nodes);
    rows.forEach(function (u, k) {
      var key = unitKey(u), n = nodes[k];
      var best = u.best && run.entries[u.best.id], s = best ? score(best, top, reach) : 0;
      n.querySelector('i').style.width = (best ? Math.max(3, s * 100) : 0).toFixed(1) + '%';
      n.querySelector('em').textContent = best ? resultText(best, reach) : u.state === 'failed' ? '跑不了' : running[key] ? '计算中…' : u.state === 'ready' ? '已估算' : '等待';
      n.querySelector('.sub').textContent = u.state === 'failed' ? (u.note || '') : u.combos ? '组合 ' + u.combos + ' · 验证 ' + u.verified + (best ? ' · ' + buildName(best) : '') : '';
      n.classList.toggle('top', !!(best && top && best.id === top.id));
      n.classList.toggle('run', !!running[key]);
      n.classList.toggle('wait', u.state === 'waiting' && !running[key]);
      n.classList.toggle('sel', run.filter.unit === key);
    });
    flip(box.querySelectorAll('.gx-bar'), first);
  }
  // 按给定顺序排子元素，只移动位置不对的：元素一被移动，身上的 CSS 动画就会重播，每秒全部重插会闪
  function arrange(box, nodes) {
    nodes.forEach(function (n, i) {
      if (box.children[i] !== n) box.insertBefore(n, box.children[i] || null);
    });
  }
  // 一次性动画播完就去掉，之后元素再被移动也不会重播
  function once(node, cls) {
    node.classList.add(cls);
    node.addEventListener('animationend', function done() { node.classList.remove(cls); node.removeEventListener('animationend', done); });
  }
  // FLIP：先记下旧位置，换完顺序后从旧位置平滑移到新位置，不跳
  function flip(nodes, first) {
    nodes.forEach(function (n) {
      var key = n.dataset.key || n.dataset.id;
      if (first[key] == null) return;
      var dy = first[key] - n.getBoundingClientRect().top;
      if (Math.abs(dy) < 1) return;
      n.style.transition = 'none'; n.style.transform = 'translateY(' + dy + 'px)';
      requestAnimationFrame(function () { n.style.transition = 'transform .55s cubic-bezier(.2,.8,.2,1)'; n.style.transform = ''; });
    });
  }

  // 排行：每条结果一个固定元素（按 id），只调整顺序、名次和相对条；展开的详情不会被重画
  function rowHtml(e, reach) {
    return '<div class="gx-row"><span class="gx-rk"></span>' +
      '<span class="gx-name"><b>' + esc(unitName(e)) + '</b><small>' + esc(buildName(e)) + '</small></span>' +
      '<span class="gx-val">' + esc(resultText(e, reach)) + '</span>' +
      '<span class="gx-rel"><i><b></b></i><em></em></span>' +
      '<span class="gx-cnt">' + (e.ok ? '研究 ' + e.research.length + (e.merc.length ? ' · 佣兵 ' + e.merc.length : '') : esc(e.note || '')) + '</span></div>';
  }
  function goalChart(curve, target) {
    if (!curve || curve.length < 2) return '';
    var W = 400, H = 70, pts = curve.filter(function (p) { return p[1] > 0; });
    if (pts.length < 2) return '';
    var t1 = pts[pts.length - 1][0] || 1, ys = pts.map(function (p) { return Math.log10(p[1]); });
    var lo = Math.min.apply(null, ys), hi = Math.max.apply(null, ys);
    if (target) hi = Math.max(hi, Math.log10(target));
    if (hi - lo < 1e-9) { lo -= .5; hi += .5; }
    var y = function (v) { return (H - 4 - (H - 8) * (v - lo) / (hi - lo)).toFixed(1); };
    var d = pts.map(function (p, i) { return (i ? 'L' : 'M') + (W * p[0] / t1).toFixed(1) + ' ' + y(Math.log10(p[1])); }).join(' ');
    return '<svg class="gl-chart" viewBox="0 0 ' + W + ' ' + H + '" preserveAspectRatio="none" aria-hidden="true"><path class="area" d="' + d + ' L' + W + ' ' + H + ' L0 ' + H + 'Z"/>' +
      (target ? '<line class="target" x1="0" x2="' + W + '" y1="' + y(Math.log10(target)) + '" y2="' + y(Math.log10(target)) + '"/>' : '') + '<path d="' + d + '"/></svg>';
  }
  function why(e) {
    // 每一项去掉后目标会掉到原来的几分之一；路径来自游戏公式的依赖关系
    var rows = (e.contributions || []).filter(function (c) { return c.ratio && c.ratio > 1.0005; });
    if (!rows.length) return '';
    return '<div class="gl-why">' + rows.map(function (c) {
      var label = c.kind === '研究' ? c.item + ' ' + c.name : c.kind === '佣兵' ? c.item : (c.kind === '血统' ? (ZH[e.bloodline] || e.bloodline) + '血统' : c.kind === '世系' ? (ZH[e.bloodline] || e.bloodline) + '世系' : '显赫 ' + (ZH[e.prestige] || e.prestige));
      return '<span title="' + esc(c.kind + ' · ' + c.path) + '"><b>×' + (c.ratio >= 10 ? c.ratio.toFixed(0) : c.ratio.toFixed(2)) + '</b>' + esc(label) + '<i>' + esc(c.path) + '</i></span>';
    }).join('') + '</div>';
  }
  function tpRow(label, tp, category, name) {
    if (!tp) return '';
    return '<div class="gl-tp"><small>' + esc(label) + '</small><code>' + esc(tp) + '</code><button type="button" class="bx-ghost" data-copy="' + esc(tp) + '">复制</button>' +
      '<button type="button" class="bx-ghost" data-save="' + esc(tp) + '" data-category="' + category + '" data-name="' + esc(name) + '">存进游戏模板</button></div>';
  }
  function detailHtml(e, o) {
    if (!e.ok) return '<p>' + esc(e.note || '这套没能整局跑完') + '</p>';
    var reach = o.mode === 'reach';
    var name = 'RGA ' + GOAL_NAMES[o.goal] + (reach ? ' ' + fmt(o.target) : '') + ' ' + unitName(e) + (e.bloodline ? (ZH[e.bloodline] || e.bloodline) + '血统' : '');
    return goalChart(e.curve, reach ? o.target : null) + why(e) +
      tpRow('佣兵', e.merc.join(','), 'mercenary', name) + tpRow('研究', e.research.join(','), 'research', name) +
      '<div class="gl-list">' + e.research.map(function (c, k) { return '<span><i class="bt-code">' + esc(c) + '</i>' + esc(e.research_zh[k]) + '</span>'; }).join('') + '</div>' +
      (e.skipped.length ? '<p>研究没买上：' + esc(e.skipped.join('、')) + '</p>' : '') +
      (e.skipped_merc.length ? '<p>佣兵升级到时间上限还买不起（阵营币不够）：' + esc(e.skipped_merc.join('、')) + '</p>' : '') +
      '<p>' + (reach ? '' : '第 ' + duration(o.limit) + ' 时 ' + num(e.value) + '；') + '选择时间：' + esc(Object.keys(e.picks).map(function (k) { return k + ' ' + duration(e.picks[k]); }).join('、')) +
      '；闭环 ' + e.rounds + ' 轮' + (e.estimate ? '，最初估算 ' + fmt(e.estimate) : '') + (e.finished_at != null ? '；搜索第 ' + duration(e.finished_at) + ' 验证完' : '') + '</p>';
  }
  function updateRows(run) {
    var box = $('gl-rows'), reach = run.options.mode === 'reach', top = run.sorted[0], f = run.filter;
    var first = {};
    box.querySelectorAll('.gx-item').forEach(function (n) { if (n.offsetParent) first[n.dataset.id] = n.getBoundingClientRect().top; });
    var rank = 0, shown = 0;
    arrange(box, run.sorted.map(function (e) {
      var n = run.rows[e.id];
      if (!n) {
        n = run.rows[e.id] = document.createElement('div');
        n.className = 'gx-item' + (e.ok ? '' : ' bad');
        n.dataset.id = e.id; n.innerHTML = rowHtml(e, reach);
        if (run.started) once(n, 'fresh');
      }
      return n;
    }));
    run.sorted.forEach(function (e) {
      var n = run.rows[e.id];
      if (e.ok) rank++;
      var hide = (f.align && e.alignment !== f.align) || (f.unit && unitKey(e) !== f.unit) || (f.blood && (e.bloodline || '-') !== f.blood);
      n.hidden = !!hide;
      if (!hide) shown++;
      n.querySelector('.gx-rk').textContent = e.ok ? rank : '—';
      n.classList.toggle('first', !!(e.ok && top && e.id === top.id));
      var s = score(e, top, reach);
      n.querySelector('.gx-rel b').style.width = (s * 100).toFixed(1) + '%';
      n.querySelector('.gx-rel em').textContent = e.ok ? (e.id === top.id ? '第一' : Math.round(s * 100) + '%') : '';
    });
    flip(box.querySelectorAll('.gx-item:not([hidden])'), first);
    $('gl-rows-empty').hidden = shown > 0;
    $('gl-rows-empty').textContent = run.sorted.length ? '没有符合筛选的结果' : '第一批验证结果出来后显示在这里。';
    $('gl-col-result').textContent = reach ? '用时 / 数值' : '第 ' + duration(run.options.limit);
  }
  function updateFilters(run) {
    var units = run.status.units || [], fs = $('gl-f-faction'), bs = $('gl-f-blood');
    if (fs.options.length <= 1 && units.length) {
      fs.innerHTML = '<option value="">所有阵营</option>' + units.map(function (u) { return '<option value="' + esc(unitKey(u)) + '">' + esc(unitName(u)) + '</option>'; }).join('');
    }
    var bloods = {};
    run.sorted.forEach(function (e) { bloods[e.bloodline || '-'] = true; });
    var keys = Object.keys(bloods).sort();
    if (bs.dataset.keys !== keys.join()) {
      bs.dataset.keys = keys.join();
      bs.innerHTML = '<option value="">所有血统</option>' + keys.map(function (b) { return '<option value="' + esc(b) + '"' + (run.filter.blood === b ? ' selected' : '') + '>' + esc(b === '-' ? '不选血统' : (ZH[b] || b) + '血统') + '</option>'; }).join('');
    }
    fs.value = run.filter.unit || '';
  }
  function updateFoot(run) {
    var st = run.status;
    $('gl-foot').textContent = (st.pruned ? st.pruned + ' 套按估算不可能更好、跳过（估算 × 本阵营实测系数 × 1.2 仍低于已验证最好的）。' : '') +
      (st.unexplored ? st.unexplored + ' 套到验证上限没验证。' : '') +
      '数值以整局跑为准。玩家只按「全部购买」，自动施法按退位前的设置' + (run.options.spell ? '并打开所选法术' : '') + '；手动施法、点击、挑战不在内。结果不写回存档。';
  }
  function renderGoal(run) {
    var st = run.status;
    run.sorted = Object.keys(run.entries).map(function (k) { return run.entries[k]; }).sort(rankCmp);
    $('gl-live').classList.toggle('done', !!st.finished);
    $('gl-stop').hidden = !!st.finished;
    if (st.finished && st.error && st.error !== '已停止') error(st.error);
    updateSteps(st); updateCore(run); updateOrbit(run); updateTicker(run);
    $('gl-board').hidden = !(st.units && st.units.length);
    updateFilters(run); updateBars(run); updateRows(run); updateFoot(run);
    run.started = true;
  }
  function startGoal() {
    if (!state.loaded || state.loading || state.goal) return;
    var mode = state.goalMode;
    var target = mode === 'reach' ? parseTarget($('gl-target').value) : null;
    if (mode === 'reach' && target == null) { error('目标数值看不懂，写成 40000、4万 或 1e60'); return; }
    error('');
    var options = {goal: $('gl-goal').value, mode: mode, target: target, limit: Number($('gl-limit').value), spell: $('gl-spell').value || null};
    var run = state.goal = state.goalView = {options: options, entries: {}, rows: {}, sorted: [], filter: {}, status: {phase: 0}};
    controls();
    $('gl-intro').hidden = true; $('gl-live').hidden = false; $('gl-board').hidden = true;
    $('gl-rows').innerHTML = ''; $('gl-bars').innerHTML = ''; $('gl-ticker').innerHTML = '';
    $('gl-f-faction').innerHTML = '<option value="">所有阵营</option>'; $('gl-f-blood').innerHTML = '<option value="">所有血统</option>'; $('gl-f-blood').dataset.keys = '';
    $('gl-f-align').querySelectorAll('button').forEach(function (b) { b.classList.toggle('on', !b.dataset.v); });
    $('gl-core-value').textContent = '…'; $('gl-core-who').textContent = ''; $('gl-core-label').textContent = '正在启动';
    $('gl-progress').style.width = '0';
    $('gl-stop').disabled = false; $('gl-stop').textContent = '停止';
    buildOrbit([['good', 'Fairy'], ['good', 'Elven'], ['good', 'Angel'], ['evil', 'Goblin'], ['evil', 'Undead'], ['evil', 'Demon'],
      ['neutral', 'Titan'], ['neutral', 'Druid'], ['neutral', 'Faceless'], ['good', 'Mercenary'], ['evil', 'Mercenary'], ['neutral', 'Mercenary']]
      .map(function (p) { return {alignment: p[0], faction: p[1]}; }));
    updateSteps(run.status);
    function poll(r) {
      if (state.goal !== run) return;
      (r.entries || []).forEach(function (e) { run.entries[e.id] = e; });
      run.status = r; renderGoal(run);
      if (r.finished) { state.goal = null; controls(); return; }
      setTimeout(function () {
        if (state.goal !== run) return;
        call({op: 'goal_status', known: Object.keys(run.entries).length}).then(poll)
          .catch(function (e) { if (state.goal === run) { state.goal = null; error(e.message); controls(); } });
      }, 1000);
    }
    call({op: 'goal_start', revision: state.revision, options: options}).then(poll)
      .catch(function (e) {
        if (state.goal !== run) return;
        state.goal = null; error(e.message); controls();
        $('gl-live').hidden = true; $('gl-intro').hidden = false;
      });
  }
  function boardClick(event) {
    var run = state.goalView;
    if (!run) return;
    var button = event.target.closest('button');
    if (button && button.dataset.copy) {
      navigator.clipboard.writeText(button.dataset.copy).then(function () { button.textContent = '已复制'; }, function () { button.textContent = '复制失败'; });
      return;
    }
    if (button && button.dataset.save) {
      var bridge = window.pywebview && window.pywebview.api;
      if (!bridge || !bridge.add_template) return;
      button.disabled = true;
      bridge.add_template(button.dataset.category || 'research', button.dataset.name, button.dataset.save).then(function (res) {
        button.textContent = res && res.ok ? (res.status === 'exists' ? '游戏里已有' : '已存进游戏') : '没存上';
        if (!(res && res.ok)) { button.disabled = false; error((res && res.error) || '没能写进游戏的模板库'); }
      });
      return;
    }
    var row = event.target.closest('.gx-item > .gx-row');
    if (row) {
      var item = row.parentNode, e = run.entries[item.dataset.id];
      if (!item.querySelector('.gx-detail')) {
        var d = document.createElement('div'); d.className = 'gx-detail'; d.innerHTML = detailHtml(e, run.options); item.appendChild(d); d.hidden = true;
      }
      var open = !item.classList.contains('open'), detail = item.querySelector('.gx-detail');
      item.classList.toggle('open', open); detail.hidden = !open;
      if (open) once(detail, 'enter');
    }
  }
  function setFilter(patch) {
    var run = state.goalView;
    if (!run) return;
    Object.keys(patch).forEach(function (k) { run.filter[k] = patch[k]; });
    if (patch.unit) { run.filter.align = ''; $('gl-f-align').querySelectorAll('button').forEach(function (b) { b.classList.toggle('on', !b.dataset.v); }); }
    if (patch.align) run.filter.unit = '';
    renderGoal(run);
  }
  function init() {
    $('bx-tabs').addEventListener('click', function (event) { var tab = event.target.dataset.tab; if (tab) setTab(tab); });
    $('gl-run').onclick = startGoal;
    $('gl-mode').addEventListener('click', function (event) { if (event.target.dataset.mode && !state.goal) goalMode(event.target.dataset.mode); });
    goalMode('reach');
    $('gl-stop').onclick = function () { $('gl-stop').disabled = true; $('gl-stop').textContent = '正在停止…'; call({op: 'goal_stop'}).catch(function () {}); };
    $('gl-rows').addEventListener('click', boardClick);
    $('gl-bars').addEventListener('click', function (event) {
      var bar = event.target.closest('.gx-bar'); if (!bar || !state.goalView) return;
      setFilter({unit: state.goalView.filter.unit === bar.dataset.key ? '' : bar.dataset.key});
    });
    $('gl-orbit').addEventListener('click', function (event) {
      var node = event.target.closest('.node'); if (!node || !state.goalView) return;
      setFilter({unit: node.dataset.key}); $('gl-board').scrollIntoView({behavior: 'smooth', block: 'start'});
    });
    $('gl-f-align').addEventListener('click', function (event) {
      var v = event.target.dataset.v; if (v == null) return;
      $('gl-f-align').querySelectorAll('button').forEach(function (b) { b.classList.toggle('on', b === event.target); });
      setFilter({align: v});
    });
    $('gl-f-faction').onchange = function () { setFilter({unit: this.value}); };
    $('gl-f-blood').onchange = function () { setFilter({blood: this.value}); };
    $('tl-run').onclick = startTimeline;
    $('bt-refresh').onclick = function () { if (!state.loading) { state.generation++; clear(); load(); } };
    window.addEventListener('rgcalculationsave', function (event) { receive(event.detail); });
    window.addEventListener('hashchange', function () { if (visible() && state.save && !state.loaded) load(); });
    window.addEventListener('pywebviewready', function () { if (visible() && state.save && !state.loaded) load(); });
    if (window.rgCalculationSave) receive(window.rgCalculationSave);
    controls();
  }
  if (document.readyState === 'loading') document.addEventListener('DOMContentLoaded', init); else init();
})();
