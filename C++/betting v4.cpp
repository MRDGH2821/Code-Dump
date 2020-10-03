#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

int rollDice(void)
{
  return((rand() % 6) + 1);
}

int main()
{
  time_t t;
  int dice_1 = 0;
  int dice_2 = 0;
  int sum = 0;

  srand(time(&t));
  dice_1 = rollDice();
  dice_2 = rollDice();
  sum = dice_1 + dice_2;
  printf("D1:%2d - D2:%2d - Sum:%2d\n", dice_1, dice_2, sum);
}
