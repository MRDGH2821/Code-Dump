#include <simplecpp>
main_program
{
  int count;
  float sum = 0, num, ave = 0
  ;
  cout << "How many numbers: ";
  cin >> count;
  repeat(count)
  {
    cout << "Give the next number: ";
    cin >> num;
    sum = sum + num;
  }
  ave = sum / count;
  cout << "average is: ";
  cout << endl;
}

