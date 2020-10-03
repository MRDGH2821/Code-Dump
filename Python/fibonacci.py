r = int(input("Enter the limit:"))
    l = [1, 1]
for x in range(r) :
  temp = l[x] + l[x + 1]
         l.append(temp)
         print(l)