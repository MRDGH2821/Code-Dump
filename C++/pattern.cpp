#include <simplecpp>

int main()
{
  turtleSim();

  left(45);
  repeat(36)
  {
    forward(10);

    repeat(280)
    {
      forward(0.05);
      left(1);
    }

    forward(20);

    repeat(280)
    {
      forward(0.05);
      right(1);
    }

    forward(10);
    left(10);
  }
  wait(10);
  return 0;
}