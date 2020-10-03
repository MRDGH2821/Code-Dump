#include <simplecpp>
main_program
{
  int a[10];
  int i, j, k;
  for (i = 0; i < 10; i++)
    {
      cout << "enter the elements";
      cin >> a[i];
    }
  for (i = 0; i < 10; i++)
    {
      for (j = 0; j < (10 - i); j++)
        {
          if (a[j] > a[j + 1])
            {
              k = a[j];
              a[j] = a[j + 1];
              a[j + 1] = k;
            }
        }
    }
  cout << "the sorted array is";
  for (i = 0; i < 10; i++)
    {
      cout << a[i] << endl;
    }
}
