//VARUN SUESH GAWALI
//DIVISON:H
//ROLL NO:17
//PROGRAM:C PROGRAM FOR BUBBLE SORT BY ACCEPTING ARRAY FROM USER
#include <simplecpp>
main_program
{
  int a[5]; //DECLARATION OF ARRRAY
  int t, p, q; //DECLARATION OF VARIABLES
  cout << "user please enter the input";
  for (p = 0; p < 5; p++)
    {
      cin >> a[p]; //TAKING INPUT FROM USER
    }
  for (p = 0; p < 5; p++)
    {
      for (q = 0; q < 5 - p; q++)
        {
          if (a[q] > a[q + 1])
            {
              t = a[q];
              a[q] = a[q + 1];
              a[q + 1] = t;
            }
        }
    }
  cout << "the sorted array is in ascending mannner";
  for (int p = 0; p < 5; p++)
    {
      cout << a[p] << endl; //PRINT THE ARRAY ELEMENTS IN INCREASING ORDER
    }
}
