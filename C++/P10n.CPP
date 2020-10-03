#include <iostream.h>
#include <stdio.h>
#include <conio.h>
#define MAX 100
void BubbleSort(int, int);
void BubbleSort(int arr[], int n)
{
  int i, j;

  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n - i - 1; j++)
        {
          if (arr[j] > arr[j + 1])
            {
              arr[j] = arr[j] + arr[j + 1];
              arr[j + 1] = arr[j] - arr[j + 1];
              arr[j] = arr[j] - arr[j + 1];
            }
        }
    }
}
void main()
{
  int n, i; int arr1[MAX];

  clrscr();
  cout << "\nEnter the number of data element to be sorted: ";
  cin >> n;
  for (i = 0; i < n; i++)
    {
      cout << "Enter element " << i + 1 << ": ";
      cin >> arr1[i];
    }
  BubbleSort(arr1, n);
  // Display the sorted data.
  cout << "\nSorted Data ";
  for (i = 0; i < n; i++)
    {
      cout << "->" << arr1[i];
    }
  getch();
}