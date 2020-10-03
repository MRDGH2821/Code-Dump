#include <simplecpp>
main_program
{
  int n, i, p = 1;
  cout << "enter the number";
  cin >> n;
  for (i = 2; i <= n / 2; i++)
    {
      if (n % i == 0)
        {
          p = 0;
          break;
        }
    }

  if (p == 0)
    cout << "composite";
  else
    cout << "prime";
}
