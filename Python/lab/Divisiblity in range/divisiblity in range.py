a=int(input("Enter lower limit of range:"))
b=int(input("Enter upper limit of range:"))
c=int(input("Enter a number which will be used to divide the numbers from the range:"))
for x in range(a,b+1):
 if x%c==0:
  print(x)
