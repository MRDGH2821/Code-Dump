#include <simplecpp>
#include <stdio.h>
main_program
{
  int i, f, l, m, n, s, a[100];
  printf("enter the number of array elements\n");
  scanf("%d", &n);
  printf("enter the array elements\n");
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  printf("Enter value to find\n");
  scanf("%d", &s);
  f = 0; l = n - 1; m = (f + l) / 2; // here f = first , l = last and m is middle //
  while (f <= l)
    {
      if (a[m] < s)
        f = m + 1;
      else if (a[m] == s)
        {
          printf("the number is found at location %d\n", m + 1); // here m+1 because this is an array system //
          break;
        }
      else
        l = m - 1;
      m = (f + l) / 2;
    }
  if (f > l)
    printf("The number %d not found in array\n", s);
  wait(5);     // Omkar Nichit (40)//
}
