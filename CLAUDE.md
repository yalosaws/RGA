# Realm Grinder 资料库

用户在玩 Realm Grinder（Steam app 610080），这里存放用户自己维护的中文资料：综合列表表格、攻略翻译和整理资料时用的脚本。**用中文和用户交流。**

**这个文件夹主要是给 Claude 读的**：它是 Claude 回答用户 Realm Grinder 问题时的资料库，不是给人浏览的成品。用户问游戏里的升级、奖杯、研究、挑战、法术、攻略步骤等问题时，先在这里查（`资料/` 的原始资料、`表格/` 的综合列表、`攻略/` 的翻译），再结合下面的可信度顺序作答，不要凭记忆回答；查不到或资料过时的，要说明并去官方补丁说明或 Discord 核实。新查到的可靠资料也存进 `资料/`，方便以后再用。

## 目录结构

| 路径 | 内容 |
|---|---|
| `表格/RG综合列表（4.3.14）.xlsx` | **当前版本**的综合列表，10 个工作表：阵营升级/遗产/UB/血统/世系/契印/法术、传承组合、挑战、UB 分布、研究、建筑升级、隐藏奖杯、活动、遗物。已统一成游戏内译名 |
| `表格/RG综合列表（4.3.14）修改对照.xlsx` | 从 4.2.0.1 更新到 4.3.14 的 882 处修改（逐格原内容→新内容），第二页列了资料来源和未能核实的项目。记录的是改名之前的文字，没有跟着改译名 |
| `表格/血统和种族升级.xlsx` | 用户的另一张血统/阵营升级表（英文名 + 机翻说明），已补上游戏译名、改掉机翻术语 |
| `表格/旧版/RG综合列表（4.2.0.1）.xlsx` | `脚本/apply.py` 的输入：原表加上第一次修的 8 处隐藏成就（其中几处后来在 4.3.14 版里又按新数据改过） |
| `表格/旧版/RG综合列表（4.2.0.1）_修改前备份.xlsx` | 用户下载来的原始 4.2.0.1 表，未经任何修改 |
| `攻略/` | Discord #pre-ascension 置顶 Beginner Guide（作者 ensteffahn）的中文翻译，md + pdf |
| `RGA.html` | 给用户浏览用的单文件网页：两篇攻略 + 综合列表 9 个工作表（含图标），攻略里的专名点了跳到表格对应格子；还有「我的存档」栏（只读存档查看、法术预报、遗物预测，见下文）。由 `脚本/build_html.py` 生成，**不要手改**；改了表格或攻略要重新生成 |
| `脚本/` | 表格更新脚本，见下文 |
| `应用/` | 桌面程序「RGA」（Realm Grinder 助手，2026-10-20 改名）：`rg_app.py`（pywebview 无边框圆角窗口装着资料网页，并直接读本机游戏存档）、`build_exe.py`（打包）、`make_icon.py`（画图标 `icon.ico`/`icon.png`：16×16 像素的蓝紫色水晶，最近邻放大）。打包结果在 `发布/RGA.exe`（单文件，约 20 MB，**不进 git**） |
| `资料/` | 抓取的原始资料：`A0 Guide.txt`（Discord 置顶 full A0 Guide 英文原文，用户下载；`攻略/A0攻略要点.md` 据此整理）、官方 4.3+ 补丁说明、Not a Wiki 页面（`naw_*.txt`）、Fandom wikitext（`fandom/`）、changelog、旧表各工作表的文本导出（`sheetN.txt`）、`4.3.14更新笔记.md`（含补丁说明各段行号索引）、`汉化文本（PC_20260921）.tsv`（汉化包的全部 5723 条「英文原文→中文译文」，见下文） |
| `工具/RG-tools/` | Royal Advisory Board 社区工具站（shadowgull/dox4242.github.io，适配到 4.3.10+）的本地克隆：`edit/edit.html` 存档编辑器、`rws/` Realm Weather Service、`arch/` Lara Crypt、`mri/` 活动工具。纯本地 JS，双击 html 即可离线用；`git pull` 更新（更新后重新生成网页）。网页的「我的存档」栏用它的库和数据，没有这个文件夹时 `build_html.py` 跳过该栏。自带 git 仓库，**不进 git** |
| `汉化/` | 游戏汉化包（PC 解压版 + PC/安卓 rar），体积大，**不进 git** |

## 游戏内中文译名

用户玩的是汉化版，回答时阵营、法术、术语**优先用 `资料/汉化文本（PC_20260921）.tsv` 里的游戏内译名**（必要时括注英文），查不到再自己译。查法：`grep -a -P "^英文名\t" 资料/汉化文本（PC_20260921）.tsv`（文件按英文排序，换行转义成 `\n`，复数形式用 `\0` 隔开）。

