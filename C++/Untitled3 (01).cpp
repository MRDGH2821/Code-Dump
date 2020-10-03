#include <simplecpp>
main_program
{
  int i, *ip;
  int a[5];
  cout << "enter the array";
  for (i = 0; i < 5; i++)
    {
      cin >> a[i];
    }

  for (i = 0; i < 5; i++)
    {
      ip = &a[i];

      cout << "\nAddress stored in ip variable:" << ip;
    }
}
