#include <simplecpp>
main_program
{
  int a[5] = { 15, 19, 5, 41, 55 };
  int i, j, t;
  for (i = 0, j < 4, j++)
    {
      for (i = 0, i < 4, i++)
        {
          if (a[i] > a[i + 1])
            {
              t = a[i];
              a[i] = a[i + 1];
              a[i + 1] = t;
            }
          {
          }
        }
    }
  for (i = 0, i <= 4, i++)
    cout << a[i] << "\n";
}
