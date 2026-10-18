# Realm Grinder 资料库

用户在玩 Realm Grinder（Steam app 610080），这里存放用户自己维护的中文资料：综合列表表格、攻略翻译和整理资料时用的脚本。**用中文和用户交流。**

**这个文件夹主要是给 Claude 读的**：它是 Claude 回答用户 Realm Grinder 问题时的资料库，不是给人浏览的成品。用户问游戏里的升级、奖杯、研究、挑战、法术、攻略步骤等问题时，先在这里查（`资料/` 的原始资料、`表格/` 的综合列表、`攻略/` 的翻译），再结合下面的可信度顺序作答，不要凭记忆回答；查不到或资料过时的，要说明并去官方补丁说明或 Discord 核实。新查到的可靠资料也存进 `资料/`，方便以后再用。

## 目录结构

| 路径 | 内容 |
|---|---|
| `表格/RG综合列表（4.3.14）.xlsx` | **当前版本**的综合列表，10 个工作表：种族升级/遗产/UB/血统/lineage/套装/法术、遗承组合、挑战、UB 分布、研究、建筑升级、隐藏成就、活动、遗物 |
| `表格/RG综合列表（4.3.14）修改对照.xlsx` | 从 4.2.0.1 更新到 4.3.14 的 882 处修改（逐格原内容→新内容），第二页列了资料来源和未能核实的项目 |
| `表格/血统和种族升级.xlsx` | 用户的另一张血统/种族升级表 |
| `表格/旧版/RG综合列表（4.2.0.1）.xlsx` | `脚本/apply.py` 的输入：原表加上第一次修的 8 处隐藏成就（其中几处后来在 4.3.14 版里又按新数据改过） |
| `表格/旧版/RG综合列表（4.2.0.1）_修改前备份.xlsx` | 用户下载来的原始 4.2.0.1 表，未经任何修改 |
| `攻略/` | Discord #pre-ascension 置顶 Beginner Guide（作者 ensteffahn）的中文翻译，md + pdf |
| `脚本/` | 表格更新脚本，见下文 |
| `资料/` | 抓取的原始资料：`A0 Guide.txt`（Discord 置顶 full A0 Guide 英文原文，用户下载；`攻略/A0攻略要点.md` 据此整理）、官方 4.3+ 补丁说明、Not a Wiki 页面（`naw_*.txt`）、Fandom wikitext（`fandom/`）、changelog、旧表各工作表的文本导出（`sheetN.txt`）、`4.3.14更新笔记.md`（含补丁说明各段行号索引） |
| `汉化/` | 游戏汉化包（PC 解压版 + PC/安卓 rar），体积大，**不进 git** |

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

- `脚本/apply.py`：读取 `edits_sheet*.py`（每个文件是 `{单元格: 新文本}` 字典；研究表 `edits_sheet5.py` 按研究代号编写，结合 `research.json` 换算成单元格），把 `表格/旧版/RG综合列表（4.2.0.1）.xlsx` 打补丁后写到 `表格/RG综合列表（4.3.14）.xlsx`。**运行会覆盖 4.3.14 版**；如果用户在 WPS 里手动改过 4.3.14 版，先备份或改 `DST`。
- `脚本/fetch.py <url> <输出>`：抓网页转纯文本（当初用来抓 Not a Wiki）。
- `脚本/fandom.py <页面名...>`：通过 Fandom API 下载 wikitext 到 `资料/fandom/`。
- `脚本/md2html.py <md> <html>`：把攻略 md 转成带样式的 HTML，再用 Edge 打印成 PDF：
  `msedge --headless=new --no-pdf-header-footer --print-to-pdf=<pdf> file:///<html>`

## 已知未解决项

- 2025–2026 年各次活动新增的 feat 没有公开资料，没有收录（活动表 A75 有注明）。
- 活动任务数值在 Not a Wiki 里前后矛盾，保留了原表数值。
- 4.3.9 研究重新编号后，原表 600–780 RP 那一段（R35–39）只有一列，放不下改号的研究：研究格保留在原位，在代号格里注明新代号和"解锁晚/早几个 R"（研究表 A40 有说明）。
- 修改后的表格还没有在 WPS 里打开核对过显示效果。

## Discord 上的教程

官方 Discord #pre-ascension 置顶还有：**full A0 Guide**（逐个 R 讲解到 R39；原文在 `资料/A0 Guide.txt`，中文要点在 `攻略/A0攻略要点.md`（md + pdf）。攻略只整理要点、不做整篇逐句翻译，回答细节问题时对照原文。整理时不能缩小或改变原文的适用范围；原文没直接写的推论标〔推断〕，原文含糊或笔误标〔原文：…〕），以及 **Ascension 0 complete build package**（A0Templates.txt，适配 v4.3.11，在游戏设置 → Import Templates 导入）。
