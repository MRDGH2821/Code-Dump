#include <stdio.h>
int main()

{
  int a[7];
  int i, b, f, l, m, n;


  printf("Enter the no. of elements to be entered\n");

  scanf("%d", &n);

  printf("Enter the elements\n");
  for (i = 0; i < 7; i++)

    scanf("%d", &a[i]);

  printf("Enter the element to find\n");
  scanf("%d", &b);

  f = 0;
  l = n - 1;
  m = (f + l) / 2;

  while (f < l)
    {
      if (a[m] < n)
        {
          f = m + 1;
        }
      else if (a[m] == n)
        {
          printf("%d found at location %d\n", n, m + 1);
          break;
        }
      else
        {
          l = m - 1;
        }
      m = (f + l) / 2;
    }
  if (f > l)
    printf("not found! %d is not present in the list\n", b);
  return 0;
}
