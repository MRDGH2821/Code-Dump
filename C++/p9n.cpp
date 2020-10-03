#include <iostream.h>
#include <stdio.h>
void main()
{
  int a[100], i, item, n;

  cout << "Enter desired array size(max 100) ";
  cin >> n;
  for (i = 0; i < n; i++)
    {
      cout << "Enter element no" << i + 1 << ":";
      cin >> a[i];
    }
  cout << "\nEnter item to search: ";
  cin >> item;
  for (i = 0; i <= n; i++)
    if (item == a[i])
      {
        cout << "\nItem found at location " << i + 1;
        break;
      }
  if (i > n)
    cout << "\nItem does not exist.";
}