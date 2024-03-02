print(open('text.txt', 'r').read().count(input("Enter Word to be found: ")))

# Version 2
file = open('text.txt', 'r')
lines = file.readlines()
word_count = 0
word = input("Enter the word to be found:")
for x in lines:
    split_words = x.split()
    if word in split_words:
        word_count += 1
print(word_count)

# Solution for version 2
'''
l=[]
for x in g:
 for f in x:
  l.append(f)

print(ct)
'''
