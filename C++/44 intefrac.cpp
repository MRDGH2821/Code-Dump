#include <simplecpp>
#include <stdio.h>
void split(float a)
{
  int b;
  float c;

  b = a;
  c = a - (float)b;
  printf("The Integer Part Is %d\n", b);
  printf("The Fractional Part Is %f\n", c);
}

main_program
{
  float f;

  printf("Enter The Number: ");
  scanf("%f", &f);
  split(f);
}
