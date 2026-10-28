# 接手说明：从游戏客户端还原产出算法

给临时接手这条线的人。先读项目根目录的 `CLAUDE.md`，规则优先。**用中文和用户交流。**

本会话完整交付总览、源码清单、复跑步骤和后续待办，统一见 [本会话交付文档（20261029）](<C:/Users/yalosaws/Desktop/realm grinder/资料/本会话交付文档（20261029）.md>)。

> **实时接入最新进度：**《实时计算快照接入与验证（20261028）》记录了构筑界面接入、实时研究/升级/统计采集、客户端缓存和帧时钟、持续法术与一次游戏重启验证。下文“尚未改界面”等为早期记录，已由后续实现更新；连续增长模拟仍未完成。

> **2026-10-28 最新进度以 `客户端一致性核对（20261028）.md` 为准。** 本轮已完成 4,193 个方法用例和 2,975 个存档字段的对照，修复反编译遗漏的读取及多项 AS3 语义差异。下面 2026-10-27 的截图差异、版本差异推测和运行方式有后续修正，不能直接当作最终结论。重新生成必须关联同一 SWF 的 pcode，见新报告的完整命令。

## 一、规则（来自 CLAUDE.md，别违反）

- 不自动打包、不发布。要打包或发布，等用户明确说。
- 界面文件（`build/app/` 等生成物）不要手改。
- 绝不能用 openpyxl 保存 xlsx，只能读。
- 说明改动时说「程序里」，不说「网页」。
- 没有用户要求不要提交 git。

## 二、这条线在做什么

用户想在程序里做一个辅助构筑 build 的功能：能查升级加成、同类加成升级，并按当前存档算加成、模拟增长。没有找到成熟的现成项目，所以走「从游戏客户端（swf）还原真实算法」的路线。

## 三、已经做完的

1. **导出代码**：用 ffdec 导出 pcode 和 AS3。ffdec 在 `build/ffdec-26.4.0/`，必须加 `-config autoDeobfuscate=1,simplifyExpressions=1,decompilationTimeoutSingleMethod=90`，否则假分支太多、核心类有 6 个方法反编译失败。导出的 AS3 保留混淆名，一份副本在 `build/game-as3-deobf/scripts`。
2. **提取公式和规则表**
   - 脚本：`脚本/game_effects.py`、`pcode_sym.py`、`prod_model.py`、`readable_core.py`、`rules_extract.py`、`spell_list.py`。
   - 产物：`资料/客户端规则表（4.3.14）.tsv`、`资料/无统一加成方法的研究（4.3.14）.tsv`、`资料/法术清单（客户端4.3.14）.tsv`。
   - 算法文档：`资料/游戏产出算法（客户端4.3.14）.md`（算法结构、建筑表、混淆字段含义都在里面）。
3. **资料核对**：261 个研究的代号、英文名与游戏一致；3 个拼写已改成游戏写法（Mirrors、Gray Friday、Revelations），表格改前的备份在 `表格/备份/`。
4. **AS3→Python 转写器**，让游戏自己的函数在 Python 里跑：
   - `脚本/as2py.py`：转写。
   - `脚本/as_runtime.py`：运行时，AS3 的数值、数组、对象语义，加界面库的「桩」（任何调用都返回自己、当作假值）。
   - `脚本/rg_sim.py`：读存档并算数值。

### 怎么跑

重新生成（几十秒）：

```
python -I 脚本/as2py.py build/game-as3-deobf/scripts build/rg_game.py
```

运行并输出各项数值（Windows 控制台要先设 `PYTHONIOENCODING=utf-8`）：

```
python -I 脚本/rg_sim.py build/rg_game.py
```

它会建好游戏对象（25 栋建筑、2058 个升级），读本机存档
`%APPDATA%\com.kongregate.mobile.realmgrinder.air\Local Store\#SharedObjects\RealmGrinderDesktop.swf\realm-grinder.sol`，
经游戏自己的解码函数（base64 → zlib → 异或 → CRC 校验）读入，再调游戏自己的函数输出产出、魔力、回魔、点击、助手、各建筑产出等。

## 四、产出差距已定位（2026-10-27 接手更新）

**原来的约 1700 倍差距来自比较口径，不是皇家贸易令漏乘。**

`getProductionPerSecondReal()` 只算建筑收入；客户端底栏和统计显示的总产出还要加助手收入：

