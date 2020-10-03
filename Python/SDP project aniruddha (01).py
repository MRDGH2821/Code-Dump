import os
from time import sleep

# Initialising variables
Name = ""
       Div = ""
             mn = ""
                  fn = ""
                       Ad = ""
                            m1 = 0
                                 m2 = 0
                                      m3 = 0
                                           rlno = 0
                                                  t = 0
                                                      agg = 0

 try:
                                                            filetest = open ("student.txt", "r")
                                                                       except FileNotFoundError :
                                                                         print("Existing database file doesn't exist, creating new file in same location...")
                                                                         sleep(2)
                                                                         os.system("cls")
                                                                         filetest = open("student.txt", "w")
                                                                                    finally :
                                                                                      filetest.close()


                                                                                      def takedata() :
                                                                                        "" "Takes data from user" ""

                                                                                        Div = str(input("Enter Division:  "))
                                                                                              rlno = int (input("Enter Rollno.: "))
                                                                                                     name = str(input("Enter Name:  "))
                                                                                                            fn = str(input("Enter Father Name:  "))
                                                                                                                 mn = str(input("Enter Mother Name:  "))
                                                                                                                      ad = str(input("Enter Permanent Address:  "))
                                                                                                                           m1 = int (input("Enter marks out of 100 in subject 1: "))
                                                                                                                                m2 = int (input("Enter marks out of 100 in subject 2: "))
                                                                                                                                     m3 = int (input("Enter marks out of 100 in subject 3: "))
                                                                                                                                          t = m1 + m2 + m3
                                                                                                                                              agg = t / 300
                                                                                                                                                    print("Total Marks obtained: ", t)
                                                                                                                                                    print("Aggregate Marks obtained: ", agg)
                                                                                                                                                    return [Div, rlno, name, fn, mn, ad, m1, m2, m3, t, agg]


                                                                                                                                                           def writedata() :
                                                                                                                                                             "" "Writes Data into file" ""
                                                                                                                                                             f = open("student.txt", "a+")  # opening file in append as well as write mode.
                                                                                                                                                                 f.write("\n")  # A precautionary new line
                                                                                                                                                                 l = takedata()  # calling takedata function
                                                                                                                                                                     for v in l :  # writing data to file
                                                                                                                                                                       f.write(str(v) + "          ")
                                                                                                                                                                       f.close()  # closing file
                                                                                                                                                                       input("Data entered. Press enter key to continue...")
                                                                                                                                                                       menu()  # calling menu function


                                                                                                                                                                       def readall() :
                                                                                                                                                                         "" "Reads complete data" ""
                                                                                                                                                                         j = open("student.txt", "r")  # opening file
                                                                                                                                                                             l = j.readlines()  # reading complete data
                                                                                                                                                                                 print(
                                                                                                                                                                               "{:6} {:6} {:18} {:18} {:18} {:20} {:22} {:20} {:22} {:6} {:10}".format(
                                                                                                                                                                                 "Div",
                                                                                                                                                                                 "Rollno",
                                                                                                                                                                                 "     Name  ",
                                                                                                                                                                                 " Father Name  ",
                                                                                                                                                                                 "      Mother Name  ",
                                                                                                                                                                                 "    Permanent Address  ",
                                                                                                                                                                                 "      Subject 1 ",
                                                                                                                                                                                 "  Subject 2 ",
                                                                                                                                                                                 "    Subject 3 ",
                                                                                                                                                                                 " Total ",
                                                                                                                                                                                 "         Aggregate ",
                                                                                                                                                                                 )
                                                                                                                                                                               )
    # printing data in formatted form
                                                                                                                                                                                 for c in range(len(l)) :
                                                                                                                                                                                   try :
                                                                                                                                                                                     c1 = l[c].split()
                                                                                                                                                                                          print(
                                                                                                                                                                                       "{:6} {:10} {:16} {:24} {:18} {:24} {:20} {:22} {:16} {:16} {:16}".format(
                                                                                                                                                                                         c1[0],
                                                                                                                                                                                         c1[1],
                                                                                                                                                                                         c1[2],
                                                                                                                                                                                         c1[3],
                                                                                                                                                                                         c1[4],
                                                                                                                                                                                         c1[5],
                                                                                                                                                                                         c1[6],
                                                                                                                                                                                         c1[7],
                                                                                                                                                                                         c1[8],
                                                                                                                                                                                         c1[9],
                                                                                                                                                                                         c1[10],
                                                                                                                                                                                         )
                                                                                                                                                                                       )
                                                                                                                                                                                          except Exception :  # this statement does nothing special.It was used to hide when an exception occurs
                                                                                                                                                                                            pass
                                                                                                                                                                                            except IndexError :  # This exception was to hide the error which comes up due to empty line inside the file.
                                                                                                                                                                                              continue
                                                                                                                                                                                              j.close()  # closing file
                                                                                                                                                                                              input("\nPress enter key to continue...")
                                                                                                                                                                                              menu()  # calling menu function


                                                                                                                                                                                              def readspecific() :
                                                                                                                                                                                                "" "Retrieves specific data from file" ""
                                                                                                                                                                                                k = open("student.txt", "r")  # opening file
                                                                                                                                                                                                    g = k.readlines()  # reading complete file
                                                                                                                                                                                                        Div = input("Enter Division: ")  # Taking rollno as user input
                                                                                                                                                                                                              rollno = input("Enter Rollno: ")
                                                                                                                                                                                                                       flag = 0  # flag to denote whether data is found or not
                                                                                                                                                                                                                              flag = 1  # flag to denote whether data is found or not

                                                                                                                                                                                                                                     for h in g :  # looping through data
                                                                                                                                                                                                                                       try :
                                                                                                                                                                                                                                         "" "
            Here, the format of data is - rollno name m1 m2 m3.
            Hence we need to split the elements of data (readed as lines), find the roll number and display the data associated with the roll number.
            " ""
                                                                                                                                                                                                                                         i = h.split()
                                                                                                                                                                                                                                             if Div == i[0] :  # Condition to find division
                                                                                                                                                                                                                                               if rollno == i[1] :  # Condition to find roll number

                    # per =(i[1]+i[2]+i[3])/3
                    # Formatting output
                                                                                                                                                                                                                                                 print(
                                                                                                                                                                                                                                                   "{}\n{}\n{}\n{}\n{}\n{}\n{}\n{}\n{}".format(
                                                                                                                                                                                                                                                     "   Name: " + i[2],
                                                                                                                                                                                                                                                     "   Father Name: " + i[3],
                                                                                                                                                                                                                                                     "   Mother Name: " + i[4],
                                                                                                                                                                                                                                                     "   Permanent Adress: " + i[5],
                                                                                                                                                                                                                                                     "   Subject 1: " + i[6],
                                                                                                                                                                                                                                                     "   Subject 2: " + i[7],
                                                                                                                                                                                                                                                     "   Subject 3: " + i[8],
                                                                                                                                                                                                                                                     "   Total: " + i[9],
                                                                                                                                                                                                                                                     "   Aggregate: " + i[10],
                                                                                                                                                                                                                                                     )
                                                                                                                                                                                                                                                   )
                                                                                                                                                                                                                                                 flag = 2  # flagging as data found

                                                                                                                                                                                                                                                        except IndexError :
            # This error comes when a list of empty line is accessed using index slicing. Empty line create empty list
                                                                                                                                                                                                                                                          continue  # this error is hidden using continue statement.

                                                                                                                                                                                                                                                          if flag == 1 :
                                                                                                                                                                                                                                                            print("Division and Rollno not Found")
                                                                                                                                                                                                                                                            k.close()  # Closing file
                                                                                                                                                                                                                                                            input("\nPress enter key to continue...")
                                                                                                                                                                                                                                                            menu()


                                                                                                                                                                                                                                                            def deletedata() :
                                                                                                                                                                                                                                                              "" "Deletes data of specified division and roll number" ""
                                                                                                                                                                                                                                                              l = open("student.txt", "r")  # opening file
                                                                                                                                                                                                                                                                  j = l.readlines()  # Reading complete data
                                                                                                                                                                                                                                                                      Div = input("Enter Division: ")  # Taking division as input
                                                                                                                                                                                                                                                                            rollno = input("Enter Rollno: ")  # Taking roll number as input
                                                                                                                                                                                                                                                                                     l2 = open("temp.txt", "w")  # Opening a temporary file to store data
                                                                                                                                                                                                                                                                                          flag = 0  # flag to denote whether data is found or not
                                                                                                                                                                                                                                                                                                 flag = 1  # flag to denote whether data is found or not
                                                                                                                                                                                                                                                                                                        for h in range(len(j)) :
                                                                                                                                                                                                                                                                                                          "" "
         Here, the format of data is - rollno name m1 m2 m3.
         Hence we need to split the elements of data (readed as lines), find the roll number and delete the data associated with the roll number.
        " ""
                                                                                                                                                                                                                                                                                                          try :
                                                                                                                                                                                                                                                                                                            i = j[h].split()
                                                                                                                                                                                                                                                                                                                if Div == i[0] :  # Condition to find division
                                                                                                                                                                                                                                                                                                                  if rollno == i[1] :  # Condition to find roll no :
                                                                                                                                                                                                                                                                                                                      del j[h]  # deleting data
                                                                                                                                                                                                                                                                                                                      l2.writelines(j)  # writing leftover data to temp file
                                                                                                                                                                                                                                                                                                                      flag = 2  # flagging as data found
                    # flag = 1  # flagging as data found
                                                                                                                                                                                                                                                                                                                             break  # Coming out of loop after the data is deleted
                                                                                                                                                                                                                                                                                                                             else
                                                                                                                                                                                                                                                                                                                               :
                                                                                                                                                                                                                                                                                                                               raise LookupError  # Raise LookupError because data wasn 't found
        except IndexError:
            # This error comes when a list of empty line is accessed using index slicing. Empty line create empty list
            continue  # this error is hidden using continue statement.
        except LookupError:
            flag = 0  # flagging as data not found

    # Flag checker to check if data deleted or not
    if flag == 0:
        print("Record not found")
    elif flag == 2:
        print("Record Deleted")

    # closing files
    l.close()
    l2.close()

    os.remove("student.txt")  # deleting the old file
    os.rename("temp.txt", "student.txt")  # renaming temp file to original file name
    input("\nPress enter key to continue...")
    menu()


