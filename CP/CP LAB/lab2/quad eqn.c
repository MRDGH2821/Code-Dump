#include <stdio.h>
#include <math.h>

int main()
{
  int a, b, c, d;
  double x, y;

  printf("enter the coeff of term x*x \n");
  scanf("%d", &a);
  printf("enter the coeff of term x \n");
  scanf("%d", &b);
  printf("enter the value of constant \n");
  scanf("%d", &c);
  d = b * b - 4 * a * c;
  printf("value of discriminant is %d \n", d);
  x = (-b + sqrt(d)) / (2 * a);
  printf("1st root= %f \n", x);
  y = (-b - sqrt(d)) / (2 * a);
  printf("2nd root= %f \n", y);
  return 0;
}

