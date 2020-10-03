//computer 1

#include <iostream.h>
class Rectangle
{
public:
Rectangle(int l, int b);
int length = l;
int breadth = b;
int printarea()
{
  return length * breadth;
};
};
int main()
{
  Rectangle rt1(7, 4);
  Rectangle rt2(4, 5);

  cout << "area of first rectangle" << rt1.printarea() << endl;
  cout << "area or second rectangle" << rt2.printarea() << endl;
  return 0;
}

