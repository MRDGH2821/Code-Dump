"""
import os
os.system("clear")
"""
# operations based on user
a = float(input("Enter 1st no:"))
b = float(input("Enter 2nd no:"))
c = input("Enter operation (a,s,m,d):")
if c == "a":
    print("a+b =", a + b)
elif c == "s":
    print("a-b =", a - b, "b-a=", b - a)
elif c == "m":
    print("a*b =", a * b)
elif c == "d":
    print("a/b =", a / b, "b/a=", b / a)
else:
    print("Invalid character inputed")
