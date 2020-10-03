#include <simplecpp>
main_program
{
  int a, b, temp;
  cout << "Enter 2 values to be swapped" << endl;
  cout << "Value a = ";
  cin >> a;
  cout << "Value b = ";
  cin >> b;

  temp = a;
  a = b;
  b = temp;

  cout << "Value a = " << a << endl;
  cout << "Value b = " << b << endl;
}
