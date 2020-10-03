//Question - Compute Quotient and Remainder.
#include <simplecpp>
main_program
{
  int val1, val2, q;
  int r;
  cout << "Enter 2 values" << endl;
  cin >> val1;
  cin >> val2;

  q = val1 / val2;
  r = val1 % val2;

  cout << "Remainder = " << r << endl;
  cout << "Quotient = " << q << endl;
}
