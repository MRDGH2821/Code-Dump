#include <stdio.h>
int main()
{
  int a1[2][2]; int a2[2][2]; int af[2][2]; int i, j;

  for (i = 0; i < 2; i++)
    {
      for (j = 0; j < 2; j++)
        scanf("%d", &a1[i][j]);
    }
  for (i = 0; i < 2; i++)
    {
      for (j = 0; j < 2; j++)
        scanf("%d", &a2[i][j]);
    } //till here we accept two matrix
  for (i = 0; i < 2; i++)
    {
      for (j = 0; j < 2; j++)
        {
          af[i][j] = a1[i][j] + a2[i][j]; //addition of matrices
          printf("%d ", af[i][j]);
        }
    }
  return 0;
}

