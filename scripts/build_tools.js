/* 程序构筑辅助：按目标找 build、连续模拟。数值只来自后台客户端引擎，界面不另写公式。 */
(function () {
  'use strict';
  var $ = function (id) { return document.getElementById(id); };
  var SVG = 'http://www.w3.org/2000/svg';
  var state = {save: null, revision: null, catalog: [], generation: 0, history: [], loading: false, loaded: false, queued: null,
    tab: 'goal', goalMode: 'reach', timeline: null, goal: null};
  var GOAL_NAMES = {assistants: '助手数', max_mana: '魔上限', mana_regen: '每秒回魔', production: '总产出 / 秒', coins: '本局累计产币', gems: '退位可得宝石'};
  var ZH = {Fairy: '仙灵', Elven: '精灵', Angel: '天使', Goblin: '地精', Undead: '亡灵', Demon: '恶魔', Titan: '泰坦', Druid: '德鲁伊',
    Faceless: '无面者', Dwarven: '矮人', Drow: '卓尔', Dragon: '龙族', Mercenary: '佣兵', good: '善良', evil: '邪恶', neutral: '中立'};
  var ALIGN_SHORT = {good: '善', evil: '恶', neutral: '中'};
  var I = window.BXI, L = I.L, nm = I.nm;
  var GOAL_EN = {assistants: 'Assistants', max_mana: 'Max mana', mana_regen: 'Mana regen / s', production: 'Production / s', coins: 'Coins produced', gems: 'Gems on ascension'};
  function goalName(k) { return I.en() ? GOAL_EN[k] : GOAL_NAMES[k]; }
  function trimz(x) { return x.indexOf('.') >= 0 ? x.replace(/0+$/, '').replace(/\.$/, '') : x; }

  function esc(value) { return String(value == null ? '' : value).replace(/[&<>"']/g, function (ch) { return {'&': '&amp;', '<': '&lt;', '>': '&gt;', '"': '&quot;', "'": '&#39;'}[ch]; }); }
  function fmt(v) {
    // 游戏里的大数：中文用万、亿，英文用 K/M/B/T，更大用科学计数
    if (v == null || !Number.isFinite(v)) return '—';
    var a = Math.abs(v);
    if (I.en()) {
      if (a < 1e4) return (Math.round(v * 10) / 10).toLocaleString('en-US');
      if (a >= 1e15) return v.toExponential(2).replace('e+', 'e');
      var U = [[1e12, 'T'], [1e9, 'B'], [1e6, 'M'], [1e3, 'K']];
      for (var i = 0; i < U.length; i++) if (a >= U[i][0]) { var x = v / U[i][0]; return trimz(Math.abs(x) >= 100 ? x.toFixed(0) : Math.abs(x) >= 10 ? x.toFixed(1) : x.toFixed(2)) + U[i][1]; }
    }
    if (a < 1e4) return (Math.round(v * 10) / 10).toLocaleString('zh-CN');
    if (a < 1e8) return (v / 1e4).toFixed(a < 1e5 ? 2 : a < 1e6 ? 1 : 0).replace(/\.0+$/, '') + '万';
    if (a < 1e12) return (v / 1e8).toFixed(a < 1e9 ? 2 : a < 1e10 ? 1 : 0).replace(/\.0+$/, '') + '亿';
    return v.toExponential(2).replace('e+', 'e');
  }
  function num(value) {
    if (value == null || !Number.isFinite(value)) return '—';
    if (Math.abs(value) >= 1e9 || (value !== 0 && Math.abs(value) < .001)) return value.toExponential(4).replace('e+', 'e');
    return value.toLocaleString(I.locale(), {maximumFractionDigits: 2});
  }
  function duration(seconds) {
    if (seconds == null || !Number.isFinite(seconds)) return '—';
    if (seconds < 90) return Math.round(seconds) + L(' 秒', ' s');
    if (seconds < 5400) return (seconds / 60).toFixed(1).replace(/\.0$/, '') + L(' 分钟', ' min');
    return (seconds / 3600).toFixed(1).replace(/\.0$/, '') + L(' 小时', ' h');
  }
  function call(request) {
    var bridge = window.pywebview && window.pywebview.api;
    if (!bridge || !bridge.build_calculate) return Promise.reject(new Error(L('当前程序不支持构筑计算，请用自用版打开。', 'This build does not support build calculation; open the private build.')));
    return bridge.build_calculate(request).then(function (response) {
      if (!response || !response.ok) throw new Error(I.bk(response && response.error) || L('没有收到计算结果', 'No result received'));
      return response;
    });
  }
  function error(text) { $('bt-error').textContent = text || ''; $('bt-error').hidden = !text; }
  // 状态栏文字随语言重画：存一个返回文字的函数
  function status(fn) { state.statusFn = fn; $('bt-status').textContent = fn(); }
  function visible() { return location.hash.split('/')[0] === '#calc'; }
  function controls() {
    var economic = ['production','coins','gems'].indexOf($('gl-goal').value)>=0;
    $('gl-objective-hint').hidden = !economic;
    $('gl-objective-hint').textContent = $('gl-goal').value==='production' ? L('比较指定时刻的每秒产出，法术相位会影响读数。比较整局收益可选累计产币或退位可得宝石。', 'Compares production per second at the chosen moment; spell phase affects the reading. To compare whole-run gains, pick coins produced or gems on ascension.') : $('gl-goal').value==='coins' ? L('比较本次退位重开后的累计产币，包含收税等直接收益，不扣除购买花费。', 'Compares coins produced since this ascension, including tax and other direct income; purchase costs are not deducted.') : L('直接比较游戏公式给出的退位可得宝石。', 'Compares the gems on ascension given by the game’s own formula.');
    $('bt-refresh').disabled = state.loading || !state.save;
    $('bx-dot').className = 'bx-dot' + (state.loading ? ' busy' : state.loaded ? ' ok' : '');
    var running = !!state.timeline, searching = !!state.goal;
    $('tl-run').disabled = running || !state.loaded || state.loading || state.evaluating;
    ['tl-seconds', 'tl-interval', 'tl-upgrades', 'tl-buildings', 'tl-clicks'].forEach(function (id) { $(id).disabled = running; });
    $('gl-run').disabled = searching || !state.loaded || state.loading || state.evaluating;
    $('ev-run').disabled = searching || running || !state.loaded || state.loading || state.evaluating;
    ['ev-preset','ev-alignment','ev-faction','ev-bloodline','ev-prestige','ev-research','ev-merc'].forEach(function(id){ $(id).disabled = !!state.evaluating; });
    $('gl-run').textContent = searching ? L('搜索中…', 'Searching…') : L('开始搜索', 'Start search');
    ['gl-goal', 'gl-target', 'gl-spell', 'gl-limit', 'gl-depth'].forEach(function (id) { $(id).disabled = searching || state.evaluating; });
    $('gl-mode').querySelectorAll('button').forEach(function (b) { b.disabled = searching || state.evaluating; });
  }

  // ---- 存档 ----
  function clear() {
    state.revision = null; state.loaded = false; state.catalog = [];
    if (state.timeline) { state.timeline = null; $('tl-result').innerHTML = '<div class="gx-intro"><p>' + L('存档已更新，模拟已中止。', 'The save was updated; the simulation was stopped.') + '</p></div>'; }
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
    if (state.timeline) { state.pendingSave = true; status(function () { return L('已读取新存档 · 模拟结束后更新', 'New save read · will update after the simulation'); }); return; }
    state.generation++; clear();
    status(function () { return L('已读取新存档', 'New save read'); });
    if (visible()) load();
  }
  function load() {
    if (!state.save || !visible()) return;
    if (state.loading) { state.queued = true; return; }
    state.queued = null; state.loading = true;
    var generation = state.generation, save = state.save;
    error(''); status(function () { return L('正在按当前存档计算…', 'Calculating from the current save…'); }); controls();
    call({op: 'load', save: save.save, timestamp: save.timestamp / 1000}).then(function (response) {
      if (generation !== state.generation) return;
      state.revision = response.revision; state.catalog = response.catalog; state.loaded = true;
      status(function () { return L('存档 ', 'Save ') + new Date(response.timestamp * 1000).toLocaleString(I.locale(), {hour12: false}); });
      goalSpells();
    }).catch(function (e) { if (generation === state.generation) { clear(); error(e.message); status(function () { return L('当前存档计算失败', 'Calculation failed for this save'); }); } }).finally(function () {
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
    return '<svg class="tl-chart" viewBox="0 0 ' + W + ' ' + H + '" preserveAspectRatio="none" role="img" aria-label="' + L('总产出和可得宝石随时间变化', 'Total production and available gems over time') + '">' +
      '<line class="grid" x1="' + L + '" x2="' + (W - R) + '" y1="' + T + '" y2="' + T + '"/><line class="grid" x1="' + L + '" x2="' + (W - R) + '" y1="' + (H - B) + '" y2="' + (H - B) + '"/>' +
      '<text x="2" y="' + (T + 8) + '">' + f(rp[1]) + '</text><text x="2" y="' + (H - B) + '">' + f(rp[0]) + '</text>' +
      '<text x="' + (W - R + 4) + '" y="' + (T + 8) + '">' + f(rg[1]) + '</text><text x="' + (W - R + 4) + '" y="' + (H - B) + '">' + f(rg[0]) + '</text>' +
      '<text x="' + L + '" y="' + (H - 4) + '">0</text><text x="' + (W - R) + '" y="' + (H - 4) + '" text-anchor="end">' + esc(duration(samples[samples.length - 1].t - samples[0].t)) + '</text>' +
      '<path class="line2" d="' + path(gems, rg[0], rg[1]) + '"/><path class="line" d="' + path(prod, rp[0], rp[1]) + '"/></svg>' +
      '<div class="tl-legend"><span><i></i>' + L('总产出 / 秒（左轴，对数）', 'Total production / s (left axis, log)') + '</span><span><i class="l2"></i>' + L('退位可得宝石（右轴，对数）', 'Gems on ascension (right axis, log)') + '</span></div>';
  }
  function eventText(e) {
    var en = I.en();
    if (e.kind === 'spell_on') return L('施放 ', 'Cast ') + e.name;
    if (e.kind === 'spell_off') return e.name + L(' 结束', ' ended');
    var parts = [];
    if (e.upgrades) parts.push(L('升级 ', 'Upgrades ') + e.upgrades.join(en ? ', ' : '、'));
    if (e.exchanges) parts.push(L('皇家贸易令 ' + e.exchanges + ' 次', 'Royal Exchange ×' + e.exchanges));
    if (e.buildings) parts.push(L('建筑 ', 'Buildings ') + Object.keys(e.buildings).map(function (k) { return k + ' +' + e.buildings[k]; }).join(en ? ', ' : '、'));
    return L('全部购买：', 'Buy all: ') + parts.join(en ? '; ' : '；');
  }
  function spellNote(rows) {
    // 存档不存法术结束时间，载入时按现在的持续时间重算；能找到施放后那份存档的已经还原
    if (!rows || !rows.length) return '';
    var fixed = rows.filter(function (r) { return r.corrected && r.end !== r.loaded_end; });
    var unknown = rows.filter(function (r) { return !r.corrected; });
    var parts = [];
    var en = I.en(), sep = en ? ', ' : '、';
    if (fixed.length) parts.push(en ? 'End times restored from the save taken after casting: ' + fixed.map(function (r) { return r.name + ' (' + duration((r.loaded_end - r.end) / 30) + ')'; }).join(sep)
      : '已按施放后的存档还原 ' + fixed.map(function (r) { return r.name + '（' + duration((r.loaded_end - r.end) / 30) + '）'; }).join('、') + ' 的结束时间');
    if (unknown.length) parts.push(en ? unknown.map(function (r) { return r.name; }).join(sep) + ' had no save yet when cast, so the end time is estimated from the current duration and may be a second or two later than in the game'
      : unknown.map(function (r) { return r.name; }).join('、') + ' 施放时程序还没收到存档，结束时间按现在的持续时间估计，可能比游戏里晚一两秒');
    return parts.length ? '<p>' + esc(parts.join(en ? '; ' : '；') + (en ? '.' : '。')) + '</p>' : '';
  }
  function renderTimeline(run) {
    state.tlView = run;
    var s = run.samples, first = s[0], last = s[s.length - 1];
    var span = last.t - first.t, ratio = first.total ? last.total / first.total : null;
    var gems = last.gems_reset - first.gems_reset;
    var g = run.growth || {gems_per_hour: span ? gems / span * 3600 : null,
      production_doubling_seconds: ratio > 1 && span ? span * Math.log(2) / Math.log(ratio) : null};
    var head = run.done ? (run.finished ? L('模拟完成', 'Simulation complete') : L('已停止', 'Stopped')) + L(' · 游戏时间 ', ' · game time ') + duration(span) + L(' · 计算用时 ', ' · computed in ') + duration(run.wall)
      : L('模拟中 ', 'Simulating ') + Math.round(run.progress * 100) + L('% · 游戏时间 ', '% · game time ') + duration(span) + ' / ' + duration(run.target);
    var buys = run.events.filter(function (e) { return e.kind === 'buy'; }).length;
    var casts = run.events.filter(function (e) { return e.kind === 'spell_on'; }).length;
    $('tl-result').innerHTML = '<div class="tl-head"><span>' + esc(head) + '</span>' + (run.done ? '' : '<button type="button" class="bx-ghost" id="tl-stop"' + (run.stopping ? ' disabled>' + L('正在停止…', 'Stopping…') : '>' + L('停止', 'Stop')) + '</button>') + '</div>' +
      '<div class="tl-bar"><i style="width:' + (run.done ? 100 : Math.round(run.progress * 100)) + '%"></i></div>' +
      '<div class="tl-cards">' +
      [[L('宝石 / 小时', 'Gems / hour'), num(g.gems_per_hour)], [L('宝石增加', 'Gems gained'), num(gems)], [L('总产出变化', 'Production change'), ratio == null ? '—' : '×' + num(ratio)],
       [L('产出翻倍用时', 'Time to double production'), duration(g.production_doubling_seconds)], [L('本局产出金币', 'Coins produced this run'), num(last.coins_produced - first.coins_produced)], [L('当前总产出 / 秒', 'Current total production / s'), num(last.total)]]
        .map(function (c) { return '<div><span>' + esc(c[0]) + '</span><strong title="' + esc(c[1]) + '">' + esc(c[1]) + '</strong></div>'; }).join('') + '</div>' +
      chart(s) +
      '<details><summary>' + L('过程记录（全部购买 ' + buys + ' 次 · 施法 ' + casts + ' 次）', 'Log (Buy all ×' + buys + ' · casts ×' + casts + ')') + '</summary><div class="tl-events">' +
      (run.events.length ? run.events.map(function (e) { return '<div><b>' + esc(duration(e.t - first.t)) + '</b>' + esc(eventText(e)) + '</div>'; }).join('') : L('没有购买或施法', 'No purchases or casts')) + '</div></details>' +
      spellNote(run.spellEnds) +
      '<p>' + L('宝石按游戏的「现在退位可得宝石」计算。玩家只按两个「全部购买」按钮；自动施法、助手、自动点击由游戏代码处理。手动施法、挑战、随机事件和活动不在模拟内。每次都从存档重新开始，结果不写回游戏。',
        'Gems use the game’s own “gems on ascension now”. The player only presses the two “Buy all” buttons; auto-cast, assistants and auto-click are handled by the game code. Manual casting, challenges, random events and seasonal events are not simulated. Every run restarts from the save and nothing is written back to the game.') + '</p>' +
      (run.done ? '<details><summary>' + L('查看精确结果', 'Exact results') + '</summary><pre>' + esc(JSON.stringify({growth: run.growth, settings: run.settings, end: last}, null, 2)) + '</pre></details>' : '');
    var stop = $('tl-stop'); if (stop) stop.onclick = function () { run.stopping = true; stop.disabled = true; stop.textContent = L('正在停止…', 'Stopping…'); };
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
    if (!Number.isFinite(interval) || interval < 0 || interval > 3600) { error(L('全部购买间隔要在 0～3600 秒之间（0 表示不买）', '“Buy all” interval must be between 0 and 3600 s (0 means never buy)')); return; }
    if (!Number.isFinite(clicks) || clicks < 0 || clicks > 30) { error(L('手动点击每秒 0～30 次', 'Manual clicks must be 0–30 per second')); return; }
    error('');
    var revision = state.revision, generation = state.generation;
    var run = state.timeline = {samples: [], events: [], progress: 0, done: false, target: seconds, wall: 0};
    controls();
    $('tl-result').innerHTML = '<div class="tl-head"><span>' + L('正在准备模拟…', 'Preparing the simulation…') + '</span></div><div class="tl-bar"><i style="width:2%"></i></div>';
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
      .catch(function (e) { if (state.timeline === run) { state.timeline = null; error(e.message); $('tl-result').innerHTML = '<div class="gx-intro"><p>' + L('模拟未完成，请核对提示后重试。', 'The simulation did not finish; check the message and try again.') + '</p></div>'; controls(); afterTimeline(); } });
  }

  // ---- 按目标找 build ----
  function goalSpells() {
    var keep = $('gl-spell').value;
    var spells = state.catalog.filter(function (item) { return item.kind === 'spell'; })
      .sort(function (a, b) { return I.en() ? a.name.localeCompare(b.name, 'en') : a.zh.localeCompare(b.zh, 'zh-CN'); });
    $('gl-spell').innerHTML = '<option value="">' + I.t('不限') + '</option>' + spells.map(function (item) {
      return '<option value="' + esc(item.name) + '"' + (item.name === keep ? ' selected' : '') + '>' + esc(I.en() ? item.name : item.zh) + '</option>';
    }).join('');
  }
  function parseTarget(text) {
    // 支持 40000、4万、1.5亿、4k、2.5M、3B、1e60、4,000
    var s = String(text).trim().replace(/[,，\s]/g, ''), unit = 1, m;
    if (/万$/.test(s)) { unit = 1e4; s = s.slice(0, -1); } else if (/亿$/.test(s)) { unit = 1e8; s = s.slice(0, -1); }
    else if ((m = /^(.*\d)([kmbt])$/i.exec(s))) { unit = {k: 1e3, m: 1e6, b: 1e9, t: 1e12}[m[2].toLowerCase()]; s = m[1]; }
    var v = Number(s) * unit;
    return Number.isFinite(v) && v > 0 ? v : null;
  }
  function goalMode(mode) {
    state.goalMode = mode;
    $('gl-mode').querySelectorAll('button').forEach(function (b) { b.classList.toggle('on', b.dataset.mode === mode); });
    $('gl-target-label').hidden = mode !== 'reach';
    $('gl-limit-name').textContent = mode === 'reach' ? L('最长等多久', 'Time limit') : L('在第几分钟比较', 'Compare at minute');
  }
  function unitKey(s) { return s.alignment + '/' + s.faction; }
  function unitName(s) { return s.faction === 'Mercenary' ? (I.en() ? nm(s.alignment) + ' Mercenary' : ZH[s.alignment] + '佣兵') : nm(s.faction); }
  function buildName(e) {
    var parts = [e.bloodline ? L(nm(e.bloodline) + '血统', nm(e.bloodline) + ' bloodline') : L('不选血统', 'No bloodline')];
    if (e.lineage) parts.push(L(nm(e.lineage) + '世系', nm(e.lineage) + ' lineage'));
    if (e.prestige) parts.push(L('显赫 ', 'Prestige ') + nm(e.prestige));
    return parts.join(' · ');
  }
  // 和后台 rank_key 一样：达到目标的按用时，没达到的按数值；没跑成的排最后
  function rankCmp(a, b) {
    var ka = a.ok ? (a.reached ? 0 : 1) : 2, kb = b.ok ? (b.reached ? 0 : 1) : 2;
    if (ka !== kb) return ka - kb;
    if (ka === 0 && a.time !== b.time) return a.time - b.time;
    if (ka === 2) return a.id - b.id;
    // 相同检查时刻达到的，以该时刻实测数值打破平局。
    return (b.value || 0) - (a.value || 0) || a.id - b.id;
  }
  function resultText(e, reach) {
    if (!e || !e.ok) return L('没跑成', 'Failed');
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
      var t = el('text', {x: lx, y: ly - (u.faction === 'Mercenary' ? 0 : 5)}, g); t.textContent = u.faction === 'Mercenary' ? L('佣兵', 'Mercenary') : nm(u.faction);
      var al = el('text', {class: 'al', x: lx, y: ly + (u.faction === 'Mercenary' ? 12 : 8)}, g); al.textContent = nm(u.alignment);
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
    // 进度环：四个阶段按大致耗时加权；当前阶段用后台给的完成比例（没有就按这一批的进度）
    var w = [0, .03, .15, .75, .07], p = 0;
    for (var i = 1; i < Math.min(st.phase, 5); i++) p += w[i];
    if (st.phase >= 1 && st.phase <= 4) p += w[st.phase] * (st.phase_frac != null ? st.phase_frac : st.total ? st.done / st.total : 0);
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
    $('gl-core-label').textContent = st.finished ? (st.error ? (st.error === '已停止' ? L('已停止 · 当前最好', 'Stopped · best so far') : L('出错', 'Error')) : L('搜索完成 · 最好', 'Search complete · best')) : top && top.ok ? L('当前最好', 'Best so far') : (I.bk(st.stage) || L('正在启动', 'Starting'));
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
    $('gl-t-pruned').textContent = fmt(st.runs || 0);
    $('gl-t-elapsed').textContent = duration(st.elapsed || 0);
  }
  function logZh(line) {
    if (I.en()) return I.bk(line).replace(/\d+(?:\.\d+)?e[+-]?\d+/g, function (x) { return fmt(Number(x)); });
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
        n.innerHTML = '<span>' + esc(u.faction === 'Mercenary' ? L('佣兵', 'Mercenary') : nm(u.faction)) + '<small>' + esc(nm(u.alignment)) + '</small></span><div class="tr"><i></i><em></em></div><div class="sub"></div>';
      }
      return n;
    });
    arrange(box, nodes);
    rows.forEach(function (u, k) {
      var key = unitKey(u), n = nodes[k];
      var best = u.best && run.entries[u.best.id], s = best ? score(best, top, reach) : 0;
      n.querySelector('i').style.width = (best ? Math.max(3, s * 100) : 0).toFixed(1) + '%';
      n.querySelector('em').textContent = best ? resultText(best, reach) : u.state === 'failed' ? L('跑不了', 'Cannot run') : running[key] ? L('计算中…', 'Calculating…') : st.finished ? L('暂无可执行方案', 'No runnable plan') : L('等待试跑', 'Waiting to run');
      n.querySelector('.sub').textContent = u.state === 'failed' ? I.bk(u.note || '') : u.combos ? L('组合 ' + u.combos + ' · 验证 ' + u.verified, 'Combos ' + u.combos + ' · verified ' + u.verified) + (best ? ' · ' + buildName(best) : '') : '';
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
      '<span class="gx-cnt">' + (e.ok ? L('研究 ', 'Research ') + e.research.length + (e.merc.length ? L(' · 佣兵 ', ' · Merc ') + e.merc.length : '') + (e.verified_exact ? L(' · 已复核', ' · checked') : '') : esc(I.bk(e.note || ''))) + '</span></div>';
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
    // 每一项去掉后重新整局试跑；显示实测变化，不把关联当成独立乘数。
    var rows = (e.contributions || []).filter(function (c) { return c.ratio && c.ratio > 1.0005; });
    if (!rows.length) return '';
    return '<div class="gl-why">' + rows.map(function (c) {
      var label = c.kind === '研究' ? c.item + ' ' + (I.en() ? (c.name_en || c.name) : c.name) : c.kind === '佣兵' ? c.item :
        (c.kind === '血统' ? L(nm(e.bloodline) + '血统', nm(e.bloodline) + ' bloodline') : c.kind === '世系' ? L(nm(e.bloodline) + '世系', nm(e.bloodline) + ' lineage') : L('显赫 ', 'Prestige ') + nm(e.prestige));
      return '<span title="' + esc(I.bk(c.kind) + ' · ' + I.bk(c.path)) + '"><b>×' + (c.ratio >= 10 ? c.ratio.toFixed(0) : c.ratio.toFixed(2)) + '</b>' + esc(label) + '<i>' + esc(I.bk(c.path)) + '</i></span>';
    }).join('') + '</div>';
  }
  function tpRow(label, tp, category, name) {
    if (!tp) return '';
    return '<div class="gl-tp"><small>' + esc(label) + '</small><code>' + esc(tp) + '</code><button type="button" class="bx-ghost" data-copy="' + esc(tp) + '">' + L('复制', 'Copy') + '</button>' +
      '<button type="button" class="bx-ghost" data-save="' + esc(tp) + '" data-category="' + category + '" data-name="' + esc(name) + '">' + L('存进游戏模板', 'Save to game templates') + '</button></div>';
  }
  function detailHtml(e, o) {
    if (!e.ok) return '<p>' + esc(I.bk(e.note) || L('这套没能整局跑完', 'This setup could not be run to the end')) + '</p>';
    var reach = o.mode === 'reach', en = I.en();
    var name = 'RGA ' + goalName(o.goal) + (reach ? ' ' + fmt(o.target) : '') + ' ' + unitName(e) + (e.bloodline ? (en ? ' ' + nm(e.bloodline) : nm(e.bloodline) + '血统') : '');
    var names = en && e.research_en ? e.research_en : e.research_zh, sep = en ? ', ' : '、';
    return goalChart(e.curve, reach ? o.target : null) + why(e) +
      tpRow(L('佣兵', 'Mercenary'), e.merc.join(','), 'mercenary', name) + tpRow(L('研究', 'Research'), e.research.join(','), 'research', name) +
      '<div class="gl-list">' + e.research.map(function (c, k) { return '<span><i class="bt-code">' + esc(c) + '</i>' + esc(names[k]) + '</span>'; }).join('') + '</div>' +
      (e.skipped.length ? '<p>' + L('研究没买上：', 'Research not bought: ') + esc(e.skipped.join(sep)) + '</p>' : '') +
      (e.skipped_merc.length ? '<p>' + L('佣兵升级到时间上限还买不起（阵营币不够）：', 'Mercenary upgrades still unaffordable by the time limit (not enough faction coins): ') + esc(e.skipped_merc.join(sep)) + '</p>' : '') +
      '<p>' + (reach ? '' : L('第 ' + duration(o.limit) + ' 时 ' + num(e.value) + '；', 'At ' + duration(o.limit) + ': ' + num(e.value) + '; ')) + L('选择时间：', 'Picked at: ') +
      esc(Object.keys(e.picks_en && en ? e.picks_en : e.picks).map(function (k) { var src = e.picks_en && en ? e.picks_en : e.picks; return k + ' ' + duration(src[k]); }).join(sep)) +
      (e.finished_at != null ? L('；搜索第 ' + duration(e.finished_at) + ' 得到', '; found at ' + duration(e.finished_at) + ' of the search') : '') + '</p>' +
      (e.verified_exact ? '<p>' + L('已独立复核：数值、购买记录和整条增长曲线与首次试跑一致。', 'Independently checked: value, purchase log and the whole growth curve match the first run.') + '</p>' : '') +
      (e.contributions && e.contributions.length ? '<p>' + L('上面的变化来自去掉对应项目后的整局实测，各项之间存在联动，不能直接相乘。', 'The changes above come from re-running the whole run without each item. The items interact, so they cannot simply be multiplied.') + '</p>' : '');
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
      n.querySelector('.gx-rel em').textContent = e.ok ? (e.id === top.id ? L('第一', '1st') : Math.round(s * 100) + '%') : '';
    });
    flip(box.querySelectorAll('.gx-item:not([hidden])'), first);
    $('gl-rows-empty').hidden = shown > 0;
    $('gl-rows-empty').textContent = run.sorted.length ? L('没有符合筛选的结果', 'No results match the filter') : L('第一批验证结果出来后显示在这里。', 'The first verified results will appear here.');
    $('gl-col-result').textContent = reach ? L('用时 / 数值', 'Time / value') : L('第 ' + duration(run.options.limit), 'At ' + duration(run.options.limit));
  }
  function updateFilters(run) {
    var units = run.status.units || [], fs = $('gl-f-faction'), bs = $('gl-f-blood');
    if (fs.options.length <= 1 && units.length) {
      fs.innerHTML = '<option value="">' + I.t('所有阵营') + '</option>' + units.map(function (u) { return '<option value="' + esc(unitKey(u)) + '">' + esc(unitName(u)) + '</option>'; }).join('');
    }
    var bloods = {};
    run.sorted.forEach(function (e) { bloods[e.bloodline || '-'] = true; });
    var keys = Object.keys(bloods).sort();
    if (bs.dataset.keys !== keys.join()) {
      bs.dataset.keys = keys.join();
      bs.innerHTML = '<option value="">' + I.t('所有血统') + '</option>' + keys.map(function (b) { return '<option value="' + esc(b) + '"' + (run.filter.blood === b ? ' selected' : '') + '>' + esc(b === '-' ? L('不选血统', 'No bloodline') : L(nm(b) + '血统', nm(b) + ' bloodline')) + '</option>'; }).join('');
    }
    fs.value = run.filter.unit || '';
  }
  function updateFoot(run) {
    var st = run.status;
    var en = I.en(), alloc = st.allocation && st.allocation.length ? (en ? ' (' : '（') + st.allocation.map(function (b) { return duration(b.horizon) + (en ? ': ' + fmt(b.completed) + ' setups' : '：' + fmt(b.completed) + ' 套'); }).join(en ? '; ' : '；') + (en ? ')' : '）') : '';
    var assumed = run.options.event_context && run.options.event_context.assumed;
    $('gl-foot').textContent = en
      ? 'Ran ' + fmt(st.runs || 0) + ' trial runs in total' + alloc + (st.improved ? ', improving the best setup ' + st.improved + ' times' : '') + '. ' +
        (st.unexplored ? st.unexplored + ' structures got no runnable plan within this budget. ' : '') +
        'The ranking shows the best result among the setups tried; ones marked “checked” were re-run independently. Fixed random stream; no colour or aim picking. ' +
        (assumed ? 'No seasonal-event schedule was found, so the event state is assumed to last until the end of the simulation. ' : '') +
        'Values come from the full runs. The player only presses “Buy all”; auto-cast follows the settings from before ascension' + (run.options.spell ? ' with the chosen spell switched on' : '') + '; manual casting, clicking and challenges are not included. Results are not written back to the save.'
      : '一共试跑 ' + fmt(st.runs || 0) + ' 次' + alloc + (st.improved ? '，更新了 ' + st.improved + ' 次更好方案' : '') + '。' +
        (st.unexplored ? '本次预算内还有 ' + st.unexplored + ' 种结构未得到可执行方案。' : '') +
        '排名是已试跑方案中的最好结果，标「已复核」的已独立重跑。' +
        '固定随机流，不主动择色或瞄准。' + (assumed ? '缺少活动排期，假定活动状态持续至模拟结束。' : '') +
        '数值以整局跑为准。玩家只按「全部购买」，自动施法按退位前的设置' + (run.options.spell ? '并打开所选法术' : '') + '；手动施法、点击、挑战不在内。结果不写回存档。';
  }
  function renderGoal(run) {
    var st = run.status;
    var gone = {};
    (st.superseded || []).forEach(function (id) { gone[id] = true; });
    Object.keys(gone).forEach(function (id) {
      var n = run.rows[id];
      if (n) { n.remove(); delete run.rows[id]; }
    });
    run.sorted = Object.keys(run.entries).filter(function (k) { return !gone[k]; }).map(function (k) { return run.entries[k]; }).sort(rankCmp);
    $('gl-live').classList.toggle('done', !!st.finished);
    $('gl-stop').hidden = !!st.finished;
    if (st.finished && st.error && st.error !== '已停止') error(st.error);
    updateSteps(st); updateCore(run); updateOrbit(run); updateTicker(run);
    $('gl-board').hidden = !(st.units && st.units.length);
    updateFilters(run); updateBars(run); updateRows(run); updateFoot(run);
    run.started = true;
  }
  var ORBIT_UNITS = [['good', 'Fairy'], ['good', 'Elven'], ['good', 'Angel'], ['evil', 'Goblin'], ['evil', 'Undead'], ['evil', 'Demon'],
    ['neutral', 'Titan'], ['neutral', 'Druid'], ['neutral', 'Faceless'], ['good', 'Mercenary'], ['evil', 'Mercenary'], ['neutral', 'Mercenary']]
    .map(function (p) { return {alignment: p[0], faction: p[1]}; });
  function startGoal() {
    if (!state.loaded || state.loading || state.goal) return;
    var mode = state.goalMode;
    var target = mode === 'reach' ? parseTarget($('gl-target').value) : null;
    if (mode === 'reach' && target == null) { error(L('目标数值看不懂，写成 40000、4万 或 1e60', 'Cannot read the target; write it like 40000, 4M or 1e60')); return; }
    error('');
    var options = {goal: $('gl-goal').value, mode: mode, target: target, limit: Number($('gl-limit').value), spell: $('gl-spell').value || null, depth: $('gl-depth').value};
    var run = state.goal = state.goalView = {options: options, entries: {}, rows: {}, sorted: [], filter: {}, status: {phase: 0}};
    controls();
    $('gl-intro').hidden = true; $('gl-live').hidden = false; $('gl-board').hidden = true;
    $('gl-rows').innerHTML = ''; $('gl-bars').innerHTML = ''; $('gl-ticker').innerHTML = '';
    $('gl-f-faction').innerHTML = '<option value="">' + I.t('所有阵营') + '</option>'; $('gl-f-blood').innerHTML = '<option value="">' + I.t('所有血统') + '</option>'; $('gl-f-blood').dataset.keys = '';
    $('gl-f-align').querySelectorAll('button').forEach(function (b) { b.classList.toggle('on', !b.dataset.v); });
    $('gl-core-value').textContent = '…'; $('gl-core-who').textContent = ''; $('gl-core-label').textContent = L('正在启动', 'Starting');
    $('gl-progress').style.width = '0';
    $('gl-stop').disabled = false; $('gl-stop').textContent = L('停止', 'Stop');
    buildOrbit(ORBIT_UNITS);
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
      navigator.clipboard.writeText(button.dataset.copy).then(function () { button.textContent = L('已复制', 'Copied'); }, function () { button.textContent = L('复制失败', 'Copy failed'); });
      return;
    }
    if (button && button.dataset.save) {
      var bridge = window.pywebview && window.pywebview.api;
      if (!bridge || !bridge.add_template) return;
      button.disabled = true;
      bridge.add_template(button.dataset.category || 'research', button.dataset.name, button.dataset.save).then(function (res) {
        button.textContent = res && res.ok ? (res.status === 'exists' ? L('游戏里已有', 'Already in game') : L('已存进游戏', 'Saved to game')) : L('没存上', 'Not saved');
        if (!(res && res.ok)) { button.disabled = false; error(I.bk(res && res.error) || L('没能写进游戏的模板库', 'Could not write to the game’s template library')); }
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
  var FACTIONS = ['Fairy','Elven','Angel','Goblin','Undead','Demon','Titan','Druid','Faceless','Mercenary'];
  function fillEval() {
    var keep = {f: $('ev-faction').value || 'Titan', b: $('ev-bloodline').value, p: $('ev-preset').value};
    $('ev-faction').innerHTML = FACTIONS.map(function(f){ return '<option value="'+f+'">'+nm(f)+'</option>'; }).join('');
    $('ev-faction').value = keep.f;
    $('ev-bloodline').innerHTML = '<option value="">' + I.t('无') + '</option>' + FACTIONS.filter(function(f){return f !== 'Mercenary';}).concat(['Dwarven','Drow','Dragon']).map(function(f){return '<option value="'+f+'">'+nm(f)+'</option>';}).join('');
    $('ev-bloodline').value = keep.b == null || keep.b === '' && !state.evReady ? 'Dwarven' : keep.b;
    $('ev-preset').innerHTML = '<option value="">' + I.t('手动输入') + '</option>' + state.presets.map(function(p,i){return '<option value="'+i+'">'+esc((p.kind==='research'?L('研究 · ','Research · '):L('佣兵 · ','Mercenary · '))+p.name)+'</option>';}).join('');
    $('ev-preset').value = keep.p;
    state.evReady = true;
  }
  function showEval(r) {
    var box = $('ev-result'); state.evView = r;
    if (!r) { box.className = ''; box.textContent = ''; return; }
    if (r.error != null) { box.className = 'bt-error'; box.textContent = r.stale ? L('存档已更新，请重新评测。', 'The save was updated; please evaluate again.') : L('评测失败：', 'Evaluation failed: ') + I.bk(r.error); return; }
    if (r.busy) { box.className = ''; box.textContent = L('正在独立试跑并核对实际购买清单…', 'Running on its own and checking the actual purchase list…'); return; }
    if (r.stale) { box.className = ''; box.textContent = L('存档已更新，请重新评测。', 'The save was updated; please evaluate again.'); return; }
    var e = r.e; box.className = '';
    box.textContent = L('第 '+duration(e.horizon)+'：'+num(e.value)+'；研究 '+e.plan.research.length+' 项、佣兵 '+e.plan.merc.length+' 项、法术 '+e.plan.merc_spells.length+' 项、盟约 '+(e.plan.merc_alliance || []).length+' 项全部买齐。'+
        (e.environment && e.environment.policy==='hold_saved_season' ? '缺少活动排期，假定活动状态持续至评测结束。' : '活动排期已纳入本次模拟。'),
      'At '+duration(e.horizon)+': '+num(e.value)+'; all bought — '+e.plan.research.length+' research, '+e.plan.merc.length+' mercenary, '+e.plan.merc_spells.length+' spells, '+(e.plan.merc_alliance || []).length+' alliance. '+
        (e.environment && e.environment.policy==='hold_saved_season' ? 'No seasonal-event schedule was found, so the event state is assumed to last until the end of the evaluation.' : 'The seasonal-event schedule is included in this simulation.'));
  }
  function hintText() {
    if (state.evHint == null) return;
    $('ev-hint').textContent = I.en() ? state.evHint.replace('已按模板名称及研究归属填入结构，请核对。', 'Structure filled in from the template name and research ownership; please check. ') : state.evHint;
  }
  function initEvaluation() {
    state.presets = $('ev-data') ? JSON.parse($('ev-data').textContent) : [];
    fillEval();
    $('ev-preset').onchange = function(){
      if (this.value==='') return;
      var p=state.presets[Number(this.value)];
      ['alignment','faction','bloodline','prestige'].forEach(function(k){$('ev-'+k).value=p.structure[k] || '';});
      $('ev-research').value=p.research; $('ev-merc').value=p.merc;
      state.evHint=p.hint; hintText(); showEval(null);
    };
    $('ev-run').onclick = function(){
      var generation=state.generation, revision=state.revision;
      var plan={research_template:$('ev-research').value,merc_template:$('ev-merc').value};
      ['alignment','faction','bloodline','prestige'].forEach(function(k){plan[k]=$('ev-'+k).value || null;});
      state.evaluating=true; controls(); showEval({busy: true});
      call({op:'template_evaluate',revision:revision,goal:$('gl-goal').value,at:Number($('gl-limit').value),spell:$('gl-spell').value || null,plan:plan}).then(function(r){
        if (generation!==state.generation || revision!==state.revision) { showEval({stale: true}); return; }
        var e=r.evaluation;
        if (!e || !e.validated) throw new Error(L('方案未完整执行，未生成评分', 'The plan was not fully executed, so no score was produced'));
        showEval({e: e});
      }).catch(function(e){ showEval(generation!==state.generation ? {stale: true, error: ''} : {error: e.message}); }).finally(function(){state.evaluating=false;controls();});
    };
  }
  // 切换语言：静态文字整句替换，动态生成的部分重画
  function relang() {
    I.apply($('sec-calc'));
    var link = document.querySelector('a[href="#calc"]'); if (link) { if (link._zh == null) link._zh = link.textContent; link.textContent = I.en() ? 'Build helper' : link._zh; }
    $('bx-lang').querySelectorAll('button').forEach(function (b) { b.classList.toggle('on', b.dataset.lang === I.lang()); });
    var tgt = $('gl-target'); if (tgt.value === '400万' || tgt.value === '4M') tgt.value = I.en() ? '4M' : '400万';
    fillEval(); goalSpells(); goalMode(state.goalMode); controls();
    if (state.statusFn) $('bt-status').textContent = state.statusFn();
    showEval(state.evView);
    hintText();
    if (state.tlView) renderTimeline(state.tlView);
    var run = state.goalView;
    if (run) {
      run.rows = {}; run.logShown = 0; run.coreKey = null; run.coreShown = null;
      ['gl-rows', 'gl-bars', 'gl-ticker'].forEach(function (id) { $(id).innerHTML = ''; });
      $('gl-f-faction').innerHTML = '<option value="">' + I.t('所有阵营') + '</option>'; $('gl-f-blood').innerHTML = '<option value="">' + I.t('所有血统') + '</option>'; $('gl-f-blood').dataset.keys = '';
      $('gl-f-align').querySelectorAll('button').forEach(function (b) { b.classList.toggle('on', (b.dataset.v || '') === (run.filter.align || '')); });
      buildOrbit(ORBIT_UNITS);
      renderGoal(run);
    }
    if (state.errText) $('bt-error').hidden = false;
  }
  function init() {
    initEvaluation();
    $('bx-lang').addEventListener('click', function (event) { var l = event.target.dataset.lang; if (l) I.set(l); });
    I.onChange(relang);
    relang();
    $('bx-tabs').addEventListener('click', function (event) { var tab = event.target.dataset.tab; if (tab) setTab(tab); });
    $('gl-run').onclick = startGoal;
    $('gl-goal').onchange = controls;
    $('gl-mode').addEventListener('click', function (event) { if (event.target.dataset.mode && !state.goal) goalMode(event.target.dataset.mode); });
    goalMode('reach');
    $('gl-stop').onclick = function () { $('gl-stop').disabled = true; $('gl-stop').textContent = L('正在停止…', 'Stopping…'); call({op: 'goal_stop'}).catch(function () {}); };
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
