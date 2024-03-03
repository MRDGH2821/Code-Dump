# filter fnc
from random import randint
lst = [randint(1, 50) for x in range(10)]
fl = list(filter(lambda a: a % 2 == 0, lst))
print(lst)
print(fl)
