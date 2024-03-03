df = str(input("Enter a string:"))


def ct(h):
    lw = 0
    up = 0
    ot = 0
    for x in h:
        if x.islower():
            lw += 1
        elif x.isupper():
            up += 1
        else:
            ot += 1
    return lw, up, ot


print("Lower/Upper/Other", ct(df))
