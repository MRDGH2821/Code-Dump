#include <stdio.h>
int main()
{
  int val;
  int *p;

  p = &val;
  printf("Enter a value:");
  scanf("%d", p);
  printf("Value (using pointer): %d", *p);
}