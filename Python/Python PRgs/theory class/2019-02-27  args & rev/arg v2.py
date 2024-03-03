def display(x, y, z=80):
    print(x, y, z)


# display(5) no default arg error
# display(5,y=10) #non-default argument follows default argument
display(x=1, y=2, z=3)  # non-default argument follows default argument
