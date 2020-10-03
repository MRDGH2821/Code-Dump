#include <simplecpp>
#include <stdio.h>
main_program
{
  int a[10], c, d, swap;
  printf("enter the numbers");
  for (int i = 0; i < 10; i++)
    {
      scanf("%d", &a[i]);
    }
  for (c = 0; c < 10; c++)
    {
      for (d = 0; d < 10 - c; d++)
        {
          if (a[d] > a[d + 1])
            {
              swap = a[d];
              a[d] = a[d + 1];
              a[d + 1] = swap;
            }
        }
    }
  printf("sorted list is ");
  for (c = 0; c < 10; c++)
    {
      printf("%d", a[c]);
    }
}

