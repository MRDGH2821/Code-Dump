#include <simplecpp>
main_program
{
  int a[3][2], b[3][2], c[3][2], i, j;
  for (i = 0; i <= 3; i++)
    {
      for (j = 0; j <= 3; j++)
        {
          cin >> a[i][j];
        }
    }
  for (i = 0; i <= 3; i++)
    {
      for (j = 0; j <= 3; j++)
        {
          cin >> b[i][j];
        }
    }
  for (i = 0; i <= 3; i++)
    {
      for (j = 0; j <= 3; j++)
        {
          c[i][j] = a[i][j] + b[i][j];
          cout << c[i][j];
        }
    }
  for (i = 0; i <= 3; i++)
    {
      for (j = 0; j <= 3; j++)
        {
          c[i][j] = a[i][j] - b[i][j];
          cout << c[i][j];
        }
    }
}