def backup():
    """Backups the data file"""
    f = open("student.txt", "r")  # Opening data file
    g = open("student bkp.txt", "w")  # Opening backup file
    g.writelines(f.readlines())  # Copying contents of original file into backup file

    # closing files
    f.close()
    g.close()

    print("Backup Completed!")
    sleep(2)  # delays execution for 2 seconds


def menu():
    """This is menu function. It displays the options"""
    backup()
    os.system("cls")
    print("\nMenu:")
    print("1. Create student record")
    print("2. See all student records")
    print("3. Find Specific record")
    print("4. Delete specific data")
    # print("5. Sort data (Will close program after sorting)")
    print(
        "-1. Force Backup data (Will close program after backup)"
    )  # i.e. manually backing up data
    print("0. Exit")
    print("")
    print("*Note: The data file is back-ed up at menu screen\n")
    m = int(input("Your Input: "))
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
            raise ValueError  # Raises ValueError as the input received is not from [-1,0,1,2,3,4]

    except ValueError:
        print("Invalid choice")

    except SystemExit:
        print("Program Closed")


# Intro Screen
print(
    "\n{:^50}\n\n\n{:^50}\n\n{:^50}".format(
        "Student Database",
        "Project made by: Aniruddha Bhatt",
        "College: Vishwakarma Institutes of Technology",
    )
)
sleep(2)
print("\n\n\n")
menu()
