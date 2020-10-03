//Program To Print The Pattern
/* 1 2 3 4 5
   2 2 3 4 5
   3 3 3 4 5
   4 4 4 4 5
   5 5 5 5 5 */
#include <simplecpp>

main_program
{
  int i, j, k;

  for (i = 1; i <= 5; i++)
    {
      for (k = 1; k <= i; k++)
        {
          cout << i;
        }

      for (j = (i + 1); j <= 5; j++)
        {
          cout << j;
        }

      cout << endl;
    }
}
