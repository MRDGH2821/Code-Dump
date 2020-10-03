from random import randint
l= [randint(1,50) for x in range(10)]
print(l)
def listmul(g):
 prd=1
 for d in g:
  prd=prd*d
 return prd
print("Product of elements of list =",listmul(l))