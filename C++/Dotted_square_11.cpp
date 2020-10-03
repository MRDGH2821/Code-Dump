#include <simplecpp>
main_program
{
  turtleSim();
  repeat(4)
  {
    repeat(10)
    {
      penUp();
      forward(5);
      penDown();
      forward(5);
    }
    right(90);
  }
  wait(120);
}
