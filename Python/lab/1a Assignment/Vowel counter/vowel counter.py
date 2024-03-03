# Division:C  Roll no.:42
ste = str(input("Enter a string:"))
# ct = no. of vowels
ct = 0
for x in ste:
    # condition to check vowels
    if x == 'a' or x == 'e' or x == 'i' or x == 'o' or x == 'u' or x == 'A' or x == 'E' or x == 'I' or x == 'O' or x == 'U':
        ct = ct + 1
print("Total vowels = ", ct)
# count() function takes 3 arguments- (character to be found, starting
# index number, last index number)
print("a= ", ste.count('a', 0, len(ste)))
print("e= ", ste.count('e', 0, len(ste)))
print("i= ", ste.count('i', 0, len(ste)))
print("o= ", ste.count('o', 0, len(ste)))
print("u= ", ste.count('u', 0, len(ste)))
print("A= ", ste.count('A', 0, len(ste)))
print("E= ", ste.count('E', 0, len(ste)))
print("I= ", ste.count('I', 0, len(ste)))
print("O= ", ste.count('O', 0, len(ste)))
print("U= ", ste.count('U', 0, len(ste)))
