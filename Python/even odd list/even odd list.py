# Div -C Roll no.42
# This program puts even and odd elements in seperate lists
# imporing randint function to generate random numbers for list
from random import randint
# filling list by using list comprehension
ls = [randint(1, 100) for x in range(10)]
print(ls)  # printing the list
even = []  # list for even no.
odd = []  # List for odd no.
for x in ls:  # loop to iterate through list
    if x % 2 == 0:  # condition to check even or odd
        even.append(x)  # appending to even list
    else:
        odd.append(x)  # appending to odd list
print("Even list:", even)  # printing the lists
print("Odd list:", odd)
