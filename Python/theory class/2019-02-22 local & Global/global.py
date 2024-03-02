def fun():
    global x
    print(x)
    x = 20
    print(x)


x = 10
fun()
print(x)
