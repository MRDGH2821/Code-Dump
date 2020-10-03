#include <simplecpp>
#include <stdio.h>

main_program
{
  int a;
  printf("Enter the number of times you want to repeat the Star pattern ");
  scanf("%d", &a);

  int i, j;

  for (i = 1; i <= a + 1; i++)
    {
      for (j = 1; j < i; j++)
        {
          printf("*");
        }
      printf("\n");
    }
  getch();
}
