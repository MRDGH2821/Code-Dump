#include <stdio.h>
#include <simplecpp>
#include <ctype.h> // For Toupper And Tolower
main_program
{
  FILE *p, *q;
  char s[10], d[10], ch;
  printf("\nEnter The Source FileName :: ");
  gets(s);
  printf("\nEnter The Target FileName :: ");
  gets(d);
  p = fopen(s, "r");
  if (p == NULL)
    {
      printf("\nFile Not Found");
    }
  q = fopen(d, "w");
  if (q == NULL)
    {
      printf("\nFile Creating Error");
    }
  while ((ch = getc(p)) != EOF)
    {
      if (islower(ch))
        putc(toupper(ch), q);
      else
      if (isdigit(ch))
        putc(ch, q);
      else
        putc(ch, q);
    }
  printf("\n\nThe Convertion Is Successfull!\n");
  fclose(p);
  fclose(q);
  printf("\n\nThe Content Of File ‘%s’ Is ::\n", s);
  p = fopen(s, "r");
  while ((ch = getc(p)) != EOF)
    printf("%c", ch);
  fclose(p);
  printf("\n\nThe Content Of File ‘%s’ Is ::\n", d);
  q = fopen(d, "r");
  while ((ch = getc(q)) != EOF)
    printf("%c", ch);
  fclose(q);
  getch();
}
