'''
'r' read mode 
'w' write mode
'a' append mode
'x' create mode
't' text mode
'b' binary mode
''' 
#f=open('Data.txt','a+')
# '+' == create the file incase it doesn't exist

#How to read a file
f=open('Data.txt','r')

#complete file it read
contents=f.read() #if an integer 'x' is passed then read() fnc will read 'x' bytes of the file.
print(contents)

#reading only 1 line
d=f.readline(6)
print(d)

#reading many lines
s=f.readlines()
print(s)
