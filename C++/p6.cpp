#include <iostream.h>
#include <conio.h>
class rec
{
private:
int l;
int b;
public:
rec(int a, int c)
{
  l = a; b = c;
}
void put()
{
  cout << "Area is : " << l * b << endl;
}
};
int main()
{
  rec obj[3] = { rec(3, 6), rec(2, 5), rec(5, 5) };

  cout << "Displaying Areas of Rectangles : \n";
  for (int i = 0; i < 3; i++)
    {
      obj[i].put();
    }
  getch();
  return 0;
}