表格和攻略都已改成游戏译名（2026-10-20）。和旧资料（Not a Wiki 中文、`资料/sheetN.txt`、旧版表格、修改对照）的叫法不同，常见的：Fairy 仙灵（旧：妖精）、Goblin 地精（旧：哥布林）、Undead 亡灵（旧：不死族）、Makers 永衡族、Djinn 巨灵、Lineage 世系（旧：先祖血脉）、Legacy 传承（旧：遗承）、Unique Building 独特建筑、Artifact Set 遗物契印、Prestige 显赫（旧：声望）、Spell Tier 法术阶层、Trophy 奖杯（旧：成就）、Excavation 考古、Royal Exchange 皇家贸易令、Call to Arms 动员令、Reincarnation 重生、Rubies 红玉、Faction Coins 阵营币。**注意立场/阵营**：游戏里 Alignment（善良/邪恶/中立/秩序/混乱/平衡）叫「立场」，Faction 叫「阵营」；旧表格用「阵营」指立场、「种族」指阵营。描述里的缩写（fc、gem、RE、UB、TC、CtA、Ascension、R）和回魔、魔上限这类简称照旧保留。

## 资料可信度

1. **官方「Realm Grinder Update 4.3+ Patch notes」Google Doc**：4.3.0–4.3.11.1 的权威来源。id `1xVXiP3R2WtRH9gwUfoo8mkKiYuQQgg8W8J6eMFcDNeQ`，可用 `/export?format=txt` 导出；本地副本在 `资料/官方4.3+补丁说明.txt`。
2. **Discord #announcements**：4.3.12 之后的版本只有公告。
3. **Not a Wiki**（musicfamily.org/realm）：只更新到 4.2.10，只用来核对 4.3 没改过的内容。它的 build 页面已过时。
4. **Fandom**：部分更新，数值不可靠，只用来确认名称和位置。

补丁说明本身有笔误（例如卓尔挑战 3/4、妖精 FR4/FR7 写混了），遇到矛盾时要结合旧公式交叉判断。

## 修改表格的规则

- 表格里有 **WPS 单元格图片**（`xl/cellimages.xml`、`=_xlfn.DISPIMG`）。**绝对不能用 openpyxl 保存**，否则 308 个图标会丢失。openpyxl 只能用来读取。
- 修改方法是直接改 zip 里的 XML：往 sharedStrings 末尾追加 `<si>`，再把单元格改成 `<c r=".." t="s"><v>新索引</v></c>`；缺失的单元格或行要按列序、行序插入，最后更新 `<dimension>`。
- 写合并单元格时只能写左上角那一格（`apply.py` 会先检查）。
- 保持原表的中文描述风格：不写公式，原表写了数值的地方就更新数值。
- 改完要验证：所有 XML 格式正确；被改的格子逐格读回与预期一致；其他格子没有变化；合并单元格和图片数量不变。

## 脚本

