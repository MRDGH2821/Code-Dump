#include <simplecpp>

main_program
{
  turtleSim();
  repeat(3)
  {
    forward(100);
    left(120);
    wait(2);
  }
  wait(10);
}
