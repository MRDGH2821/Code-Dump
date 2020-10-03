/*
   NAME:KATHA PATEL
   ROLL NO.:33
   GR NO.:11810454
   DIV:I
   TO DRAW POLYGON USING TURTLE SIM
 */
#include <simplecpp>
main_program
{
  int nsides;
  cout << "Enter the no. of sides" << endl;
  cin >> nsides;
  turtleSim();
  repeat(nsides)
  {
    forward(50);
    right(360.0 / nsides);
  }
  wait(60);
}

