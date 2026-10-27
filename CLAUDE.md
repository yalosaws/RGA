# Realm Grinder 资料库

用户在玩 Realm Grinder（Steam app 610080，汉化版）。**用中文和用户交流。**

这个文件夹是 Claude 回答 Realm Grinder 问题的资料库，同时是桌面程序 RGA（Realm Grinder 助手）的源码。回答游戏问题时先查 `资料/`、`表格/`、`攻略/`，按下面的可信度作答，不凭记忆；查不到或过时的要说明，并去官方补丁说明或 Discord 核实。新查到的可靠资料存进 `资料/`。

## 目录

| 路径 | 内容 |
|---|---|
| `表格/RG综合列表（4.3.14）.xlsx` | **当前**综合列表（阵营/升级/法术、挑战、研究、建筑升级、隐藏奖杯、活动、遗物等），已用游戏译名。由 `脚本/apply.py` 生成 |
| `表格/RG综合列表（4.3.14）修改对照.xlsx` | 4.2.0.1→4.3.14 的逐格修改记录和资料来源（改名前的叫法） |
| `表格/血统和种族升级.xlsx` | 用户另一张血统/阵营升级表 |
| `表格/旧版/` | `apply.py` 的输入（4.2.0.1 + 修正）和未改动的原表备份 |
| `攻略/` | R0 Beginner Guide 中文翻译、A0 和 A1 攻略要点（md + pdf） |
| `资料/` | 原始资料：官方 4.3+ 补丁说明、`A0 Guide.txt` 原文、Not a Wiki（`naw_*.txt`）、Fandom（`fandom/`）、`4.3.14更新笔记.md`（补丁说明行号索引）、汉化文本 tsv、各种核对报告 |
| `脚本/` | 表格更新脚本、程序界面生成（`build_html.py`）、发布（`publish.py`）；`脚本/site/` 是项目主页模板和截图 |
| `应用/` | 桌面程序：`rg_app.py`（窗口）、`content.py`（界面文件存放、本地服务）、`updater.py`（自动更新）、`ed25519.py`（验签）、`build_exe.py`、`auto_click.py`、`make_icon.py` |
| `工具/RG-tools/` | 社区工具站（存档编辑器、RWS、Lara Crypt）的本地克隆，自带 git，**不进 git**；「我的存档」用它的库 |
| `build/app/`、`build/site/`、`发布/RGA.exe`、`汉化/` | 生成物和汉化包，**不进 git**；界面文件不要手改 |
| `密钥/` | `sign.key`（更新清单签名私钥）、`content.key`（界面加密密钥），**不进 git，要另外备份**：丢了已装的程序就收不到更新 |

## 游戏译名

阵营、法术、术语**优先用 `资料/汉化文本（PC_日期）.tsv` 里的游戏译名**（取日期最新的一份，必要时括注英文）。查法：`grep -a -P "^英文名\t" 资料/汉化文本（PC_20261019）.tsv`（按英文排序，换行转义成 `\n`，复数用 `\0` 隔开）。

旧资料（Not a Wiki 中文、`sheetN.txt`、旧版表格、修改对照）叫法不同，常见：Fairy 仙灵（旧：妖精）、Goblin 地精（哥布林）、Undead 亡灵（不死族）、Makers 永衡族、Djinn 巨灵、Lineage 世系（先祖血脉）、Legacy 传承（遗承）、Unique Building 独特建筑、Artifact Set 遗物契印、Prestige 显赫（声望）、Trophy 奖杯（成就）、Excavation 考古、Royal Exchange 皇家贸易令、Reincarnation 重生。**Alignment 叫「立场」，Faction 叫「阵营」**（旧表用「阵营」指立场、「种族」指阵营）。fc、RE、UB、TC、R、A 之类缩写照旧。

## 资料可信度

1. 官方「Realm Grinder Update 4.3+ Patch notes」Google Doc（id `1xVXiP3R2WtRH9gwUfoo8mkKiYuQQgg8W8J6eMFcDNeQ`，`/export?format=txt`；本地 `资料/官方4.3+补丁说明.txt`）：4.3.0–4.3.11.1
2. Discord #announcements：4.3.12 以后
3. Not a Wiki（musicfamily.org/realm）：只到 4.2.10，只核对 4.3 没改过的内容
4. Fandom：只用来确认名称和位置

补丁说明本身有笔误（如卓尔挑战 3/4、仙灵 FR4/FR7 写混），矛盾时结合旧公式判断。

## 改表格

