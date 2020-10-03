//          program for finding average of four numbers
//NAME-Omkar Dalwai DIV-H ROLL NO.-11 GR.NO.-11810279



#include <simplecpp>
int main()
{
  int a, b, c, d, sum;
  float avg;

  cout << "enter four numbers" << endl;
  cin >> a >> b >> c >> d;
  sum = a + b + c + d;                 //sum of  four number
  cout << "sum of four numbers" << sum << endl;
  avg = sum / 4.0;                    //average of four number
  cout << "average of four no is" << avg;
}

