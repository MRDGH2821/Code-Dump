#include <simplecpp>
main_program
{
  int l, i, j;
  int a[10];
  printf("Enter 10 array elements\n");
  for (i = 0; i < 10; i++)
    {
      scanf("%d", &a[i]);
    }
  ;
  for (j = 0; j < 10; j++)
    {
      for (i = 0; i < 10; i++)
        {
          if (a[i] > a[i + 1])
            {
              l = a[i + 1];
              a[i + 1] = a[i];
              a[i] = l;
            }
        }
      ;
    }
  ;

  printf("Sorted array is\n");
  for (int i = 0; i < 10; i++)
    {
      printf("%d ", a[i]);
    }
  ;
  printf("\n");
  return 0;
}

