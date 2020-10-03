/**	Name -- Sharwari Daware
        Division -- B
        Roll No. -- 14
        Batch -- B1
        Program -- To Decide Armstrong Or Not */

#include <simplecpp>

main_program
{
  int a, b, d, s = 0;

  cout << "Enter The No.";
  cin >> a;

  b = a;

  while (a != 0)
    {
      d = a % 10;
      s = s + (d * d * d);
      a = a / 10;
    }
  if (b == s)
    cout << "The No. Is Armstrong";
  else
    cout << "The No. Is Not Armstrong";
}
