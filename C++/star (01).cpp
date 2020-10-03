//star pattern
#include <simplecpp>
main_program
{
  int i, j;
  for (i = 0; i < 5; i++) // for rows
    {
      for (j = 0; j <= i; j++) //for column
        cout << "*";
      cout << endl;
    }
}

