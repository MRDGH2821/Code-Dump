def f(x, y):
    global a
    a = 42
    x, y = y, x
    b = 33
    b = 17
    print(a, b, x, y)


a, b, x, y = 1, 15, 3, 4
f(17, 4)
print(a, b, x, y)
