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
  l = a;
  b = c;
}
void put()
{
  cout << "Area is : " << l * b << endl;
}
};
int main()
{
  int inp[3][2];

  for (int i = 0; i < 3; i++)
    {
      cout << "Enter the dimensions of Rectangle " << i + 1 << endl;
      cin >> inp[i][0] >> inp[i][1];
    }
  clrscr();
  rec obj[3] = { rec(inp[0][0], inp[0][1]), rec(inp[1][0], inp[1][1]), rec(inp[2][0], inp[2][1]) };
  cout << "Displaying Areas of Rectangles : \n";
  for (i = 0; i < 3; i++)
    {
      obj[i].put();
    }
  getch();
  return 0;
}