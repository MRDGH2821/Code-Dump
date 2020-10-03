#include <simplecpp>
main_program
{
  turtleSim();
  repeat(4)
  {
    repeat(10)
    {
      forward(5);
      penUp();
      penDown();
      left(90);
    }
  }
  wait(5);
}
