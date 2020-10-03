#include <iostream.h>
int main()
{
  int x[10][10], y[10][10], prod[10][10], r1, c1, r2, c2, i, j, k;

  cout << " Rows and columns of both the matrices must be less than 9 or it will result in random error" << endl;
 s: cout << "Enter rows and columns for first matrix: \n";
  cin >> r1 >> c1;
  cout << endl;
  cout << "Enter rows and columns for second matrix: \n";
  cin >> r2 >> c2;
  while (c1 != r2)
    {
      cout << " ERROR! : Column of first matrix must be equal to row of second." << endl;
      goto s;
    }
  cout << endl << "Enter elements of matrix 1:" << endl;
  for (i = 0; i < r1; ++i)
    for (j = 0; j < c1; ++j)
      {
        cout << "Enter element x" << i + 1 << j + 1 << " : ";
        cin >> x[i][j];
      }
  cout << endl << "Enter elements of matrix 2:" << endl;
  for (i = 0; i < r2; ++i)
    for (j = 0; j < c2; ++j)
      {
        cout << "Enter element y" << i + 1 << j + 1 << " : ";
        cin >> y[i][j];
      }
  for (i = 0; i < r1; ++i)
    for (j = 0; j < c2; ++j)
      {
        prod[i][j] = 0;
      }
  for (i = 0; i < r1; ++i)
    for (j = 0; j < c2; ++j)
      for (k = 0; k < c1; ++k)
        {
          prod[i][j] += x[i][k] * y[k][j];
        }
  cout << endl << "Output Matrix: " << endl;
  for (i = 0; i < r1; ++i)
    for (j = 0; j < c2; ++j)
      {
        cout << " " << prod[i][j];
        if (j == c2 - 1)
          cout << endl;
      }
  return 0;
}