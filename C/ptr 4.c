#include <stdio.h>
void main()
{
  char *s = "hello";
  char *p = s;

  printf("%c\t%c", 1[p], s[1]);
}
