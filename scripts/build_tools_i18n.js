/* 构筑辅助的中英文切换。静态界面文字按下面的词典整句替换，动态文字在 build_tools.js 里用 L(中文, 英文) 就地取值；
   后台（Python）返回的中文提示用 bk() 按词典或规则翻译，没收录的保持原文。语言存在 localStorage，坏了就用中文。 */
(function () {
  'use strict';
  var KEY = 'rga.build.lang';
  var lang = 'zh';
  try { if (localStorage.getItem(KEY) === 'en') lang = 'en'; } catch (e) {}
  var listeners = [];
  var D = {
    '按目标找 build': 'Find build by goal', '连续模拟': 'Timeline simulation', '等待读取存档…': 'Waiting for save…', '重新计算': 'Recalculate',
    '目标': 'Goal', '魔上限': 'Max mana', '助手数': 'Assistants', '每秒回魔': 'Mana regen / s', '总产出 / 秒': 'Total production / s',
    '本局累计产币（含收税）': 'Coins produced this run (incl. tax)', '退位可得宝石': 'Gems on ascension',
    '方式': 'Mode', '最快达到': 'Fastest to reach', '数值最高': 'Highest value', '达到': 'Reach',
    '最长等多久': 'Time limit', '1 分钟': '1 min', '5 分钟': '5 min', '10 分钟': '10 min', '15 分钟': '15 min', '30 分钟': '30 min', '1 小时': '1 hour',
    '要求能用的法术': 'Required spell', '不限': 'Any', '搜索深度': 'Search depth',
    '快速（约 1～2 分钟）': 'Fast (~1–2 min)', '标准（约 4 分钟）': 'Normal (~4 min)', '精细（约 15 分钟）': 'Deep (~15 min)', '开始搜索': 'Start search',
    '评测已有 build': 'Evaluate an existing build',
    '按上方目标、时长和法术要求独立试跑。每 2 秒全部购买，自动施法沿用存档。任何必选项没买齐都会报错，不补选结构、不删改配方。固定随机流，不自动择色或瞄准。':
      'Runs the build on its own with the goal, time and spell set above. Buys everything every 2 s; auto-cast follows the save. If any required item cannot be bought it reports an error — it never adds structure or edits the recipe. Fixed random stream; no colour or aim picking.',
    '社区模板': 'Community template', '手动输入': 'Manual input', '立场': 'Alignment', '善良': 'Good', '邪恶': 'Evil', '中立': 'Neutral',
    '阵营': 'Faction', '血统': 'Bloodline', '显赫阵营': 'Prestige faction', '无': 'None', '矮人': 'Dwarven', '卓尔': 'Drow', '龙族': 'Dragon',
    '研究模板': 'Research template', '佣兵模板': 'Mercenary template',
    '请核对阵营、血统与显赫阵营；模板代码本身不包含这些选择。': 'Please check faction, bloodline and prestige faction; the template code itself does not include these choices.',
    '完整评测': 'Run full evaluation',
    '从存档退位重开，候选只从客户端机制独立生成。方案之间「赛跑」：每个单项改动只跑到开局定型的那一刻（研究买完、滚雪球结束，通常 20～40 秒），和原方案成对比较，落后的停掉，领先的单项和它们的叠加组合才跑满全程；换血统、显赫这类改变事件早晚的改动一律跑满。排名只用上方目标时长的完整模拟结果，最终前 3 名重新回放复核。研究和佣兵模板可以直接存进游戏的模板库。':
      'Starts from an ascension of your save. Candidates are generated independently from the client mechanics. Builds “race”: every single change is run only until the opening settles (research bought, the early snowball over, usually 20–40 s) and compared head-to-head with the current build; the ones behind are stopped, and only the leaders and their combinations run to the goal time. Changes of bloodline or prestige, which shift event timing, always run in full. The ranking uses only full simulations at the goal time above, and the top 3 are replayed again for a final check. Research and mercenary templates can be saved straight into the game’s template library.',
    '同时开 6 个低优先级计算进程。快速约 1～2 分钟、标准约 4 分钟、精细约 15 分钟；找不到更好的改动时会提前结束。可以随时停，保留已有结果。':
      'Runs 6 low-priority calculation processes at once. Fast takes about 1–2 minutes, normal about 4, deep about 15; it finishes early once no change is better. You can stop at any time and keep the results so far.',
    '正在启动': 'Starting', '启动计算进程': 'Start calculation processes', '载入存档、准备 6 份游戏副本': 'Load the save and prepare 6 game copies',
    '读取研究约束和增长关系': 'Read research limits and growth links', '按当前存档确定可选研究、名额与预算': 'Work out available research, slots and budget from this save',
    '各结构粗筛': 'Screen every structure', '每种阵营、血统和显赫组合用机制模型给一套初始研究，前几名跑满全程': 'Each faction, bloodline and prestige combination gets starting research from the mechanics model; the leaders run to the goal time',
    '单项改动赛跑': 'Race single changes', '对当前最好的方案试每一个单项改动，短跑成对淘汰，领先的及其叠加组合跑满': 'Every single change to the current best is raced head-to-head over a short run; the leaders and their combinations run in full',
    '最佳方案精确复核': 'Exact check of the best', '前 3 名重新独立跑一遍，核对数值、购买记录和增长曲线': 'The top 3 are re-run independently to check values, purchases and growth curves',
    '已验证': 'Verified', '整局跑': 'Full runs', '用时': 'Elapsed', '0 秒': '0 s', '停止': 'Stop',
    '各阵营最好': 'Best per faction', '点一行只看这个阵营': 'Click a row to show only this faction', '排行': 'Ranking',
    '全部': 'All', '所有阵营': 'All factions', '所有血统': 'All bloodlines', '构筑': 'Build', '结果': 'Result', '和第一比': 'vs. first', '研究 / 佣兵': 'Research / Mercenary',
    '第一批验证结果出来后显示在这里。': 'The first verified results will appear here.',
    '模拟时长': 'Simulated time', '15 分钟 ': '15 min', '「全部购买」间隔（秒）': '“Buy all” interval (s)', '手动点击 / 秒': 'Manual clicks / s', '购买': 'Buy',
    '升级': 'Upgrades', '建筑（最大）': 'Buildings (max)', '开始模拟': 'Start simulation',
    '从存档开始一帧一帧推进，看一段时间后的产出和宝石增长，用来比较不同构筑或买法。玩家只按两个「全部购买」，自动施法照存档设置。1 分钟游戏时间约需 10～30 秒计算。':
      'Advances your save frame by frame so you can see production and gem growth after a while, to compare builds or buying styles. The player only presses the two “Buy all” buttons; auto-cast follows the save. One minute of game time takes about 10–30 s to calculate.',
    '40000、4万、1e60': '40000, 4M, 1e60', '阵营 ': 'Faction'
  };
  var BK = {
    '启动计算进程': 'Starting calculation processes', '启动新求解器': 'Starting the solver', '建立研究约束和增长机制图': 'Building research limits and growth graph',
    '多时长探索与目标时长验证': 'Multi-horizon search and goal-time verification', '最佳方案独立精确回放': 'Exact independent replay of the best',
    '粗筛阵营和血统': 'Screening factions and bloodlines', '完成': 'Done',
    '启动精确赛跑求解器': 'Starting the exact race solver', '粗筛：各结构的初始方案': 'Screening: starting build for each structure',
    '逐结构赛跑：单项改动成对比较，领先的跑满': 'Racing single changes head-to-head; leaders run in full',
    '按目标时长复核代理时长的各结构最好方案': 'Re-checking the best build of each structure at the goal time', '已停止': 'Stopped', '等待验证': 'waiting for verification',
    '到达时间上限仍有结构尚未选定': 'Structure still not chosen at the time limit', '方案未能执行完成': 'The plan could not be executed',
    '计算进程失败': 'The calculation process failed', '计算进程已退出，请重新读取存档': 'The calculation process exited; please reload the save',
    '没有进行中的搜索': 'No search in progress', '没有进行中的模拟': 'No simulation in progress', '存档数据无效': 'Invalid save data',
    '存档已经更新，请等待当前存档计算完成后重试': 'The save has been updated; wait for the current calculation to finish and try again',
    '模拟设置格式错误': 'Invalid simulation settings', '模拟时长必须在 0～24 小时之间': 'Simulated time must be between 0 and 24 hours',
    '未知目标': 'Unknown goal', '未知阵营': 'Unknown faction', '没有可行的组合': 'No feasible combination',
    '去掉后整局实测': 'Measured by removing it and re-running', '去掉后无法完成这套方案': 'The plan cannot be completed without it',
    '去掉后到时间上限仍未达到（至少）': 'Not reached by the time limit without it (at least)',
    '研究': 'Research', '佣兵': 'Mercenary', '血统': 'Bloodline', '显赫阵营': 'Prestige faction', '世系': 'Lineage'
  };
  var RE = [
    [/^落后太多，第 (\d+) 秒提前停$/, 'Stopped early at $1 s (too far behind)'],
    [/^到时间上限没能选上：(.+)$/, 'Not chosen by the time limit: $1'],
    [/^到达时间上限仍未能使用：(.+)$/, 'Still unusable at the time limit: $1'],
    [/^已评估 (\d+) 套；(.*)；目标时长最好 (.*)$/, function (m, n, banks, best) {
      return 'Evaluated ' + n + ' setups; ' + banks.replace(/(\S+)秒:(\d+)套/g, '$1 s: $2').replace(/ \/ /g, ' / ') + '; best at goal time ' + BK_(best);
    }],
    [/^预算分配：/, 'Budget split: '],
    [/^机制模型：(\d+) 项研究，(\d+) 种结构；研究配额由游戏提供$/, 'Mechanics model: $1 research, $2 structures; research quota comes from the game'],
    [/^计算未完成：(.*)$/, function (m, r) { return 'Calculation did not finish: ' + BK_(r); }],
    [/^评测失败：(.*)$/, 'Evaluation failed: $1'],
    [/^机制模型：(\d+) 项研究，(\d+) 种结构；检查长度 (.*) 秒$/, 'Mechanics model: $1 research, $2 structures; checkpoints $3 s'],
    [/^粗筛：(\d+) 种结构的初始方案各跑到第 (\S+) 秒，前 8 名跑满全程$/, 'Screening: starting builds of $1 structures run to $2 s; the top 8 run in full'],
    [/^粗筛：(\d+) 种结构的初始方案全部跑满$/, 'Screening: starting builds of $1 structures all run in full'],
    [/^粗筛最好 (\S+)：(.*)$/, function (m, v, n) { return 'Best after screening ' + v + ': ' + nameEn(n); }],
    [/^目前最好 (\S+)：(.*)$/, function (m, v, n) { return 'Best so far ' + v + ': ' + nameEn(n); }],
    [/^(?:（(\d+) 秒代理）)?(第 (\d+) 轮|两两组合) · (.*)：(\d+) 个研究改动跑到第 (\S+) 秒，(\d+) 套跑满（含 (\d+) 个换结构）；(.*)$/,
      function (m, px, l, k, n, a, r, f, s2, res) {
        return (px ? '(' + px + ' s proxy) ' : '') + (k ? 'Round ' + k : 'Pairs') + ' · ' + nameEn(n) + ': ' + a + ' research changes raced to ' + r + ' s, ' + f + ' run in full (' + s2 + ' structure changes); ' +
          (res === '没有更好的' ? 'nothing better' : res.replace('提升', 'gain'));
      }],
    [/^目标 (\S+) 秒较长：先在 (\S+) 秒上赛跑，再按目标时长复核和微调$/, 'The goal time $1 s is long: race at $2 s first, then re-check and fine-tune at the goal time'],
    [/^(\S+) 秒复核 (\d+) 套：最好 (\S+)（(.*)）$/, function (m, t, n, v, w) { return 'Re-checked ' + n + ' builds at ' + t + ' s: best ' + v + ' (' + nameEn(w) + ')'; }],
    [/^赛跑省下 (\d+)% 的模拟量：实际推进 (\d+) 游戏秒，全部跑满需要 (\d+)$/, 'Racing saved $1% of the simulation: $2 game-seconds run instead of $3']
  ];
  function nameEn(n) { return String(n).replace(/([A-Za-z]+)血统/g, '$1 bloodline').replace(/([A-Za-z]+)显赫/g, '$1 prestige').replace(/（(\d+) 秒代理）/g, ' ($1 s proxy)'); }
  function BK_(s) { return BK[s] || s; }
  function bk(text) {
    text = String(text == null ? '' : text);
    if (lang !== 'en') return text;
    if (BK[text]) return BK[text];
    for (var i = 0; i < RE.length; i++) if (RE[i][0].test(text)) return text.replace(RE[i][0], RE[i][1]);
    return text;
  }
  function t(zh) { return lang === 'en' && D[zh] != null ? D[zh] : zh; }
  function L(zh, en) { return lang === 'en' ? en : zh; }
  var NM = {good: 'Good', evil: 'Evil', neutral: 'Neutral'};
  var ZHN = {Fairy: '仙灵', Elven: '精灵', Angel: '天使', Goblin: '地精', Undead: '亡灵', Demon: '恶魔', Titan: '泰坦', Druid: '德鲁伊',
    Faceless: '无面者', Dwarven: '矮人', Drow: '卓尔', Dragon: '龙族', Mercenary: '佣兵', good: '善良', evil: '邪恶', neutral: '中立'};
  function nm(w) { return lang === 'en' ? (NM[w] || w) : (ZHN[w] || w); }

  // 静态界面：文本节点和少数属性整句替换，原文记在节点上，切回中文时还原
  var ATTRS = ['placeholder', 'aria-label', 'title'];
  function apply(root) {
    if (!root) return;
    var walker = document.createTreeWalker(root, NodeFilter.SHOW_TEXT, null), node, nodes = [];
    while ((node = walker.nextNode())) nodes.push(node);
    nodes.forEach(function (n) {
      var p = n.parentNode;
      if (!p || /^(SCRIPT|STYLE|PRE|TEXTAREA)$/.test(p.nodeName)) return;
      if (n._zh == null) { var key = n.nodeValue.trim(); if (!key || D[key] == null) return; n._zh = n.nodeValue; }
      var raw = n._zh, lead = raw.match(/^\s*/)[0], tail = raw.match(/\s*$/)[0], core = raw.trim();
      n.nodeValue = lang === 'en' && D[core] != null ? lead + D[core] + tail : raw;
    });
    root.querySelectorAll('*').forEach(function (el) {
      ATTRS.forEach(function (a) {
        if (!el.hasAttribute(a)) return;
        var store = '_zh_' + a;
        if (el[store] == null) { var v = el.getAttribute(a); if (D[v] == null) return; el[store] = v; }
        el.setAttribute(a, lang === 'en' && D[el[store]] != null ? D[el[store]] : el[store]);
      });
    });
  }
  function set(next) {
    next = next === 'en' ? 'en' : 'zh';
    if (next === lang) return;
    lang = next;
    try { localStorage.setItem(KEY, lang); } catch (e) {}
    document.documentElement.setAttribute('data-bx-lang', lang);
    listeners.forEach(function (fn) { fn(lang); });
  }
  window.BXI = {
    en: function () { return lang === 'en'; }, lang: function () { return lang; }, set: set, t: t, L: L, nm: nm, bk: bk, apply: apply,
    locale: function () { return lang === 'en' ? 'en-US' : 'zh-CN'; }, onChange: function (fn) { listeners.push(fn); }, _D: D
  };
})();
