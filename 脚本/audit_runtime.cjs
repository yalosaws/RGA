// Offline inspection of the same community library embedded in RGA. Never reads game saves.
const fs = require('node:fs');
const path = require('node:path');
const vm = require('node:vm');
const root = path.resolve(__dirname, '..');
const out = path.join(root, 'build', 'audit');
fs.mkdirSync(out, { recursive: true });
const context = { console, document: {}, jQuery: null };
context.window = context;
vm.createContext(context);
for (const file of ['lib/util.js', 'arch/artifacts.js', 'lib/pmprng.js']) {
  vm.runInContext(fs.readFileSync(path.join(root, '工具', 'RG-tools', file), 'utf8'), context, {filename:file});
}
const meta = context.Artifacts.map(a => Object.fromEntries(Object.entries(a).map(([k,v]) => [k, typeof v === 'function' ? String(v) : v])));
fs.writeFileSync(path.join(out, 'artifact-metadata.json'), JSON.stringify(meta, null, 2));
const functions = Object.fromEntries(Object.entries(context.util.save).filter(([,v])=>typeof v==='function').map(([k,v])=>[k,String(v)]));
fs.writeFileSync(path.join(out, 'util-functions.json'), JSON.stringify(functions, null, 2));
console.log(JSON.stringify({artifacts:meta.length,saveFunctions:Object.keys(functions).length,constants:Object.fromEntries(Object.entries(functions).filter(([,v])=>/^function\([^)]*\)\s*\{\s*return \d+;\s*\}$/.test(v)))},null,2));
if(process.argv.includes('--metadata-only'))process.exit(0);

