#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
  int n, i, a[50], search, first, last, middle;

  cout << "Enter total number of elements :";
  cin >> n;
  cout << "Enter " << n << " numbers \n";
  for (i = 0; i < n; i++)
    {
      cin >> a[i];
    }
  cout << "Enter a number to find :";
  cin >> search;
  first = 0;
  last = n - 1;
  middle = (first + last) / 2;
  while (first <= last)
    {
      if (a[middle] < search)
        {
          first = middle + 1;
        }
      else if (a[middle] == search)
        {
          cout << search << " found at location " << middle + 1;
          break;
        }
      else
        {
          last = middle - 1;
        }
      middle = (first + last) / 2;
    }
  if (first > last)
    {
      cout << "Not found! " << search << " is not in the list.";
    }
  getch();
  return 0;
}