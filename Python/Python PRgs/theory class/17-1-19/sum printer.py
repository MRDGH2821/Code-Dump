sum=0
for x in range(1,21):
 if (x%2!=0 or x%3!=0 or x%5!=0):
   print(x)
   sum+=x

print(sum)  