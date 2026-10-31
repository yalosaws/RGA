import json,os,sys,urllib.request,urllib.parse
OUT=os.path.join(os.path.dirname(os.path.dirname(os.path.abspath(__file__))),'docs','fandom')
for p in sys.argv[1:]:
  u="https://realm-grinder.fandom.com/api.php?action=parse&prop=wikitext&format=json&page="+urllib.parse.quote(p)
  r=urllib.request.Request(u,headers={'User-Agent':'Mozilla/5.0'})
  try:
    d=json.load(urllib.request.urlopen(r,timeout=60))
    w=d['parse']['wikitext']['*']
  except Exception as e:
    w='ERR '+str(e)
  open(os.path.join(OUT,p.replace(' ','_').replace('/','_')+'.wiki'),'w',encoding='utf-8').write(w)
  print(p,len(w))
