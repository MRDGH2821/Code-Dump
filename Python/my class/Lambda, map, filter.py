# lambda
def x(a): return a + 10


print(x(5))

# multiple args


def x(a, b): return a * b


print(x(5, 6))

# special use


def myfunc(n):
    return lambda a: a * n


mydoubler = myfunc(2)
mytripler = myfunc(3)

print(mydoubler(11))
print(mytripler(5))

# map function-The map() function applies a given function to each item of an iterable (list, tuple etc.) and returns a list of the results.

numbers = (1, 2, 3, 4)
result = map(lambda x: x*x, numbers)
print(result)

# converting map object to list
numbersSquare = list(result)
print(numbersSquare)

# a list contains both even and odd numbers.
seq = [0, 1, 2, 3, 5, 8, 13]

# result contains odd numbers of the list
result = filter(lambda x: x % 2, seq)
print(list(result))

# result contains even numbers of the list
result = filter(lambda x: x % 2 == 0, seq)
print(list(result))
