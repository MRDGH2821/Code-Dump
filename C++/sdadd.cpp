#include <simplecpp>
#include <stdio.h>
main_program
{
  float a[3][4], b[3][4], c[3][4];
  int i, j;
  printf("Enter elements of first matrix");
  //Input of first matrix using nested for loop
  for (i = 0; i < 3; ++i)
    {
      for (j = 0; j < 4; ++j)
        {
          scanf("%f", &a[i][j]);
        }
    }
  printf("Enter elements of second matrix");
  //Input of second matrix using nested for loop
  for (i = 0; i < 3; ++i)
    {
      for (j = 0; j < 4; ++j)
        {
          scanf("%f", &b[i][j]);
        }
    }
  //addition of corresponding elements of two arrays
  for (i = 0; i < 3; ++i)
    {
      for (j = 0; j < 4; ++j)
        {
          c[i][j] = a[i][j] + b[i][j];
        }
    }
  //Printing the sum
  printf("\nSum of matrices is\n");
  for (i = 0; i < 3; ++i)
    {
      for (j = 0; j < 4; ++j)
        {
          printf("%0.1f\t", c[i][j]);
          if (j == 3)
            printf("\n");
        }
    }
}
