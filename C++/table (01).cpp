#include <simplecpp>
main_program
{
  int n, i = 0, j;
  cin >> n;
  for (i = 1; i < 11; i++)
    {
      j = n * i;
      cout << n << "*" << i << "=" << j << endl;
    }
}
