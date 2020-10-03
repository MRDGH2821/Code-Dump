#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_bet(int max);
int roll_dice(void);

int main(void)
{
  int cash = 100;

  printf("Welcome to Crap Craps\n");
  srand(time(NULL));

  while (cash != 0)
    {
      int bet = get_bet(cash);
      int point = roll_dice();
      if (!bet)
        break;

      printf("you rolled %d\n", point);
      if (point == 7 || point == 11)
        {
          printf("You Win!\n");
          cash += bet + bet;
        }
      else if (point == 2 || point == 3 || point == 12)
        {
          printf("You Loose!\n");
          cash -= bet;
        }
      else
        {
          for (;; )
            {
              int roll = roll_dice();
              printf("you rolled %d\n", roll);
              if (roll == 7)
                {
                  printf("Craps! you loose.\n");
                  cash -= bet;
                  break;
                }
              else if (roll == point)
                {
                  printf("You Win!\n");
                  cash += bet + bet;
                  break;
                }
            }
        }
    }
  printf("thanks for playing you walk away with $%d\n", cash);
  system("pause");
}

int get_bet(int max)
{
  int bet;

  printf("0 to quit, max bet is %d\nenter bet:", max);
  do
    {
      scanf("%d", &bet);
    } while (bet < 0 || bet > max);
  fflush(stdin);
  return bet;
}

int roll_dice(void)
{
  return (rand() % 6) + (rand() % 6) + 2;
}
