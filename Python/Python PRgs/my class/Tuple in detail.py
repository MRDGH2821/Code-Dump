thistuple = ("apple", "banana", "cherry")
print(thistuple)
# Access Tuple Items
print(thistuple[1])
# Change Tuple Values
thistuple[1] = "blackcurrant"
# The values will remain the same:
print(thistuple)
# Loop Through a Tuple
for x in thistuple:
    print(x)
# Check if Item Exists
if "apple" in thistuple:
    print("Yes, 'apple' is in the fruits tuple")
# length of tuple
print(len(thistuple))
# Add Items
thistuple[3] = "orange"  # This will raise an error
print(thistuple)
# removing items
del thistuple
print(thistuple)
