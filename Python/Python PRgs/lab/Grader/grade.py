print("Enter marks out of 100")
s1 = int(input("Enter marks of subject 1:"))
s2 = int(input("Enter marks of subject 2:"))
s3 = int(input("Enter marks of subject 3:"))
s4 = int(input("Enter marks of subject 4:"))
total = s1+s2+s3+s4
per = total/4
print("Total = ", total)
print("Percentage = ", per)
if per >= 90:
    print("Grade = A")
elif per >= 75:
    print("Grade = B")
elif per >= 60:
    print("Grade = C")
elif per >= 40:
    print("Grade = D")
else:
    print("Grade = F")
