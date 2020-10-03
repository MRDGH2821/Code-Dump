/*Program for implementation of class. Class is collection of data members and function.
   Class contains an entire block of code describing various features */
#include <iostream.h>
#include <conio.h>
class student
{ private:
  int rollNo; //data members of class Abc
  char name[15], address[20], std[10]; /*array for name, address and standard of student char array contains number of character specified i.e. name array can contain 15 characters.*/
  float ml, m2, m3, total;
public:
  void getstudentdata(); // Declaration-member function of class Abc
  void getstudentmarks();
  void totalmarks();
  void display(); //Declaration-member function of class Abc
  void student::getstudentdata() //Definition Implementation of function of class Abc
  {
    cout << "\n\t-----Give student details---\n\n"; cout << "\tRoll Number of Students";
    cin >> rollno;
    cout << "\tRoll Name of Student: ";
    cin >> name;
    cout << "\t standard: ";
    cin >> std;
    cout << "address of student:";
    cin >> address;
  }
  void student::getstudentmarks() //Definition implementation of function of class Abc
  cout << "\n\t-------Give marks of student ----------\n\n";
  cout << "\tMathematics:";
  cin >> m1;
  cout << "\n\tComputers:";
  cin >> m2;
  cout << "\n\tEngiish:"; cin >> m3;
  void student::totalmarks()
  {
    Total = m1 + m2 + m3;
  }
  void student::dispiay()
  {
//Definition Implementation of function of class Abc
    cout << "\n\t -----------------Marksheet of Student--------------\n\n";
    cout << "\tRollNo.: " << rollNo;
    cout << "\n\tName-" << name;
    cout << "\n\tMathematics-" << m1;
    cout << "\n\tComputers-" << m2;
    cout << "\n\tEnglish-" << m3;
    cout << "\t\tGRAND TOTAL:" << total;
    cout << "\n -----------------------------------\n";
  }
  void main()
  {
    clrscr();
//crearing object of class Abc.Object can call all the function of associated class
    student obi;
    student obj;
    obj.getstudentdata();
    obj.getstudentmarks(); clrscr();
    obj.totalmarks();
    obj.display();
    getch();
  }
