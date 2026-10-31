/* 使用实际界面脚本验证停止/离页和迟到结果，不读取任何进程。 */
const fs = require('node:fs'), vm = require('node:vm'), assert = require('node:assert/strict'), path = require('node:path');
const elements = new Map(), listeners = {};
const element = id => { if (!elements.has(id)) elements.set(id,{textContent:'',innerHTML:'',hidden:false,disabled:false}); return elements.get(id); };
let reads = [], closes = 0, scheduled = [];
const api = {
  read_live() { return new Promise(resolve => reads.push(resolve)); },
  close_live() { closes++; return Promise.resolve(true); }
};
const context = {
  console, Promise, Date, Number, String, Math,
  location: {hash:'#live'},
  document: {readyState:'complete', hidden:false, getElementById:element, addEventListener:(name,fn)=>listeners['document:'+name]=fn},
  pywebview: {api},
  addEventListener:(name,fn)=>listeners[name]=fn,
  setTimeout(fn) { scheduled.push(fn); return scheduled.length; },
  clearTimeout(id) { if (id) scheduled[id-1] = null; }
};
context.window = context;
vm.createContext(context);
vm.runInContext(fs.readFileSync(path.join(__dirname,'live_tools.js'),'utf8'),context);
const flush = () => new Promise(resolve=>setImmediate(resolve));
const sample = {ok:true,gold:1234,mana:50,buildings:[{name:'Farm',quantity:10}],spells:[],observed_at:1,read_ms:6,swf_sha256:'verified',consistency:'per-field'};
(async()=>{
  assert.equal(reads.length,0); // 默认不启动持续读取。
  element('lv-toggle').onclick();
  assert.equal(reads.length,1);
  element('lv-toggle').onclick(); // 在首次定位返回前停止。
  reads[0](sample);
  await flush(); await flush();
  assert.equal(element('lv-gold').textContent,'—');
  assert.equal(element('lv-toggle').textContent,'开始读取');
  assert.equal(scheduled.filter(Boolean).length,0);
  assert.equal(closes,1);
  element('lv-toggle').onclick(); reads[1](sample);
  await flush();
  assert.equal(element('lv-mana').textContent,'50');
  assert.equal(scheduled.filter(Boolean).length,1);
  context.location.hash='#calc'; listeners.hashchange();
  await flush();
  assert.equal(closes,2);
  assert.equal(scheduled.filter(Boolean).length,0);
  assert.match(element('lv-status').textContent,/停止/);
  console.log('实时读数：默认关闭、停止后忽略迟到结果、单次轮询和离页关闭均通过');
})().catch(error=>{console.error(error);process.exitCode=1;});
