li = [(14, 3), (23, 41), (33, 62), (1, 3), (3, 3)]
n = int(input("Enter a number to be found:"))
print([x for x in li if n in x])
print(list(filter(lambda x: n in x, li)))
