#include <iostream.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
class student
{
private: //mention data members here
  char name;
  int rno;
public: //mention member functions here
  void input();
  void display();
}; //this semicolon is imp. if missing errors popup
void student::input()
{
  cout << "Enter name of the student: ";
  cin >> name;
  cout << "Enter roll no.: ";
  cin >> rno;
}
void student::display()
{
  cout << "Name: " << name << endl;
  cout << "Roll no.: " << rno << endl;
};
int main()
{
  student s; //here object s is declared

  s.input();
  s.display();
  getch();
  return 0;
}