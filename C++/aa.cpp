#include <simplecpp>
main_program
{
  int i = 0, n, d;
  cout << "enter three digit no";
  cin >> n;
  while (n != 0)
    {
      d = n % 10;
      n = n / 10;
      switch (d)
        {
        case 0: cout << "zero ";
          break;

        case 1: cout << "one ";
          break;

        case 2: cout << "two ";
          break;

        case 3: cout << "three ";
          break;

        case 4: cout << "four ";
          break;

        case 5: cout << "five ";
          break;

        case 6: cout << "six ";
          break;

        case 7: cout << "seven ";
          break;

        case 8: cout << "eight ";
          break;

        case 9: cout << "nine ";
          break;
        }
      if (i == 0)
        cout << "ones" << endl;
      else if (i == 1)
        cout << "tens" << endl;
      else if (i == 2)
        cout << "hundreads" << endl;
      i++;
    }
}
