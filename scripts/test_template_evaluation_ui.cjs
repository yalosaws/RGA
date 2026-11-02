/* 严格模板评测的可见行为：不补选显赫、失败不出分、完整性守卫及迟到结果。 */
const fs=require('node:fs'),vm=require('node:vm'),assert=require('node:assert/strict');
const nodes=new Map(),pending=[];
function node(id){if(!nodes.has(id))nodes.set(id,{value:'',textContent:'',innerHTML:'',dataset:{},hidden:false,disabled:false,
  className:'',classList:{toggle(){}},addEventListener(){},querySelectorAll(){return[];}});return nodes.get(id);}
node('ev-data').textContent=JSON.stringify([{kind:'research',name:'DNTT',structure:{alignment:'neutral',faction:'Titan',bloodline:'Dwarven',prestige:'Dragon'},research:'S30',merc:'',hint:'check'}]);
node('gl-goal').value='production';node('gl-limit').value='300';
const c={console,JSON,Math,Number,String,Date,Promise,setTimeout,clearTimeout,location:{hash:'#calc'},
  NodeFilter:{SHOW_TEXT:4},localStorage:{getItem(){return null;},setItem(){}},
  document:{readyState:'complete',getElementById:node,addEventListener(){},body:node('body'),documentElement:node('html'),
    createTreeWalker(){return{nextNode(){return null;}};},querySelectorAll(){return[];},querySelector(){return null;}},addEventListener(){},
  pywebview:{api:{build_calculate(request){return new Promise(resolve=>pending.push({request,resolve}));}}}};
c.window=c;vm.createContext(c);
vm.runInContext(fs.readFileSync(__dirname+'/build_tools_i18n.js','utf8'),c);
let source=fs.readFileSync(__dirname+'/build_tools.js','utf8').replace(/\}\)\(\);\s*$/,'window.evTest={state:state,controls:controls};})();');
vm.runInContext(source,c);
const flush=()=>new Promise(r=>setImmediate(r));
(async()=>{
 const st=c.evTest.state;st.loaded=true;st.revision='save1';c.evTest.controls();
 node('ev-preset').value='0';node('ev-preset').onchange();assert.equal(node('ev-prestige').value,'Dragon');
 node('ev-prestige').value='';node('ev-run').onclick();
 assert.equal(pending[0].request.plan.prestige,null);assert.equal(node('gl-goal').disabled,true);
 pending[0].resolve({ok:false,error:'S1450：缺龙族显赫',evaluation:{value:null,validated:false}});await flush();await flush();
 assert.match(node('ev-result').textContent,/评测失败/);assert.doesNotMatch(node('ev-result').textContent,/第 .*：/);
 node('ev-run').onclick();pending[1].resolve({ok:true,evaluation:{validated:false,value:999}});await flush();await flush();
 assert.match(node('ev-result').textContent,/未完整执行/);assert.doesNotMatch(node('ev-result').textContent,/999/);
 const success={ok:true,evaluation:{validated:true,value:123,horizon:300,plan:{research:['S30'],merc:[],merc_spells:[]},environment:{policy:'cached_schedule'}}};
 node('ev-run').onclick();st.generation++;pending[2].resolve(success);await flush();await flush();
 assert.match(node('ev-result').textContent,/存档已更新/);assert.doesNotMatch(node('ev-result').textContent,/123/);
 node('ev-run').onclick();pending[3].resolve(success);await flush();await flush();assert.match(node('ev-result').textContent,/123/);assert.match(node('ev-result').textContent,/全部买齐/);
 assert.equal(st.evaluating,false);assert.equal(node('gl-goal').disabled,false); // 与未搜索状态一致，可编辑。
 console.log('严格模板界面：显赫不补选、失败不出分、完整性守卫、迟到结果及成功展示通过');
})().catch(e=>{console.error(e);process.exitCode=1;});
