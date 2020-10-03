// finding the greatest of the three
#include <simplecpp>
main_program
{
  float a, b, c;
  cout << "enter any 3 numbers ";

  cin >> a >> b >> c; //accepting three numbers
  if (a > b && a > c) //comparing numbers
    cout << " the greatest number " << a;
  else
    {
      if (b > c && b > a) //comparing numbers
        cout << " the greatest number " << b;
      else
        cout << "the greatest number " << c;
    }
}
