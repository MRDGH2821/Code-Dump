#include <iostream.h>
int main()
{
  int *ptr;
  int a[5];

  cout << "Enter array 5 elements" << endl;
  cin >> a[0];
  cin >> a[1];
  cin >> a[2];
  cin >> a[3];
  cin >> a[4];
  ptr = a;
  cout << "\nDisplaying address: " << endl;
  for (int i = 0; i < 5; ++i)
    {
      cout << "Array address: " << i << " = " << ptr + i << endl;
    }
  return 0;
}