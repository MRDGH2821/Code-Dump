#include <stdio.h>
int main()
{
  int a[5];
  int i, j, k;

  printf("enter numbers in array");
  for (i = 0; i <= 5; i++)
    {
      scanf("%d", &a[i]);
    }
  for (i = 0; i <= 5; i++)
    {
      for (j = 0; j < 5 - i; j++)
        if (a[j] < a[j + 1])
          {
            k = a[j];
            a[j] = a[j + 1];
            a[j + 1] = k;
          }
    }
  printf("sorted array is");
  for (i = 0; i <= 5; i++)
    {
      printf("\t%d", a[i]);
    }
}
