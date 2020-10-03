#include <simplecpp>

main_program
{
  turtleSim();
  left(45);
  repeat(36)
  {
    forward(20);
    repeat(270)
    {
      left(1);
      forward(0.1);
    }
    forward(40);
    repeat(270)
    {
      right(1);
      forward(0.1);
    }
    forward(20);
    left(10);
  }
  wait(5);
}
