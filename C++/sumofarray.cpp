#include <stdio.h>
int main()
{
  int a[5], i, sum = 0;

  for (i = 0; i < 5; i++)
    {
      scanf("%d", &a[i]);
    }

  for (i = 4; i >= 0; i--)
    {
      sum = sum + a[i];
    }
  printf("the sum=%d", sum);
}

