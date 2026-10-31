/* RGA 对社区遗物库（RG-tools arch/artifacts.js、lib/util.js）的修正，放在库后面执行。
 * 库本身原样保留（git pull 更新后这里照样生效）；依据是官方 4.3+ 补丁说明、4.2.1 / 4.3.12 公告。
 * 某个名字找不到时在控制台提示，说明上游库改过，需要回来核对。 */
(function () {
  function art(name) {
    for (var i = 0; i < Artifacts.length; i++) if (Artifacts[i].name === name) return Artifacts[i];
    if (window.console) console.warn('arch_fixes：库里没有遗物 ' + name);
    return {};
  }
  function lnp(x) { return Math.log(1 + Math.max(0, x)); }

  // ---- 最低重生 ----
  var minR = {
    'Key to the Lost City': 24,     // 4.3.9：R23 → R24
    'Earth Core': 32,               // 4.3.9：R29 → R32
    'Ancient Cocoa Bean': 24,       // 4.3.12：R22 → R24
    'Spiky Rough Egg': 42,          // 4.3：R46 → R42
    'Know Your Enemy, Part II': 75, // 更新日志：R75
    'Veteran Figurine': 85,         // 4.3.3：R90 → R85
    'Forgotten Relic': 180,         // 4.3：R175 → R180
    'Apeiron': 180                  // 4.3：R175 → R180
  };
  Object.keys(minR).forEach(function (n) { art(n).reincarnation = minR[n]; });
  // 有些条目的 fixed() 没检查自己的最低重生，统一补上
  Artifacts.forEach(function (a) {
    if (!a.reincarnation || !a.fixed) return;
    var f = a.fixed;
    a.fixed = function (save) { return save.reincarnation >= a.reincarnation && f.call(a, save); };
  });

  // ---- 概率公式（库里的 random 是小数概率 = 官方百分比 / 100） ----
  var a;
  // 第二晶片：(ln(1+x)^3 / 5e7)%，x 是本纪元找到的阵营币（库多乘了 4）
  a = art('Second Crystal Fragment');
  a.random = function (save) { return Math.pow(lnp(util.save.faction_coins(save)), 3) / 5e9; };
  a.required = function (v) { return Math.exp(Math.pow(v * 5e9, 1 / 3)) - 1; };
  // 第三晶片：(x / 66e6)%，x 是本次重生施放的邪恶法术（库多乘了 66）
  a = art('Third Crystal Fragment');
  var r3 = a.random;
  a.random = function (save) { return r3.call(this, save) / 66; };
  a.required = function (v) { return v * 6.6e9; };
  // 第二石片：(x / 1e7)%，x 是建造的建筑数（库多乘了 2）
  a = art('Second Stone Fragment');
  a.random = function (save) { return util.save.total_buildings(save) / 1e9; };
  a.required = function (v) { return v * 1e9; };
  // 毒药瓶：(100 × x^0.9 / 1e7)%，库把 100 放进了括号里
  a = art('Poison Vial');
  a.random = function (save) { return 100 * Math.pow(util.save.combo_strike_counter(save), 0.9) / 1e9; };
  a.required = function (v) { return Math.pow(v * 1e9 / 100, 1 / 0.9); };
  // 第三铁片：(ln(1+x)^3 / 500,000)%，新公式不再减 2
  a = art('Third Iron Fragment');
  a.random = function () { return Math.pow(lnp(1000), 3) / 5e7; };
  a.required = function (v) { return Math.exp(Math.pow(v * 5e7, 1 / 3)) - 1; };
  // 法力织机、工厂、战场：原式是 (log10(x)^3 / N)%，按官方换算 log10 → 0.5·ln。库里括号写错，算出来是 NaN
  [['Mana Loom', function (s) { return util.save.stat(s, 15); }, 5e6],
   ['Factory', function (s) { return util.save.stat(s, 4); }, 1e6],
   ['Battlefield', function (s) { return util.save.assistants(s); }, 2e6]].forEach(function (x) {
    art(x[0]).random = function (save) { return Math.pow(0.5 * Math.log(Math.max(1, x[1](save))), 3) / x[2]; };
  });
  // 固态云：(x / 20,000)%，x 是生效法术数。库把函数本身拿去除，结果是 NaN；分母也少了一个 0
  art('Solid Cloud').random = function (save) { return util.save.active_spells(save) / 2e6; };
  // 神话：4.3.3 起是本次重生「用得最多」的法术的生效时间（4.3.2 曾是最少）
  a = art('Mythos');
  a.random = function (save) { return maxSpellTime(save) / 2.16e8; };
  a.display = function (v) { return util.render.time(v) + '（本次重生用得最多的法术的生效时间）'; };
  function maxSpellTime(save) {
    var max = 0;
    util.assoc.spells.forEach(function (sp) {
      var s = sp.allspells && save.spells[sp.id];
      if (s) max = Math.max(max, s.active0 + s.active1);
    });
    return max;
  }

  // ---- 辅助函数 ----
  // 脑波共振起步时间（无面者挑战奖励 Focused Thoughts）：600 + 0.4 × 本纪元脑波生效时间^0.8，每个法术阶层再加 10 分钟。
  // 无面者 FC11 让起步时间翻倍，社区库里查不到它的编号，暂不计入。
  util.save.brainwaveHeadstart = function (save) {
    var s = save.spells[2];
    return 600 + 0.4 * Math.pow(s.active0, 0.8) + s.activeTiers * 600;
  };
  // 已花费研究预算：库的点数表是 4.3.9 改号前的，按 RGA 的研究 ID → 当前代号重新算（代号里的数字就是点数）
  util.save.getSpentBudget = function (save) {
    var map = (window.SAVE_DATA || {}).research || {}, total = 0;
    for (var i in util.assoc.researches) {
      var r = util.assoc.researches[i];
      if (!util.save.upgrade_owned(save, r.id)) continue;
      var code = map[r.id] && map[r.id].code, rp = code ? parseInt(code.slice(1), 10) : NaN;
      total += isNaN(rp) ? r.value : rp;  // 没对上代号的（R175 以后一些研究）沿用库里的点数
    }
    return total;
  };

  // ---- 存档里没有的数值 ----
  // 这些遗物要用到助手数、皇家贸易令加成、阵营币概率、魔上限、回魔、离线产能、嗜血狂热最长持续时间，
  // 库里只能填固定值。预测时不下「获得」结论，只给出需要达到的数值。
  ['Power Orb', 'Rotten Organ', 'Excavated Mirage', 'Ancestral Hourglass', 'Beard Hair', 'First Iron Fragment',
   'Second Iron Fragment', 'Third Iron Fragment', 'First Crystal Fragment', 'Lantern of Guidance', 'Vault',
   'Battlefield', 'Sylvan Mirror', 'Blood Chalice'].forEach(function (n) { art(n).guess = true; });
})();
