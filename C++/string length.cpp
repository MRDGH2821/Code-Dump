#include <simplecpp>
#include <stdio.h>

int read_string(char str[100])
{
  int i = 0;
  int count = 0;

  while (str[i] != '%0')
    {
      count++;
      i++;
    }
  ;
  printf("Length of string is %d", count);
  return 0;
}


main_program
{
  int ct;
  int j = 0;
  char st[100];
  printf("Enter a max. of 100 characters");
  while (st[j] != 10 || 13)
    {
      scanf("%c", st[j]);
      j++;
    }
}
