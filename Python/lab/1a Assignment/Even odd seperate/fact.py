from math import sqrt


def distance(x1, x2, y1, y2):
    dist = sqrt((x2 - x1)**2 + (y2 - y1)**2)
    return dist


a = int(input("x1:"))
b = int(input("x2:"))
c = int(input("y1:"))
d = int(input("y2:"))
g = distance(a, b, c, d)
print(g)
