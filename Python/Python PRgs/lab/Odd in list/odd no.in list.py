from random import randint
# to initialise list with random numbers
random_numbers = [randint(1, 50) for x in range(10)]
print(random_numbers)  # to know which numbers in list
for x in random_numbers:
    if x % 2 != 0:  # condition for odd
        print(x, end=",")
print("")  # to geta blank new line in the terminal window
