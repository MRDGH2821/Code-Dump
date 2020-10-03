#include <simplecpp>
#include <stdio.h>
main_program
{
  int days, months;
  printf("Enter the days");
  scanf("%d", &days);
  months = days / 30;
  days = days % 30;
  printf("Months:%d Days:%d", months, days);
}

