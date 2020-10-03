//Program To Display The Pattern
#include <simplecpp>

main_program
{
  int i, j;

  for (i = 7; (i <= 7 && i >= 1); i -= 2)
    {
      for (j = 1; j <= i; j++)
        {
          cout << j;
        }

      cout << endl;
    }
  wait(3);
}
