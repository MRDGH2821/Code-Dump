from random import randint
a = [randint(1, 25) for x in range(10)]
b = [randint(1, 25) for x in range(10)]
c = [randint(1, 25) for x in range(10)]

print(a)
print(b)
print(c)

print(set(a) & set(c) & set(b))
