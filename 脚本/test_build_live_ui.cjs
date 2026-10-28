/* 用实际构筑脚本验证实时快照与存档推送交错、离页和失败路径。 */
const fs=require('node:fs'),vm=require('node:vm'),assert=require('node:assert/strict'),path=require('node:path');
const nodes=new Map(),events={};
function el(id){if(!nodes.has(id))nodes.set(id,{value:'',innerHTML:'',textContent:'',hidden:false,disabled:false,dataset:{},classList:{toggle(){}},addEventListener(){},querySelectorAll(){return[];},scrollIntoView(){}});return nodes.get(id);}
el('bt-kind').value='building';el('bt-target').value='building:9';el('bt-quantity').value='1';
let pending=[],loads=[],closed=0;
const context={Promise,Date,Number,String,Math,JSON,console,setTimeout,clearTimeout,
 location:{hash:'#calc'},document:{readyState:'complete',hidden:false,getElementById:el,querySelectorAll(){return[];},querySelector(){return el('origin');},addEventListener(n,f){events['doc:'+n]=f;}},
 addEventListener(n,f){events[n]=f;},pywebview:{api:{build_live(action){return new Promise((resolve,reject)=>pending.push({action,resolve,reject}));},
 build_calculate(request){loads.push(request);return Promise.resolve(payload());},close_live(){closed++;return Promise.resolve();}}}};
context.window=context;vm.createContext(context);vm.runInContext(fs.readFileSync(path.join(__dirname,'build_tools.js'),'utf8'),context);
const flush=()=>new Promise(resolve=>setImmediate(resolve));
const farm={key:'building:9',sid:'9',kind:'building',name:'Farm',zh:'农场',labels:[],action_allowed:true};
function payload(revision='live1'){return {ok:true,revision,timestamp:1,source:'游戏实时快照',source_hash:'hash',scope:'live',live:{pid:1},catalog:[farm],snapshot:{total:10,buildings:10,assistants:0,assistant_count:0,max_mana:50,mana:20}};}
(async()=>{
 assert.equal(pending.length,0);
 el('bt-live').onclick();assert.equal(pending.length,1);assert.equal(el('bt-live').disabled,true);
 events.rgcalculationsave({detail:{save:'new-disk',timestamp:1}});
 pending[0].resolve(payload());await flush();await flush();
 assert.match(el('bt-status').textContent,/游戏快照/);assert.equal(loads.length,0);
 el('bt-target').value='building:9';el('bt-run').onclick();assert.equal(pending[1].action.key,'building:9');
 events.rgcalculationsave({detail:{save:'newer-disk',timestamp:2}});
 let result=payload('live2');result.comparison={success:true,before:result.snapshot,after:{...result.snapshot,total:11,coins:10,mana:20},production_ratio:1.1,action:{purchased:1,requested:1}};
 pending[1].resolve(result);await flush();await flush();assert.match(el('bt-result').innerHTML,/下一次试算会重新读取游戏/);
 el('bt-live').onclick();context.location.hash='#save';events.hashchange();pending[2].resolve(payload('late'));
 await flush();await flush();assert.equal(closed,1);assert.equal(el('bt-run').disabled,true);assert.match(el('bt-status').textContent,/停止/);
 context.location.hash='#calc';events.hashchange();assert.equal(pending.length,3);
 el('bt-live').onclick();pending[3].reject(new Error('game exited'));await flush();await flush();
 assert.equal(el('bt-run').disabled,true);assert.match(el('bt-error').textContent,/game exited/);assert.equal(loads.length,0);
 el('bt-refresh').onclick();await flush();await flush();assert.equal(loads[0].save,'newer-disk');
 console.log('实时构筑：独立来源、试算前刷新、推送交错、离页取消、迟到响应和失败无回退均通过');
})().catch(error=>{console.error(error);process.exitCode=1;});
