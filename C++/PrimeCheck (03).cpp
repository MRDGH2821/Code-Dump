/**	Name -- Salas Dongaonkar
        Division -- B
        Roll No. -- 16
        Batch -- B1
        Program -- To Check Prime No. Or Not */

#include <simplecpp>

main_program
{
  int i, a, k;
  k = 0;
  a = 1;

  cout << "Enter The No.";
  cin >> i;

  repeat(i)
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
