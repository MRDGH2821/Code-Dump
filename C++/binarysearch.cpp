/* Name:- Soham Kamble
   Roll No.:- 70
   Div:- E
   Gr No.:-11811323
 */
#include <simplecpp>
main_program
{
  int a[10];
  cout << "enter numbers in ascending order:";
  for (int i = 0; i <= 9; i++)
    {
      cin >> a[i];
    }

  int n;
  int c = 0;

  cout << "enter number to be searched";
  cin >> n;
  int lb = 0;   int mid;
  int ub = 9;
  while (lb <= ub)
    {
      mid = (ub + lb) / 2;
      if (a[mid] == n)
        {
          cout << "number found at  " << mid;
          c++;
          break;
        }
      else if (a[mid] > n)
        {
          ub = mid - 1;
        }
      else if (a[mid] < n)
        {
          lb = mid + 1;
        }
    }
  if (c == 0)
    {
      cout << "number not found";
    }
}
