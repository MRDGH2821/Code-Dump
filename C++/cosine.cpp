#include <simplecpp>
#include <math.h>
#include <stdio.h>
int fl(int n)
{
  int i, f = 1;

  for (i = 1; i <= n; i++)
    {
      f = f * i;
    }
  return f;
};

float cosine(int x)
{
  float cs;

  cs = 1 - (pow(x, 2) / fl(2)) + (pow(x, 4) / fl(4)) - (pow(x, 6) / fl(6));
  return cs;
}

main_program
{
  int deg, rad;

  printf("Enter degrees\n");
  scanf("%d", &deg);
  rad = (deg / 180) * 3.14;
  printf("\nCosine of %d degrees (using user defined function) is = %0.1f\n", deg, cosine(rad));
  printf("\nCosine of %d degrees (using library defined function) is = %lf\n", deg, cos(rad));
}
