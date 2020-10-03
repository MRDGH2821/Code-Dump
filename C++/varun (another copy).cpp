#include <simplecpp>
main_program
{
  int A[5];
  int t, i, j;
  cout << "enter your input";
  for (i = 0; i < 5; i++)
    {
      cin >> A[i];
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

  cout << "the sorted array is in ascending order";

  for (int i = 0; i < 5; i++)
    {
      cout << A[i] << endl;
    }
}
