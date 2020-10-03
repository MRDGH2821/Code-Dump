#include <simplecpp>
#include <stdio.h>
main_program
{
  int a[2][2], b[2][2], c[2][2], d[2][2];  int i, j;
  printf("Enter the elements of 1st matrix\n");
  for (i = 0; i < 2; i++)
    for (j = 0; j < 2; j++)
      scanf("%d", &a[i][j]);

  printf("Enter elements of 2nd matrix\n");
  for (i = 0; i < 2; i++)
    for (j = 0; j < 2; j++)
      scanf("%d", &b[i][j]);

  for (i = 0; i < 2; i++)
    for (j = 0; j < 2; j++)
      c[i][j] = a[i][j] + b[i][j];

  for (i = 0; i < 2; i++)
    for (j = 0; j < 2; j++)
      d[i][j] = a[i][j] - b[i][j];

  printf("sum of matrix:\n");
  for (i = 0; i < 2; i++)
    {
      for (j = 0; j < 2; j++)
        printf("%d\t", c[i][j]);

      printf("\n");
    }
  printf("\n");
  printf("subtraction of two matrix :\n");

  for (i = 0; i < 2; i++)
    {
      for (j = 0; j < 2; j++)
        printf("%d\t", d[i][j]);

      printf("\n");
    }                        // omkar nichit (40) //
  wait(8);
}






