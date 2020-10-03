//Program To Print The Pattern
#include <simplecpp>

main_program
{
  int i, j, k;
  k = 1;

  for (i = 1; i <= 5; i++)
    {
      for (j = 1; j <= i; j++)
        {
          cout << k;
          k++;
        }

      cout << endl;
    }
}
