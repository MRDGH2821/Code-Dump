#include <stdio.h>
int main()
{
  int a[10];
  int i, j, temp;

  printf("enter 10 nos.");
  for (j = 0; j < 10; j++)
    {
      scanf("%d", &a[j]);
    }

  for (i = 0; i < 10; i++)
    {
      for (j = 0; j < 10; i++)
        {
          if (a[j] > a[j + 1])
            {
              temp = a[j + 1];
              a[j + 1] = a[j];
              a[j] = temp;
            }
        }
    }
  printf("sorted array is");
  for (i = 0; i < 5; i++)
    {
      printf("%d", a[i]);
    }
}
