// Implement binary search

#include <stdio.h>
int counter = 0, size;
void binary(int a[], int key, int start, int end)
{
  //int size=sizeof(a)/sizeof(a[0]);
  //int start=0,end=size;
  int mid = 0;

  while (start < end)
    {
      counter++;
      mid = (start + end) / 2;

      if (key == a[mid])
        {
          printf("Found at index %d\n", mid);
        }
      else if (key > a[mid])
        {
          start = mid + 1;
        }
      else if (key < a[mid])
        {
          end = mid - 1;
        }
    }
}
void bubble(int *ap)
{
  int temp;

  for (int j = 0; j < size; j++)
    for (int i = 0; i < size - 1; i++)
      {
        if (*(ap + i) > *(ap + i + 1))
          {
            temp = *(ap + i);
            *(ap + i) = *(ap + i + 1);
            *(ap + i + 1) = temp;
          }
      }
  ;
  printf("Array sorted\n");
}

int main()
{
  printf("Enter number of elements: ");
  scanf("%d", &size);
  int arr[size];

  printf("Enter elements: ");
  for (int k = 0; k < size; k++)
    {
      scanf("%d", arr + k);
    }

  for (int k = 0; k < size; k++)
    {
      printf("%d\t", *(arr + k));
    }

  bubble(arr);

  printf("\nEnter key: ");
  int ky;
  scanf("%d", &ky);

  binary(arr, ky, 0, size - 1);
  printf("Number of comparisions: %d\n", counter);
}
