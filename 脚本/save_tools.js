/* 网页「存档」栏：只读存档查看、法术预报、遗物预测。
 * 解码、随机数和遗物条件用的是 RG-tools 原来的库（SaveHandler、PM_PRNG、util、Artifacts），
 * 预报逻辑照搬 rws/index.js 和 arch/index.js，只把界面换成中文、去掉 jQuery/Vue。
 * 存档字符串存在浏览器 localStorage（rg-saves），只在本机，不会上传。
 */
(function () {
  'use strict';
  var D = SAVE_DATA;
  var KEY = 'rg-saves', MAXKEEP = 10;
  var $ = function (id) { return document.getElementById(id); };

  // ---------- 通用 ----------
  function zh(en) { return en == null ? '' : (D.zh[en] || en); }
  function esc(s) { return String(s).replace(/[&<>"]/g, function (c) { return {'&': '&amp;', '<': '&lt;', '>': '&gt;', '"': '&quot;'}[c]; }); }
  // 中文名；表格里有对应格子的加链接
  function nm(s) { var id = D.links[s]; return id ? '<a class="tl" href="#' + id + '">' + esc(s) + '</a>' : esc(s); }
  function num(v) {
    if (v === undefined || v === null || (typeof v === 'number' && isNaN(v))) return '—';
    if (typeof v === 'boolean') return v ? '✓' : '';
    if (typeof v !== 'number') return esc(v);
    var a = Math.abs(v);
    if (a === Infinity) return '∞';
    if (a >= 1e12) return v.toExponential(3).replace('e+', 'e');
    return v.toLocaleString('zh-CN', {maximumFractionDigits: a < 10 ? 3 : 1});
  }
  function dur(s) {
    if (s === undefined || s === null || isNaN(s)) return '—';
    var neg = s < 0; s = Math.floor(Math.abs(s));
    if (s < 1) return '0秒';
    var d = Math.floor(s / 86400), h = Math.floor(s % 86400 / 3600), m = Math.floor(s % 3600 / 60), x = s % 60;
    var out = (d ? d + '天' : '') + (h ? h + '小时' : '') + (m ? m + '分' : '') + (x && d < 10 ? x + '秒' : '');
    return (neg ? '-' : '') + out;
  }
  function when(t) {
    var d = new Date(t);
    return d.getFullYear() + '-' + ('0' + (d.getMonth() + 1)).slice(-2) + '-' + ('0' + d.getDate()).slice(-2) + ' ' +
      ('0' + d.getHours()).slice(-2) + ':' + ('0' + d.getMinutes()).slice(-2);
  }
  util.render.time = dur;  // artifacts.js 的说明文字里用到
  var ck = function (b) { return b ? '<span class="ok">✓</span>' : '<span class="no">–</span>'; };
  var NUL = '<span class="nul">—</span>';

  // ---------- 存档保存 ----------
  function loadList() {
    try { var a = JSON.parse(localStorage.getItem(KEY) || '[]'); return Array.isArray(a) ? a : []; } catch (e) { return []; }
  }
  function saveList(a) {
    try { localStorage.setItem(KEY, JSON.stringify(a)); return true; } catch (e) { return false; }
  }
  function decode(str) {
    var save = SaveHandler.Decode(str.trim());
    if (save.options && save.options[0]) save.options = save.options[0];
    return save;
  }
  function summary(save) {
    var f = function (id) { var x = util.assoc.faction.find(function (y) { return y.id == id; }); return x && id >= 0 ? zh(x.name) : ''; };
    var fs = [f(save.faction), f(save.prestigeFaction), f(save.elitePrestigeFaction)].filter(Boolean).join('/');
    return 'R' + save.reincarnation + (save.ascension ? ' A' + save.ascension : ' A0') + ' · ' + (fs || '未结盟');
  }

  var cur = null;  // {str, save}

  function refreshHist(list, idx) {
    var sel = $('sv-hist');
    sel.innerHTML = '';
    list.forEach(function (it, k) {
      var o = document.createElement('option');
      o.value = k;
      o.textContent = (it.src === 'game' ? '［游戏最新］' : '') + when(it.saved * 1000) + '　' + it.label;
      if (k === idx) o.selected = true;
      sel.appendChild(o);
    });
    $('sv-histbox').hidden = !list.length;
  }

  // store：false 只显示；true 手动粘贴的，存进记录；'game' 程序从游戏读到的，只保留最新一份
  function use(str, store) {
    var save;
    try { save = decode(str); } catch (e) {
      msg('读不出这个存档：' + e.message + '。请在游戏里重新导出，整段粘贴（以 $00s 开头、$e 结尾）。', true);
      return false;
    }
    cur = {str: str.trim(), save: save};
    var list = loadList(), idx = 0, warn = '';
    if (store) {
      list = list.filter(function (it) { return it.s !== cur.str && !(store === 'game' && it.src === 'game'); });
      list.unshift({s: cur.str, saved: save.lastsave, label: summary(save), src: store === 'game' ? 'game' : 'paste'});
      list = list.slice(0, MAXKEEP);
      if (!saveList(list)) warn = '（浏览器不让保存，这次关掉页面后需要重新粘贴）';
    } else {
      idx = list.findIndex(function (it) { return it.s === cur.str; });
    }
    refreshHist(list, idx);
    msg(warn);
    showWhen();
    cards(save);
    $('sv-main').hidden = false;
    $('sv-in').value = '';
    var y = rgScroller().scrollTop;  // 自动更新时不要跳回页首
    renderView(save);
    forecastPages(save);
    rws.run(save);
    arch.run(save);
    ownedArtifacts(save);
    // 构筑计算复用当前查看的完整存档，历史记录和自动同步走同一条入口。
    window.rgCalculationSave = {save: cur.str, timestamp: store === 'game' ? app.mtime : Number(save.lastsave) * 1000};
    window.dispatchEvent(new CustomEvent('rgcalculationsave', {detail: window.rgCalculationSave}));
    if (store === 'game') rgScroller().scrollTop = y;
    return true;
  }

  // 顶上的提示行：读到存档后收起，出错时显示（红字）
  function msg(text, err) {
    $('sv-msg').textContent = text;
    $('sv-msg').className = err ? 'sv-msg err' : 'sv-msg';
    document.querySelector('#sec-save .sv-head').hidden = !text;
  }
  // 筛选框右边的存档时间；「几秒前」每 10 秒走一次
  function showWhen() {
    if (!cur) { $('sv-when').innerHTML = ''; return; }
    var s = cur.save;
    $('sv-when').innerHTML = '存档时间 <b>' + when(s.lastsave * 1000) + '</b>（' + dur(Date.now() / 1000 - s.lastsave) + '前）· 存档版本 ' + esc(s.saveVersion);
  }
  setInterval(showWhen, 10000);
  // 法术预报、遗物预测两页：没有存档时显示提示
  function forecastPages(s) {
    ['sec-rws', 'sec-arch'].forEach(function (id) {
      var sec = $(id);
      sec.querySelector('.fc-empty').hidden = !!s;
      sec.querySelector('.fc-body').hidden = !s;
    });
  }

  // 遗物页、隐藏奖杯页：告诉它们哪些已经拿到（按英文名对上卡片的 data-en；奖杯的编号和英文名来自编辑器的奖杯行）
  function ownedArtifacts(s) {
    var key = function (x) { return x.replace(/&(#\d+|\w+);/g, '').toLowerCase().replace(/[^a-z0-9]/g, ''); };  // 编辑器里的名字可能带 &apos; 这类转义
    var art = s ? Artifacts.filter(function (a) { return util.save.trophy_owned(s, a.id); }).map(function (a) { return key(a.name); }) : null;
    var tro = null;
    if (s) {
      tro = [];
      D.tabs.forEach(function (t) { t.rows.forEach(function (r) { if (r.w === 'trophy' && r.name && s.trophies[r.id]) tro.push(key(r.name)); }); });
    }
    // 挑战：存档里有这个挑战（编辑器的「已解锁」）就是完成了，u1 是正在进行；研究：有升级记录就已解锁，不要求已购买（u1）
    var ch = null, rs = null;
    if (s) {
      ch = []; rs = [];
      D.tabs.forEach(function (t) { t.rows.forEach(function (r) {
        if (r.w === 'challenge' && r.name && s.upgrades[r.id]) ch.push(key(r.name.replace(/^[^:]*:\s*/, '')));
        if (r.w && r.w.indexOf('research-upgrade-row') === 0) ['s', 'c', 'd', 'e', 'a', 'w', 'f'].forEach(function (k) {
          var id = r[k + '_id'], info = D.research[id] || {};
          if (id && s.upgrades[id]) rs.push(key(info.code || r[k + '_name']));
        });
      }); });
    }
    window.dispatchEvent(new CustomEvent('challengeowned', {detail: ch}));
    window.dispatchEvent(new CustomEvent('researchowned', {detail: rs}));
    // 研究页：重生次数、在用的阵营、各分支研究点数（统计 90–95 是 S C D E A W，154 是 F），已解锁的研究（值是本局有没有买）
    var rsv = null;
    if (s) {
      var rp = {}, own = {};
      [['S', 90], ['C', 91], ['D', 92], ['E', 93], ['A', 94], ['W', 95], ['F', 154]].forEach(function (b) {
        var x = s.stats[b[1]] || {};
        rp[b[0]] = Math.round((x.stats || 0) + (x.statsReset || 0) + (x.statsRei || 0));
      });
      Object.keys(D.research).forEach(function (id) { var u = s.upgrades[id]; if (u) own[D.research[id].code] = !!u.u1; });
      rsv = {r: s.reincarnation, fac: [s.faction, s.prestigeFaction, s.elitePrestigeFaction], rp: rp, own: own};
    }
    window.dispatchEvent(new CustomEvent('researchsave', {detail: rsv}));
    window.dispatchEvent(new CustomEvent('artowned', {detail: art}));
    window.dispatchEvent(new CustomEvent('trophyowned', {detail: tro}));
    window.dispatchEvent(new CustomEvent('spellsave', {detail: s ? spellSave(s, tro) : null}));
    guideUnlocked(s);
  }

  // 法术页：每个法术的施放次数、生效时间、已解锁 / 已购买的阶层（升级 400000 + 法术编号 × 100 + 阶层 − 1，
  // 有记录就是永久解锁了，u1 是本次重生买了），龙族解锁四段（604–607），奥术光辉（123200–123204）、分阶自动施法（200）
  function spellSave(s, tro) {
    var st = function (i) { return s.stats[i] || {}; }, sp = {}, evil = 0, set = {};
    (tro || []).forEach(function (k) { set[k] = true; });
    util.assoc.spells.forEach(function (x) {
      var p = (s.spells || {})[x.id];
      if (!p) return;
      var tiers = {};
      for (var t = 2; t <= 5; t++) {
        var u = s.upgrades[400000 + x.id * 100 + t - 1];
        tiers[t] = u ? (u.u1 ? 'own' : 'unl') : '';
      }
      if ([1, 8, 15, 11, 4].indexOf(x.id) >= 0) evil += p.active0 + p.active1;  // 邪恶法术：嗜血狂热和四个邪恶阵营法术
      sp[x.id] = {c: p.c, r: p.r, e: p.e, a0: p.active0, a1: p.active1, a2: p.active2, on: p.t >= 0, act: p.activeTiers || 0,
        avail: x.id === 18 || !!util.save.hasSpell(s, x.id), tiers: tiers, has: true};  // 征税谁都能用（库里的 hasSpell 漏了）
    });
    var clicks = st(4), mana = st(133), era = st(1), tc = (s.spells || {})[18] || {};
    return {asc: s.ascension || 0, r: s.reincarnation, sp: sp, tro: set,
      stages: [604, 605, 606, 607].map(function (id) { return !!s.upgrades[id]; }),
      ab: [123200, 123201, 123202, 123203, 123204].filter(function (id) { return s.trophies[id]; }).length,
      ta: !!s.trophies[200],
      cur: {reinc: s.reincarnation, clicksR: (clicks.stats || 0) + (clicks.statsReset || 0), evilTime: evil, gems: s.gems,
        eraTime: era.stats, maxMana: mana.stats, tcEra: tc.c}};
  }

  // 攻略进度：传递类别、中文名和链接目标，不把同名升级与奖杯混为一项。
  function guideUnlocked(s) {
    var out = [], targets = D.guide_targets || {};
    function add(kind, name, target) {
      if (name) out.push(kind + ':' + String(name).replace(/\s+/g, '').toLowerCase());
      if (target) out.push(kind + '@' + target);
    }
    function named(kind, name) {
      var value = zh(name), byName = (targets.names || {})[kind] || {};
      add(kind, value, byName[value]);
    }
    if (s) {
      Object.keys(s.upgrades).forEach(function(id){
        if (!s.upgrades[id]) return;
        add('up', D.uname[id], (targets.up || {})[id]);
        var info = D.research[id];
        if (info) add('rs', info.code, (targets.rs || {})[id]);
      });
      Object.keys(s.trophies).forEach(function(id){
        if (!s.trophies[id]) return;
        ['tr', 'ht'].forEach(function(kind){ add(kind, D.tname[id], (targets[kind] || {})[id]); });
        if ((targets.spt || {})[id]) add('up', D.tname[id], targets.spt[id]);  // 法术奖杯 = 解锁了法术升级
      });
      var facOn = {};  // 已解锁的阵营（英文名）
      util.assoc.faction.forEach(function(f){
        if (f.id < 0) return;
        var stat = (s.stats || [])[f.timestat], seen = stat && (stat.stats > 0 || stat.statsReset > 0 || stat.statsRei > 0);
        if ([s.faction, s.prestigeFaction, s.elitePrestigeFaction].indexOf(f.id) >= 0 || seen) { named('fa', f.name); facOn[f.name] = 1; }
      });
      D.tabs.forEach(function(t){ t.rows.forEach(function(r){
        if (r.w !== 'faction-upgrade') return;
        var fname = r.name === 'Dwarf' ? 'Dwarven' : r.name;  // 编辑器里矮人行叫 Dwarf
        if (Object.keys(r).some(function(k){ return /_id$/.test(k) && s.upgrades[r[k]]; })) { named('fa', r.name); facOn[fname] = 1; }
        // 阵营升级 1–9 只花金币，阵营解锁了就算解锁；10–12（联盟）、遗产、高级遗产另有条件，仍按存档记录
        if (facOn[fname]) ['b1','b2','b3','s1','s2','s3','g1','g2','g3'].forEach(function(k){
          var id = r[k + '_id'];
          if (id != null) add('up', D.uname[id], (targets.up || {})[id]);
        });
      }); });
      util.assoc.spells.forEach(function(spell){
        var p = (s.spells || {})[spell.id];
        var seen = p && (p.c > 0 || p.r > 0 || p.e > 0 || p.active0 > 0 || p.active1 > 0 || p.active2 > 0);
        if (seen || util.save.hasSpell(s, spell.id)) named('sp', spell.name);
      });
      Object.keys(util.save.building_names).forEach(function(id){
        var b = (s.buildings || {})[id];
        if (b && ['q','t','r','m','e'].some(function(k){ return b[k] > 0; })) named('bd', util.save.building_names[id]);
      });
    }
    window.dispatchEvent(new CustomEvent('guideunlocked', {detail: s ? out : null}));
  }

  // 顶部数字卡片
  function cards(s) {
    var f = function (id) { var x = util.assoc.faction.find(function (y) { return y.id == id; }); return x && id >= 0 ? zh(x.name) : ''; };
    var fac = [f(s.faction), f(s.prestigeFaction), f(s.elitePrestigeFaction)].filter(Boolean).join(' / ') || '未结盟';
    var items = [['重生', 'R' + s.reincarnation], ['飞升', 'A' + (s.ascension || 0)], ['阵营', fac],
      ['宝石', s.gems >= 1e6 ? s.gems.toExponential(2).replace('e+', 'e') : num(s.gems)], ['考古', num(s.excavations)]];
    $('sv-cards').innerHTML = items.map(function (x) { return '<div><small>' + x[0] + '</small><b title="' + esc(x[1]) + '">' + esc(x[1]) + '</b></div>'; }).join('');
  }

  // ---------- 存档查看（按编辑器的分页，只读） ----------
  var H5 = ['本纪元', '之前的纪元', '本次重生', '之前的重生', '总计'];
  var HEAD = {
    'fivestat-header': H5, 'onestat-header': ['数值'], 'factioncoin-header': ['阵营币', '皇家贸易令'],
    'unique-header': ['本次重生', '之前的重生', '总计'], 'upgrade-header': ['已拥有'], 'trophy-header': ['已获得'],
    'event-trophy-header': ['已获得', '今年完成', '累计完成'], 'challenge-header': ['已解锁', '已开启'],
    'legacy-header': ['铜', '银', '金', '钻石'],
    'faction-upgrade-header': ['1', '2', '3', '4', '5', '6', '7', '8', '9', '遗产', '10', '11', '12', '高级遗产'],
    'research-upgrades-header': ['法术学', '工艺学', '神学', '经济学', '炼金学', '战争学'],
    'research-upgrades-header2': ['禁忌学']
  };
  var BL = {0: 194, 1: 164, 2: 39, 3: 212, 4: 396, 5: 103, 6: 380, 7: 136, 8: 183, 9: 150, 10: 120, 12: 598, 13: 939, 14: 940, 15: 953};
  var SETS = {0: 832, 1: 830, 2: 824, 3: 833, 4: 838, 5: 825, 6: 837, 7: 828, 8: 831, 9: 829, 10: 827, 11: 834, 12: 826};

  function ev(expr, save, i) {
    if (expr === 'upgradesArray') return save.upgrades;
    if (expr === 'trophiesArray') return save.trophies;
    try { return new Function('save', 'i', 'return ' + expr)(save, i); } catch (e) { return undefined; }
  }
  function assocName(type, id) {
    var x = (util.assoc[type] || []).find(function (y) { return y.id == id; });
    return x ? zh(x.name) : (id == -1 || id == null ? '无' : String(id));
  }
  function uname(id) { return D.uname[id] || String(id); }
  function stat5(st, r, f, max) {
    if (!st) return [NUL];
    var a = st.stats, b = st.statsReset, c = st.statsRei;
    var v = [a, b, max ? Math.max(a, b) : a + b, c, max ? Math.max(a, b, c) : a + b + c];
    var hide = [r['hide-ab'], r['hide-prev-abs'], r['hide-rei'], r['hide-prev-reis'], r['hide-total']];
    return v.map(function (x, k) { return hide[k] ? NUL : f(x); });
  }
  function highest(ids, owned) {
    var n = 0, top = -1;
    ids.forEach(function (id) { if (owned[id]) { n++; top = id; } });
    return {n: n, top: top};
  }
  function research(id, up, code) {
    var info = D.research[id] || {}, u = up[id];
    var st = u && u.u1 ? 'own' : u ? 'unl' : 'lock';
    return '<span class="rs-' + st + '" title="' + (st === 'own' ? '已购买' : st === 'unl' ? '已解锁，未购买' : '未解锁') + '">' +
      esc(info.code || code) + ' ' + (info.zh ? nm(info.zh) : '') + '</span>';
  }

  // 每种行：返回 [名称 HTML, [各格 HTML]]，返回 null 表示不显示
  var W = {
    'stat': function (r, s, i) { return stat5(ev(r.stat, s, i), r, num); },
    'stat-time': function (r, s, i) { return stat5(ev(r.stat, s, i), r, dur); },
    'stat-max': function (r, s, i) { return stat5(ev(r.stat, s, i), r, num, true); },
    'stat-max-time': function (r, s, i) { return stat5(ev(r.stat, s, i), r, dur, true); },
    'field': function (r, s, i) { return [num(ev(r.field, s, i))]; },
    'field-time': function (r, s, i) {
      if (r.field === 'offlinetime') return [dur(Date.now() / 1000 - s.lastsave)];
      return [dur(ev(r.field, s, i))];
    },
    'field-dropdown': function (r, s, i) {
      var v = ev(r.field, s, i);
      return [r.type === 'upgradeIDs' ? (v > 0 ? nm(uname(v)) : '无') : nm(assocName(r.type, v))];
    },
    'bloodline-dropdown': function (r, s) { var f = ev(r.field, s); return [f == -1 || BL[f] == null ? '无' : nm(uname(BL[f]))]; },
    'artifactSet-dropdown': function (r, s) { var f = ev(r.field, s); return [f == -1 || SETS[f] == null ? '无' : nm(uname(SETS[f]))]; },
    'neutraltime': function (r, s) {
      var t = ev(r.total, s), g = ev(r.good, s), e = ev(r.evil, s);
      var a = t.stats - g.stats - e.stats, b = t.statsReset - g.statsReset - e.statsReset, c = t.statsRei - g.statsRei - e.statsRei;
      return [a, b, a + b, c, a + b + c].map(dur);
    },
    'building': function (r, s) { var b = ev(r.building, s); return b ? [b.q, b.t - b.q, b.t, b.r, b.r + b.t].map(num) : [NUL]; },
    'building-max': function (r, s) { var b = ev(r.building, s); return b ? [num(b.q), NUL, num(b.m), num(b.e), num(Math.max(b.m, b.e))] : [NUL]; },
    'unique-max': function (r, s) {
      var b = ev(r.building, s); if (!b) return [NUL];
      var m = b['um' + r.id], e = b['ue' + r.id];
      return [num(m), num(e), num(Math.max(m || 0, e || 0))];
    },
    'spell': function (r, s, i) { var p = ev(r.spell, s, i); return p ? [p.c, p.r, p.c + p.r, p.e, p.c + p.r + p.e].map(num) : [NUL]; },
    'spell-rng': function (r, s, i) { var p = ev(r.spell, s, i); return [p ? num(p.s) : NUL]; },
    'spell-time': function (r, s, i) {
      var p = ev(r.spell, s, i);
      return p ? [p.active0, p.active1, p.active0 + p.active1, p.active2, p.active0 + p.active1 + p.active2].map(dur) : [NUL];
    },
    'spell-duration': function (r, s, i) { var p = ev(r.spell, s, i); return [p && p.t >= 0 ? dur(p.t) : NUL]; },
    'spell-autocasting': function (r, s, i) {
      var p = ev(r.spell, s, i); if (!p) return [NUL];
      var o = function (n) { return n >= 0 ? n : '–'; };
      return [ck(p.a) + '　金 ' + o(p.n2) + ' / 银 ' + o(p.n) + ' / 铜 ' + o(p.n3)];
    },
    'spell-tiers-dropdown': function (r, s) {
      var ids = D.ids[r.filter] || [], h = highest(ids, s.upgrades);
      return [h.top < 0 ? '无' : esc(uname(h.top)) + '（' + h.n + '/' + ids.length + '）'];
    },
    'trophy-dropdown': function (r, s) {
      var ids = D.ids[r.filter] || [], h = highest(ids, s.trophies);
      return [h.top < 0 ? '无' : nm(D.tname[h.top] || String(h.top)) + '（' + h.n + '/' + ids.length + '）'];
    },
    'upgrade': function (r, s) { return [ck(s.upgrades[r.id])]; },
    'faction-upgrade': function (r, s) {
      var up = s.upgrades, out = [];
      ['b1', 'b2', 'b3', 's1', 's2', 's3', 'g1', 'g2', 'g3', 'nh', 'd1', 'd2', 'd3', 'ah'].forEach(function (k) {
        var id = r[k + '_id'];
        if (!id) { out.push(''); return; }
        var has = k === 'ah' ? up[id] && up[id].u1 : up[id];
        out.push('<span title="' + esc(uname(id)) + '">' + ck(has) + '</span>');
      });
      return out;
    },
    'challenge': function (r, s) { var u = s.upgrades[r.id]; return [ck(u), ck(u && u.u1)]; },
    'research-upgrade-row': function (r, s) {
      return ['s', 'c', 'd', 'e', 'a', 'w'].map(function (k) { return research(r[k + '_id'], s.upgrades, r[k + '_name']); });
    },
    'research-upgrade-row2': function (r, s) { return [research(r.f_id, s.upgrades, r.f_name)]; },
    'lineage-perk': function (r, s) { var u = s.upgrades[r.id]; return [ck(u) + ' ' + ck(u && u.u1)]; },
    'legacy': function (r, s) {
      var b = +r.id, up = s.upgrades;
      return [b, b + 1, b + 2, r.name === 'Undead' ? 1126 : b + 3].map(function (id) { return '<span title="' + esc(uname(id)) + '">' + ck(up[id]) + '</span>'; });
    },
    'trophy': function (r, s) { return [ck(s.trophies[r.id])]; },
    'event-trophy': function (r, s) { var t = s.trophies[r.id]; return [ck(t), ck(t && t.u1), num(t ? t.u2 : 0)]; },
    'option': function (r, s) { return [ck(s.options && s.options[r.id])]; },
    'factioncoin': function (r, s, i) { var f = ev(r.fc, s, i); return f ? [num(f.factionCoins), num(f.royalExchanges)] : [NUL]; }
  };
  W['trophy-comp-dropdown'] = W['trophy-dropdown'];

  function expand(r) {
    if (!r['v-for']) return [null];
    var m = /i in (\w+)(?: \| filterDef "(\w+)")?/.exec(r['v-for']);
    var list = {spells: util.assoc.spells, spellsRNG: util.assoc.spellsRNG, factions: util.assoc.faction}[m[1]] || [];
    return m[2] ? list.filter(function (x) { return x[m[2]] !== undefined; }) : list;
  }
  function rowName(r, i) {
    if (r.w === 'neutraltime') return '中立立场时间';
    if (r.name && typeof r.name === 'object') return (D.zh['@' + r.name.suffix] || '{}').replace('{}', zh(i.name));
    return zh(r.name);
  }

  // 不显示的分页 / 小节（数据仍留着给资料页的已获得标记用）：
  // 自动施法暂时下线；挑战、隐藏奖杯、遗物已在各自的资料页里标出；阵营升级、阵营币用户不需要
  var HIDE_TAB = {autocasting: 1, challenges: 1, 'faction-upgrades': 1, fc: 1};
  var HIDE_SEC = {'Secret Trophies': 1, 'Quest Artifacts': 1, 'Lore Artifacts': 1};
  // 魔法相关的三个分页搬到了法术页（#sp）底下
  var SPELL_TAB = {magic: 1, magictime: 1, 'magic-tiers': 1};
  // 两处查看：我的存档（除去上面两类）、法术页（只放魔法分页）
  var VIEWS = [{tabs: 'sv-vtabs', body: 'sv-vbody', filter: 'sv-filter', first: 'general', ok: function (id) { return !HIDE_TAB[id] && !SPELL_TAB[id]; }},
               {tabs: 'sp-vtabs', body: 'sp-vbody', filter: 'sp-filter', first: 'magic', ok: function (id) { return !!SPELL_TAB[id]; }}];

  function renderView(save) {
    VIEWS.forEach(function (v) { if ($(v.tabs)) renderOne(save, v); });
    if ($('sp-rawbox')) { $('sp-rawbox').hidden = false; $('sp-rawempty').hidden = true; }
  }
  function renderOne(save, v) {
    var tabs = $(v.tabs), body = $(v.body);
    var keep = tabs.querySelector('.on');
    keep = keep ? keep.dataset.t : v.first;
    tabs.innerHTML = ''; body.innerHTML = '';
    if (!v.ok(keep)) keep = v.first;
    D.tabs.forEach(function (t) {
      if (!v.ok(t.id)) return;
      var b = document.createElement('button');
      b.textContent = zh(t.name); b.dataset.t = t.id;
      if (t.id === keep) b.className = 'on';
      tabs.appendChild(b);
      var html = [], cols = 1, skip = false;
      t.rows.forEach(function (r) {
        if (r.h) skip = !!HIDE_SEC[r.h];
        if (skip) return;
        if (r.h) { html.push('<tr class="sub"><th colspan="9">' + esc(zh(r.h)) + '</th></tr>'); return; }
        if (r.w === 'mercenaryselection-header') { html.push('<tr class="sub"><th colspan="9">佣兵选择</th></tr>'); return; }
        if (HEAD[r.w]) {
          cols = HEAD[r.w].length;
          var first = r.w.indexOf('research') === 0 ? '' : r.w === 'legacy-header' || r.w === 'faction-upgrade-header' ? '阵营' : '项目';
          html.push('<tr class="hd">' + (r.w.indexOf('research') === 0 ? '' : '<th>' + first + '</th>') +
            HEAD[r.w].map(function (h) { return '<th>' + h + '</th>'; }).join('') + '</tr>');
          return;
        }
        if (!W[r.w]) return;
        if (r.show) { try { if (!new Function('save', 'return ' + r.show)(save)) return; } catch (e) { /* 照常显示 */ } }
        expand(r).forEach(function (i) {
          var cells;
          try { cells = W[r.w](r, save, i); } catch (e) { cells = [NUL]; }
          if (!cells) return;
          var tds = cells.map(function (c, k) {
            var span = k === cells.length - 1 && cells.length < cols ? ' colspan="' + (cols - k) + '"' : '';
            return '<td' + span + '>' + c + '</td>';
          }).join('');
          if (r.w.indexOf('research-upgrade-row') === 0) { html.push('<tr class="rs">' + tds + '</tr>'); return; }
          var name = rowName(r, i);
          html.push('<tr data-k="' + esc(name.toLowerCase()) + '"><th>' + nm(name) + '</th>' + tds + '</tr>');
        });
      });
      var sec = document.createElement('div');
      sec.className = 'sv-vt'; sec.dataset.t = t.id; sec.hidden = t.id !== keep;
      sec.innerHTML = '<h3>' + esc(zh(t.name)) + '</h3><table class="sv-tb">' + html.join('') + '</table>';
      body.appendChild(sec);
    });
    filterView(v);
  }
  function filterView(v) {
    var k = $(v.filter).value.trim().toLowerCase();
    var on = $(v.tabs).querySelector('.on');
    document.querySelectorAll('#' + v.body + ' .sv-vt').forEach(function (sec) {
      var any = false;
      sec.querySelectorAll('tr[data-k]').forEach(function (tr) {
        var hit = !k || tr.dataset.k.indexOf(k) >= 0;
        tr.hidden = !hit; if (hit) any = true;
      });
      sec.querySelectorAll('tr.sub, tr.hd, tr.rs').forEach(function (tr) { tr.hidden = !!k; });
      sec.hidden = k ? !any : !(on && on.dataset.t === sec.dataset.t);
      sec.querySelector('h3').hidden = !k;
    });
    $(v.tabs).classList.toggle('dim', !!k);
  }

  // ---------- 法术预报（Realm Weather Service），侧栏「工具 → 法术预报」#rws ----------
  var rws = (function () {
    var BN = util.save.building_names, BIDS = util.save.building_ids;
    var BREATH = ['红色', '绿色', '蓝色', '白色', '黑色', '黄色'];
    var MAEL = ['产生的法力', '已解锁的奖杯数量', '找到的阵营币', '助手数量'];
    var WISH = ['所有建筑产量', '助手', '法力上限', '奖杯数和离线加成', '阵营币获取概率', '法力恢复速度', '所有法术持续时间'];
    var CATA = ['Fairy Chanting', 'Moon Blessing', "God's Hand", "Goblin's Greed", 'Night Time', 'Hellfire Blast', 'Gem Grinder', 'Holy Light', 'Blood Frenzy'];
    var CATA_ID = [null, null, 'Holy Light', 'Blood Frenzy', 'Gem Grinder', null, null, null, 'Fairy Chanting', 'Moon Blessing', "God's Hand", "Goblin's Greed", 'Night Time', 'Hellfire Blast'];
    var DJC4 = [[88, 88, 888], [88, 888, 88], [88, 88, 888], [88, 888, 88], [888, 88, 88], [888, 88, 88]];
    var LINEAGE = ['Fairy', 'Elven', 'Angel', 'Goblin', 'Undead', 'Demon', 'Titan', 'Druid', 'Faceless', 'Dwarven', 'Drow', null, 'Dragon', 'Archon', 'Djinn', 'Makers'];
    var hl = {};  // 高亮的建筑 id
    var F = {};   // 各预报：{name, seed, note, gen, items} 或 {name, why}（不能预报）
    var owned = [], avail = [];
    var bname = function (id) { return zh(BN[id]); };
    var bspan = function (id) { return '<span class="bd' + (hl[id] ? ' hl' : '') + '" data-b="' + id + '">' + esc(bname(id)) + '</span>'; };
    var has = function (s, n) { return util.save.hasSpell(s, n); };

    function add(key, name, rng, note, gen) {
      F[key] = {name: name, seed: rng.state, note: note, gen: gen, items: []};
      more(key, 10);
    }
    function no(key, name, why) { F[key] = {name: name, why: why}; }
    function more(key, n) {
      var f = F[key];
      for (var k = 0; k < n; k++) f.items.push(f.gen());
    }

    function run(s) {
      F = {}; owned = []; avail = [];
      BIDS.forEach(function (i) {
        if (s.buildings[i] && s.buildings[i].q > 0) owned.push(i);
        if (util.save.building_alignment[i] == 0 || util.save.building_alignment[i] == s.alignment) avail.push(i);
      });

      // 雷击
      if (!has(s, 'Lightning Strike')) no('ls', '雷击', '没有雷击');
      else if (s.alignment != 3 && !util.save.upgrade_owned(s, 688)) no('ls', '雷击', '不是中立立场');
      else if (owned.length < 2) no('ls', '雷击', owned.length ? '只有' + bname(owned[0]) + '，每次都打它' : '没有建筑');
      else (function () {
        var rng = new PM_PRNG(s.spells[13].s), rod = util.save.upgrade_owned(s, 143018);
        add('ls', '雷击', rng, rod ? '有避雷针，不会打到传说圣殿。' : '', function () {
          var len = owned.length;
          if (rod && owned[owned.length - 1] == 10) len -= 1;
          return bspan(owned[rng.strikeTier(len)]);
        });
      })();

      // 奇迹（研究 D400）
      var mir = s.upgrades[143719];
      if (!mir || !mir.u1) no('mir', '奇迹', '还没有奇迹（研究 D400）');
      else if (owned.length < 2) no('mir', '奇迹', owned.length ? '只有' + bname(owned[0]) : '没有建筑');
      else (function () {
        var rng = new PM_PRNG(mir.s);
        add('mir', '奇迹', rng, '', function () { return bspan(owned[rng.strikeTier(owned.length)]); });
      })();

      // 龙息
      if (!has(s, "Dragon's Breath")) no('db', '龙息', '没有龙息');
      else (function () {
        var rng = new PM_PRNG(s.spells[21].s), tier = s.spells[21].activeTiers + 1, asc = s.ascension > 0 ? s.ascension : 1;
        if (util.save.upgrade_owned(s, 796)) tier *= 2;  // 龙族能力 4
        add('db', '龙息', rng, '每次 ' + tier + ' 道龙息。', function () {
          var hits = [0, 0, 0, 0, 0, 0], el = BREATH.slice();
          if (asc == 1) { hits.pop(); el.pop(); }
          for (var c = 0; c < tier; c++) {
            var hit = el.splice(rng.nextIntRange(0, el.length - 1), 1)[0];
            if (!el.length) el = BREATH.slice();
            hits[BREATH.indexOf(hit)]++;
          }
          return hits.map(function (h, c) { return h ? '<span class="br br' + c + '"><i></i>' + BREATH[c] + (h > 1 ? ' ×' + h : '') + '</span>' : ''; }).join('');
        });
      })();

      // 混沌涡流
      if (!has(s, 'Maelstrom')) no('ms', '混沌涡流', '没有混沌涡流');
      else (function () {
        var rng = new PM_PRNG(s.spells[27].s), n = 2;
        for (var k = 0; k < 4; k++) n += util.save.upgrade_owned(s, 402701 + k) ? 1 : 0;
        add('ms', '混沌涡流', rng, '每次 ' + n + ' 个目标。每次持续时间结束就用最高阶重新施放、中间不施放其他阶层，预报才准。', function () {
          var el = avail.slice(), t = [], out = [];
          for (var c = 0; c < n; c++) { var loc = rng.nextIntRange(0, el.length - 1); t.push(el[loc]); el.splice(loc, 1); }
          for (c = 0; c < n; c++) out.push(bspan(t[c]) + '：' + MAEL[rng.nextIntRange(0, MAEL.length - 1)]);
          return out.join('<br>');
        });
      })();

      // 有限祈愿
      if (!has(s, 'Limited Wish')) no('lw', '有限祈愿', '没有有限祈愿');
      else (function () {
        var rng = new PM_PRNG(s.spells[29].s), cnt = s.spells[29].c, base = 1, el = [];
        var lt = Math.pow(Math.log(1 + s.spells[29].active0), 1.75);  // 本纪元有限祈愿生效时间，用当前值估算
        // 恒常混沌（Persistent Entropy）：4.3 起起步 500 次（原 150 次，社区工具按起步数 −1 计）
        if (util.save.upgrade_owned(s, 975)) { cnt += 499; base = 499; }
        if (util.save.upgrade_owned(s, 962)) cnt += s.spells[31].c;      // 巨灵能力 1
        cnt = Math.floor(cnt);
        if (!util.save.upgrade_owned(s, 994)) el.push(WISH[0]);           // Full Wish
        if (s.alignment == 1) el.push(WISH[1], WISH[6], WISH[5]);
        else if (s.alignment == 2) el.push(WISH[3], WISH[5], WISH[4]);
        else if (s.alignment == 3) el.push(WISH[2], WISH[6], WISH[4]);
        add('lw', '有限祈愿', rng, '加成按现在的生效时间估算，施放时会更高；巨灵能力 3 也会影响强度，只是近似值。', function () {
          var type = el[rng.nextIntRange(0, el.length - 1)];
          var v = Math.floor(rng.nextDoubleRange(base, cnt + 1));
          // 4.3 公式：产能 (50 + 5·ln(1+x)^1.75·y^0.25)%，其他 (250 + 2.5·ln(1+x)^1.75·y^0.5)%
          var pct = type === WISH[0] ? 50 + 5 * lt * Math.pow(v, 0.25) : 250 + 2.5 * lt * Math.pow(v, 0.5);
          var txt = '<b>' + type + '</b> 约 +' + pct.toPrecision(4) + '%<br><span class="sv-hint">随机值 ' + v.toLocaleString() + ' / ' + cnt.toLocaleString() + '</span>';
          cnt++;
          return txt;
        });
      })();

      // 催化
      if (!has(s, 'Catalyst')) no('cata', '催化', '没有催化');
      else (function () {
        var rng = new PM_PRNG(s.spells[31].s);
        var el = CATA.filter(function (sp) { return !has(s, sp); });
        var now = (s.catalystTargets || []).map(function (t) { return zh(CATA_ID[t.targetspell]); }).filter(Boolean);
        add('cata', '催化', rng, now.length ? '当前法术：' + now.join('，') + '。' : '', function () {
          var tmp = el.slice(), out = [];
          for (var j = 0; j < 2 && tmp.length; j++) out.push(nm(zh(tmp.splice(rng.nextIntRange(0, tmp.length - 1), 1)[0])));
          return out.join('，');
        });
      })();

      // 巨灵挑战 4：尘世之欲
      if (!util.save.challenge_active(s, 992)) no('djc4', zh('Worldly Desires'), '没有在进行巨灵挑战 4');
      else (function () {
        var rng = new PM_PRNG(s.upgrades[992].s);
        add('djc4', zh('Worldly Desires'), rng, '', function () {
          var h = DJC4[rng.nextIntRange(0, DJC4.length - 1)];
          return '助手 +' + h[0] + '%，宝石产量加成 +' + h[1] + '%，法力上限 +' + h[2] + '%';
        });
      })();

      // 佣兵挑战 2：混沌疯狂
      if (!util.save.challenge_active(s, 1064)) no('mcc2', zh('Chaos Madness'), '没有在进行佣兵挑战 2');
      else (function () {
        var rng = new PM_PRNG(s.spells[32].s), ok = [];
        [0, 1, 2, 3, 5, 4, 6, 8, 7, 9, 10, 12, 13, 14, 15].forEach(function (i) {
          if (s.lineageFaction == i || s.combinationBL == i) return;
          ok.push(zh(LINEAGE[i] + ' Lineage'));
        });
        add('mcc2', zh('Chaos Madness'), rng, '', function () { return nm(ok[rng.nextIntRange(0, ok.length - 1)]); });
      })();

      draw();
    }

    function card(k) {
      var f = F[k];
      return '<div class="sv-card fc"><div class="fc-h"><b>' + esc(f.name) + '</b><span class="fc-seed" title="随机数状态">随机数 ' + f.seed + '</span></div>' +
        (f.note ? '<p class="fc-note">' + esc(f.note) + '</p>' : '') +
        '<ol class="fc-list">' + f.items.map(function (x, i) {
          return '<li' + (i ? '' : ' class="next"') + '><i>' + (i + 1) + '</i><div>' + x + '</div>' + (i ? '' : '<em>下一次</em>') + '</li>';
        }).join('') + '</ol><button class="sv-lite fc-more" data-more="' + k + '">再预报 10 次</button></div>';
    }
    function draw() {
      var on = Object.keys(F).filter(function (k) { return F[k].gen; }), off = Object.keys(F).filter(function (k) { return !F[k].gen; });
      $('sv-rbld').innerHTML = owned.length ? owned.map(bspan).join('') : '<span class="sv-hint">没有建筑</span>';
      $('sv-rgrid').innerHTML = on.length ? on.map(card).join('') : '';
      $('sv-roff').className = off.length ? 'fc-off' : '';
      $('sv-roff').innerHTML = off.length ? '<div class="fc-off-h">' + (on.length ? '暂时不能预报' : '现在没有能预报的法术') + '</div>' +
        off.map(function (k) { return '<p><b>' + esc(F[k].name) + '</b><span>' + esc(F[k].why) + '</span></p>'; }).join('') : '';
      // 预报结果是生成时就拼好的文字，高亮要画完再按 data-b 补上
      $('sec-rws').querySelectorAll('[data-b]').forEach(function (x) { x.classList.toggle('hl', !!hl[x.dataset.b]); });
    }
    document.addEventListener('click', function (e) {
      var t = e.target;
      if (!t.closest || !t.closest('#sec-rws')) return;
      var m = t.closest('[data-more]'), bd = t.closest('[data-b]');
      if (m) { more(m.dataset.more, 10); draw(); }
      else if (bd) { hl[bd.dataset.b] = !hl[bd.dataset.b]; draw(); }
    });
    return {run: run};
  })();

  // ---------- 遗物预测（Lara Crypt），侧栏「工具 → 遗物预测」#arch ----------
  var arch = (function () {
    var save, eligible, unobtain, nonrandom, raw, smalls, chartPts, sel = null;
    function copy(a) {
      return {name: a.name, id: a.id, invertedchance: a.invertedchance, excav: a.excav, fixed: a.fixed, random: a.random, fail: a.fail,
        notry: a.notry, required: a.required, display: a.display, nocache: a.nocache, precheck: a.precheck, reincarnation: a.reincarnation,
        guess: a.guess};
    }
    function an(a) { return nm(zh(a.name)); }

    // raw 里存 {h: 名字 HTML, note: 补充说明, x: 本次拿不到}
    function classify() {
      raw = {owned: 0, eligible: [], nonrandom: [], ineligible: [], unowned: []};
      eligible = []; unobtain = []; nonrandom = [];
      var excav = save.excavations, num0 = util.save.stat(save, 35), ue = [], ui = [];
      Artifacts.forEach(function (a) {
        var fixed = !a.fixed || a.fixed(save), fail = !a.fail || !a.fail(save, num0 + 1);
        var ok = a.precheck ? a.precheck(save) : fixed;
        if (util.save.trophy_owned(save, a.id)) raw.owned++;
        else if (ok && fail) {
          if (a.random) {
            ue.push(a);
            var c = copy(a);
            if (!c.nocache) c.random = c.random(save);
            eligible.push(c);
            var x = !!(a.notry && a.notry(save));
            if (x) unobtain.push(a.id);
            raw.eligible.push({h: an(a), note: excav < a.excav ? '第 ' + a.excav + ' 次起' : '', x: x});
          } else {
            nonrandom.push(copy(a));
            raw.nonrandom.push({h: an(a), note: excav < a.excav ? '第 ' + a.excav + ' 次' : ''});
          }
        } else { raw.ineligible.push({h: an(a)}); ui.push(a); }
      });
      raw.unowned = ue.concat(ui);
    }

    function forecast(limit) {
      var rng = new PM_PRNG(save.artifactRngState), excav = save.excavations;
      var remaining = eligible.length - unobtain.length + nonrandom.length;
      var nr = nonrandom.slice(), un = {}, events = [], n = 0, rawn = 0;
      unobtain.forEach(function (i) { un[i] = true; });
      var canignore = -unobtain.length, vlim = 100 / limit;
      smalls = [];
      eligible.forEach(function (a) { a.finished = false; a.lastreq = null; });
      while (remaining > 0) {
        excav++; n++;
        var ex = [excav, excav - save.excavations];
        for (var k = 0; k < eligible.length; k++) {
          var a = eligible[k];
          if (excav < a.excav || a.finished) continue;
          if (a.fail && a.fail(excav, n)) { a.finished = true; continue; }
          var val = rng.nextDouble();
          if (rawn < limit) { rawn++; if (val < vlim) smalls.push({x: rawn, y: val}); }
          if (un[a.id]) continue;
          var rnd = a.nocache ? a.random(save, excav) : a.random;
          // guess：概率用了存档里没有的数值（arch_fixes.js），不下「获得」结论，只报需要达到的数值
          if (val < rnd && !a.guess) { ex.push(['find', a]); a.finished = true; remaining--; }
          else if (a.required && !a.nocache) {
            var req = a.required(val, save, excav);
            if (req !== Infinity && req >= 0 && (a.lastreq == null || (a.invertedchance ? req > a.lastreq : req < a.lastreq))) {
              a.lastreq = req; ex.push(['improve', req, a]);
            }
          }
        }
        // 和原版一样边删边往后走：同一次考古到点的两个固定遗物，后一个顺延到下一次
        for (k = 0; k < nr.length; k++) {
          if (excav >= nr[k].excav) { ex.push(['find', nr.splice(k, 1)[0]]); remaining--; }
        }
        if (ex.length > 2) events.push(ex);
        if (n >= limit || remaining <= canignore) break;
      }
      while (rawn < limit) { var v = rng.nextDouble(); rawn++; if (v < vlim) smalls.push({x: rawn, y: v}); }
      return events;
    }

    function run(s) {
      save = s; sel = null;
      var def = s.ascension >= 4 ? 1000000 : s.ascension >= 2 ? 100000 : 10000;
      var inp = $('sv-alim');
      if (!inp.dataset.user) inp.value = def;
      draw();
    }
    function chips(list, empty) {
      if (!list.length) return '<span class="sv-hint">' + (empty || '无') + '</span>';
      return list.map(function (c) {
        return '<span class="ar-chip' + (c.x ? ' x' : '') + '"' + (c.x ? ' title="本次退位拿不到"' : '') + '>' + c.h + (c.note ? '<small>' + esc(c.note) + '</small>' : '') + '</span>';
      }).join('');
    }
    function draw() {
      if (!save) return;
      classify();
      var limit = Math.max(1, Math.min(5000000, +$('sv-alim').value || 10000));
      var events = forecast(limit);
      var st = function (k, v, u) { return '<div><small>' + k + '</small><b>' + v + (u ? '<span>' + u + '</span>' : '') + '</b></div>'; };
      $('sv-astats').innerHTML = st('当前考古次数', num(save.excavations)) + st('参与抽取', raw.eligible.length, '个') +
        st('固定获得', raw.nonrandom.length, '个') + st('已拥有遗物', raw.owned, '/ ' + Artifacts.length);
      var list = events.map(function (ex) {
        var got = false;
        var evs = ex.slice(2).map(function (e) {
          if (e[0] === 'find') { got = true; return '<span class="ar-get">获得 ' + an(e[1]) + '</span>'; }
          return '<span class="ar-may">' + an(e[2]) + '<small>需要 ' + esc(e[2].display(e[1])) + '</small></span>';
        });
        return '<li' + (got ? ' class="got"' : '') + '><div class="ar-n"><b>第 ' + num(ex[0]) + ' 次</b><small>再挖 ' + num(ex[1]) + ' 次</small></div><div class="ar-ev">' + evs.join('') + '</div></li>';
      }).join('');
      $('sv-aout').innerHTML = '<p class="ar-seed">遗物随机数状态 ' + save.artifactRngState + '。蓝色是一定能拿到；浅色是这次考古的随机数够好，达到括号里的数值就能拿到。</p>' +
        (list ? '<ol class="ar-tl">' + list + '</ol>' : '<p class="ar-none">在计算范围内没有会发生的事件。</p>');
      var guess = Artifacts.filter(function (a) { return a.guess; }).map(an);
      $('sv-apool').innerHTML =
        '<h4>参与抽取<small>' + raw.eligible.length + '</small></h4>' +
        '<p class="sv-hint">每次考古，这些遗物各消耗一个随机数。灰框的本次退位拿不到，但也会消耗。</p>' + chips(raw.eligible) +
        '<h4>固定获得<small>' + raw.nonrandom.length + '</small></h4>' + chips(raw.nonrandom) +
        '<details><summary>暂不满足条件（' + raw.ineligible.length + ' 个）</summary>' + chips(raw.ineligible) + '</details>' +
        (guess.length ? '<p class="sv-warn">这些遗物的条件用到存档里没有的数据，只给出需要达到的数值，要自己和游戏里对比：' + guess.join('、') + '。</p>' : '');
      chart();
      if (sel) detail(sel); else $('sv-adetail').innerHTML = '';
    }

    // 小随机数散点图：横轴是往后第几个随机数，纵轴是数值（越低越好），点一下看能拿哪些遗物
    function chart() {
      var cv = $('sv-achart'), w = cv.clientWidth || 800, h = 240, dpr = window.devicePixelRatio || 1;
      cv.width = w * dpr; cv.height = h * dpr; cv.style.height = h + 'px';
      var g = cv.getContext('2d'); g.scale(dpr, dpr);
      g.clearRect(0, 0, w, h);
      var L = 64, R = 16, T = 16, B = 30, limit = Math.max(1, +$('sv-alim').value || 10000), ymax = 100 / limit;
      g.font = '11px "Microsoft YaHei UI",sans-serif'; g.textBaseline = 'middle';
      for (var k = 0; k <= 4; k++) {  // 横向网格
        var y = T + (h - T - B) * k / 4;
        g.strokeStyle = k === 4 ? '#c3cfe2' : '#e6ebf3'; g.beginPath(); g.moveTo(L, y); g.lineTo(w - R, y); g.stroke();
        g.fillStyle = '#9aa5b8'; g.textAlign = 'right';
        g.fillText(k === 4 ? '0' : (ymax * (4 - k) / 4).toExponential(1), L - 8, y);
      }
      g.textAlign = 'left'; g.fillText('1', L, h - B + 14);
      g.textAlign = 'right'; g.fillText(num(limit), w - R, h - B + 14);
      g.textAlign = 'center'; g.fillText('往后第几个随机数 →', (L + w - R) / 2, h - B + 14);
      chartPts = smalls.map(function (p) {
        return {p: p, x: L + (w - L - R) * p.x / limit, y: h - B - (h - T - B) * p.y / ymax};
      });
      chartPts.forEach(function (c) {
        if (sel === c.p) return;
        g.fillStyle = 'rgba(37,99,235,.55)'; g.beginPath(); g.arc(c.x, c.y, 3, 0, 7); g.fill();
      });
      chartPts.forEach(function (c) {
        if (sel !== c.p) return;
        g.fillStyle = '#dc2626'; g.strokeStyle = '#fff'; g.lineWidth = 2;
        g.beginPath(); g.arc(c.x, c.y, 6, 0, 7); g.fill(); g.stroke(); g.lineWidth = 1;
      });
    }
    function pick(e) {
      if (!chartPts) return;
      var r = e.target.getBoundingClientRect(), x = e.clientX - r.left, y = e.clientY - r.top, best = null, bd = 100;
      chartPts.forEach(function (c) { var d = Math.hypot(c.x - x, c.y - y); if (d < bd) { bd = d; best = c; } });
      if (!best) return;
      sel = best.p; chart(); detail(sel);
    }
    function detail(sv) {
      var ne = raw.eligible.length, reinc = save.reincarnation;
      var ov = $('sv-aover').value;
      if ($('sv-aovc').checked && !isNaN(parseInt(ov))) reinc = parseInt(ov);
      var out = '<div class="ar-pick"><span>位置<b>往后第 ' + num(sv.x) + ' 个</b></span><span>数值<b>' + sv.y.toExponential(3) + '</b></span>' +
        '<span>大约在<b>' + (ne ? '再挖 ' + num(Math.ceil(sv.x / ne)) + ' 次</b>（假设可抽遗物数不变）' : '—</b>（没有可抽遗物，没法挪动随机数）') + '</span></div>';
      var rows = [];
      raw.unowned.forEach(function (a, i) {
        if (a.reincarnation && reinc < a.reincarnation) return;
        var p = a.required ? a.display(a.required(sv.y)) : a.random ? sv.y <= a.random(save, sv.x) : 0;
        p = p === true ? '可以获得' : p === false ? '拿不到' : p;
        if (!p) return;
        var sh = '';
        if (ne > 1) {
          if (i < ne) { var k = sv.x % ne; k = (i >= k ? ne : 0) + k - i - 1; sh = k === 0 ? '用的就是这个数' : '要错开 ' + k + ' 位'; }
          sh = '<td>' + sh + '</td>';
        }
        rows.push('<tr><th>' + an(a) + '</th><td>' + esc(p) + '</td>' + sh + '</tr>');
      });
      if (rows.length) out += '<table class="sv-tb sv-kv"><tr class="hd"><th>遗物</th><th>条件</th>' + (ne > 1 ? '<th title="每次考古每个可抽遗物各用一个随机数。想让某个遗物用上这个好数，可以在可抽遗物更少（至少一个）的时候考古来错开，通常是在另一局。注意：遗物在 2000 这种整数考古次数变成可抽时，那一次也会错开一位。">需要错开（?）</th>' : '') + '</tr>' + rows.join('') + '</table>';
      $('sv-adetail').innerHTML = out;
    }
    return {run: run, draw: draw, pick: pick, detail: function () { if (sel) detail(sel); }};
  })();

  // ---------- 绑定 ----------
  function init() {
    $('sv-load').addEventListener('click', function () { var v = $('sv-in').value; if (v.trim()) use(v, true); });
    $('sv-in').addEventListener('paste', function () {
      var el = this;
      setTimeout(function () { if (el.value.trim()) use(el.value, true); }, 10);
    });
    $('sv-hist').addEventListener('change', function () { var it = loadList()[+this.value]; if (it) use(it.s, false); });
    $('sv-del').addEventListener('click', function () {
      var list = loadList(), k = +$('sv-hist').value;
      if (!list[k] || !confirm('从这个浏览器里删除这份存档记录？')) return;
      list.splice(k, 1); saveList(list);
      if (list.length) use(list[0].s, false);
      else { cur = null; refreshHist([], -1); $('sv-main').hidden = true; msg('已删除。'); showWhen(); ownedArtifacts(null); forecastPages(null); }
    });
    // 法术预报、遗物预测是侧栏「工具」里单独的两页（#rws、#arch）；旧地址 #save/rws、#save/arch 转过去
    window.addEventListener('subpage', function (e) {
      if (e.detail.sec === 'save' && (e.detail.sub === 'rws' || e.detail.sub === 'arch')) location.replace('#' + e.detail.sub);
      if (e.detail.sec === 'arch') arch.draw();  // 图表要在页面显示出来后才知道宽度
    });
    var old = /^#save\/(rws|arch)/.exec(location.hash);  // 打开时的 subpage 事件比这里早
    if (old) location.replace('#' + old[1]);
    VIEWS.forEach(function (v) {
      if (!$(v.tabs)) return;
      $(v.tabs).addEventListener('click', function (e) {
        var b = e.target.closest('button'); if (!b) return;
        $(v.filter).value = '';
        this.querySelectorAll('button').forEach(function (x) { x.classList.toggle('on', x === b); });
        filterView(v);
      });
      $(v.filter).addEventListener('input', function () { filterView(v); });
    });
    $('sv-alim').addEventListener('change', function () { this.dataset.user = 1; arch.draw(); });
    $('sv-achart').addEventListener('click', arch.pick);
    $('sv-aovc').addEventListener('change', function () { $('sv-aover').disabled = !this.checked; arch.detail(); });
    $('sv-aover').addEventListener('change', arch.detail);
    var list = loadList();
    if (list.length) use(list[0].s, false);
    else refreshHist([], -1);
    window.addEventListener('pywebviewready', appMode);
    if (window.pywebview && window.pywebview.api && window.pywebview.api.read_save) appMode();
  }

  // ---------- 程序模式（RGA.exe）：直接读本机游戏存档 ----------
  var app = {on: false, mtime: 0, timer: null, reading: false, version: null, sequence: 0};
  function appMode() {
    if (app.on) return;
    app.on = true;
    windowControls();
    if (!location.hash) location.hash = 'save';
    $('sv-pastebox').hidden = true;
    window.addEventListener('rgasave', function (event) { acceptGame(event.detail, false); });
    readGame(true);
    // 保存通知立即同步；定时读取只兜底；文件未变化时复用已校验的结果，每 5 秒复核一次内容。
    var fallback = 10000;  // 旧程序没有文件通知，沿用原来的 10 秒检查
    if (window.pywebview.api.watch_save) {
      fallback = 2000;
      window.pywebview.api.watch_save().catch(function () { readGame(false); });
    }
    app.timer = setInterval(function () { readGame(false); }, fallback);
    window.addEventListener('beforeunload', function () { clearInterval(app.timer); });
  }
  // 无边框窗口：标题栏按钮、双击标题栏最大化、右下角拖动改大小
  function windowControls() {
    var api = window.pywebview.api, root = document.documentElement;
    root.classList.add('app');
    window.dispatchEvent(new CustomEvent('rgappmode'));
    var max = function () {
      api.toggle_maximize().then(function (m) {
        root.classList.toggle('max', m);
        document.querySelector('.ab-btns [data-w=max]').title = m ? '还原' : '最大化';
      });
    };
    document.querySelector('.ab-btns').addEventListener('click', function (e) {
      var b = e.target.closest('button'); if (!b) return;
      if (b.dataset.w === 'min') api.minimize();
      else if (b.dataset.w === 'max') max();
      else if (b.dataset.w === 'close') api.close();
    });
    document.querySelectorAll('.ab-drag').forEach(function (d) { d.addEventListener('dblclick', max); });
    var grip = document.querySelector('.grip');
    grip.addEventListener('mousedown', function (e) {
      e.preventDefault();
      var x0 = e.screenX, y0 = e.screenY, busy = false, pending = null;
      api.size().then(function (sz) {
        var move = function (ev) {
          pending = [sz.w + ev.screenX - x0, sz.h + ev.screenY - y0];
          if (busy) return;
          busy = true;
          var p = pending; pending = null;
          api.resize(p[0], p[1]).then(function () { busy = false; if (pending) move({screenX: pending[0] - sz.w + x0, screenY: pending[1] - sz.h + y0}); });
        };
        var up = function () { window.removeEventListener('mousemove', move); window.removeEventListener('mouseup', up); };
        window.addEventListener('mousemove', move);
        window.addEventListener('mouseup', up);
      });
    });
  }
  function readGame(force) {
    if (app.reading) return;
    app.reading = true;
    window.pywebview.api.read_save().then(function (r) {
      acceptGame(r, force);
    }).catch(function (error) {
      if (!cur || (force && !app.version)) msg('读取存档暂未完成：' + error.message, true);
    }).finally(function () { app.reading = false; });
  }
  function acceptGame(r, force) {
    if (!r || !r.ok) { if (!cur || (force && !app.version)) msg(r && r.error || '没有收到完整存档', true); return; }
    // 推送与初次读取可能交错；较早的返回不能覆盖新的快照。
    if (r.sequence && r.sequence < app.sequence) return;
    if (r.version && r.version === app.version) return;
    if (!force && !r.version && r.mtime === app.mtime) return;
    var previousTime = app.mtime;
    app.mtime = r.mtime;
    if (!(cur && cur.str === r.save.trim() && !force)) {
      if (!use(r.save, 'game')) { app.mtime = previousTime; return; }
    }
    app.version = r.version || null;
    app.sequence = r.sequence || 0;
    showWhen();
  }
  if (document.readyState === 'loading') document.addEventListener('DOMContentLoaded', init); else init();
})();
