/*
   NAME:KATHA PATEL
   ROLL NO.:33
   GR NO.:11810454
   DIV:I
 */
#include <simplecpp>
main_program
{
  float income, tax;
  cout << "Enter your income";
  cin >> income;
  if (income <= 180000)
    {
      cout << "No tax owned";
    }
  else if (income <= 500000 && income > 180000)
    {
      tax = (income - 180000) * 10 / 100.0;
      cout << "Tax=" << tax;
    }
  else if (income <= 800000 && income > 500000)
    {
      tax = 3200 + 20 / 100.0 * (income - 500000);
      cout << "Tax =" << tax;
    }
  else
    {
      tax = 9200 + 32.0 / 100 * (income - 800000);
      cout << "tax=" << tax;
    }
}

