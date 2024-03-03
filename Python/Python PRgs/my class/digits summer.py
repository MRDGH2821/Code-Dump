sum = 0
n = int(input("Enter a no"))
r = 0
while n > 0:
    r = n % 10
    sum = sum + r
    n = int(n // 10)
print(sum)
