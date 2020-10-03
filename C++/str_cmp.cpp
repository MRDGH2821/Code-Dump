/* Program :- To compare two strings */
/* Name: Pranav Bapat, Division : B, Roll no: 5,
   G.R. no: 11810471, Batch: B1 */
#include <simplecpp>
main_program
{
  int i;
  char str1[15], str2[15];
  printf("Enter two strings: ");
  gets(str1);
  gets(str2);
  i = strcmp(str1, str2);
  printf(" %d ", i);
}

