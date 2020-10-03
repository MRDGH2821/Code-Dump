//varad deshpande div H roll no 14 (sum of digits)
#include <simplecpp>
main_program
{
  int n, r, sum = 0;
  cout << "Enter the element you wish to find it's sum of digits : ";
  cout << endl;
  cin >> n;
  while (n != 0)
    {
      r = n % 10;
      n = n / 10;
      sum = sum + r;
    }
  cout << "The sum of digits of the entered no. is : " << sum;
}
