a = "Hello, World!"
print(a[1])

# printing specific thing
b = "Hello, World!"
print(b[2:5])

# removing white spaces
print(a.strip())  # returns "Hello, World!"

# length of string
print(len(a))

# lower case
print(a.lower())

# upper case
print(a.upper())

# replace
print(a.replace("H", "J"))

# split
print(a.split(","))

# letter counting
count = 0
for letter in a:
    if (letter == 'l'):
        count += 1
print(count, 'letters found')
