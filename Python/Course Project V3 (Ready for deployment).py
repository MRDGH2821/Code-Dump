import os
from time import sleep

# Initialising variables
name = ""
m1 = 0
m2 = 0
m3 = 0
rlno = 0


def takedata():
    """Takes data from user"""
    name = str(input("Enter Name:"))
    m1 = int(input("Enter marks out of 100 in subject 1:"))
    m2 = int(input("Enter marks out of 100 in subject 2:"))
    m3 = int(input("Enter marks out of 100 in subject 3:"))
    rlno = int(input("Enter Rollno.:"))
    return [rlno, name, m1, m2, m3]


def writedata():
    """Writes Data into file"""
    # opening file in append as well as write mode.
    f = open("student.txt", "a+")
    # A precautionary new line
    f.write("\n")
    data = takedata()  # calling takedata function
    for v in data:  # writing data to file
        f.write(str(v) + " ")
        f.close()  # closing file
        input("Data entered. Press enter key to continue...")
        menu()  # calling menu function


def readall():
    """Reads complete data"""
    # opening file
    j = open("student.txt", "r")
    data = j.readlines()  # reading complete data
    print("{:6} {:4} {:4} {:4} {:4}".format(
        "Rollno", "Name", "Sub1", "Sub2", "Sub3"))
    # printing data in formatted form
    for c in range(len(data)):
        try:
            c1 = data[c].split()
            print(
                "{:^6} {:^4} {:^4} {:^4} {:^4}".format(
                    c1[0], c1[1], c1[2], c1[3], c1[4]
                )
            )
        # This exception was to hide the error which comes up due to empty line inside the file.
        except IndexError:
            continue
        except Exception:  # this statement does nothing special.It was used to hide when an exception occurs
            pass
    j.close()  # closing file
    input("\nPress enter key to continue...")
    menu()  # calling menu function


def readspecific():
    """Retrieves specific data from file"""
    # opening file
    k = open("student.txt", "r")
    g = k.readlines()  # reading complete file
    # Taking rollno as user input
    rollno = input("Enter Rollno:")
    flag = 0  # flag to denote whether data is found or not
    for h in g:  # looping through data
        try:
            """
            Here, the format of data is - rollno name m1 m2 m3.
            Hence we need to split the elements of data(readed as lines), find the roll number and display the data associated with the roll number.
            """
            i = h.split()
            # Condition to find roll number
            if rollno == i[0]:
                # per =(i[1]+i[2]+i[3])/3
                # Formatting output
                print(
                    "{}\n{}\n{}\n{}\n{}".format(
                        "Rollno:" + i[0],
                        "Name:" + i[1],
                        "Sub1:" + i[2],
                        "Sub2:" + i[3],
                        "Sub3:" + i[4],
                    )
                )
                flag = 1  # flagging as data found

        except IndexError:
            # This error comes when a list of empty line is accessed using index slicing. Empty line create empty list
            # this error is hidden using continue statement.
            continue

        if flag == 0:
            print("Rollno not found")
            k.close()  # Closing file
            input("\nPress enter key to continue...")
            menu()


def deletedata():
    """Deletes data of specified roll number"""
    # opening file
    data = open("student.txt", "r")
    j = data.readlines()  # Reading complete data
    # Taking roll number as input
    rollno = input("Enter Rollno:")
    # Opening a temporary file to store data
    l2 = open("temp.txt", "w")
    flag = 0  # flag to denote whether data is found or not
    for h in range(len(j)):
        """
        Here, the format of data is - rollno name m1 m2 m3.
        Hence we need to split the elements of data (readed as lines), find the roll number and delete the data associated with the roll number.
        """
        try:
            i = j[h].split()
            if rollno == i[0]:  # Condition to find roll number
                del j[h]  # deleting data
                l2.writelines(j)  # writing leftover data to temp file
                flag = 1  # flagging as data found
                break  # Coming out of loop after the data is deleted
            else:
                raise LookupError  # Raise LookupError because data wasn 't found
        except IndexError:
            # This error comes when a list of empty line is accessed using index slicing. Empty line create empty list
            continue  # this error is hidden using continue statement.
        except LookupError:
            flag = 0  # flagging as data not found

    # Flag checker to check if data deleted or not
    if flag == 0:
        print("Record not found")
    elif flag == 1:
        print("Record Deleted")

    # closing files
    data.close()
    l2.close()

    os.remove("student.txt ")  # deleting the old file
    # renaming temp file to original file name
    os.rename("temp.txt ", "student.txt ")
    input("\nPress enter key to continue...")
    menu()


def backup():
    " " "Backups the data file " " "
    f = open("student.txt ", "r ")  # Opening data file
    g = open("student bkp.txt ", "w ")  # Opening backup file
    # Copying contents of original file into backup file
    g.writelines(f.readlines())

    # closing files
    f.close()
    g.close()

    print("Backup Completed!")
    sleep(2)  # delays execution for 2 seconds


def menu():
    " " "This is menu function.It displays the options " " "
    backup()
    os.system("cls ")
    print("\nMenu:")
    print("1. Create student record")
    print("2. See all student records")
    print("3. Find Specific record")
    print("4. Delete specific data")
    # print("5. Sort data (Will close program after sorting)")
    print(" - 1. Force Backup data(Will close program after backup) ")
    print("0. Exit")
    print("")
    print("*Note: The data file is back-ed up at menu screen\n")
    m = int(input("Your Input:"))
    try:
        if m == 0:
            raise SystemExit  # Raises SystemExit to terminate the program
        elif m == -1:
            backup()
        elif m == 1:
            writedata()
        elif m == 2:
            readall()
        elif m == 3:
            readspecific()
        elif m == 4:
            deletedata()
        else:
            # Raises ValueError as the input received is not from [-1,0,1,2,3,4]
            raise ValueError

    except ValueError:
        print("Invalid choice")

    except SystemExit:
        print("Program Closed ")


# Intro Screen
print(
    "\n{:^50}\n\n\n {:^50}\n {:^50}\n\n {:^50}".format(
        "Student Records ",
        "Project made by : Mihir Rabade, Manthan Jagadale ",
        "Samruddha Kumbhar, Aayush Mehta ",
        "College : Vishwakarma Institutes of Technology ",
    )
)
sleep(3)
print("\n\n\n")
menu()
