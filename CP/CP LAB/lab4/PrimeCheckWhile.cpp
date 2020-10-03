#include <simplecpp>

main_program
{
  int i, a, k;
  k = 0;
  a = 1;

  cout << "Enter The No.";
  cin >> i;

  while (a <= i)
    {
      if (i % a == 0)
        k++;

      a++;
    }

  if (k == 2)
    cout << "The No. Is Prime";
  else
    cout << "The No. Is Not Prime";
}
