(function () {
  'use strict';
  var $ = function (id) { return document.getElementById(id); };
  var running = false, stopping = false, generation = 0, timer = null;
  function api() { return window.pywebview && window.pywebview.api; }
  function visible() { return location.hash.split('/')[0] === '#live'; }
  function esc(text) { return String(text).replace(/[&<>"']/g, function (ch) { return {'&':'&amp;', '<':'&lt;', '>':'&gt;', '"':'&quot;', "'":'&#39;'}[ch]; }); }
  function zh(name) { return typeof SAVE_DATA !== 'undefined' && SAVE_DATA.zh[name] || name; }
  function num(value) { return Math.abs(value) >= 1e9 ? value.toExponential(6).replace('e+','e') : value.toLocaleString('zh-CN', {maximumFractionDigits:3}); }
  function showError(message) { $('lv-error').textContent = message || ''; $('lv-error').hidden = !message; }
  function updateButton() { $('lv-toggle').textContent = stopping ? '正在停止…' : running ? '停止读取' : '开始读取'; $('lv-toggle').disabled = stopping; }
  function clearNumbers() {
    ['lv-gold','lv-mana','lv-building-total','lv-active-total'].forEach(function (id) { $(id).textContent = '—'; });
    $('lv-buildings').innerHTML = '<tr><td colspan="2">尚未取得本次连接的数据</td></tr>';
    $('lv-spells').innerHTML = '<tr><td colspan="2">尚未取得本次连接的数据</td></tr>';
    $('lv-precision').textContent = '尚未取得本次连接的数据';
  }
  function draw(data) {
    var active = data.spells.filter(function (spell) { return spell.active; });
    $('lv-gold').textContent = num(data.gold); $('lv-mana').textContent = num(data.mana);
    $('lv-building-total').textContent = num(data.buildings.reduce(function (total, building) { return total + building.quantity; }, 0));
    $('lv-active-total').textContent = active.length;
    $('lv-buildings').innerHTML = data.buildings.filter(function (building) { return building.quantity > 0; }).map(function (building) { return '<tr><td>' + esc(zh(building.name)) + '</td><td>' + num(building.quantity) + '</td></tr>'; }).join('') || '<tr><td colspan="2">当前没有建筑</td></tr>';
    $('lv-spells').innerHTML = active.map(function (spell) { return '<tr><td>' + esc(zh(spell.name)) + '</td><td>' + num(spell.remaining_seconds) + ' 秒</td></tr>'; }).join('') || '<tr><td colspan="2">当前没有已激活法术</td></tr>';
    $('lv-time').textContent = '游戏内存 · ' + new Date(data.observed_at * 1000).toLocaleTimeString('zh-CN', {hour12:false}) + ' · 本次读取 ' + data.read_ms.toFixed(1) + ' ms';
    $('lv-precision').textContent = '金币：' + data.gold + '\n魔力：' + data.mana + '\n客户端校验：' + data.swf_sha256 + '\n' + data.consistency;
    $('lv-status').textContent = '正在读取游戏 · 验证中';
  }
  function poll(token) {
    if (!running || token !== generation || !visible()) return;
    api().read_live().then(function (data) {
      if (!running || token !== generation) return;
      if (!data || !data.ok) throw new Error(data && data.error || '没有收到实时数据');
      draw(data);
      timer = setTimeout(function () { poll(token); }, 200);
    }).catch(function (error) {
      if (token !== generation) return;
      showError(error.message); stop('本次读取已停止，当前数字保留为上一次读数');
    });
  }
  function start() {
    if (running || stopping) return;
    if (!api() || !api().read_live) { showError('当前程序没有实时读取接口，请使用更新后的源码预览。'); return; }
    running = true; generation++; clearNumbers(); showError(''); updateButton();
    $('lv-status').textContent = '正在定位游戏对象…';
    poll(generation);
  }
  function stop(message) {
    running = false; generation++; clearTimeout(timer); timer = null;
    $('lv-status').textContent = message || '已停止读取 · 数字保留为上一次读数';
    stopping = true; updateButton();
    var task = api() && api().close_live ? api().close_live() : Promise.resolve();
    Promise.resolve(task).catch(function () {}).finally(function () { stopping = false; updateButton(); });
  }
  function init() {
    $('lv-toggle').onclick = function () { if (running) stop(); else start(); };
    window.addEventListener('hashchange', function () { if (!visible() && running) stop(); });
    document.addEventListener('visibilitychange', function () { if (document.hidden && running) stop(); });
    window.addEventListener('beforeunload', function () { if (running) stop(); });
    updateButton();
  }
  if (document.readyState === 'loading') document.addEventListener('DOMContentLoaded', init); else init();
})();
