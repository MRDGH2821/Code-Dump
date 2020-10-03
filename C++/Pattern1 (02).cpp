//Program To Print The Pattern
/* 1
   2 3
   4 5 6
   7 8 9 10
   11 12 13 14 15 */
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
