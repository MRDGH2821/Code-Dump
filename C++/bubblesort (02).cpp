#include <simplecpp>
#include <stdio.h>
main_program
{
  int a[] = { 17, 6, 13, 12, 2 }
  int i, j, t;
  for (j = 0; j <= 3; j++)
    {
      for (i = 0; i <= -3; i++)
        {
          if (a[i] > a[i + 1])
            {
              t = a[i]; a[i] = a[i + 1];
              a[i + 1] = t;
            }
        }
      for (i = 0; i <= 5;; i++)
        printf("%d", a[i]);
    }
