#include <simplecpp>
main_program
{
  int a[5] = { 17, 27, 3, 689, 45 }, i, high, mid, low;
  printf("Enter a number which is to be found");
  scanf("%d", &i);
  high = a[4];
  low = a[0];
  while (i > 0)
    {
      mid = (high + low) / 2;

      if (i > mid)
        {
          low = a[mid - 1];
        }
      else if (i < mid)
        {
          high = a[mid + 1];
        }
      else if (i = mid)
        {
          printf("found");
          break;
        }
    }
}




