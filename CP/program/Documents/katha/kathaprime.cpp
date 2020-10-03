/*
   NAME:KATHA PATEL
   ROLL NO.:33
   GR NO.:11810454
   DIV:I
 */
#include <simplecpp>
main_program
{
  int pri, i;
  cout << "Enter the no.";
  cin >> pri;
  for (i = 2; i < pri; i++)
    {
      if (pri % i == 0)
        {
          cout << "Not a prime no.";
          break;
        }
    }
  if (i == pri)
    cout << "Prime no.";
}

