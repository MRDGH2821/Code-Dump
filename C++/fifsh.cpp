/**	Name -- Sharwari Daware
        Division -- B
        Roll No. -- 14
        Batch -- B1
        Program -- To Find The Sum Of First 50 Natural Numbers */
#include <simplecpp>

main_program
{
  int i, s;
  i = 1;
  s = 0;

  repeat(50)
  {
    s = s + i;
    i++;
  }

  cout << "The Sum Of First 50 No.s Is:" << s;
}
