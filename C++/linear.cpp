#include <simplecpp>
#include <stdio.h>
main_program
{
  int n[10];
  int s;
  printf("enter number to be searched");
  scanf("%d", &s);
  printf("enter elements");
  for (int i = 0; i < 10; i++)
    {
      scanf("%d", &n[i]);
    }
  int l = 0;
  int h = 9;
  int mid;
  for (int i = 0; i < 9; i++)
    {
      mid = (l + h) / 2;
      if (s == n[mid])
        {
          printf("the number =%d", mid);
        }
      else if (s < n[mid])
        {
          h = mid;
        }
      else
        {
          l = mid;
        }
    }
}
