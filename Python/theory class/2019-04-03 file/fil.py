f = open('ab.txt', 'w')
for i in range(1, 10):
    f.write(str(i))
    f.write("\n")
    f.write("hoi!")
f.close()

dg = open('ab.txt', 'r')
h = dg.read()
g = open('num.txt', 'w')
for j in h:
    if j.isdigit():
        print(j)
        g.write(j)
dg.close()
g.close()

# wap to find words which will start with vowel
