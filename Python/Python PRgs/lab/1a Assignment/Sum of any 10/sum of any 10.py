# Division:C  Roll no.:42

# To find sum of any 10 natural numbers in list

from random import randint
# to initialise string with random numbers
random_numbers = [randint(1, 100) for _ in range(10)]
print(random_numbers)  # printing the list
sum = 0
for x in random_numbers:  # looping through list
    sum = sum+x
print(sum)  # printing sum
