a = int(input("Enter 1st no.:"))
b = int(input("Enter 2nd no.:"))
c = int(input("Enter 3rd no.:"))
if a > b:
    if b > c:
        print(a, ">", b, "&", a, ">", c, "&", b, ">", c)
    else:
        print(a, ">", b, "&", a, ">", c, "&", b, "<", c)
else:
    if a < c:
        print(a, "<", b, "&", a, "<", c)
    else:
        print(a, "<", b, "&", a, ">", c)
