/*
   NAME:KATHA PATEL
   DIV:I
   ROLL NO.:33
   GR NO.:11810454
 */
#include <stdio.h>
void main()
{
  int n, a[5], i;

  printf("Enter 5 no. in array\n");
  for (i = 0; i < 5; i++)
    {
      scanf("%d", &a[i]);
    }
  printf("Enter the no. to be found\n");
  scanf("%d", &n);
  for (i = 0; i < 5; i++)
    {
      if (a[i] == n)
        {
          printf("The no. is found at %d", i + 1);
          break;
        }
      else
        printf("The no. not found");
    }
}
