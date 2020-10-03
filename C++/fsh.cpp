/**	Name -- Sharwari Daware
        Division -- B
        Roll No. -- 14
        Batch -- B1 */
//Program To Print The Fibonacci Series
#include <simplecpp>

main_program
{
  int a, i, j, s;
  i = 0;
  j = 1;

  cout << "Enter The No. Of Terms";
  cin >> a;

  cout << i << endl;
  cout << j << endl;

  repeat(a - 2)
  {
    s = i + j;
    cout << s << endl;
    i = j;
    j = s;
  }
}
