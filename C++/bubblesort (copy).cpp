#include <simplecpp>
main_program
{
  int a[5], temp, i, j;
  for (i = 0; i < 5; i++)
    {
      cout << "\n enter element";
      cin >> a[i];
    }
  for (j = 0; j < 5; j++)
    {
      for (i = 0; i < 5; i++)
        {
          if (a[i] > a[i + 1])
            {
              temp = a[i];
              a[i] = a[i + 1];
              a[i + 1] = temp;
            }
        }
    }
  for (int i = 0; i < 5; i++)
    {
      cout << a[i] << endl;
    }
}