- `脚本/apply.py`：读取 `edits_sheet*.py`（每个文件是 `{单元格: 新文本}` 字典；研究表 `edits_sheet5.py` 按研究代号编写，结合 `research.json` 换算成单元格），把 `表格/旧版/RG综合列表（4.2.0.1）.xlsx` 打补丁后写到 `表格/RG综合列表（4.3.14）.xlsx`，最后调用 `rename.py` 统一译名。**运行会覆盖 4.3.14 版**；如果用户在 WPS 里手动改过 4.3.14 版，先备份或改 `DST`。edits 文件里写旧叫法或游戏译名都行，改名在最后一步统一做。
- `脚本/rename.py <输入.xlsx> <输出.xlsx> [--report 报告.txt]`：把表格译名换成游戏内译名，只改 sharedStrings。规则（名称格换名、描述里换英文专名和旧术语）在文件开头；例外词和旧术语对照在 `脚本/译名.py`。**只能对没改过的表跑一次**（再跑会把原「邪恶种族」变成的「邪恶阵营」误改成「邪恶立场」）：4.3.14 版用 `apply.py` 重新生成，血统表用 `git show` 取出改名前的版本再跑。
- `脚本/fetch.py <url> <输出>`：抓网页转纯文本（当初用来抓 Not a Wiki）。
- `脚本/fandom.py <页面名...>`：通过 Fandom API 下载 wikitext 到 `资料/fandom/`。
- `脚本/hanhua.py <swf> <输出.tsv>`：从汉化包的 `RealmGrinderDesktop.swf` 导出中文语言包（SWF 内 zlib 压缩的 gettext .mo，汉化放在原 es_ES 那份里）。汉化包更新后重跑，输出换个日期名存进 `资料/`。
- `脚本/build_html.py [xlsx] [html]`：生成 `RGA.html`。专名到格子的对应：名称格里的中文名（同名时按 `PREFER` 里各类优先的工作表）、研究代号→研究表「代号」行上一格、升级代号（UD1）→阵营表该阵营行第 N 列、挑战代号（DMC1、「恶魔挑战 1」）→挑战表、「德鲁伊 1」这类阵营遗物→遗物表（按全阶英豪奖杯顺序每阵营两格）、缩写见 `ALIAS`。研究按 4.3.9 改号后的新代号对应，表里只有「原 xxx」注记的旧号不算。运行时会列出没对上格子的专名（目前约 10 个，都是表里没有的东西，如宝石之力、自动施法类奖杯）。
- 遗物页、隐藏奖杯页（2026-10-20 起）不再画成表格：`build_artifacts()`、`build_trophies()` 用 `card()` / `card_list()` / `CL_JS` 渲染成卡片（图标、中英文名、R 要求/必出标记、几栏说明）和页内搜索（用户要求去掉了类型、阵营筛选和计数）；隐藏奖杯的 R 标记来自行底色（`TROPHY_TIER`），奖杯卡片 id 是 `t7-A行号`。遗物页卡片 id 仍是原名称格 `t10-B行号`，专名链接、全表搜索、存档页链接照旧。读到存档后，`save_tools.js` 的 `ownedArtifacts()` 发 `artowned`、`trophyowned` 事件（已获得的英文名，按卡片 `data-en` 对上；奖杯的编号和英文名取自编辑器的 widget-trophy 行，名字不一样的在 `TROPHY_ALIAS` 里），两页就显示「全部 / 已获得 / 未获得」小胶囊（往下滚时浮在内容上面）和进度条：已获得的图标描蓝边带勾，未获得的变灰（用户选的样式，要求不加多余文字标记）。综合列表里没有 Mask of Scorch'Rah，这一个对不上。其他工作表还是表格，用户在考虑换成卡片 / 对比表等样式（样板做过 A 阵营档案、B 主从双栏、C 对比表、D 条目列表）。
- 版本页（侧栏「关于」→「版本 x.y.z」，`#ver`）：版本号和更新记录写在 `build_html.py` 开头的 `VERSION`、`CHANGES`（当前 1.0.0）；改了功能要加版本号并在 `CHANGES` 最前面写这一版改了什么。版本页只放版本号和更新记录（用户不要收录资料、生成时间这些）。
- 动画：侧栏选中块（`nav .ind`）滑到当前项；切换页面、存档子页、存档查看分页时淡入上移（`rg-in`）。
- 网页风格（2026-10-20 用户从 4 个样板里选定）：浅灰蓝底 `#f3f6fb` + 白色圆角卡片，左侧悬浮圆角侧栏（攻略 / 资料表 / 工具三组，纯文字不带图标，搜索框在侧栏顶部），主色纯蓝 `#2563eb`、**不用渐变**；存档页顶部 6 张数字卡片，第一张（重生）纯蓝底。样式都在 `build_html.py` 的 `TEMPLATE` 和 `save_tools.html` 里，颜色用 `:root` 的变量。侧栏的「法术预报」「遗物预测」是 `#save/rws`、`#save/arch`，路由会发 `subpage` 事件给存档页切换子页。
- `脚本/save_tools.py`（由 build_html.py 调用）：网页「我的存档」栏。把 RG-tools 的 `pako`、`savecodec2`（解码）、`pmprng`（随机数）、`util`（数据表）、`arch/artifacts.js`（遗物条件）原样嵌进网页，界面是 `save_tools.js` + `save_tools.html` 写的中文只读版：
  - 存档查看：从 `edit/edit.html` 解析出 25 个分页的每一行（统计项、建筑、法术、奖杯、挑战、研究等），只显示不编辑。研究代号按表格里的新代号（按名字找到研究表的格子再取代号），名字能对上表格的加链接。
  - 法术预报、遗物预测：逻辑照搬 `rws/index.js`、`arch/index.js`（含原版的细节，例如同一次考古到点的两个固定遗物后一个顺延），2026-10-20 用改过的测试存档和原版逐条对比过一致。
  - 存档字符串存在浏览器 localStorage（键 `rg-saves`，最近 10 份），只在本机。
  - 名字翻译：`脚本/存档译名.py`（手写的统计项、建筑复数、拼接规则、artifacts.js 说明文字替换）→ 游戏词典 → 汉化文本里「X: %0」形式的统计标签。生成时会列出没翻出的名字（目前只有游戏里也用英文的 glho kohhl snod）。
