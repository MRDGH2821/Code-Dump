#include <simplecpp>
main_program
{
  int yr;
  printf("Enter a year\n");
  scanf("%d", &yr);
  if (yr % 100 == 0)
    {
      if (yr % 400 == 0)
        printf("The century year is a leap year\n");
      else
        printf("The century year is not a leap year\n");
    }
  else if (yr % 4 == 0)
    printf("It is yeap year\n");
  else
    printf("It is not a leap year\n");
}


