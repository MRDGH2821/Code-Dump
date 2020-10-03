#include <stdio.h>
int main()
{
  int a[7] = { 15, 19, 5, 41, 55, 45, 78 };
  int i, key = 0, Flag = 0;

  printf("Enter%d:", key);
  scanf("%d", &key);
  for (i = 0; i <= 6; i++)
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
