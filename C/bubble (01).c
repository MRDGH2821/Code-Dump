/*
 * NAME:KATHA PATEL
 * ROLL NO.:33
 * DIV:I
 * GR NO.:11810454
 */
#include <stdio.h>
int main()
{
  int i, j, t;
  int a[10];

  printf("\nEnter 10 values in the array");
  for (i = 0; i < 10; i++)
    scanf("%d", &a[i]);
  for (i = 0; i < 9; i++)
    {
      for (j = 0; j < 9 - i; j++)
        {
          if (a[j] > a[j + 1])
            {
              t = a[j];
              a[j] = a[j + 1];
              a[j + 1] = t;
            }
        }
    }
  for (i = 0; i < 10; i++)
    printf("\t%d", a[i]);
  return 0;
}                                       /* main */
