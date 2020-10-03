#include <iostream>
#include <graphics.h>
using namespace std;


int up(int xp, int yp)
{
  line(xp, yp, xp, yp - 100);
  return yp - 100;
}
int down(int xp, int yp)
{
  line(xp, yp, xp, yp + 100);
  return yp + 100;
}
int forw(int xp, int yp)
{
  line(xp, yp, xp + 50, yp);
  return xp + 50;
}

int main()
{
  /
  int gd = DETECT, gm;
  int x = 50, y = 200;



  initgraph(&gd, &gm, "");
  line(x, 0, x, 600);
  line(0, 250, 600, 250);
  char a[10], p;
  cout << "11810123 Vedant Roll No 30 B2" << endl;
  cout << "For bipolar" << endl;
  cin >> a;
  p = a[0];

  if (a[0] == '0')
    {
      y = down(x, y);
      x = forw(x, y);
    }
  else
    {
      x = forw(x, y);
    }
  int i = 1;
  while (a[i] != '\0')
    {
      if (a[i] == '1')
        {
          if (a[i - 1] == '1')
            {
              x = forw(x, y);
            }
          else
            {
              y = up(x, y);
              x = forw(x, y);
            }
        }


      if (a[i] == '0')
        {
          if (a[i - 1] == '0')
            {
              x = forw(x, y);
            }
          else
            {
              y = down(x, y);
              x = forw(x, y);
            }
        }
      i++;
    }

  getch();


  closegraph();
}
