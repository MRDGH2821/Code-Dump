/**	Name -- Salas Dongaonkar
        Division -- B
        Roll No. -- 16
        Batch -- B1
        Program -- To Reverse Four Digit No. */

#include <simplecpp>

main_program
{
  int i, n, a;
  n = 0;

  cout << "Enter The Four Digit No.";
  cin >> i;

  repeat(4)
  {
    if (i != 0)
      {
        a = i % 10;
        n = (n * 10) + a;
        i = i / 10;
      }
  }

  cout << "The Reversed No. Is:" << n;
}
