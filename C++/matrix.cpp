#include <stdio.h>
main()
{
  int a[3] = { 2, 8, 7 };
  int b[3] = { 6, 5, 2 };

  for (int i = 0; i <= 2; i++)
    {
      int d = a[i] + b[i];
      printf("%d\n", d);
    }
}
