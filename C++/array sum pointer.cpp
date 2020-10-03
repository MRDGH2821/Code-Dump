#include <simplecpp>
#include <stdio.h>

main_program
{
  int ar[5], i;
  int *ptr;
  printf("Enter 5 array elements\n");
  for (i = 0; i < 5; i++)
    {
      scanf("%d", &ar[i]);
    }
  ;

  int sum = 0;
  ptr = ar;
  for (i = 0; i < 5; i++)
    {
      sum = sum + *ptr;
      ptr++;
    }
  printf("Sum of all array elements is %d", sum);
}