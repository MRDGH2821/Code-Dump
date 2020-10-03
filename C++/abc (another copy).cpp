//CALCULATION AVERAGE MARKS swapnil M. j30
#include <simplecpp>
main()
{
  int avg, sum = 0;
  int i;
  int marks[3];

  for (i = 0; i <= 2; i++)
    {
      cout << "Enter marks.";
      cin >> marks[i];
    }
  for (i = 0; i <= 2; i++)
    {
      sum = sum + marks[i];
    }
  avg = sum / 3;
  cout << "Average marks=" << avg;
}
