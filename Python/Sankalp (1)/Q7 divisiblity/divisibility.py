p=int(input('Enter a no:'))
if(p%5==0 and p%10==0):
 print('It is divisible by 5 and 10')
elif(p%5==0 or p%10==0):
 print('It is divisible by 5 or 10')
else:
 print('It is not divisible by 5 nor 10')
