#include <stdio.h>
int main()

int a[5] =
{
  12, 13, 15, 16, 71
};
int i, key, flag = 0;
printf("entre key element");
scanf("%d", &key);
for (i = 0; i <= 4; i++)
  {
    if (key == a[i])
      ;
    { flag = 1;
      break; }
    if (flag == 1)
      {
        printf("key is found");
      }
    else
      {
        printf("key is not found");
      }
    return(0);
  }
}





























