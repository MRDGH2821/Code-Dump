#include <simplecpp>
#include <string.h>
main_program
{
  int n, rvn = 0, rem;
  printf("Input 5 digit number\n");
  scanf("%d", &n);
  while (n != 0)
    {
      rem = n % 10;
      rvn = rvn * 10 + rem;
      n /= 10;
    }
  ;

  printf("\nReversed Number = %d", rvn);
}



