#include <simplecpp>
#include <stdio.h>
main_program
{
  int size, array[100], i, j, t;

  printf("Enter number of elements\n");
  scanf("%d", &size);

  printf("Enter %d integers\n", size);

  for (i = 0; i < size; i++)
    scanf("%d", &array[i]);

  for (i = 1; i <= size - 1; i++)
    {
      j = i;

      while (j > 0 && array[j - 1] > array[j])
        {
          t = array[j];
          array[j] = array[j - 1];
          array[j - 1] = t;
          j--;
        }
    }

  printf("Sorted list in ascending order:\n");

  for (i = 0; i <= size - 1; i++)
    {
      printf("%d\n", array[i]);
    }
}
