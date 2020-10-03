//#include<simplecpp>
#include <stdio.h>
int factorial(int n)
{
  int i, f = 1;

  for (i = 1; i <= n; i++)
    {
      f = f * i;
    }

  printf("The factorial is %d \n", f);
  return f;
};

//main_program
int main()
{
  int y;

  printf("Enter a no\n");
  scanf("%d", &y);
  factorial(y);
  return 0;
}
