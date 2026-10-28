/* 用实际接收函数验证初次读取与文件推送交错，不加载整套存档界面。 */
const fs = require('node:fs');
const vm = require('node:vm');
const assert = require('node:assert/strict');
const path = require('node:path');
const source = fs.readFileSync(path.join(__dirname, 'save_tools.js'), 'utf8');
const start = source.indexOf('  function acceptGame(');
const end = source.indexOf("  if (document.readyState", start);
assert(start > 0 && end > start);
let renders = 0, errors = 0;
const context = {
  app: {mtime: 0, version: null, sequence: 0}, cur: null,
  msg() { errors++; }, showWhen() {},
  use(save) {
    if (save === 'invalid') return false;
    renders++;
    context.cur = {str: save};
    return true;
  }
};
vm.createContext(context);
vm.runInContext(source.slice(start, end), context);
const result = (sequence, save = 'save-' + sequence) => ({ok: true, sequence, save, version: 'v' + sequence, mtime: sequence * 1000});
context.acceptGame(result(2), false);
context.acceptGame(result(1), true); // 初次读取较晚返回，不能回退到旧存档。
assert.equal(context.cur.str, 'save-2');
assert.equal(renders, 1);
context.acceptGame(result(2), false); // 重复通知不能重复解码/渲染。
context.acceptGame(result(2), true); // 同一版本的初次读取与推送也要合并。
assert.equal(renders, 1);
context.acceptGame({ok: false, error: 'older initial request failed'}, true);
assert.equal(errors, 0); // 已有新的有效快照时，旧请求的失败也不能覆盖界面状态。
context.acceptGame(result(3, 'invalid'), false);
assert.equal(context.app.mtime, 2000);
assert.equal(context.app.sequence, 2);
context.acceptGame(result(3), false);
assert.equal(context.cur.str, 'save-3');
assert.equal(renders, 2);
console.log('存档推送：顺序、重复通知、解码失败回滚与恢复均通过');
