#include <stdio.h>
#include <conio.h>
void main()
{
  int count = 0;

  for (int i = 2; i <= 100; i++)
    {
      int j;
      for (j = 1; j <= i; j++)
        {
          if ((i % j) == 0)
            {
              count++;
            }
        }
      if (count == 2)
        {
          printf("%d", j);
          count = 0;
        }
    }
  getch();
}
