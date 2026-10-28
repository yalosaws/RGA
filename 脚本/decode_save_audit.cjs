// 使用程序现有的 savecodec2 做独立存档交叉核对，不修改原库或存档。
// node 脚本/decode_save_audit.cjs input.sol output.json
const fs = require('fs');
const vm = require('vm');
const zlib = require('zlib');
const path = require('path');
const input = fs.readFileSync(process.argv[2]).toString('latin1');
const saves = input.match(/\$\d{2}s[A-Za-z0-9+/=]+\$e/g);
if (!saves?.length) throw new Error('存档文件中没有找到编码字符串');
saves.sort((a, b) => b.length - a.length);
const trace = [], warnings = [];
let src = fs.readFileSync(path.join(__dirname, '..', '工具', 'RG-tools', 'lib', 'savecodec2.js'), 'utf8');
src = src.replace('key[0][key[1]] = this.parseValue(item.format);',
  'trace.push({key:item.key, position:this.position, format:item.format}); key[0][key[1]] = this.parseValue(item.format);');
const box = {window: {}, document: {}, jQuery: {}, trace, atob, btoa,
  pako: {inflate: x => new Uint8Array(zlib.inflateSync(Buffer.from(x)))},
  alert: text => warnings.push(text)};
vm.runInNewContext(src, box);
const decoded = box.window.SaveHandler.Decode(saves[0]);
fs.writeFileSync(process.argv[3], JSON.stringify({decoded, trace, warnings}, null, 2));
console.log(JSON.stringify({version: decoded.saveVersion, fields: trace.length, warnings: warnings.length}));
