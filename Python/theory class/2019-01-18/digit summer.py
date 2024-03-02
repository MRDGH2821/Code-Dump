a=int(input("Enter a no "))
x=0
while a%10!=0:
 x=x+int(a%10)
 a=a/10
print("Sum is",x)