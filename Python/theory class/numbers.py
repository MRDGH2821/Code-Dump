Python 3.7.2 (tags / v3.7.2: 9a3ffc0492, Dec 23 2018, 22: 20: 52)[MSC v.1916 32 bit(Intel)] on win32
Type "help", "copyright", "credits" or "license()" for more information.
>> > sqrt(9)
Traceback(most recent call last):
    File "<pyshell#0>", line 1, in <module >
    sqrt(9)
NameError: name 'sqrt' is not defined
>> > include math
SyntaxError: invalid syntax
>> > SyntaxError: invalid syntax
SyntaxError: invalid syntax
>> > import math
>> > sqrt(9)
Traceback(most recent call last):
    File "<pyshell#4>", line 1, in <module >
    sqrt(9)
NameError: name 'sqrt' is not defined
>> > math.sqrt(9)
3.0
>> > type(x)
Traceback(most recent call last):
    File "<pyshell#6>", line 1, in <module >
    type(x)
NameError: name 'x' is not defined
>> > x = 9
>> > print(type(x))
<class 'int' >
>> > type(x)
<class 'int' >
>> > y = 2.4358746534
>> > z ="09'
SyntaxError: EOL while scanning string literal
>> > z = '90'
>> > type(y)
<class 'float' >
>> > type(z)
<class 'str' >
>> > z = '9.89786'
>> > type(z)
<class 'str' >
>> > z = int(input())
'9.867'
Traceback(most recent call last):
    File "<pyshell#17>", line 1, in <module >
    z = int(input())
ValueError: invalid literal for int() with base 10: "'9.867'"
>> >
