#include <stdio.h>
int main()
{
  int a[7] = { 10, 20, 30, 40, 50, 60, 70 };
  int i, key = 0, Flag = 0;

  printf("Enter%d:", key);
  scanf("%d", &key);
  for (i = 0; i <= 4; i++)
    {
      if (key == a[i])
        {
          Flag = 1;
          break;
        }
    }
  if (Flag == 1)
    printf("key is found at place %d:", i);
  else
    printf("key is not found");
}
