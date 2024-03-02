# Check if palindrome or not
# print(g[5:0:-1])
# print(g[0:6])

h = str(input("Enter a string:"))
g = str(input("Enter a string:"))
j = str(input("Enter a string:"))


def palin(ghj):
    if ghj == ghj[::-1]:
        print("It is a palindrome")
    else:
        print("It is not a palindrome")


palin(h)
