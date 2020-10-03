#include <simplecpp>
#include <stdio.h>
main_program
{
  int i, n, a, b;
  n = 0;
  printf("Enter The Five Digit No.");
  scanf("%d", &i);
  b = i;
  repeat(5)
  {
    if (i != 0)
      {
        a = i % 10;
        n = (n * 10) + a;
        i = i / 10;
      }
  }
  printf("The Reversed No. Is: %d", n);
  if (n == b)
    {
      printf("\nReversed no. is equal\n");
    }
  else
    {
      printf("\nReversed no. is not equal\n");
    }
}
