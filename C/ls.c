//calculation of index SWAPNIL M. J30
#include <stdio.h>
int main()
{
  int a[7] = { 10, 20, 30, 40, 50, 60, 70 };
  int i, index;

  printf("Enter the number to find its index:");
  scanf("%d", &index);
  for (i = 0; i <= 6; i++)
    {
      if (index == a[i])
        {
          printf("index of %d is %d:", index, i);
        }
    }
}