- 表格里有 WPS 单元格图片（`xl/cellimages.xml`）。**绝不能用 openpyxl 保存**，只能读。
- 改法：直接改 zip 里的 XML（sharedStrings 末尾追加 `<si>`，单元格指向新索引；缺的格子按行列序插入，更新 `<dimension>`）。合并单元格只写左上角。
- 保持原表风格：中文描述、不写公式、原表有数值就更新数值。
- 改完验证：XML 合法、改动格逐格读回、其他格不变、合并单元格和图片数量不变。
- `脚本/apply.py` 把 `edits_sheet*.py`（`{单元格: 新文本}`；研究表按代号写，经 `research.json` 换算）打到旧版表上，输出 4.3.14 版并调用 `rename.py` 换译名。**会覆盖 4.3.14 版**，用户在 WPS 手改过就先备份。
- `脚本/rename.py`：换游戏译名（规则在文件头和 `译名.py`）。**只能对没改过名的表跑一次**。
- 其他：`fetch.py`（抓网页）、`fandom.py`（下 wikitext）、`hanhua.py`（从汉化包 swf 导出 tsv，汉化包更新后重跑、换日期名存进 `资料/`）、`client_research.py`（从游戏 swf 的 ffdec pcode 导出研究存档 ID ↔ 代号 ↔ 英文名，存成 `资料/客户端研究对照.json`；这是研究 ID 的权威对照，社区库 util.js 和编辑器标签都有错）。

## 攻略

- 专名写成 `{类:名}`，十类：`阵` 阵营、`法` 法术、`升` 升级、`建` 建筑、`奖` 普通奖杯、`隐` 隐藏奖杯、`研` 研究、`挑` 挑战、`遗` 遗物、`模` 模板（build）。`阵` 照旧标，但不染色、不进图例（显示成普通文字）；红色给 `模`。按句意分类（「拿奖杯」标奖/隐，「买」「用」标升）；研究、升级代号也标（`{研:E300}`、`{升:UD1}`），血统+阵营组合（FCGB）不标。
- build 写成 `{模:显示文字|模板原名}`（原名见 `资料/A0-build-templates.json`、`A1-build-templates.json`），链接到程序里模板库的卡片（A1 佣兵研究 build 的佣兵、研究模板同名，链接到佣兵那张，卡片上再互链）；佣兵模板用攻略叫法时可省掉目标（`{模:横征暴敛 build}`，叫法见 `build_templates.py` 的 `MERC`）。
- **挑战一律写成「阵营挑战 n」**（`{挑:卓尔挑战 1}`），不用 DWC1 这类代号。
- A0 攻略要点据 `资料/A0 Guide.txt` 整理：只写要点，不缩小或改变原文适用范围，逐段核对语义；不加〔推断〕之类标注，原文笔误直接改正。
- `脚本/md2html.py <md> <html>` 转 HTML，再用 Edge 打 PDF：
  `msedge --headless=new --user-data-dir=<临时目录> --no-pdf-header-footer --print-to-pdf=<pdf> file:///<html>`
  （必须加 `--user-data-dir`；输出先写英文路径再复制，用户开着 PDF 时复制会失败。）改了攻略 md 要重新生成 PDF。

## 程序 RGA

用户只用程序，不单独打开网页，说明改动时说「程序里」。**改完不自动打包**，等用户说；打包前先关掉正在运行的 RGA。

