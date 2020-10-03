#include <simplecpp>
#include <stdio.h>
main_program
{
  int a[5], i, high = 4, low = 0, mid, key, found = 0;
  for (i = 0; i < 5; i++)
    {
      scanf("%d", &a[i]);
    }
  printf("Enter search element");
  scanf("%d", &key);
  if (low <= high)
    {
      mid = (low + high) / 2;
      if (key < a[mid])
        {
          high = mid - 1; //adjust upper limit to 1 less than middle
        }
      else
        {
          low = mid + 1; //adjust lower limit to 1 more than middle
        }
      key = a[mid];
    }
  else
    found = 1;
  return found;
}
