a=int(input())
if a%5==0 and a%10==0:
 print("5&10 both")
elif a%5==0:
 print("5 only")
elif a%10==0:
 print("10 only")
else:
 print("not divisible")