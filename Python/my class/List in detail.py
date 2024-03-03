# creating list
thislist = ["apple", "banana", "cherry"]
print(thislist)
# Access Items
print(thislist[1])
g = "Blackcurrant"
# Change Item Value
thislist[1] = g
print(thislist)
# Loop Through a List
for x in thislist:
    print(x)
# Check if Item Exists
if "apple" in thislist:
    print("Yes, 'apple' is in the fruits list")
# List Length
for x in range(len(thislist)):
    print(len(thislist[x]))
# Add Items
thislist.append("orange")
print(thislist)
thislist.insert(1, "kiwi")
print(thislist)
# Remove Item
g = "apple"
thislist.remove(g)
print(thislist)
thislist.pop(2)
print(thislist)
del thislist[0]
print(thislist)
del thislist
thislist = [1, 2]
print(thislist)
thislist = ["apple", "banana", "cherry"]
thislist.clear()
print(thislist)
# min and max
thislist = ['sfg', 'srg', 'sesfs', 'aefd']
print(max(thislist))
print(min(thislist))
li = [1, 3, 34, 4234, 234, 234, 23423, 4234, 524, 523, 4124, 245663.5869]
print(max(li))
print(min(li))
jk = ['sdfs', 'sfsdcascd', 123, 123435, li]
print(jk)
print(max(jk))
