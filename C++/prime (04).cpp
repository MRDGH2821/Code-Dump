#include <simplecpp>
#include <stdio.h>

main_program
{
  int i, num, p = 0;
  printf("Please enter number :\n");
  scanf("%d", &num);
  for (i = 1; i <= num; i++)
    {
      if (num % i == 0)
        {
          p++;
        }
    }
  if (p == 2)
    {
      printf("Entered number is %d" \ n "and it is prime number ", num);
    }
  else
    {
      printf("Entered number is %d" \ n "and it is not prime number", num; );
    }
}

