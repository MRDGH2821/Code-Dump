# Creating Dictonary
thisdict = {
    "brand": "Ford",
    "model": "Mustang",
    "year": 1964
}
print(thisdict)

# Accessing Items
x = thisdict["model"]
print(x)

x = thisdict.get("model")
print(x)

# Change Values
thisdict["year"] = 2018

# Looping in Dictonary
# Prints keys
for x in thisdict:
    print(x)

# Prints values
for x in thisdict:
    print(thisdict[x])

for x in thisdict.values():
    print(x)

# Both keys and values
for x, y in thisdict.items():
    print(x, y)

# Check if Key Exists
if "model" in thisdict:
    print("Yes, 'model' is one of the keys in the thisdict dictionary")

# Dictonarylength
print(len(thisdict))

# Adding Items
thisdict["color"] = "red"
print(thisdict)

# Removing items
thisdict.pop("model")  # removes the item with the specified key
print(thisdict)

thisdict.popitem()  # removes the last inserted item
print(thisdict)

del thisdict["year"]  # removes the item with the specified key
print(thisdict)

del thisdict  # deletes dict
# print(thisdict)

# dict() constructor
thisdict = dict(brand="Ford", model="Mustang", year=1964)
print(thisdict)
thisdict.clear()  # empties dictionary
print(thisdict)
