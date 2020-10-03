/*
   NAME:KATHA PATEL
   ROLL NO.:33
   GR NO.:11810454
   DIV:I
   TO DRAW DOTTED SQUAREUSING TURTLE SIM
 */
#include <simplecpp>
main_program
{
  turtleSim();
  repeat(4)
  {
    repeat(10)
    {
      forward(10);
      penUp();
      forward(10);
      penDown();
    }
    right(90);
  }
  wait(60);
}
