# A0 模板库数据

`A0-build-templates.json` 是 2026-10-23 从用户游戏本地 `rg-tp.sol` 提取的已导入模板：7 条佣兵、21 条研究。保存原名与原配置，不把模板来源或版本视为已经核实的事实；没有收录临时的 RGA 测试模板。

另外补了一条游戏里没有的研究模板 `R18 ANC3`（天使挑战 3），研究组合照抄 `docs/A0 Guide.txt` 的 R18 段（ANC3 那一行），2026-10-23 加入。

其中两条研究分类中的 `S1` 是提醒占位，页面显示为提示，不提供添加和复制操作：

- R26-28: get 3.2e6 mana with mercs
- R24+ Note: maxing excavs? use E270!

R 范围、血统、阵营和立场取自模板名称；血统在前、阵营在后的组合记号依据 `guides/A0攻略要点.md` 的记号说明。未标明 R 的佣兵模板不会被 R 筛选隐藏。Necro Lightning 的前置说明依据 `docs/A0 Guide.txt` 的对应段落。

生成入口为 `scripts/build_templates.py`，界面与交互为 `scripts/build_templates.html`。升级和研究链接使用现有资料索引。原始配置没有自动改号或推测补齐，适用性应结合攻略与当前游戏解锁情况判断。

桌面接口在 `app/template_store.py`：仅写模板文件，不购买游戏升级。相同配置不重复写入，同名不同配置另存；每次写入前在游戏模板文件旁的 `RGA-template-backups` 备份原文件，并验证解码后的全部旧记录保持不变。游戏与程序之间没有跨进程锁，写入前后都检查文件冲突，失败时在页面提示。

## A1 模板

`A1-build-templates.json` 是 2026-10-26 从用户游戏本地 `rg-tp.sol` 提取的：用户导入了 Discord #ascension-1 置顶的 `A1Templates.txt`（v4.3.11.1），游戏里原来的 A0 模板被替换，现有 15 条佣兵、52 条研究，名字和配置与 `A1Templates.txt` 逐条一致。

- 研究分类里 4 条 `S1` 是提醒占位（`(delete them after their R range)`、两条 R65、一条 R75），页面显示为提示。
- 佣兵研究 build 由同名的佣兵模板和研究模板组成（R75 起），卡片互相链接；`R77-80 E-GB-FR` 的佣兵模板对应 `R77-78`、`R79-80` 两条研究。龙族挑战 2 是先用佣兵 `R56 G-DD`，再换研究 `R56 DGDD (DGC2 V1 - check mercs!)`。`R75 N-GB`、`R75 N-DN`（解锁佣兵研究）只有佣兵模板。
- 中文标题、用途标签和说明在 `scripts/a1_templates.py`，据 `guides/A1攻略要点.md` 和 `docs/A1置顶原文.md`。模板包和原帖不一致的地方（如 `R85-89 N-DG-UD` 模板写 DN4、原帖写 DM4）在说明里注明，配置本身照原样保留。
- 置顶里的 `R60+ Autoclicker Trophy` 不在模板包里，2026-10-30 照置顶原帖补进 JSON 的佣兵部分（放在 R56 G-DD 后面），名字写成 `R60+ Autoclicker Trophy (Elfline Neutral Merc)`，配置照抄原帖；中文标题在 `a1_templates.py` 的 `TITLE`。
