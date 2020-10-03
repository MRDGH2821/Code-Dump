#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
class student
{ private:  char name[20];
  int rno;
  char regd;
public:   void input();
  void display(); };
void student::input()
{
  cout << "Enter Name of the student: ";
  cin >> name;
  cout << "Enter roll no.: ";
  cin >> rno;
  cout << "Enter registration id: ";
  cin >> regd;
};
void student::display()
{
  cout << "Name: " << name << endl;
  cout << "Roll no.: " << rno << endl;
  cout << "Registration id: " << regd << endl;
};
int main()
{
  student s;

  s.input();
  system("cls");
  s.display();
  getch();
  return 0;
}
