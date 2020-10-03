/**	Name -- Brishti Dule
        Division -- B
        Roll No. -- 17
        Batch -- B1
        Program -- To Find LArgest And Smallest In A Array */

#include <simplecpp>

main_program
{
  int A[5], i, k, r;

  cout << "Enter The Array" << endl;
  for (i = 0; i < 5; i++)
    {
      cin >> A[i];
    }
  k = A[0];
  r = A[0];
  for (i = 0; i < 5; i++)
    {
      if (A[i] < k)
        k = A[i];

      if (A[i] > r)
        r = A[i];
    }
  cout << "The Lowest No. Is " << k;
  cout << "The Largest No. Is " << r;
}
