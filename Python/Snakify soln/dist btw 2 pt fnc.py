# Ankita's code
import math
p1 = [4, 0]
p2 = [6, 6]
distance = math.sqrt(((p1[0]-p2[0])**2)+(p1[1]-p2[1])**2)
print(distance)

# Aadvijja's code


def dist():
    x1 = int(input())
    y1 = int(input())
    x2 = int(input())
    y2 = int(input())
    d = math.sqrt((x1-x2)**2+(y1-y2)**2)
    return d, x1, y1


o, x, y = dist()
print(o, x, y)

# print(dist())
