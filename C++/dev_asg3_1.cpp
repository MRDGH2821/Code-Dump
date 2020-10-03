#include <simplecpp>
main_program
{
  int y, result;
  repeat(100)
  {
    cout << "\n Enter the year to check if its leap year or not:";
    cin >> y;

    result = y % 4;

    if (result == 0)
      {
        cout << "\n Entered number is a leap  year";
      }
    else
      {
        cout << "\n Entered number is not a leap  year";
      }
  }
}
