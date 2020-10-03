#include <iostream.h>
#include <stdlib.h>
class employee
{
private:
typedef char string;
char name[20];
string rid;
public:
void input();
void display();
};
void employee::input()
{
  cout << "Enter employee name: ";
  cin >> name;
  cout << "Enter Registered id: ";
  cin >> rid;
}
void employee::display()
{
  cout << "Name: " << name << endl;
  cout << "Registered id: " << rid << endl;
}
int main()
{
  employee E;

  E.input();
  system("cls");
  E.display();
  return 0;
}
