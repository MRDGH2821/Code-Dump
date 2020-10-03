#include <stdio.h>
int main()

{
  int a[5];
  int temp, i, j;

  printf("Enter the elements to be sorted\n");
  for (i = 0; i < 5; i++)

    {
      scanf("%d", &a[i]);
    }


  for (j = 0; j < 5; j++)
    {
      for (i = 0; i < 5; i++)
        {
          if (a[i] > a[i + 1])
            {
              temp = a[i];
              a[i] = a[i + 1];
              a[i + 1] = temp;
            }
        }
    }

  printf("Sorted elements are:-\n");
  for (int i = 0; i < 5; i++)
    {
      printf("%d\n", a[i]);
    }
}
