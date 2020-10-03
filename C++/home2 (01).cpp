#include <simplecpp>
main_program
{
  int arr[5], arr1[5], arr2[5], i, j = 0, k = 0;
  for (i = 0; i < 5; i++)
    {
      if (arr[i] % 2 == 0)
        {
          arr1[j] = arr[i];
          j++;
        }
      cout << "the even no are" << arr1[j];
      else
        {
          arr2[k] = arr[i];
          k++;
        }
      cout << "the odd no are" << arr1[k];
    }
}
