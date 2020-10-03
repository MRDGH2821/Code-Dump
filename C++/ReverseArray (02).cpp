/**	Name -- Salas Dongaonkar
        Division -- B
        Roll No. -- 16
        Batch -- B1
        Program -- To Print Array In Reverse Order */

#include <simplecpp>

main_program
{
  int A[5], i;

  cout << "Enter The Array" << endl;
  for (i = 0; i < 5; i++)
    {
      cin >> A[i];
    }

  cout << "The Array In Reverse Order Is" << endl;
  for (i = 4; i >= 0; i--)
    {
      cout << A[i] << endl;
    }
}
