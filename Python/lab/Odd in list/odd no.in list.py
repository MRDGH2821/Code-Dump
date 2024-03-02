from random import randint
# to initialise list with random numbers
l = [randint(1, 50) for x in range(10)]
print(l)  # to know which numbers in list
for x in l:
    if x % 2 != 0:  # condition for odd
        print(x, end=",")
print("")  # to geta blank new line in the terminal window
