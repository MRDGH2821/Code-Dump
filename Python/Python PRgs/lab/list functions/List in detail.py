# creating list
thislist = ["apple", "banana", "cherry"]
print(thislist)
g = "Blackcurrant"
# Change Item Value
thislist[1] = g
print(thislist)
# Add Items
thislist.append("orange")
print(thislist)
thislist.insert(1, "kiwi")
print(thislist)
# sort the list
thislist.sort()
print(thislist)
# Remove Item
g = "apple"
thislist.remove(g)
print(thislist)
thislist.pop(2)
print(thislist)
thislist.clear()
print(thislist)
