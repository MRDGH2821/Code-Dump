/**	Name -- Brishti Dule
        Division -- B
        Roll No. -- 17
        Batch -- B1 */
//Program To Find The Sum Of Series a/2+a/3+a/4....
#include <simplecpp>

main_program
{
  double a, s, i, n;
  s = 0;

  cout << "Enter The Value Of a=";
  cin >> a;
  cout << "Enter The No. Of n=";
  cin >> n;

  for (i = 2; i <= n; i++)
    {
      s = s + a / i;
    }

  cout << "The Sum Of The Series Is " << s;
}
