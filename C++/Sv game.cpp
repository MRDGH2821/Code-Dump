#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
int main()
{
  int num, guess, tries = 0;
  time_t t;

  srand(time(&t));
  num = rand() % 100 + 1;
  printf("Guess My Number Game\n\n");
  do
    {
      printf("Enter a guess between 1 and 100 : ");
      scanf("%", &guess);
      tries++;
      if (guess > num)
        printf("Too high!\n\n");
      else if (guess < num)
        printf("Too low!\n\n");
      else
        printf("\nCorrect! You got it in '%d' guesses!\n", tries);
    } while (guess != num);
  getch();
  return 0;
}
