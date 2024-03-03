def sqlist(j):
    squared_list = [g**2 for g in range(j + 1)]
    return squared_list


a = int(input("Input a number:"))
print(sqlist(a))
