#include <simplecpp>
#include <string.h>
main_program
{
  int i = 0, j = 0;
  char str1[20], str2[10];
  printf("enter a string: ");
  gets(str1);
  printf("enter another string: ");
  gets(str2);
  while (str1[i] != '\0')
    {
      i++;
    }
  while (str2[j] != '\0')
    {
      str1[i] = str2[j];
      i++;
      j++;
    }
  str1[i] = '\0';
  puts(str1);
}
