/**	Name -- Brishti Dule
        Division -- B
        Roll No. -- 17
        Batch -- B1
        Program -- To Print First 10 Prime No.s */

#include <simplecpp>

main_program
{
  int i, j, a, k;
  i = 1;
  j = 0;

  while (j <= 10)
    {
      a = 1;
      k = 0;
      repeat(i)
      {
        if (i % a == 0)
          k++;

        a++;
      }

      if (k == 2)
        {
          j++;
          cout << "The No. Is Prime = " << i << endl;
        }

      i++;
    }
}
