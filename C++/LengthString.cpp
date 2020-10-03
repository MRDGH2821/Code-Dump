/**	Name -- Salas Dongaonkar
        Division -- B
        Roll No. -- 16
        Batch -- B1
        Program -- To Find Length Of String Without Using Function */

#include <simplecpp>

main_program
{
  char st[50];
  int i, k;
  k = 0;

  cout << "Enter The String" << endl;
  cin >> st;

  for (i = 0; (st[i] != '\0'); i++)
    {
      k++;
    }

  cout << "The Length Of String Is " << k;
}
