#include <simplecpp>
main_program
{
  int a, b, c, d, avg;

  cout << "Enter any first integer number ";
  cin >> a;
  cout << "Enter any second integer number ";
  cin >> b;
  cout << "Enter any third integer number ";
  cin >> c;
  cout << "Enter any forth integer number ";
  cin >> d;

  avg = (a + b + c + d) / 4;

  cout << "Average of the four numbers is " << avg;
}
