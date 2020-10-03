/* Favin Fernandes
   rollno:18
   GRno. 11810267
   Division B */
#include <simplecpp>
main_program
{
  int a[3][2], b[3][2], c[3][2], i, j;
  cout << "enter for a";
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 2; j++)
        {
          cin >> a[i][j];
        }
    }
  cout << "enter for b";

  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 2; j++)
        {
          cin >> b[i][j];
        }
    }
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 2; j++)
        {
          c[i][j] = a[i][j] + b[i][j];
        }
    }

  cout << "The Added Array Is";
  for (i = 0; i < 3; i++)
    {
      for (j = 0; j < 2; j++)
        {
          cout << c[i][j] << endl;
        }
    }
}
