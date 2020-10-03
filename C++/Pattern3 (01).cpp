//Program To Print The Pattern
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
