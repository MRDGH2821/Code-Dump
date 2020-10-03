#include <simplecpp>
main_program
{
  int i; float num, sum = 0;
  cout << "enter nuber of numbers to be added";

  for (i = 0; i < 10; i++)
    {
      cin >> num;
      sum = sum + num;
    }
  cout << sum;
}
