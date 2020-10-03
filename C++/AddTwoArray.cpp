/**	Name -- Bhargav Addepalli
        Division -- B
        Roll No. -- 02
        Batch -- B1
        Program -- To Add Two Arrays Element Wise */

#include <simplecpp>

main_program
{
  int A[5], B[5], i;

  cout << "Enter The Array A" << endl;
  for (i = 0; i < 5; i++)
    {
      cin >> A[i];
    }

  cout << "Enter The Array B" << endl;
  for (i = 0; i < 5; i++)
    {
      cin >> B[i];
    }

  cout << "The Added Array Is" << endl;
  for (i = 0; i < 5; i++)
    {
      cout << A[i] + B[i] << endl;
    }
}
