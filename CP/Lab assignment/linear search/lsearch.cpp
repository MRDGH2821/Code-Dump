#include <simplecpp>
main_program
{
  int i, k;
  int a[10];
  printf("Enter 10 array elements\n");
  for (i = 0; i < 10; i++)
    scanf("%d", &a[i]);

  printf("Enter number to be searched\n");
  scanf("%d", &k);
  for (i = 0; i < 10; i++)
    {
      if (a[i] == k)
        {
          printf("%d found at %d\n", k, i + 1);
        }

      else
        printf("Not Found at location %d\n", i + 1);
    }
  ;
}
