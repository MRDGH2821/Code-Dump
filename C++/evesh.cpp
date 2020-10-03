/**	Name -- Sharwari Daware
        Division -- B
        Roll No. -- 14
        Batch -- B1
        Program -- To Print Even No.s In Given Range */

#include <simplecpp>

main_program
{
  int l, u, i;

  cout << "Enter The Upper And Lower Limit";
  cin >> u;
  cin >> l;

  i = l + 1;

  repeat((u - l) + 1)
  {
    if (i % 2 == 0)
      cout << i << " Is Even";
  }
}
