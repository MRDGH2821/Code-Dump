
//bubble sort
#include <stdio.h>
int main()
{
  int a[10], temp, i, j, k;

  for (i = 0; i < 10; i++) // accepting array
    {
      printf("Enter number: ");
      scanf("%d", &a[i]);
    }


  for (j = 0; j < 10; j++) // for passes
    {
      for (k = 0; k < (10 - j); k++) // for comparing the elements
        {
          if (a[k] > a[k + 1])
            {
              temp = a[k]; // swapping
              a[k] = a[k + 1];
              a[k + 1] = temp;
            }
        }
    }

  for (i = 0; i < 10; i++) //printing sorted array
    {
      printf("%d\n", a[i]);
    }

  return 0;
}

