//Arithmatic operations of any two numbers entered by user
#include <simplecpp>
#include <stdio.h>
main_program
{
  int a, b;
  float add, sub, mult, div, mod;

  printf("Enter any two numbers");
  scanf("%d%d", &a, &b);

  add = a + b;
  sub = a - b;
  mult = a * b;
  div = a / b;
  mod = a % b;

  printf("Addition=%f\nSubstraction=%f\nMultiplication=%f\nDivision=%f\nModular Division=%f\n", add, sub, mult, div, mod);
}
