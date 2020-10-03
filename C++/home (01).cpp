#include <simplecpp>
main_program
{
  int arr[5], i, min, max, sum = 0, avg;
  cout << "enter the elements";
  max = arr[0];
  for (i = 0; i < 5; i++)
    {
      cin >> arr[i];
    }
  for (i = 0; i < 5; i++)
    {
      if (max < arr[i])
        max = arr[i];
    }
  cout << "larget is" << max;
  min = arr[0];
  for (i = 0; i < 5; i++)
    {
      if (min > arr[i])
        min = arr[i];
    }
  cout << "smallest is" << min;
  for (i = 0; i < 5; i++)
    {
      sum = sum + arr[i];
    }
  avg = sum / i;
  cout << "avg is" << avg;
}