```
建筑产出/秒 = Core.getProductionPerSecondReal()
助手收入/秒 = Core.getAssistantsMultiplier()
              × Core.getAssistantResourcePerClick()
              × Core.getAssistantsNum()
总产出/秒 = 建筑产出/秒 + 助手收入/秒
```

源码证据：`§"#§/§=!R§.as` 的 `§6z§()`、`§4&§/§1F§.as` 的 `§!!G§()`，以及 `Game.onTreasureClick()` 的助手分支。助手点击奖励来自 `getResourcePerClickReal(true)`，不能一律用玩家点击值。

`rg_sim.py` 已加 `production(ns)`，报告分别输出总产出、建筑产出和助手收入。接手时一轮对照：游戏底栏 `5.384e44/s`，原汉化包计算 `5.39218e44/s`（差约 0.15%）；同一存档用实际安装 SWF 导出的代码算 `5.43179e44/s`（差约 0.89%）。这证明主要数量级差距已解决，**不是已完成同帧、逐项精确校准**；画面与磁盘自动存档有时间差，法术也在变化。最大法力、回魔、助手数的小差异仍需同步存档再核对，不再沿用“对得上”的结论。

以下是接手前的历史对照，保留供追溯：

用户在游戏里的实际显示（截图）：

| 项目 | 游戏显示 |
|---|---|
| 产出/秒 | 3.959e44 |
| 法力 | 19277 / 42383 |
| 回魔/秒 | 20637 |
| 重生次数 | 第 44 次（Ascension 1） |
| 建筑数量 | Farm 3723、Inn 3638、Blacksmith 3585 |
| 产出占比 | 邪恶要塞 67.7%、传说圣殿 30.2%、焚烬之域 1.10% |

转写结果：

| 项目 | 我们算的 | 结论 |
|---|---|---|
| 最大魔力 | 42551 | 对得上 |
| 回魔/秒 | 20040 | 对得上 |
| 各建筑数量 | 3723 / 3638 / 3585 … | 对得上 |
| 各建筑产出占比 | 与游戏一致（邪恶要塞约 68.6%、传说圣殿约 30.6%） | 对得上 |
| **总产出/秒** | **约 2.27e41** | **比游戏低约 1700 倍** |

说明建筑层的算法、升级和法术状态的读取基本是对的，问题在总产出的全局乘区。调试数据：每 tick 建筑产出之和 1.91e18，全局乘区 9.27e19，皇家贸易令倍率 5.43。

### 接手前的排查建议（已被上面的结论更新）

- 看 `getExchangeBonus`、`getExchangeBase`、`Stats.getExchange` 以及相关统计数组（`Game.5!V` 等），怀疑皇家贸易令的计算偏小。
- 逐个检查 `getProductionPerTickReal` 里条件为假、但本应为真的乘区（条件文本见 `资料/客户端规则表（4.3.14）.tsv`）。
- 游戏在自动买东西，存档和屏幕有时间差。对比时尽量同一时刻读存档和截图。

## 五、关键对象的转写名

`§X§` 会被转成 `S_` 加十六进制转义。真名和混淆名的对照在 `build/member-names.json`，`rg_sim._real2obf(类名)` 可以查。

| 对象 | 转写名 |
|---|---|
| Game | `S_8G` |
| Stats | `S__26_c` |
| Core（核心计算） | `S__23__21__21_` |
| 存档 SharedObject 包装类 | `S_2_21_c` |
| Game.initialize | `S__5b__21_C` |
| Game.load | `S__25_R` |
| 建筑列表 | `S__25__3c_` |
| 升级列表 | `S__2d__21_4` |
| 法术列表 | `S_0_21_A` |
| 建筑数量字段 | `S__21_a` |
| 升级已拥有字段 | `S__3c__21_7` |
| 名称字段 | `S_1i` |

## 六、踩过的坑

