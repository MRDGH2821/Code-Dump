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

  printf("\nString length of c = %d", strlen(c));
  printf("\nString length of d = %d\n", strlen(d));

  printf("\nOriginal string c \n");
  puts(c);
  printf("\nOriginal string d \n");
  puts(d);

  printf("\nCopying string d to c upto 3 elements\n");
  puts(strncpy(c, d, 3));
}
