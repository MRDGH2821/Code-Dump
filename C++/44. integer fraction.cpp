#include <stdio.h>
#include <simplecpp>

double split(double d)
{
  int int_part = d;

  return int_part;
}
main_program
{
  double num, jk;
  printf("Enter a decimal number \n");
  scanf("%lf", &num);
  jk = split(num);
  double frac_part = (num - jk);
  printf("Num = %f, intpart = %d, decpart = %f\n", num, jk, frac_part);
}
