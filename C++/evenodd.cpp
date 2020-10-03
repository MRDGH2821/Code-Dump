#include <simplecpp>
main_program
{
  int a[10], even[10], odd[10], i, j = 0, k = 0;
  for (i = 0; i <= 9; i++)
    {
      cin >> a[i];
      if (a[i] % 2 == 0)
        {
          even[j] = a[i];
          cout << "the even elements is= " << even[j];
          j++;
        }
      else
        {
          odd[k] = a[i];
          cout << "the odd elements is= " << odd[k];
          k++;
        }
    }
}
