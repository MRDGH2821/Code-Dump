a = [234, 234, 5, 4545, 234, 2, 65, 64, 52, 545, 4354, 325, 242, 45, 4325,
     454, 54, 43, 443, 4, 342, 45, 235, 224, 234, 24, 345, 345, 5, 235]
a.sort()
x = 0
i = 0
for x in a:
    for i in a:
        if i == x:
            print(i)
