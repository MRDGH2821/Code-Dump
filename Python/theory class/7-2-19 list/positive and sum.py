a=[-1,-2,-3,-5,-6,-7,-8,-5,-45,-6,-45,-3,4,4,52,5,56,5634,5,5,45,63,3,6]
b=[]
sum=0
for x in a:
 if x>=0:
  b.append(x)
  sum=sum+x
print("Positive list:",b)
print("Sum of positives:",sum)