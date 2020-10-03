#include <simplecpp>

main_program
{
  initCanvas();
  Turtle t1, t2, t3;

  t2.left(120);
  t3.left(240);

  repeat(5)
  {
    t1.forward(50);
    t2.forward(50);
    t3.forward(50);
    t1.left(360 / 5);
    t2.left(360 / 5);
    t3.left(360 / 5);
  }
  wait(4);
}
