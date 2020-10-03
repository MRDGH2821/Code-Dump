#include <simplecpp>

int main()
{
  int a = 0;
  int b = 0;
  int c = 0;

  cout << "Enter The Three Numbers ";
  cin >> a;
  cin >> b;
  cin >> c;

  if (a > b && a > c)
    {
      cout << "The Largest No Is " << a;
    }

  else
    {
      if (b > c && b > a)
        {
          cout << "The Largest No Is " << b;
        }

      else
        cout << "The Largest No Is " << c;
    }
  return 0;
}