- **生成**：`脚本/build_html.py [xlsx] [目录]` → `build/app/`（会列出没对上格子的专名，目前约 28 个，都是表里没有的东西）。界面拆成文件：`index.html` 外壳里的 `<!--#include pages/x.html-->` 由程序本地服务嵌入，`pages/` 每页一个，`js/`、`css/`，`img/` 是表格图标（按内容命名），`manifest.json` 列出版本和各文件。`应用/build_exe.py` 先跑它，再把界面加密成 `RGA.dat` 用 PyInstaller 打成 `发布/RGA.exe`（并写 `RGA.exe.json`；pywebview 装在用户目录，不能用 `python -I`）。
- **发布和自动更新**：`脚本/publish.py` 生成界面、加密成对象（文件名是 sha256，没改的文件不变）、写清单并用 `密钥/sign.key` 签名、生成主页，上传到 `ubuntu@124.222.182.40:~/workspace/pages/rga/`（Caddy 把 `yalosaws.com/rga/` 指到这里，配置在服务器 `~/workspace/ops/config/Caddyfile`）。只改了表格、攻略、界面就只跑 `publish.py`，已装的程序每 15 分钟检查、后台下载、提示「刷新」；改了 `应用/` 下的程序代码才要 `build_exe.py` 再 `publish.py --exe`，已装的程序会自动换 exe、提示「立即重启」。界面用到程序新功能时把 `updater.SHELL_API` 加一。**发布也算打包，等用户说。**
- **版本**：`build_html.py` 开头的 `VERSION`、`CHANGES`（当前 0.5.3；2026-10-22 合并过一次旧版本号）。版本号用 0.x，改了功能在 `CHANGES` 最前面那版里写一条（用户说合并进哪版就写进哪版）。版本页只放版本号和更新记录。**每次发布都要升版本号**：已装的程序只在线上版本号比自己高时才更新，同版本号重发收不到。
- **页面**：侧栏分工具（我的存档、法术预报、遗物预测）/ 攻略 / 资料表 / 关于。攻略里 R0 攻略和 A0、A1 攻略要点合成一页「攻略要点」（`#tips/r0`、`#tips/a0`、`#tips/a1`，图例最前面的切换胶囊平时只显示当前这篇，点开展开、选好收回；旧地址 `#r0`、`#a0`、`#a1` 会转过去）；模板库分 A0 / A1（`build_templates.py`，A1 的中文标签、说明和配对在 `a1_templates.py`）。遗物、隐藏奖杯、挑战、研究页是卡片（`card()`/`card_list()`），建筑升级页是「选建筑看一列」，其余工作表还是表格（用户在考虑换样式）。专名链接到表格格子，卡片说明里的专名按八类染色（`TERMS`，阵营和模板不染）。
- **已获得标记**：读到存档后 `save_tools.js` 发事件（`artowned`、`trophyowned`、`challengeowned`、`researchowned`、`guideunlocked`），卡片页显示「全部 / 已获得 / 未获得」胶囊和进度条（已获得蓝边带勾，未获得变灰，不加多余文字）；攻略图例有「已解锁」胶囊，开启后已解锁的链接变灰。只按存档里有依据的记录标，不猜。
- **我的存档**（`脚本/save_tools.py` + `save_tools.js` + `save_tools.html`）：嵌入 RG-tools 的库，中文只读。
  - 存档查看按编辑器分页显示；挑战分页、隐藏奖杯和遗物两段不显示（资料页已标出），自动施法分页暂时下线（`HIDE_TAB`/`HIDE_SEC`，数据仍保留给已获得标记用）。
  - 法术预报、遗物预测照搬 `rws/index.js`、`arch/index.js` 的计算，是侧栏「工具」里单独两页（`#rws`、`#arch`，代码仍在 save_tools 里），用「我的存档」读到的存档；旧地址 `#save/rws` 会转过去。`脚本/arch_fixes.js` 修正库里过时的遗物数据，库本身不改。
  - 名字翻译：`脚本/存档译名.py` → 游戏词典 → 汉化文本的统计标签。
- **桌面程序**（`应用/rg_app.py`）：pywebview 无边框窗口（标题栏是网页画的 `.appbar`：侧栏和卡片贴窗口边，窗口按钮是卡片右上角的小胶囊；拖动只认正好点在带 `pywebview-drag-region` 的元素本身（侧栏、菜单空白、内容区顶上一条），不显示图标和标题），打开时居中；只读本机存档 `%APPDATA%\com.kongregate.mobile.realmgrinder.air\Local Store\#SharedObjects\RealmGrinderDesktop.swf\realm-grinder.sol`，一直自动同步（每 10 秒检查，没有开关；存档时间显示在存档查看筛选框右边）。程序里只有 `main` 滚动，脚本读写滚动位置用 `rgScroller()`。localStorage 在 `%LOCALAPPDATA%\RGA`。调试：设 `WEBVIEW2_ADDITIONAL_BROWSER_ARGUMENTS=--remote-debugging-port=9333` 再启动，用 CDP 读页面。
- **自动点击**（`应用/auto_click.py`）：F8 启停，每 35 毫秒一次，只在前台是游戏窗口时点；没有设置页，热键和速度暂不可改（用户要求）。`应用/test_auto_click.py` 用模拟点击测试。
- **风格**（用户选定）：浅灰蓝底 `#f3f6fb` + 白色圆角卡片，悬浮圆角侧栏（纯文字），主色 `#2563eb`，**不用渐变**；颜色用 `:root` 变量。各页不显示标题；切换页面有淡入动画。

## 已知未解决

- 2025–2026 年活动新增的 feat 没有公开资料，未收录。
- 活动任务数值在 Not a Wiki 前后矛盾，保留原表数值。
- 4.3.9 研究改号后，R35–39 段放不下改号的研究，在代号格注明新代号和「解锁晚/早几个 R」（研究表 A40）。
- 遗物对数系数（掘现幻境、生命火花等）表格和社区库有出入，未裁定。
- 改过的表格还没在 WPS 里核对过显示效果。

## Discord 教程

官方 Discord #pre-ascension 置顶：Beginner Guide（已译）、full A0 Guide（原文 `资料/A0 Guide.txt`，要点 `攻略/A0攻略要点.md`）、Ascension 0 complete build package（A0Templates.txt，v4.3.11，游戏设置 → 导入模板）。

#ascension-1 置顶：没有成篇攻略，置顶和路线图原文 `资料/A1置顶原文.md`、`A1_plot.png`，频道经验 `资料/A1频道经验整理.md`，要点 `攻略/A1攻略要点.md`；模板包 `资料/A1Templates.txt`（v4.3.11.1，用户 2026-10-26 已导入游戏，替换了 A0 模板），提取成 `资料/A1-build-templates.json`。A2、A3 的入口见 `资料/A1-A3攻略来源索引.md`。
