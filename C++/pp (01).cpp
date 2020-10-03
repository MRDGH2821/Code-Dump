#include <stdio.h>
int main()
{
  int a[100]; int lb, ub;

  printf("enter the array \n");
  for (int i = 0; i < 9; i++)
    {
      scanf("%d", &a[i]);
    }
  int n;

  lb = a[0];
  ub = a[8];
  int found = 0;
  printf("enter the number to be searched \n");
  scanf("%d", &n);
  int m;

  while (lb <= ub)
    {
      m = (lb + ub) / 2;
      if (n > a[m])
        lb = m + 1;
      else if (n < a[m])
        ub = m - 1;
      else if (n == a[m])
        printf ("number found

printf("number not found ");
}

