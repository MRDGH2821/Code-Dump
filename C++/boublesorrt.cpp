#include <simplecpp>
#include <stdio.h>
main_program
{
  int i, j, temp, m, n;
  printf("Enter number of array element\n");
  scanf("%d", &n);
  int a[n];
  printf("Enter the array elements\n");
  for (m = 0; m <= n - 1; m++)
    {
      scanf("%d", &a[m]);
    }
  for (j = 0; j <= n - 2; j++)
    {
      for (i = 0; i <= n - 2 - j; i++)
        {
          if (a[i] > a[i + 1])
            {
              temp = a[i]; a[i] = a[i + 1]; a[i + 1] = temp;
            }
        }
    }
  for (i = 0; i <= n - 1; i++)
    printf("%d\t", a[i]);
  wait(5);
  // Omkar Nichit(40) //
}
