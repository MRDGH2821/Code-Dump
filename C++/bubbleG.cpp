#include <simplecpp>
main_program
{
  int i, j, t;
  int a[] = { 1, 20, 3, 40, 50 };
  for (i = 0; j < 4; j++)
    {
      for (i = 0; i < 4; i++)
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
  for (i = 0; i <= 4; i++)
    cout << a[i] << "\n";
}

