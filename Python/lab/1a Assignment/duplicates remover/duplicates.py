#Division:C  Roll no.:42

#Duplicates remover

from random import randint
L1=[randint(1,50) for x in range(10)] #to initialise string with random numbers
L2=[] #to store list without any duplicates
def dup(a,b): #function to filter duplicates
 x=0
 for x in a:
  if x not in b: #if 'x' is not in 'b' then 
   b.append(x)   #then append it in 'b'
 
 #sort the list
 b.sort()
 a.sort()
 print(a)#original list
 print(b)#list with duplicates removed

dup(L1,L2) #call the function
