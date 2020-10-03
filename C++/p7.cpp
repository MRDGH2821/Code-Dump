#include <iostream.h>
int main()
{
  int i, j, n, l, tmp, min, a[30];

  cout << "Enter the number of elements:";
  cin >> n;
  cout << "\nEnter the elements\n";
  for (i = 0; i < n; i++)
    {
      cin >> a[i];
    }
  for (i = 0; i < n - 1; i++)
    {
      min = a[i];
      l = i;
      for (j = i + 1; j < n; j++)
        {
          if (min > a[j])
            {
              min = a[j];
              l = j;
            }
        }
      tmp = a[i];
      a[i] = a[l];
      a[l] = tmp;
    }
  cout << "\nSorted list is as follows\n";
  for (i = 0; i < n; i++)
    {
      cout << a[i] << endl;
    }
  return 0;
}