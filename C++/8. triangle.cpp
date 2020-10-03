#include <simplecpp>
#include <stdio.h>
main_program {
  int a, b, c, nt = 0;
  printf("Input 3 sides of a triangle\n");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  if (a + b > c)
    {
      if (b + c > a)
        {
          if (a + c > b)
            {
              nt = 1;
            }
          ;
        }
      ;
    }
  ;
  if (nt == 1)
    printf("The triangle is valid");

  else
    printf("The triangle is invalid");
}
