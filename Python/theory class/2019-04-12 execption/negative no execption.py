'''
def neg(a):
 try:
  if a<0:
   raise Exception
  except Exception:
   print("Age cannot be negative!")
b=int(input("Enter age")
neg(b)
'''
exception = 0


class Alphaerror(Exception):
    def __init__(self):
        super().__init__("Alphabet not allowed")


def age(age):
    if int(age) < 0:
        raise Exception
    elif age.isalpha():
        raise Alphaerror


try:
    b = input("Enter age:")
    age(b)
except Alphaerror:
    print("Alphabet")
except Exception:
    print("Negative")
