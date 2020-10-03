//Program To Find Whether The No. Is Perfect Or Not
#include <simplecpp>

main_program
{
  int a, s, i;
  s = 0;

  cout << "Enter The No.";
  cin >> a;

  for (i = 1; i < a; i++)
    {
      if (a % i == 0)
        s = s + i;
    }

  if (a == s)
    cout << "The No. Is Perfect";
  else
    cout << "The No. Is Not Perfect";
}
