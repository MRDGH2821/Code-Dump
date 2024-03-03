# C div Roll no 42
st = str(input("Enter a string:"))
# Method 1


def palin(st):
    le = int(len(st) / 2)
    flag = 0
    for x in range(le + 1):
        if st[x] == st[-1 - x]:
            flag = 1
        else:
            flag = 0
            break
    if flag == 0:
        print("It is not a palindrome")
    else:
        print("It is a palindrome")


palin(st)
# Method 2
txt = st[::-1]
if txt == st:
    print("It is a palindrome")
else:
    print("It is not a palindrome")
