from random import randint
even = []
odd = []
l = [randint(1, 10) for x in range(5)]
for x in l:
    if x % 2 == 0:
        even.append(x)
    else:
        odd.append(x)
print(even)
print(odd)
