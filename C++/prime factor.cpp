#include <simplecpp>
#include <stdio.h>
//link - https://codeforwin.org/2015/06/c-program-to-find-all-prime-factors-of-any-number.html
int primefactor(int num)
{
  int isPrime, i, j;

  for (i = 2; i <= num; i++)
    {
      if (num % i == 0)
        {
          isPrime = 1;
          for (j = 2; j <= i / 2; j++)
            {
              if (i % j == 0)
                {
                  isPrime = 0;
                  break;
                }
            }
          if (isPrime == 1)
            {
              printf("%d, ", i);
            }
        }
    }
}

main_program
{
  int n;

  printf("Enter any number to print Prime factors: ");
  scanf("%d", &n);
  printf("All Prime Factors of %d are: \n", n);
  primefactor(n);
}
