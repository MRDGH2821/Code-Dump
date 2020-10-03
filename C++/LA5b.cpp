#include <stdio.h>
int main()

{
  int a[2];
  int b[2];
  int i, sum[2];

  printf("enter the array elements");

  for (i = 0; i < 2; i++)
    {
      scanf("%d", &a[i]);
    }
  for (i = 0; i < 2; i++)
    {
      scanf("%d", &b[i]);
    }
  for (i = 0; i < 2; i++)
    {
      printf("%d\t", a[i]);
    }
  for (i = 0; i < 2; i++)
    {
      printf("%d\t\n", b[i]);
    }
  for (i = 0; i < 2; i++)
    {
      sum[i] = a[i] + b[i];
      printf("\nSum...%d", sum[i]);
    }
}
