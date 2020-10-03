#include <simplecpp>
#include <stdio.h>
main_program {
  int a, overtimepay;
  printf("a=");
  scanf("%d", &a);
  if (a > 40)
    {
      overtimepay = (a - 40) * 12;
    }
  else
    {
      overtimepay = 0;
    }
  printf("overtimepay=%d", overtimepay);
}
