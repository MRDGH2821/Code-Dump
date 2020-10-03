#include <stdio.h>
int main()
{
  int a, i, count;

  printf("Enter a number to check weather it is prime or not :  ");
  scanf("%d", &a);

  for (i = 0; i <= 10; i++)
    {
      if (a % i == 0)
        {
          count++;
        }
    }

  if (count == 2)
    {
      printf("The number %d is prime.\n", a);
    }
  else
    {
      printf("The number entered is not a prime number.\n");
    }
}
