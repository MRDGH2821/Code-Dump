#include <simplecpp>
main_program
{
  int A[5];
  int t, i, j;
  printf("Enter 5 Array elements\n");
  for (i = 0; i < 5; i++)
    {
      scanf("%d", &A[i]);
    }

  for (i = 0; i < 5; i++)
    {
      for (j = 0; j < 5 - i; j++)
        {
          if (A[j] > A[j + 1])
            {
              t = A[j];
              A[j] = A[j + 1];
              A[j + 1] = t;
            }
        }
    }

  printf("The sorted array in ascending order\n");

  for (int i = 0; i < 5; i++)
    {
      cout << A[i] << endl;
    }
  ;
}


