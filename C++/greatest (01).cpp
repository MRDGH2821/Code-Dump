#include <simplecpp>
main_program
{
  float a, b, c;
  cout << "enter any 3 numbers";
  cin >> a >> b >> c;
  if (a > b && a > c)
    cout << "a is the greatest number" << a;
  else
    {
      if (b > c && b > a)
        cout << "b is the greatest number" << b;
      else
        cout << " is the greatest number " << c;
    }
}
