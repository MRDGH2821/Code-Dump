a = int(input('Enter 1st number:'))
b = int(input('Enter 2nd number:'))
print('1. Addition')
print('2. Subtraction')
print('3. Multiplication')
print('4. Division')
c = int(input('Choose the operation: '))
if (c == 1):
    print('The addition of two numbers is:', a+b)
elif (c == 2):
    print('The subtraction of two numbers is:', a-b)
elif (c == 3):
    print('The multiplication of two numbers is:', a*b)
elif (c == 4):
    print('The division of two numbers is:', a/b)
else:
    print('Invalid Choice')
