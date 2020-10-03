/**	Name -- Sharwari Daware
        Division -- B
        Roll No. -- 14
        Batch -- B1 */
//Program To Display The Pattern
/* 1 2 3 4 5 6 7
   1 2 3 4 5
   1 2 3
   1             */
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
}
