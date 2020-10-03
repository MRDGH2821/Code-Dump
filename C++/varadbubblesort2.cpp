
#include <stdio.h>
int main()
{
  int array[10], n, c, d, swap;

  printf("Enter number of elements : \t");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (c = 0; c < 10; c++)
    {
      scanf("%d", &array[c]);
    }
  for (c = 0; c < 10; c++)
    {
      for (d = 0; d < 9 - c; d++)
        {
          if (array[d] > array[d + 1])
            {
              {
                swap = array[d];
                array[d] = array[d + 1];
                array[d + 1] = swap;
              }
            }
        }
      printf("Sorted list in ascending order:\n");
      for (c = 0; c < n; c++)
        {
          printf("%d\n", array[c]);
        }
      return 0;
    }
}
