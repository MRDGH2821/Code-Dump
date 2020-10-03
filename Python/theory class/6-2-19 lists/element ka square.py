a=[2,3,4,5,7,3]
print(a)
for x in range(len(a)):
 a[x]=a[x]**2
print(a)
a.sort()
print(a)