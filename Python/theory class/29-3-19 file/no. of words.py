print(open('text.txt', 'r').read().count(input("Enter Word to be found: ")))

#Version 2
fi=open('text.txt','r')
g=fi.readlines()
ct=0
word=input("Enter the word to be found:")
for x in g:
 l=x.split()
 if word in l:
  ct+=1
print(ct)

#Solution for version 2
'''
l=[]
for x in g:
 for f in x:
  l.append(f)
 
print(ct)
'''