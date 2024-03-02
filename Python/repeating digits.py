# repeating numbers

count = 1
a = [1, 2, 1, 2, 1, 3, 4]
for i in range(len(a)):
    if a[i] == a[i - 1]:
        count = count + 1
        print(count)
