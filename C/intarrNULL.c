#include <stdio.h>

int main()
{
  int a[10] = { 0, 1, 2, 3, 4, 5 };

  //a[8]=NULL;
  printf("%d\n", a[8]);
  printf("%d\n", a[9]);
  int p = sizeof(a) / sizeof(int);
  printf("%d", p);
}
