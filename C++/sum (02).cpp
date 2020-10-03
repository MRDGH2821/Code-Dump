// addition 0f 10 numbers entered by user
#include <simplecpp>
main_program
{
  int i; float num, sum = 0;
  cout << "enter numbers  to be added";

  for (i = 0; i < 10; i++) /*for loop for adding all the 10 numbers and accepting the numbers*/
    {
      cin >> num; // excepting 10 numbers
      sum = sum + num;
    }
  cout << "the sum of any 10 numbers entered by user " << sum; //printing result
}
