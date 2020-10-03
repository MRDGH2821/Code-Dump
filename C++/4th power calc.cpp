//4th power calculator
#include <simplecpp>
#include <stdio.h>
main_program {
  int num, pow;
  printf("Enter a number whose 4th power will be calculated\n");
  scanf("%d", &num);

  pow = num * num * num * num;

  printf("The 4th power of %d is %d", num, pow);
}
