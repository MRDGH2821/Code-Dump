/*
   NAME:KATHA PATEL
   ROLL NO.:33
   GR NO.:11810454
   DIV:I
   TO DRAW CIRCLE USING TURTLE SIM
 */
#include <simplecpp>
main_program
{
  const float pi = 3.14;
  float circum, r;
  cout << "Enter radius of circle";
  cin >> r;
  circum = 2 * pi * r;
  turtleSim();
  repeat(360)
  {
    forward(circum / 360.0);
    right(1);
  }
  wait(60);
}

