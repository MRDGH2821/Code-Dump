y = int(input("Enter a year ="))
if y % 4 == 0:
    if y % 100 == 0:
        if y % 400 == 0:
            print("it is a leap year")
        else:
            print("It is not a leap year")
    else:
        print("It is a leap year")
else:
    print("It is not a leap year")
