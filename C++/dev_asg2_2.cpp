#include <simplecpp>
main_program
{
  int n, sum = 0;

  cout << "\n Enter the number upto which you want the sum of the natural numbers ";
  cin >> n;

  repeat(n)
  {
    sum = sum + n;
    n = n - 1;
  }

  cout << "\n Sum of first n natural numbers is " << sum;
}
