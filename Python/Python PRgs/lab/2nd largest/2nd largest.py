numbers = [22, 33, 2, 3]
ct = 0
for x in numbers:
    if x >= ct:
        ct = x
    else:
        continue
print(ct)
