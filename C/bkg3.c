#include <stdio.h>
int main()
{
  int a[5] = { 1, 34, 45, 31, 76 };
  int i, j, temp;


  for (i = 0; i < 5; i++)
    {
      for (j = 0; j < 5; i++)
        {
          if (a[j] > a[j + 1])
            {
              temp = a[j + 1];
              a[j + 1] = a[j];
              a[j] = temp;
            }
        }
    }
  printf("sorted array is\n");
  for (i = 0; i < 5; i++)
    {
      printf("%d", a[i]);
    }
}
