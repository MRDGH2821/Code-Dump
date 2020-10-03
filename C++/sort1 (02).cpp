#include <simplecpp>
#include <stdio.h>
main_program

{
  int a, b, c;
  int i[] = { 4, 3, 35, 10, 88 };
  for (b = 0; b <= 3; b++)
    {
      for (a = 0; a <= 3; a++)
        {
          if (i[a] > i[a + 1])
            {
              c = i[a];
              i[a] = i[a + 1];
              i[a + 1] = c;
            }
        }
    }
  printf("The sorted elements are :");
  for (a = 0; a < 5; a++)
    {
      printf("%d \t", i[a]);
    }
}
