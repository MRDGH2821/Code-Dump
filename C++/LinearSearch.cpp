/*      Name - bhargav Addepalli
        Roll No. - 02
        Gr. No. - 11810057
        Division - B */

#include <simplecpp>

main_program
{
  int a[100];
  int i, x, b, k;
  k = 0;

  cout << "Enter The No. Of Elements";
  cin >> b;

  for (i = 0; i < b; i++)
    {
      cout << "Enter The Element";
      cin >> a[i];
    }

  cout << "Enter The Element To Be Searched";
  cin >> x;

  for (i = 0; i < b; i++)
    {
      if (a[i] == x)
        {
          k = 1;
          break;
        }
    }

  if (k == 1)
    cout << "The Element Is Found";
  else
    cout << "The Element Is Not Found";
}
