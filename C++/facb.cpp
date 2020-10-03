/**	Name -- Brishti Dule
        Division -- B
        Roll No. -- 17
        Batch -- B1
        Program -- To Find Factorial Of Number */

#include <simplecpp>

main_program
{
  int n, i, f = 1;

  cout << "enter the no" << endl;
  cin >> n;

  for (i = 1; i <= n; i++)
    {
      f = f * i;
    }

  cout << "the factorial is " << f << endl;
}
