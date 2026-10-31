import re,html,sys,urllib.request
url,out=sys.argv[1],sys.argv[2]
s=urllib.request.urlopen(url,timeout=60).read().decode('utf-8','replace')
t=re.sub(r'<(script|style)[^>]*>.*?</\1>','',s,flags=re.S)
t=re.sub(r'<br\s*/?>|</(p|div|li|tr|h\d|td|th)>','\n',t)
t=re.sub(r'<[^>]+>',' ',t); t=html.unescape(t)
t=re.sub(r'[ \t]+',' ',t); t=re.sub(r'\n\s*\n+','\n',t)
# cut nav and thanks list
a=t.find('R220+ Builds'); b=t.find('Contact me G00FBALL')
open(out,'w',encoding='utf-8').write(t[a:b] if a>0 and b>0 else t)
print(out,len(t[a:b]))
