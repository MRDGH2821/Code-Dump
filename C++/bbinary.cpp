#include <simplecpp>
main_program
{
  int i;
  int a[10];
  printf("Enter 10 array elements in ascending order\n");
  for (i = 0; i < 10; i++)
    {
      scanf("%d", &a[i]);
    }
  ;

  int strt, mid, end, j;
  strt = 0;
  end = 9;
  mid = (strt + end) / 2;

  printf("Enter an element to search");
  scanf("%d", &j);

 s: if (j == a[mid])
    {
      printf("Element found at index %d", mid);
    }
  else if (j < a[mid])
    {
      end = mid;
      mid = (strt + end) / 2;
    }
  else if (j > a[mid])
    {
      strt = mid;
      mid = (strt + end) / 2;
    }
  goto s;
}
