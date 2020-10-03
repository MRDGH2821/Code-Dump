#include <simplecpp>
#include <stdio.h>
main_program
{
  int x, y, z;
  printf("enter value of x:- ");
  scanf("%d", &x);
  printf("enter value of y:- ");
  scanf("%d", &y);
  printf("enter value of z:- ");
  scanf("%d", &z);
  if (x == y && y == z)
    printf("all are equal");
  else
    {
      if (x > y && x > z)
        printf("x is greater");
      else
        {
          if (y > z)
            printf("y is greater");
          else
            printf("z is greater");
        }
    }
  return(0);
}

