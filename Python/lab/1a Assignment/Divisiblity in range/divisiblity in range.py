#Division:C  Roll no.:42

a=int(input("Enter lower limit of range:")) #lower limit for the range
b=int(input("Enter upper limit of range:")) #upper limit for the range
c=int(input("Enter a number which will be used to divide the numbers from the range:"))
for x in range(a,b+1):
 #To check if the given number divides the number obtained from range
 if x%c==0:
  print(x,end=",") #printing the numbers
