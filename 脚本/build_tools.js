/* 程序构筑辅助：只接受后台客户端引擎结果，不在界面另写收益公式。 */
(function () {
  'use strict';
  var $ = function (id) { return document.getElementById(id); };
  var state = {save: null, revision: null, catalog: [], descriptions: {}, generation: 0,
    source: 'save', page: 0, category: '全部', mode: 'search', busy: false, loading: false, loaded: false, queued: null, query: 0};
  var pageSize = 15;
  var categories = ['全部', '建筑产出', '助手', '点击收益', '回魔', '最大魔力', '皇家贸易令', '法术时长', '法术消耗', '阵营币获取', '宝石加成', '离线产出', '其他 / 待核对'];
  function esc(value) { return String(value == null ? '' : value).replace(/[&<>"']/g, function (ch) { return {'&':'&amp;', '<':'&lt;', '>':'&gt;', '"':'&quot;', "'":'&#39;'}[ch]; }); }
  function num(value) {
    if (value == null || !Number.isFinite(value)) return '—';
    if (Math.abs(value) >= 1e9 || (value !== 0 && Math.abs(value) < .001)) return value.toExponential(6).replace('e+', 'e');
    return value.toLocaleString('zh-CN', {maximumFractionDigits: 6});
  }
  function name(item) { return (item.code ? item.code + ' · ' : '') + item.zh + (item.zh !== item.name ? ' · ' + item.name : ''); }
  function api() { return window.pywebview && window.pywebview.api && window.pywebview.api.build_calculate; }
  function call(request) {
    if (!api()) return Promise.reject(new Error('当前程序尚不支持构筑计算，请用源码预览版打开。'));
    return window.pywebview.api.build_calculate(request).then(function (response) {
      if (!response || !response.ok) throw new Error(response && response.error || '没有收到计算结果');
      return response;
    });
  }
  function error(text) { $('bt-error').textContent = text || ''; $('bt-error').hidden = !text; }
  function visible() { return location.hash.split('/')[0] === '#calc'; }
  function controls() {
    $('bt-run').disabled = !state.loaded || state.busy || state.loading || !$('bt-target').value;
    $('bt-refresh').disabled = state.loading || state.busy || !state.save;
    $('bt-live').disabled = state.loading || state.busy;
  }
  function clear() {
    state.revision = null; state.loaded = false; state.catalog = []; state.descriptions = {}; state.query++;
    document.querySelectorAll('#bt-stats [data-stat]').forEach(function (el) { el.textContent = '—'; el.title = ''; });
    $('bt-meta').textContent = '助手数 — · 最大魔力 —';
    $('bt-precision').textContent = '尚未完成当前存档计算'; $('bt-scope').textContent = '';
    $('bt-detail').hidden = true; $('bt-result').innerHTML = '<p class="bt-placeholder">等候当前存档计算完成，先前结果已清除。</p>';
    $('bt-target').innerHTML = ''; renderRows(); controls();
  }
  function receive(save) {
    if (!save || !save.save || !Number.isFinite(save.timestamp)) return;
    if (state.save && state.save.save === save.save && state.save.timestamp === save.timestamp) return;
    state.save = save;
    if (state.source === 'live') return;
    state.generation++; clear();
    $('bt-status').textContent = '已读取新存档 · 打开构筑辅助后计算';
    if (visible()) load();
  }
  function load() {
    if (!state.save || !visible() || state.source !== 'save') return;
    if (state.loading || state.busy) { state.queued = true; return; }
    state.queued = null; state.loading = true;
    var generation = state.generation, save = state.save;
    error(''); $('bt-status').textContent = '正在按当前存档计算…'; controls();
    call({op: 'load', save: save.save, timestamp: save.timestamp / 1000}).then(function (response) {
      if (generation !== state.generation) return;
      applyLoaded(response);
    }).catch(function (e) { if (generation === state.generation) { clear(); error(e.message); $('bt-status').textContent = '当前存档计算失败'; } }).finally(function () {
      state.loading = false; controls();
      if (state.queued || generation !== state.generation) load();
    });
  }
  function applyLoaded(response) {
      var selected = $('bt-target').value;
      state.revision = response.revision; state.catalog = response.catalog; state.descriptions = {}; state.loaded = true;
      state.page = 0;
      document.querySelectorAll('#bt-stats [data-stat]').forEach(function (el) { var value = response.snapshot[el.dataset.stat]; el.textContent = num(value); el.title = String(value); });
      $('bt-meta').textContent = '助手数 ' + num(response.snapshot.assistant_count) + ' · 最大魔力 ' + num(response.snapshot.max_mana) + ' · 当前魔力 ' + num(response.snapshot.mana);
      var labels = {total:'总产出 / 秒', buildings:'建筑产出 / 秒', assistants:'助手收入 / 秒', assistant_count:'助手数量', assistant_click:'助手每次收益', assistant_multiplier:'助手效率', mana_per_second:'回魔 / 秒', mana:'当前魔力', max_mana:'最大魔力', coins:'金币'};
      $('bt-precision').textContent = Object.keys(labels).map(function (key) { return labels[key] + '：' + response.snapshot[key]; }).join('\n');
      $('bt-scope').textContent = response.scope + ' 来源：' + response.source + '（' + response.source_hash + '）。方法差分核对基于一份 R44/A1 存档，不代表所有条件均已验证。';
      $('bt-status').textContent = (response.live ? '游戏快照 ' : '存档 ') + new Date(response.timestamp * 1000).toLocaleString('zh-CN', {hour12: false}) + ' · ' + response.source;
      document.querySelector('#sec-calc .bt-action p').textContent = response.live ? '每次试算前重新读取游戏；结果保留在独立副本中' : '每次从上方存档重新开始';
      $('bt-result').innerHTML = '<p class="bt-placeholder">选择建筑、升级或法术，比较动作前后的真实产出。</p>';
      targets(selected); renderRows();
  }
  function callLive(action) {
    var bridge = window.pywebview && window.pywebview.api;
    if (!bridge || !bridge.build_live) return Promise.reject(new Error('当前程序没有实时计算接口，请使用最新源码预览。'));
    return bridge.build_live(action || null).then(function (response) {
      if (!response || !response.ok) throw new Error(response && response.error || '未取得实时计算结果');
      return response;
    });
  }
  function loadLive() {
    if (state.busy || state.loading || !visible()) return;
    state.source = 'live'; state.generation++; clear();
    var generation = state.generation;
    state.loading = true; error(''); controls();
    $('bt-status').textContent = '正在定位并读取游戏计算快照…';
    callLive().then(function (response) {
      if (generation === state.generation && visible()) applyLoaded(response);
    }).catch(function (e) {
      if (generation !== state.generation) return;
      clear(); error(e.message); $('bt-status').textContent = '实时快照未完成，请重新读取';
    }).finally(function () { state.loading = false; controls(); });
  }
  function filtered() {
    var q = $('bt-search').value.trim().toLowerCase();
    return state.catalog.filter(function (item) {
      return item.kind === 'upgrade' && (!q || [item.name, item.zh, item.code].join(' ').toLowerCase().indexOf(q) !== -1) &&
        (state.mode !== 'related' || state.category === '全部' || item.labels.some(function (label) { return label.indexOf(state.category) !== -1; }));
    }).sort(function (a, b) { return Number(!!b.code) - Number(!!a.code) || a.zh.localeCompare(b.zh, 'zh-CN'); });
  }
  function ownEffect(key) {
    var item = state.descriptions[key];
    if (!item) return '…';
    if (!item.effects.length) return '<span class="bt-unowned">汇总逻辑中处理</span>';
    return item.effects.map(function (effect) { return effect.value == null ? '<span title="' + esc(effect.note) + '">需要上下文 / 待核对</span>' : '<span title="' + esc(effect.label + '：' + effect.value + effect.unit) + '">' + num(effect.value) + esc(effect.unit) + '</span>'; }).join('<br>');
  }
  function renderRows(fetch) {
    var items = filtered(), max = Math.max(1, Math.ceil(items.length / pageSize));
    state.page = Math.min(state.page, max - 1);
    var rows = items.slice(state.page * pageSize, (state.page + 1) * pageSize);
    $('bt-count').textContent = items.length + ' 项' + (state.catalog.length ? ' · 含当前阶段尚未解锁的条目' : '');
    $('bt-page').textContent = (state.page + 1) + ' / ' + max;
    $('bt-prev').disabled = state.page === 0; $('bt-next').disabled = state.page === max - 1;
    $('bt-rows').innerHTML = rows.length ? rows.map(function (item) {
      return '<tr><td>' + (item.code ? '<span class="bt-code">' + esc(item.code) + '</span>' : '') + esc(item.zh) + '<small>' + esc(item.name) + '</small></td><td>' + esc(item.labels.join(' / ')) + '</td><td>' + ownEffect(item.key) + '</td><td class="' + (item.owned ? 'bt-owned' : 'bt-unowned') + '">' + (item.owned ? '✓ 已拥有' : item.visible === false ? '尚未显示' : '未拥有') + '</td><td><div class="bt-row-actions"><button type="button" data-detail="' + esc(item.key) + '">详情</button><button type="button" data-try="' + esc(item.key) + '">试算</button></div></td></tr>';
    }).join('') : '<tr><td colspan="5">' + (state.loaded ? '没有匹配的条目' : '读取存档后显示') + '</td></tr>';
    var keys = rows.filter(function (item) { return !state.descriptions[item.key]; }).map(function (item) { return item.key; });
    if (fetch === false || !keys.length || !state.revision) return;
    var revision = state.revision, query = ++state.query;
    call({op:'describe', revision:revision, keys:keys}).then(function (response) {
      if (state.revision !== revision || query !== state.query) return;
      response.items.forEach(function (item) { state.descriptions[item.key] = item; });
      renderRows(false);
    }).catch(function (e) { if (state.revision === revision && query === state.query) error(e.message); });
  }
  function detail(key) {
    var item = state.catalog.find(function (row) { return row.key === key; });
    if (!item) return;
    var revision = state.revision;
    call({op:'describe', revision:revision, keys:[key]}).then(function (response) {
      if (revision !== state.revision) return;
      var info = response.items[0]; state.descriptions[key] = info;
      $('bt-detail').innerHTML = '<b>' + esc(name(item)) + '</b><p>' + esc(info.description || '客户端说明暂不可用') + '</p><p>' + esc(info.note) + '</p>' + info.effects.map(function (effect) {
        return '<p><b>' + esc(effect.label) + '</b>：' + (effect.value == null ? esc(effect.note) : esc(String(effect.value) + effect.unit)) + '</p><details><summary>计算依据 · ' + esc(effect.method) + '</summary><pre>' + esc(effect.formula || '方法体暂不可用') + '</pre></details>';
      }).join('') + '<p>这里是当前存档下的自身公式值；适用对象、飞升惩罚和其他加成由客户端汇总。总产出变化请使用即时试算。</p>';
      $('bt-detail').hidden = false; $('bt-detail').scrollIntoView({block:'nearest', behavior:'smooth'});
    }).catch(function (e) { if (revision === state.revision) error(e.message); });
  }
  function targets(selected) {
    var kind = $('bt-kind').value;
    selected = selected || $('bt-target').value;
    var candidates = state.catalog.filter(function (item) { return item.kind === kind && item.action_allowed; });
    if (!candidates.some(function (item) { return item.key === selected; })) {
      var first = candidates.find(function (item) { return kind === 'building' ? item.name === 'Farm' : item.visible && !item.owned; }) || candidates[0];
      selected = first && first.key;
    }
    $('bt-target').innerHTML = state.catalog.filter(function (item) { return item.kind === kind && item.action_allowed; }).sort(function (a,b) { return a.zh.localeCompare(b.zh, 'zh-CN'); }).map(function (item) {
      return '<option value="' + esc(item.key) + '"' + (item.key === selected ? ' selected' : '') + '>' + esc(name(item)) + '</option>';
    }).join('');
    $('bt-quantity-label').hidden = kind !== 'building'; controls();
  }
  function run() {
    var key = $('bt-target').value, item = state.catalog.find(function (row) { return row.key === key; });
    if (!item || !state.loaded || state.loading || state.busy) return;
    var count = Number($('bt-quantity').value);
    if (item.kind === 'building' && (!Number.isInteger(count) || count < 1 || count > 10000)) { error('建筑数量必须是 1～10000 的整数'); return; }
    var revision = state.revision, generation = state.generation, live = state.source === 'live';
    state.busy = true; error(''); controls(); $('bt-result').innerHTML = '<p class="bt-placeholder">正在从原存档执行一次动作…</p>';
    var task = live ? callLive({key:key, count:item.kind === 'building' ? count : 1}).then(function (response) {
      if (generation !== state.generation || !visible()) return null;
      applyLoaded(response); return response.comparison;
    }) : call({op:'compare', revision:revision, key:key, count:count});
    if (live) $('bt-result').innerHTML = '<p class="bt-placeholder">正在重新读取游戏并执行独立试算…</p>';
    task.then(function (result) {
      if (!result || generation !== state.generation || (!live && revision !== state.revision)) return;
      if (!result.success) { $('bt-result').innerHTML = '<h3>' + esc(name(item)) + '</h3><p>' + esc(result.reason) + '</p><p>动作没有执行，不作为收益比较。</p>'; return; }
      var b = result.before, a = result.after, delta = result.production_ratio == null ? null : (result.production_ratio - 1) * 100;
      var purchased = result.action.purchased;
      $('bt-result').innerHTML = '<h3>' + esc(name(item)) + '</h3><div class="bt-delta">' + (delta == null ? '—' : (delta >= 0 ? '+' : '') + num(delta) + '%') + '</div><span>总产出变化</span><dl>' +
        [['动作前 / 秒',num(b.total)],['动作后 / 秒',num(a.total)],['建筑产出 / 秒',num(b.buildings) + ' → ' + num(a.buildings)],['助手收入 / 秒',num(b.assistants) + ' → ' + num(a.assistants)],['回魔 / 秒',num(b.mana_per_second) + ' → ' + num(a.mana_per_second)],['金币变化',num(a.coins - b.coins)],['魔力变化',num(a.mana - b.mana)]].map(function (pair) { return '<dt>' + esc(pair[0]) + '</dt><dd>' + esc(pair[1]) + '</dd>'; }).join('') + '</dl><p>' +
        esc(item.kind === 'building' ? '实际购买 ' + purchased + ' / 请求 ' + result.action.requested + ' 栋；保留客户端资源与购买条件限制。' : item.kind === 'spell' ? '已施放一次；显示施放后的瞬时状态，持续收益和随机事件期望值未预测。' : '已按客户端条件购买这项升级。') +
        '</p><p>' + (live ? '下一次试算会重新读取游戏，当前结果对应上方快照时刻。' : '下一次仍从原存档开始。') + '</p><details><summary>查看精确结果</summary><pre>' + esc(JSON.stringify(result, null, 2)) + '</pre></details>';
    }).catch(function (e) { if (generation === state.generation) { if (live) clear(); error(e.message); $('bt-result').innerHTML = '<p>本次试算未完成，请核对提示后重试。</p>'; } }).finally(function () { state.busy = false; controls(); if (state.queued) load(); });
  }
  function init() {
    $('bt-categories').innerHTML = categories.map(function (category) { return '<button type="button"' + (category === '全部' ? ' class="on"' : '') + ' data-category="' + esc(category) + '">' + esc(category) + '</button>'; }).join('');
    $('bt-mode').addEventListener('click', function (event) { var mode = event.target.dataset.mode; if (!mode) return; state.mode = mode; state.page = 0; $('bt-categories').hidden = mode !== 'related'; $('bt-mode').querySelectorAll('button').forEach(function (button) { button.classList.toggle('on', button.dataset.mode === mode); }); renderRows(); });
    $('bt-categories').addEventListener('click', function (event) { var category = event.target.dataset.category; if (!category) return; state.category = category; state.page = 0; $('bt-categories').querySelectorAll('button').forEach(function (button) { button.classList.toggle('on', button.dataset.category === category); }); renderRows(); });
    var debounce; $('bt-search').addEventListener('input', function () { clearTimeout(debounce); debounce = setTimeout(function () { state.page = 0; renderRows(); }, 180); });
    $('bt-prev').onclick = function () { state.page--; renderRows(); }; $('bt-next').onclick = function () { state.page++; renderRows(); };
    $('bt-rows').addEventListener('click', function (event) { var button = event.target.closest('button'); if (!button) return; if (button.dataset.detail) detail(button.dataset.detail); if (button.dataset.try) { $('bt-kind').value = 'upgrade'; targets(button.dataset.try); $('bt-run').scrollIntoView({block:'center', behavior:'smooth'}); } });
    $('bt-kind').onchange = function () { targets(); }; $('bt-target').onchange = controls;
    $('bt-run').onclick = run;
    $('bt-refresh').onclick = function () { if (!state.loading && !state.busy) { state.source = 'save'; state.generation++; clear(); load(); } };
    $('bt-live').onclick = loadLive;
    window.addEventListener('rgcalculationsave', function (event) { receive(event.detail); });
    function leaveLive() {
      if (state.source !== 'live') return;
      state.generation++; clear();
      $('bt-status').textContent = '已停止读取 · 可重新读取游戏快照，或点「使用存档计算」切回存档';
      var bridge = window.pywebview && window.pywebview.api;
      if (bridge && bridge.close_live) bridge.close_live().catch(function () {});
    }
    window.addEventListener('hashchange', function () { if (!visible()) leaveLive(); else if (state.save && !state.loaded) load(); });
    document.addEventListener('visibilitychange', function () { if (document.hidden) leaveLive(); });
    window.addEventListener('beforeunload', leaveLive);
    window.addEventListener('pywebviewready', function () { if (visible() && state.save && !state.loaded) load(); });
    if (window.rgCalculationSave) receive(window.rgCalculationSave);
    controls();
  }
  if (document.readyState === 'loading') document.addEventListener('DOMContentLoaded', init); else init();
})();
