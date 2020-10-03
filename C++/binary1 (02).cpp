#include <simplecpp>
#include <stdio.h>

main_program
{
  int low = 0, high = 9, mid, key;
  printf("Please enter the elements:");
  scanf("%d", &key);
  int a[] = { 3, 10, 8, 89, 76, 54, 36, 57, 67, 99 };
  while (low <= high)
    {
      mid = (low + high) / 2;
      if (key < a[mid])
        high = mid - 1;
      else if (key > a[mid])
        low = mid + 1;
      if (key == a[mid])
        {
          printf("The element is found at location: %d", mid + 1);
          break;
        }
    }
  if (low > high)
    printf("The element is not in given list");
}

