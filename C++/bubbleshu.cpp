#include <simplecpp>
#include <stdio.h>

main_program
{
  int a[7], i, j, t = 0;
  printf("ENTER ANY 7 NUMBRERS TO BE SORTED");
  for (i = 0, i <= 6, i++)
    {
      scanf("%d", &a[i]);
    }
  for (j = 0, j <= 6, j++)
    {
      for (i = 0, i <= 4, i++)
        {
          if (a[i] < a[i + 1])
            {
              t = a[i];
              a[i] = a[i + 1];
              a[i + 1] = t;
            }
        }
    }
  for (i = 0, i = 6, i++)
    {
      printf("%d/n", a[i]);
    }
}

