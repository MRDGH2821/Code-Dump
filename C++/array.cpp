#include <simplecpp>
main_program
{
  float avg;
  int a[10], i, l, sum = 0;
  for (i = 0; i <= 9; i++)
    {
      cin >> a[i];
    }
  l = a[0];
  for (i = 1; i <= 9; i++)
    {
      if (l < a[i])
        {
          l = a[i];
        }
    }
  cout << "largest value is=" << l;
  l = a[0];
  for (i = 1; i <= 9; i++)
    {
      if (l > a[i])
        {
          l = a[i];
        }
    }
  cout << "lowest value=" << l;
  for (i = 0; i <= 10; i++)
    {
      sum = sum + a[i];
    }
  avg = sum / 10;
  cout << "the average is= " << avg;
}
