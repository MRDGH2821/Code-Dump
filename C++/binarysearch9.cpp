#include <stdio.h>
int main()
{
  int i, j, temp;
  int a[10];

  printf("enter the array");
  for (i = 0; i < 10; i++)
    {
      scanf("%d", &a[i]);
    }
  for (i = 0; i < 10; i++)
    {
      for (j = 0; j < (9 - i); j++)
        {
          if (a[j] < a[j + 1])
            {
              temp = a[j];
              a[j] = a[j + 1];
              a[j + 1] = temp;
            }
        }
    }
  for (int i = 0; i < 10; i++)
    {
      printf("%d", a[i]);
    }
}
