#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

int rollDice(void)
{
  return((rand() % 6) + 1);
}

int main()
{
  int jk;
  int i, n, bet, cash;
  time_t t;
  int dice_1 = 0;
  int dice_2 = 0;
  int sum = 0;

  srand(time(&t));
  printf("Enter cash in hand\n");
  scanf("%d", &cash);



 pg: printf("Enter choice (1,2,3)\n");
  printf("1. Small bet \n2. Big bet \n3. Jackpot\n");
  scanf("%d", &n);
  printf("Enter bet ammount (should be <= %d): ", cash);
  scanf("%d", &bet);

  if (bet > cash)
    {
      printf("Error, exiting program");
      exit(1);
    }
  else
    {
      cash = cash - bet;
      printf("Cash= %d, Bet=%d\n", cash, bet);
      printf("Rolling 2 dices...\n");
      dice_1 = rollDice();
      dice_2 = rollDice();
      sum = dice_1 + dice_2;
      printf("D1:%2d - D2:%2d - Sum:%2d\n", dice_1, dice_2, sum);

      if (dice_1 == dice_2)
        {
          i = 3;
        }
      else if (sum >= 7)
        {
          i = 2;
        }
      else if (sum <= 6)
        {
          i = 1;
        }
      ;


      if (i == 1 && i == n)
        {
          printf("You won Small bet!\n You recieve 20 percent of bet ammount\n");
          cash = cash + (bet / 5);
        }
      else if (i == 2 && i == n)
        {
          printf("You won Big bet!\n You recieve 50 percent of bet ammount\n");
          cash = cash + (bet / 2);
        }
      else if (i == 3 && i == n)
        {
          printf("Jackpot!!!!!! You win double bet ammount!\n");
          cash = cash + (bet * 2);
        }
      else
        {
          printf("\nYou lose the bet, better luck next time\n");
        }
    }

  printf("\nCash in hand = %d\n", cash);

  printf("Want to play again?(1/0)\n");
  scanf("%d", &jk);
  if (jk == 1)
    {
      goto pg;
    }
  else
    {
      exit(1);
    }
};
