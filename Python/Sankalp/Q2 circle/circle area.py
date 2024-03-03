r = int(input('Enter the radius of the circle:'))
if (r > 0):
    print('Area of circle is:', 3.14 * r * r)
    print('Circumferance of the circle is:', 2 * 3.14 * r)
elif (r == 0):
    print('Area of circle is 0:')
    print('Circumferance of circle is 0:')
else:
    print('Invalid input')
