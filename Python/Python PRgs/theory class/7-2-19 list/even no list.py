a = int(input("Enter a no:"))
b = int(input("Enter another no:"))
evenlist = []
for x in range(a, b + 1):
    if x % 2 == 0:
        evenlist.append(x)
print(evenlist)
