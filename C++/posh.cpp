/*   Name - Sharwari Daware
         Roll No. - 14
         Gr. No. - 11810429
         Division - B */

//Program To Find Whether The Number Is Prime Or Not

#include <simplecpp>
main_program
{
  int n, i, k;
  cout << "enter the no" << endl;
  cin >> n;
  for (i = 2; i <= n / 2; i++)
    {
      if (n % i == 0)
        {
          k += 1;
        }
    }

  if (k > 0)
    {
      cout << "The Number Is Not Prime" << endl;
    }
  else
    cout << "The No. Is Prime" << endl;
}
