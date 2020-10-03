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

  mid = (beg + end) / 2;
  if (mid == item)
    {
      printf("item is at mid");
    }
  else if (item < mid)
    {
      printf("item is on left side");
    }
  else
    {
      printf("item is on right side");
    }
}

