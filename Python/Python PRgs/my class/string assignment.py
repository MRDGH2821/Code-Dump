s = str(input("Enter a string:"))
if len(s) >= 3:
    if s[-1] == 'g' and s[-2] == 'n' and s[-3] == 'i':
        s1 = s+"ly"
    else:
        s1 = s+"ing"
else:
    s1 = s
    print("Humne apke string ko baksh diya hai, jaaiye jee lijiye apni zindagi !")
print("Ye rahi aapki string:", s1)
