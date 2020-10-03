#include <simplecpp>
#include <string.h>
main_program
{
  int i = 0, j = 0;
  char str[20], str2[10],;
  printf("enter a string: ");
  gets(str);
  printf("enter another string: ");
  gets(str2);
  while (str[i] != '\0')
    i++;
  while (str2[j] != '\0')
    {
      str[i] = str[j];
      i++; j++;
    }
  for (int k = 0; k < 20; k++)
    {
      printf("catnated string os %c", str[i]);
    }
}
