sum = 0
for x in range(1, 21):
    if (x % 2 != 0) and (x % 3 != 0) and (x % 5 != 0):
        sum = sum+x
print(sum)
