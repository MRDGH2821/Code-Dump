//prime number or not
#include <simplecpp>

main_program
{
  int a, j, count = 0;
  cout << "enter the number  "; // accepting the number
  cin >> a;
  for (j = 2; j <= a - 1; j++) // to devide the number with all the numbers execpt itself and 1
    {
      if (a % j == 0) //checking for remainder
        {
          count++;
          break;
        }
    }
  if (count == 0)
    {
      cout << "this is a prime number"; //printing resut
    }
  else
    cout << " not a prime number";  //printing resut
}