- 往 bash 里写带反斜杠、`\x00`、三引号的 Python 补丁，转义会被吃掉或变成真空字符。改文件用 Edit/Write 工具，别用 heredoc。
- Windows 控制台是 GBK，运行脚本要加 `PYTHONIOENCODING=utf-8`。
- 类名里带空格的类（如 `§6! §`）曾被漏掉，已修。改正则时注意。
- 界面库（starling、feathers、mx）和联网/平台类（com/playfab、com/kongregate、com/divinegames、com/gestouch、com/ironsource）不转写。含 `[SWF(` 的 Main 类和含 `CDATA[` 的文件也跳过，否则初始化会进到界面代码里崩。
- 转写语义已处理、改转写器时别破坏：实例字段的常量初值是槽默认值（不在构造函数里执行，子类先赋值再 `super()` 不会被覆盖）；静态 getter 不被子类继承（元类上的 `StaticProp`）；返回类型 `int`/`uint` 要转换（CRC 校验靠这个）；`%`、`/`、32 位回绕、带标签的 break/continue、switch 落空、`Math.pow` 溢出。
- 游戏类 `Game` 继承自界面库的 `Sprite`（桩）；同名的类名和成员名冲突时，类名优先。

## 七、还没做的

- 做同帧/同一导出存档的精确校准，尤其最大魔力、回魔和助手数；历史截图不是严格基准。
- 持续时间增长模拟：自动建造、自动施法、随机事件、法术到期、缓存和相互依赖尚未完成。**即时动作模拟已完成**，见 `脚本/rg_growth.py`，可以调用游戏原函数买建筑、买升级、施法，输出动作前后比较。
- 法术辅助调用的语义整理：`脚本/spell_effects.py` 已把 32 个法术及公共基类的 `onEffect` 原文和可读名版本导出到 `资料/法术施放动作（客户端4.3.14）.json`，保留条件、循环、顺序；辅助方法未递归展开，不可把它当完整的长期法术收益表。
- 程序界面接入：具体方案见 `资料/构筑辅助功能接入方案.md`，尚未改界面，待用户看方案。

### 本轮新增的运行方式与修复

```
python -X utf8 -I 脚本/rg_sim.py build/rg_installed_game.py
python -X utf8 -I 脚本/rg_growth.py build/rg_installed_game.py --building Farm --count 10
python -X utf8 -I 脚本/rg_growth.py build/rg_installed_game.py --upgrade 545020
python -X utf8 -I 脚本/rg_growth.py build/rg_installed_game.py --spell "Tax Collection"
python -X utf8 -I 脚本/test_rg_sim.py build/rg_installed_game.py build/production-check3.sol
```

- 实际安装的 SWF：`D:/steam/steamapps/common/Realm Grinder/RealmGrinderDesktop.swf`。导出到 `build/installed-as3-deobf/scripts`，转写到 `build/rg_installed_game.py`；原汉化包导出没有覆盖。1882 个文件解析成功，11 个资源/翻译文件解析失败，类生成失败 0。
- 已安装 SWF 与原汉化包并非字节相同；核心类发现一处最大魔力分支差异，其他类也不应假定完全相同。核对时明确使用哪个模块，旧规则表未全部重导核对。
- `make_game()` 默认跳过载入时的离线补算，保留存档时刻；需要原载入行为可传 `offline=True`。这不冻结所有日历/真实时间函数，不等于完整确定性模拟。
- `_real2obf()` 修复未混淆的方法名映射（如 `useSpell`）；此前误写成 `S_useSpell` 会被 Game 继承的界面桩吞掉，导致动作悄悄失效。模拟动作入口现在显式检查方法存在。
- `rg_growth.Simulation` 在独立命名空间操作内存副本，SharedObject 不落盘；建筑单买模式不会沿用存档的“买最大”，仍检查费用；升级不会顺带购买同组下一项；施法检查可见性。
- 两套生成模块分别通过 8 项集成回归（合计 16 次）：总产出口径、助手奖励来源、重复读取一致、单栋购买及扣费、金币不足、征税扣魔及收益、法力不足、升级购买/防重复、会话隔离（部分检查合并在同一测试中）。测试显式把存档购买模式设成“买最大”，验证指定购买一栋仍只买一栋并恢复原模式；该模式是 Game 的静态字段，不能写到实例上。测试输入存档字节保持不变。

## 八、未提交的文件（都在工作区，没提交 git）

- `脚本/`：`as2py.py`、`as_runtime.py`、`rg_sim.py`、`game_effects.py`、`pcode_sym.py`、`prod_model.py`、`readable_core.py`、`rules_extract.py`、`spell_list.py`。
- `资料/`：三个 tsv、`游戏产出算法（客户端4.3.14）.md`、本文件。
- `表格/备份/`。
- `脚本/build_html.py` 的改动是用户之前就有的，别动。
- 规则表和算法文档里有反编译出的游戏公式。仓库如果会公开，先问用户要不要提交。
