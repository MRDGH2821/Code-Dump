#include <simplecpp>

main_program
{
  initCanvas();
  Turtle n1, n2, n3;
  n2.left(120);
  n3.left(240);
  repeat(8)
  {
    n1.forward(100); n2.forward(100); n3.forward(100);
    n1.left(45); n2.left(45); n3.left(45);
  }
  wait(5);
}
