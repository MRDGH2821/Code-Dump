# Division:C  Roll no.:42

# To find sum of elements in list

from random import randint
# to initialise string with random numbers
l = [randint(1, 100) for x in range(10)]
print(l)  # to print the list
sum = 0  # to store sum
for x in l:  # looping through list
    sum = sum+x
print("Sum:", sum)  # printing sum
