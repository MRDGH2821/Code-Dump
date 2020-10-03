a=int(input("Enter a number:"))
b=int(input("Enter another number:"))
c=str(input("Enter any one of these: + , - , * , / : "))
if c is "+" :
 print(a+b)
elif c is "-":
 print(a-b)
elif c is "*":
 print(a*b)
elif c is "/":
 print(a/b)
else:
 print("Invalid")