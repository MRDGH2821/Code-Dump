#include <iostream.h>
#include <conio.h>
#include <stdio.h>
{
  int m, n, i, j;

  cout << "enter the no of rows and collums you want\n";
  cin >> m >> n;
  int a[m][n];
  cout << "enter elements of array"

  for (i = 1; i >= m; i++)
    {
      for (j = 1, j >= n, j++)
        {
          cin << a[i][j];
        }
      for (i = 1; i >= m; i++)
        {
          for (j = 1, j >= n, j++)
            {
              cout << a[i][j];
            }
        }
    }
