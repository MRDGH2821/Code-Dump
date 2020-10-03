#include <stdio.h>
#include <simplecpp>
main_program
{
  int a, b, ar, ac, pr, pc, r;
  printf("Enter length and width of rectangle: ");
  scanf("%d%d", &a, &b);

  printf("Enter radius: ");
  scanf("%d", &r);

  ar = (a * b);
  pr = ((2 * a) + (2 * b));

  ac = (3.14 * r * r);
  pc = (3.14 * 2 * r);

  printf("\n\nArea of rectangle = %d", ar);
  printf("\nPerimeter of rectabgle = %d", pr);

  printf("\n\nArea of the circle = %d", ac);
  printf("\nCircumference of the circle = %d", pc);

  printf("\n\nPress any key to close.");

  return 0;
}
