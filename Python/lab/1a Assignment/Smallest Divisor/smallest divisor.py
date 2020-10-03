#Division:C  Roll no.:42

#Smallest divisor

a=int(input("Enter a number:")) #Input from user 
for x in range(2,a+1): 
 if a%x!=0: #this condition divides user given number by all smaller numbers
  continue #to skip to next instance
 else:
  print("Smallest divisor is:",x) #prints smallest divisior
  break #to escape from the for loop
