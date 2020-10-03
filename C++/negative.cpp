#include <stdio.h>
int main()
{
  int i, a[5], x = 1;

  printf("enter the no.");
  for (i = 0; i < 5; i++)
    {
      scanf("%d", &a[i]);
    }
  for (i = 0; i < 5; i++)
    {
      if (a[i] < 0)
        {
          x++;
          printf("the no. is negative \n");
          printf("the  negative  no.is in the position :" "%d", i + 1);
          break;
        }
    }
}








