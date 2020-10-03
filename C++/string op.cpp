#include <simplecpp>
#include <stdio.h>
main_program
{
  char d[5];
  char c[10];

  printf("Enter a string of max 5 characters\n");
  gets(c);

  printf("Enter another string of max 5 characters\n");
  gets(d);

  printf("\nComparing string\n");
  printf("%d\n", strcmp(c, d));

  printf("\nConcatenation of string d in c\n");
  puts(strcat(c, d));
}
