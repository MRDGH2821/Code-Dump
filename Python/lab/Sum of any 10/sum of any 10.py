from random import randint
l=[randint(1,100) for x in range(10)]
print(l)
sum=0
for x in l:
 sum=sum+x
print(sum)