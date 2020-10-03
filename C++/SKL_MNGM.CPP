#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
class Student
{
private:
  char name[50];       //denotes name of the student
  int rno;       //denotes roll no.
  char cls[20];       //denotes class of the student
  int dyp;       //denotes no. of days present
public:
  void input();
  void output();
};
void Student::input()
{
  cout << "Enter Name : " << endl;
  cin >> name;
  cout << "Enter Roll no : " << endl;
  cin >> rno;
  cout << "In which class is the student studying ? (please input the class in words not numbers)" << endl;
  cin >> cls;
  cout << "No. of days present uptill now" << endl;
  cin >> dyp;
};
void Student::output()
{
  cout << "Details of the student - " << endl;
  cout << "Name: " << name << endl;
  cout << "Roll no.: " << rno << endl;
  cout << "Class: " << cls << endl;
  cout << "No. of days present" << dyp << endl;
};
class Lab
{
private:
  int iiicl;       //denotes intact instruments in chemistry lab
  int tiicl;   //denotes total instruments in chemistry lab
  int iiipl;       //denotes intact instruments in physics lab
  int tiipl;   //denotes total instruments in physics lab
  int wccsl;       //denotes working computers in cs lab
public:
  void take();       //'take' as 'input' was already used
  void show();       //'show' as 'output' was already used
};
void Lab::take()
{
  cout << "Input No. of intact instruments in - " << endl;
  cout << "Chemistry Lab - " << endl;
  cin >> iiicl;
  cout << "Physics Lab - " << endl;
  cin >> iiipl;
  cout << "Input Total No. of instruments in - " << endl;
  cout << "Chemistry Lab - " << endl;
  cin >> tiicl;
  cout << "Physics Lab - " << endl;
  cin >> tiipl;
  cout << "Input No. of working Computers in CS lab" << endl;
  cin >> wccsl;
};
void Lab::show()
{
  cout << "No. of instruments in: " << endl;
  cout << "Chemistry Lab - " << endl;
  cout << "1. Total = " << tiicl << endl;
  cout << "2. Intact = " << iiicl << endl;
  cout << "3. Yet to be repaired/replaced = " << tiicl - iiicl << endl;
  cout << "Physics Lab - " << endl;
  cout << "1. Total = " << tiipl << endl;
  cout << "2. Intact = " << iiipl << endl;
  cout << "3. Yet to be repaired/replaced = " << tiipl - iiipl << endl;
  cout << "No. of working Computers in CS lab = " << wccsl << endl;
};

int main()
{
  char choice;
  Student S;
  Lab L;

  cout << "Choose one of the following:" << endl;
  cout << "a. Student management" << endl;
  cout << "b. Lab management" << endl;
  cin >> choice;


  switch (choice)
    {
    case 'a':
      S.input();
      S.output();
      L.take();
      L.show();    //here some problem may occur due to incorrect order
      break;

    case 'b':
      L.take();
      L.show();
      S.input();
      S.output();

    default:
      cout << "Input either A or B not any other letter, or else program won't work !" << endl;
    }
  return 0;
}

