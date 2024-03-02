#longest word in file

fi=open('text.txt','r')
g=fi.read().split()
maxL=0
for c in g:
 if len(c)>maxL:
  maxL=len(c)
print("Biggest word length is:",maxL)