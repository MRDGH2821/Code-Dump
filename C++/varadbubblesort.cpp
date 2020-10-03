// varad deshpande div H roll no 14
#include <simplecpp>
main_program
{
  int l, i, j;
  int a[10];
  printf("Enter 10 array elements\n");
  for (i = 0; i < 10; i++)
    cin >> a[i];
  for (i = 0; i < 10; i++)
    {
      for (j = 0; j < 10 - i; j++)
        {
          if (a[j] > a[j + 1])
            {
              l = a[j + 1];
              a[j + 1] = a[j];
              a[j] = l;
            }
        }
    }
  printf("Sorted array is\n");
  for (i = 0; i < 10; i++)
    {
      cout << "\t" << a[i];
    }
  cout << "\n";
}

