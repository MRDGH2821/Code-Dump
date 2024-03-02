def rectangle(a, b):
    for i in range(0, a):
        for j in range(0, b):
            print("*", end="")
            print()


m = int(input("Enter no. of rows ="))
n = int(input("Enter no. of columns ="))
rectangle(m, n)
