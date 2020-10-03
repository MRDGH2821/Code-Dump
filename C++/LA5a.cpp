#include <simplecpp>
main_program
{
  int a[4];
  int i, j, t, z;
  cout << "Enter Nos..";



  for (i = 0; i < 4; i++)
    {
      cin >> a[i];
      //cout<<a[i]<<endl;
    }
  for (z = 0; z < 4; z++)
    {
      for (j = 0; j < 4; j++)
        {
          if (a[j] > a[j + 1])

            {
              t = a[j];
              a[j] = a[j + 1];
              a[j + 1] = t;
            }
        }
    }
  cout << "Elements After Sorting";
  for (i = 0; i < 4; i++)
    {
      cout << a[i] << endl;
    }
}
