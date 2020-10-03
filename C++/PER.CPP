#include <iostream.h>
#include <stdio.h>
#include <conio.h>
void main()
{
  clrscr();
  int a, b, c, d, e;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &d);
  scanf("%d", &e);
  float per = (a + b + c + d + e) / 5;
  printf("percent= %f ", per);

  if (per >= 90)
    {
      printf("A+");
    }
  else if (per >= 80 && per <= 90)
    {
      printf("B+");
    }
  else if (per >= 70 && per < 80)
    {
      printf("C");
    }
  else
    {
      printf("D");
    }

  getch();
}