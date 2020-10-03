#include <simplecpp>
#include <stdio.h>

int read_string(char str[100])
{
  printf("Length of string is", strlen(str));
  return 0;
}


main_program
{
  char st[100];
  printf("Enter a max. of 100 characters\n");
  gets(st);
  read_string(st);
}
