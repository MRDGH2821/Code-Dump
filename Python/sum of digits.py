sum = 0
a = int(input())
while a > 0:
    sum = sum + a % 10
    a = a // 10
    print(sum)
