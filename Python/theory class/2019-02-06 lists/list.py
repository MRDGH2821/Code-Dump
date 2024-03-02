a=["welcome"," vit"] #this is list
b="welcme ","vit" #this is tuple
print(a)
print(b)

#appending a list
a.append("7")
print(a)

#index printer
print(a.index(" vit"))

#counter
print(a.count(" vit"))

#insert karne vali cheej
a.insert(2,"xdkf")
print(a)

#sort karne vali cheej
a.sort()
print(a)

#reverse sort
a.sort(reverse=True)
print(a)

#reverse print
a.reverse()
print(a)

#extend
a.extend(b)
print(a)

#remover
a.remove("vit")
print(a)

#deleter
del a[3]
print(a)

#min and max
a.append(90)
print(min(a))
print(max(a))
