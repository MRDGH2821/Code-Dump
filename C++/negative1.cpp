//Count negative numbers in the array

#include <stdio.h>
int main()
{
  int a[10], i, count = 0;

  printf("Enter the elements in the array");
  for (i = 0; i < 10; i++)
    {
      scanf("%d", &a[i]);
    }
  for (i = 0; i < 10; i++)
    {
      if (a[i] < 0)
        {
          count++;
          printf("The negative element is at %d \n", i);
        }
    }
  printf("The no. of negative elements in the array is %d \n", count);
}
