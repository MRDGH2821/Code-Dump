def sqlist(j):
    squared_values = [g**2 for g in range(j+1)]
    return squared_values


a = int(input("Input a number:"))
print(sqlist(a))
