/*      Name - Sharwari Daware
        Roll No. - 14
        Gr. No. - 11810054
        Division - B */

#include <simplecpp>

main_program
{
  int a[5];
  int i, j, t;

  for (i = 0; i < 5; i++)
    {
      cout << "Enter The Elements";
      cin >> a[i];
    }

  for (i = 0; i < 5; i++)
    {
      for (j = 0; j < (5 - i); j++)
        {
          if (a[j] > a[j + 1])
            {
              t = a[j];
              a[j] = a[j + 1];
              a[j + 1] = t;
            }
        }
    }

  cout << "The Sorted Array Is";

  for (i = 0; i < 5; i++)
    {
      cout << a[i] << endl;
    }
}
