# Div-C Roll no.42
# This program finds the sum of elements in a list
from random import randint #imporing randint function to generate random numbers for list
ls=[randint(1,1000) for x in range(10)] #filling list by using list comprehension 
print(ls) #printing the list
sum=0
for y in ls: #loop to calculate the sum
 sum = sum+y
print("Sum =",sum) #printing sum
