//calculation of tax (SUNITA PATIL)
#include <simplecpp>
main_program
{ float tax, income;
  cout << "what is your income in rupees?";
  cin >> income;
  if (income <= 180000)
    tax = 0;
  else if (income <= 500000)
    tax = (income - 180000) * 0.1;
  else if (income <= 800000)
    tax = 32000 + (income - 500000) * 0.2;
  else
    tax = 92000 + (income - 800000) * 0.3;
  cout << "tax is:" << tax << endl; }
