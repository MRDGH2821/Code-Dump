//Write a C++ program to implement the concept of objects, classes, constructors, destructors

#include <iostream>
#include <string.h>
using namespace std;

class student
{
private:
char name[20];
char division;
int roll, gr, avg, per;
int sub[3];

public:
student()
{
  cout << "Enter name: ";
  gets(name);
  cout << "Enter Division: ";
  cin >> division;
  cout << "Enter roll no.: ";
  cin >> roll;
  cout << "Enter GR no.: ";
  cin >> gr;
  for (int i = 0; i < 3; i++)
    {
      cout << "Enter marks of sub " << i + 1 << ": ";
      cin >> sub[i];
    }
}

int calc()
{
  int avg = 0;

  for (int i = 0; i < 3; i++)
    {
      avg = avg + sub[i];
    }
  avg = avg / 3;
  return avg;
}

char grade()
{
  char g;

  if (avg >= 90)
    {
      g = "A";
    }
  else if (avg > 75)
    {
      g = "B";
    }
  else if (avg > 60)
    {
      g = "C";
    }
  else if (avg > 40)
    {
      g = "D";
    }
  else
    {
      g = "F";
    }
  return g;
}
~student()
{
  cout << "Name: " << name << endl;
  cout << "Division: " << division << endl;
  cout << "Roll no.: " << roll << endl;
  cout << "GR no.: " << gr << endl;
  cout << "Marks avg.: " << calc() << endl;
  cout << "Marks percentage.: " << calc() << "%" << endl;
  cout << "Grade: " << grade();
}
};

int main()
{
  student();
  return 0;
}
