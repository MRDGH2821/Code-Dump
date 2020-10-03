#include <simplepp>
main - program
{
  turtleSim();
  repeat(360)
  {
    forward(1); penup();
    right(1); pendown();
  }
  wait(5);
}
