yr=int(input("Enter a year "))
if yr%4==0:
 if yr%100==0:
  if yr%400==0:
   print("Century leap year")
  else:
   print("Century year not a leap year")
 else:
  print("Leap year")
else:
 print("Not a leap year")