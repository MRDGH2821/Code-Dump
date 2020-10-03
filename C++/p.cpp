//




#include <simplecpp>
#include <stdio.h>
int main()
{
  int a, b;
  float add, sub, multi, div, mou;

  printf("Enter the value of a = \n");
  scanf("%d", &a);
  printf("Enter the value of b = \n");
  scanf("%d", &b);

  add = a + b;
  sub = a - b;
  multi = a * b;
  div = a / b;
  mou = a % b;

  printf(" The arithematic operations of a and b are as fallows\n addition =%f\n substration =%f\n  multilication =%f\n division =%f\n modolus =%f\n", add, sub, multi, div, mou);
}
