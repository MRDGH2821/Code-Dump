st=str(input("String length finder, Enter a string "))
ct=0
ct1=0
for x in st:
 ct=ct+1
 if x=="l":
  ct1=ct1+1
print("Strlen = ",ct)
print("no of 'l's = ",ct1)