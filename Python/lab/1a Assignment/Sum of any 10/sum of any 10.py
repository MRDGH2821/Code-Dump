# Division:C  Roll no.:42

# To find sum of any 10 natural numbers in list

from random import randint
# to initialise string with random numbers
l = [randint(1, 100) for x in range(10)]
print(l)  # printing the list
sum = 0
for x in l:  # looping through list
    sum = sum+x
print(sum)  # printing sum
