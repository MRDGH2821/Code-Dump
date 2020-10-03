#include <stdio.h>
int main()
{
  int x[2][2];

  for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
        {
          printf("enter value at %d %d", i, j);
          scanf("%d", &x[i][j]);
          printf("%d\n", x[i][j]);
        }
    }
  for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
        {
          printf("%d\t", x[j][i]);
        }
      printf("\n");
    }
}
