#include <simplecpp>
#include <stdio.h>
main_program
{
  int array[100], n, i, j, position, temp;
  printf("Enter number of elements\n");
  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  for (i = 0; i < (n - 1); i++)
    {
      position = i;

      for (j = i + 1; j < n; j++)
        {
          if (array[position] > array[j])
            position = j;
        }
      if (position != i)
        {
          temp = array[i];
          array[i] = array[position];
          array[position] = temp;
        }
    }
  printf("Sorted list in ascending order:\n");
  for (i = 0; i < n; i++)
    printf("%d\n", array[i]);
}
