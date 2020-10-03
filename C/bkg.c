#include <stdio.h>
int main()
{
  int a[10];
  int num, i, flag;

  printf("enter 5 nos.");
  for (i = 0; i < 5; i++)
    {
      scanf("%d", &a[i]);
    }
  printf("enter no to be searched");
  scanf("%d", &num);
  for (i = 0; i < 5; i++)
    {
      if (num == a[i])
        {
          flag = 1;
          break;
        }
    }
  if (flag == 1)
    {
      printf("no is found at %d", i + 1);
    }
  else
    {
      printf("no is not found");
    }
}
