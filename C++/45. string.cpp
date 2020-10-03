#include <simplecpp>
#include <stdio.h>
int mode(char t, char str[100])
{
  int ct = 0, y = 0, j = 0;

  while (y <= strlen(str))
    {
      if (str[y] == t)
        {
          ct++;
          printf("\nFound at index %d\n", y);
        }
      ;
      y++;
    }
  ;
  printf("\nFrequency of %c is %d\n", t, ct);
  return ct;
}

main_program
{
  char st[100];
  char f;
  printf("Enter a string\n");
  gets(st);
  printf("Enter a character to find its frequency\n");
  scanf("%c", &f);
  mode(f, st);
}
