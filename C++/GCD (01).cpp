#include <simplecpp>

main_program
{
  int a, b, p, i, g;

  cout << "Enter The Two No.s";
  cin >> a;
  cin >> b;

  p = a * b;

  for (i = 1; i <= p; i++)
    {
      if (a % i == 0 && b % i == 0)
        g = i;
    }

  cout << "The Greatest Common Divisor Is " << g;
}
