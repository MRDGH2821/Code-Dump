
y=int(input("y=sentury year"))
x=int(input("x=year"))
if(x%4==0 and y%4==0):
   print("leap year")
   if(y%400==0):
    print("sentury leap year")
   else:
    print("sentury year")
else:
  print("not leap year")  