- `应用/build_exe.py`：先跑 build_html.py，再用 PyInstaller 打成单个 exe（需要 `pip install pywebview pyinstaller`；pywebview 装在用户目录，所以不能用 `python -I` 跑）。exe 里带着打包时的网页，表格、攻略、RG-tools 更新后要重新打包。程序：
  - 游戏存档位置：`%APPDATA%\<AIR 应用 id>\Local Store\#SharedObjects\RealmGrinderDesktop.swf\realm-grinder.sol`（本机是 `com.kongregate.mobile.realmgrinder.air`）。程序取最新的 .sol，从里面找 `$00s…$e` 存档字符串，只读不写。游戏自动保存就会更新这个文件，大约每一两分钟。
  - 网页检测到 `window.pywebview` 就进入程序模式：打开即读游戏存档，开着「自动同步」每 10 秒检查一次文件。存档页标题右边只有「自动同步」开关和「立即读取」按钮（用户要求去掉了打开存档文件夹、手动粘贴、历史记录下拉框和删除、读取状态那行）；读取出错时提示显示在标题下面。历史记录和粘贴框只在浏览器里打开网页时出现。
  - 每次打开都放在主屏幕中央（`center()`，窗口比屏幕大时缩到 92%）。
  - 窗口无边框（Windows 11 用 DWM 系统圆角）：标题栏是网页画的 `.appbar`（`build_html.py` 的 `appbar()`，平时隐藏，`html.app` 时显示；不显示图标和标题文字，用户要求），左边空白区带 `pywebview-drag-region` 可拖动、双击最大化；按钮调用 Api 的 minimize / toggle_maximize / close；右下角 `.grip`（看不见）拖动改大小（Api.size / resize）。程序里整页不滚动，只有 `main` 滚动（滚动条从标题栏下面开始，不和关闭按钮并排）；脚本里读写滚动位置要用 `rgScroller()`，不要用 `window.scrollY`。
  - 网页由 pywebview 内置服务打开（`http://127.0.0.1:42001/`），localStorage 存在 `%LOCALAPPDATA%\RGA`（旧版的 `RealmGrinder助手` 目录在第一次启动时自动改名搬过来）。调试：设环境变量 `WEBVIEW2_ADDITIONAL_BROWSER_ARGUMENTS=--remote-debugging-port=9333` 再启动 exe，就能用 CDP 读页面状态。
- `脚本/md2html.py <md> <html>`：把攻略 md 转成带样式的 HTML，再用 Edge 打印成 PDF（`convert()` 也给 build_html.py 用）：
  `msedge --headless=new --user-data-dir=<临时目录> --no-pdf-header-footer --print-to-pdf=<pdf> file:///<html>`
  （用户开着 Edge 时，不加 `--user-data-dir` 就会被并进已打开的 Edge，什么也不输出；输出路径用英文，生成后再复制过去。用户开着那个 PDF 时复制会失败，要请用户先关掉。）

## 攻略的专名标记

攻略 md 里的专名写成 `{类:名}`，`md2html.py` 按类别上色，并在 PDF 标题下放图例。共九类：`阵` 阵营、`法` 法术、`升` 升级（阵营升级、法术升级、宝石之力等）、`建` 建筑、`奖` 普通奖杯、`隐` 隐藏奖杯、`研` 研究、`挑` 挑战、`遗` 遗物。按句子里指的东西来分：同名的奖杯和升级，说「拿奖杯」就标 `奖`/`隐`，说「买」「用」就标 `升`。缩写和代号也标（`{法:TC}`、`{研:E300}`、`{挑:DMC1}`、`{升:UD1}`），血统+阵营组合（FCGB）和 build、模板名不标。隐藏奖杯以表格「隐藏奖杯」工作表为准。

## 已知未解决项

- 2025–2026 年各次活动新增的 feat 没有公开资料，没有收录（活动表 A75 有注明）。
- 活动任务数值在 Not a Wiki 里前后矛盾，保留了原表数值。
- 4.3.9 研究重新编号后，原表 600–780 RP 那一段（R35–39）只有一列，放不下改号的研究：研究格保留在原位，在代号格里注明新代号和"解锁晚/早几个 R"（研究表 A40 有说明）。
- 修改后的表格还没有在 WPS 里打开核对过显示效果。

## Discord 上的教程

官方 Discord #pre-ascension 置顶还有：**full A0 Guide**（逐个 R 讲解到 R39；原文在 `资料/A0 Guide.txt`，中文要点在 `攻略/A0攻略要点.md`（md + pdf）。攻略只整理要点、不做整篇逐句翻译，回答细节问题时对照原文。整理时不能缩小或改变原文的适用范围，要逐段对照原文核实语义；用户不想要〔推断〕之类的额外标注，原文笔误直接改正、含糊处写成通顺的结论），以及 **Ascension 0 complete build package**（A0Templates.txt，适配 v4.3.11，在游戏设置 → 导入模板 导入）。
