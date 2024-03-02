# Division:C  Roll no.:42

# To check given string is palindrome or not

st = str(input("Enter a string:"))  # taking input from user

# Method 1


def palin(st):  # user defined function to check palindrome
    le = int(len(st)/2)
    flag = 0  # to store condition output
    for x in range(le+1):
        if st[x] == st[-1-x]:  # checks (x)th character with (-1-x)th character
            flag = 1
        else:
            flag = 0
            break
    if flag == 0:
        print("It is not a palindrome")
    else:
        print("It is a palindrome")


palin(st)  # calling the function

# Method 2
txt = st[::-1]  # checking the string with its reverse slice
if txt == st:
    print("It is a palindrome")
else:
    print("It is not a palindrome")
