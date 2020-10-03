#include <stdio.h>
int main()
{
  char a[25]; int i;

  printf("enter a string   ");
  scanf("%s", a);
  for (i = 0; a[i] != 0; )
    i++;
  printf("%d", i);
  return 0;
}