// Deliberately synthetic data: no user's save is decoded or persisted.
function makeSave() {
  return {reincarnation:130,ascension:2,faction:2,alignment:1,secondaryAlignment:4,prestigeFaction:-1,elitePrestigeFaction:-1,
    upgrades:{},trophies:{},excavations:6000,gems:1e80,consecutiveDays:7,artifactRngState:123456,
    stats:Array.from({length:200},()=>({stats:100000,statsReset:200000,statsRei:300000})),
    buildings:Object.fromEntries(Array.from({length:30},(_,id)=>[id,{id,q:5000,t:7000,r:10000,m:7000,e:10000}])),
    spells:Object.fromEntries(Array.from({length:40},(_,id)=>[id,{id,s:123456,c:100,r:200,e:300,active0:1000,active1:2000,active2:3000,activeTiers:0,a:false}])),
    lineageLevels:Array.from({length:16},()=>({lev:10})),lineageFaction:-1,combinationBL:-1,mercSpell1:-1,mercSpell2:-1};
}
const save = makeSave();
const invalid = [];
for (const a of context.Artifacts.filter(a=>a.random)) {
  try { const value=a.random(save); if (!Number.isFinite(value) || value<0) invalid.push({name:a.name,value:String(value)}); }
  catch(e) { invalid.push({name:a.name,error:e.message}); }
}
const dependencies = Object.fromEntries(['assistants','re_bonus','fc_chance','max_mana'].map(k=>[k,meta.filter(a=>Object.values(a).some(v=>typeof v==='string' && v.includes('util.save.'+k+'('))).map(a=>a.name)]));
const numerical=[];
function compare(name,expected){const a=context.Artifacts.find(x=>x.name===name); const actual=a.random(save); numerical.push({name,actual,expected,expectedSource:'current workbook formula; see audit report for authoritative-source adjudication',ratio:actual/expected,ok:Math.abs(actual-expected)<=1e-12*Math.max(1,Math.abs(expected))});}
compare('Second Crystal Fragment',Math.log1p(context.util.save.faction_coins(save))**3 / 5e9);
compare('Third Crystal Fragment',Object.values(save.spells).filter(p=>[1,8,15,11,4].includes(p.id)).reduce((n,p)=>n+p.c+p.r,0)/6.6e9);
compare('Second Stone Fragment',context.util.save.total_buildings(save)/1e9);
compare('Excavated Mirage',Math.log(context.util.save.fc_chance(save))/10000);
compare('Poison Vial',100*context.util.save.combo_strike_counter(save)**0.9/1e9);
const uiNodes = new Map();
const fakeNode = id => {if(!uiNodes.has(id))uiNodes.set(id,{innerHTML:'',addEventListener(){},value:'100',dataset:{},checked:false,clientWidth:800,getContext:()=>({scale(){},clearRect(){},beginPath(){},moveTo(){},lineTo(){},stroke(){},fillText(){},arc(){},fill(){}})}); return uiNodes.get(id);};
context.document={readyState:'loading',addEventListener(){},getElementById:fakeNode};
context.addEventListener=()=>{};
const events=[];
context.dispatchEvent=e=>events.push(e);
context.CustomEvent=function(type,options){this.type=type;this.detail=options.detail;};
context.SAVE_DATA=JSON.parse(fs.readFileSync(path.join(out,'save-data.json'),'utf8'));
let appSource=fs.readFileSync(path.join(root,'脚本','save_tools.js'),'utf8');
appSource=appSource.replace("if (document.readyState === 'loading')",'window.audit = {ownedArtifacts, W, research, rws, arch}; if (document.readyState === \'loading\')');
appSource=appSource.replace('return {run: run};','return {run: run, snapshot: function(){return F;}};');
vm.runInContext(appSource,context,{filename:'save_tools.js'});
const data=context.SAVE_DATA;
const rows=data.tabs.flatMap(t=>t.rows);
const mutationId=rows.find(r=>r.d_name==='D290').d_id;
const onlyMutation=makeSave(); onlyMutation.upgrades[mutationId]={u1:true};
context.audit.ownedArtifacts(onlyMutation);
const researchEvent=events.find(e=>e.type==='researchowned').detail;
const researchAliases={event:researchEvent,mutationId};
const beforeUnlocked=makeSave(); beforeUnlocked.upgrades[mutationId]={u1:false};
events.length=0;context.audit.ownedArtifacts(beforeUnlocked);
researchAliases.unlockedButNotPurchasedEvent=events.find(e=>e.type==='researchowned').detail;
const rawView={};
for(const [type,rule] of [ ['building-max',{building:'save.buildings[1]'}],['unique-max',{building:'save.buildings[1]',id:'1'}],['spell-duration',{spell:'save.spells[1]'}] ]) {
  save.buildings[1].um1=30;save.buildings[1].ue1=50;save.spells[1].t=10;
  rawView[type]=context.audit.W[type](rule,save);
}
const rngSave=makeSave();rngSave.faction=14;rngSave.elitePrestigeFaction=14;rngSave.upgrades[975]={u1:true};rngSave.spells[29].c=100;
context.audit.rws.run(rngSave);
const forecasts=context.audit.rws.snapshot();
const wish=forecasts.lw.items.slice(0,3);
const researchNames = Object.fromEntries(Object.entries(data.research).filter(([id])=>['143915','143813','152922','152720','218440'].includes(id)));
const researchCostMismatches=context.util.assoc.researches.flatMap(r=>{
  const info=data.research[r.id];
  if(!info || !/^[SCDEAWF]\d+$/.test(info.code)) return [];
  const expected=Number(info.code.slice(1));
  return expected===r.value ? [] : [{id:r.id,code:info.code,expected,libraryValue:r.value}];
});
const researchEventCodeMismatches=[];
for(const r of rows.filter(r=>r.w?.startsWith('research-upgrade-row'))){
  for(const k of ['s','c','d','e','a','w','f']){
    const id=r[k+'_id'],info=data.research[id];
    if(info && info.code!==r[k+'_name'])researchEventCodeMismatches.push({id,eventCode:r[k+'_name'],mappedCode:info.code,name:info.zh});
  }
}
const report={invalidRandomOutputs:invalid,placeholderDependencies:dependencies,numerical,researchAliases,researchNames,wishSample:wish,viewSmokeTest:rawView,researchCostMismatches,researchEventCodeMismatches};
fs.writeFileSync(path.join(out,'runtime-findings.json'),JSON.stringify(report,null,2));
console.log(JSON.stringify(report,null,2));
