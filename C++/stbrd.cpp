/*Program for implementation of class. Class is collection of data members and function.
   Class contains an entire block of code describing various features */
#include <iostream.h>
#include <conio.h>
class student
{
private:
int rollno; //data members of class Abc
char name[15], address[20], std[10];  /*array for name, address and standard of student char array contains number of character specified i.e. name array can contain 15 characters.*/
float ml, m2, m3, total;
public:
void getstudentdata(); // Declaration-member function of class Abc
void getstudentmarks();
void totalmarks();
void display(); //Declaration-member function of class Abc
};
void student::getstudentdata() //Definition Implementation of function of class Abc
{
  cout << "----------Give student details----------" << endl;
  cout << "Roll Number of Students" << endl;
  cin >> rollno;
  cout << "Roll Name of Student: " << endl;
  cin >> name;
  cout << "Standard: " << endl;
  cin >> std;
  cout << "Address of student:" << endl;
  cin >> address;
};
void student::getstudentmarks()  //Definition implementation of function of class Abc
{
  cout << "----------Give marks of student----------" << endl;
  cout << "Mathematics:" << endl;
  cin >> m1;
  cout << "Computers:" << endl;
  cin >> m2;
  cout << "Engiish:" << endl;
  cin >> m3;
};
void student::totalmarks()
{
  total = m1 + m2 + m3;
};
void student::display()
{
//Definition Implementation of function of class Abc
  cout << "----------Marksheet of Student----------";
  cout << "RollNo.: " << rollno << endl;
  cout << "Name-" << name << endl;
  cout << "Mathematics-" << m1 << endl;
  cout << "Computers-" << m2 << endl;
  cout << "English-" << m3 << endl;
  cout << "GRAND TOTAL:" << total << endl;
  cout << "-----------------------------------";
};
int main()
{
  clrscr();
//crearing object of class Abc.Object can call all the function of associated class
  student obi;
  student obj;
  obj.getstudentdata();
  obj.getstudentmarks();
  obj.totalmarks();
  obj.display();
  getch();
  return 0;
}
