l=[1,2,3,4,5,6,7]
print(list(filter(lambda a:a%2 and a>3,l)))

print([x for x in l if x%2==1 and x>3])