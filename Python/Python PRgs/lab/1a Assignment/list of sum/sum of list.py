# Division:C  Roll no.:42
# To find sum of elements in list
from random import randint
# to initialise string with random numbers
random_numbers = [randint(1, 100) for _ in range(10)]
print(random_numbers)  # to print the list
sum = 0  # to store sum
for x in random_numbers:  # looping through list
    sum = sum + x
print("Sum:", sum)  # printing sum
