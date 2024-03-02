# Division:C  Roll no.:42

# Even Odd seperator

from random import randint
even = []  # Stores even no.
odd = []  # Stores odd no.
# to initialise list with random numbers
l = [randint(1, 10) for x in range(5)]
print("Original list:", l)  # printing the list
for x in l:  # looping through lisy
    if x % 2 == 0:  # checking even or not
        even.append(x)  # appending even no.
    else:
        odd.append(x)  # appending odd no.

# Printing the lists
print("Even list:", even)
print("Odd list:", odd)
