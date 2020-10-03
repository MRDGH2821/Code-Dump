#include <stdio.h>
int main()
{
  int a[7];
  int j, mid, beg, end, flag = 0, item;

  printf("enter 7 nos.");
  for (j = 0; j < 7; j++)
    {
      scanf("%d", &a[j]);
    }
  printf("enter no to be searched");
  scanf("%d", &item);
  beg = a[0];
  end = a[6];

  for (j = 0; j < 7; j++)
    {
      mid = (beg + end) / 2;
      if (mid == item)
        {
          flag = 1;
          break;
        }
      else if (item < mid)
        {
          end = end - 1;
        }
      else
        {
          beg = beg + 1;
        }
    }
  if (flag == 1)
    {
      printf("no is found at %d", j + 1);
    }
  else
    {
      printf("no is not found");
    }
}


