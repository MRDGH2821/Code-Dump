#include <iostream>
#include <graphics.h>
using namespace std;
// C++ Implementation for drawing line


int upward(int a, int b)
{
  line(a, b, a, b - 50);
  return b - 50;
}
int downward(int a, int b)
{
  line(a, b, a, b + 50);
  return b + 50;
}
int forward(int a, int b)
{
  line(a, b, a + 50, b);
  return a + 50;
}
// driver code
int main()
{
  // gm is Graphics mode which is a computer display
  // mode that generates image using pixels.
  // DETECT is a macro defined in "graphics.h" header file
  int gd = DETECT, gm;
  int x = 50, y = 200;


  // initgraph initializes the graphics system
  // by loading a graphics driver from disk
  initgraph(&gd, &gm, NULL);
  line(x, 0, x, 300);
  line(0, y + 50, 300, y + 50);
  char b[10], p;
  cout << "For unipolar" << endl;
  cin >> b;
  p = b[0];

  if (b[0] == '0')
    {
      y = downward(x, y);
      x = forward(x, y);
    }
  else
    {
      x = forward(x, y);
    }
  int i = 1;
  while (b[i] != '\0')
    {
      if (b[i] == '1')
        {
          if (b[i - 1] == '1')
            {
              x = forward(x, y);
            }
          else
            {
              y = upward(x, y);
              x = forward(x, y);
            }
        }


      if (b[i] == '0')
        {
          if (b[i - 1] == '0')
            {
              x = forward(x, y);
            }
          else
            {
              y = downward(x, y);
              x = forward(x, y);
            }
        }
      i++;
    }

  getch();

  // closegraph function closes the graphics
  // mode and deallocates all memory allocated
  // by graphics system .
  delay(10);
  closegraph();
}
