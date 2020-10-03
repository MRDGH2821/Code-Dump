#include <simplecpp>
#include <stdio.h>
main_program
{
  int a[5], temp, i, j;
  for (j = 0; j < 5; j++)
    {
      scanf("%d", &a[j]);
    }
  for (i = 0; i < 5; i++)
    {
      for (j = 0; j < 5; j++)
        {
          if (a[j] > a[j + 1])
            {
              temp = a[j];
              a[j] = a[j + 1];
              a[j + 1] = temp;
            }
        }
    }
  for (j = 0; j < 5; j++)
    {
      printf("%d", a[j]);
    }
}
