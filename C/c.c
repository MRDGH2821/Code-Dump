#include <stdio.h>
int main()
{
  int i, x;
  int a[10];

  printf("\nEnter 10 values in the array");
  for (i = 0; i < 10; i++)
    {
      scanf("%d", &a[i]);
    }
  printf("\nEnter the value to be searched");
  scanf("%d", &x);
  for (i = 0; i < 10; i++)
    {
      if (x == a[i])
        {
          printf("\nElement found : %d\n", x); break;
        }
    }
  return 0;
}
