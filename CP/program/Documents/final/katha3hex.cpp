
#include <simplecpp>
main_program
{
  initCanvas();
  const float pi = 3.14;
  Turtle n1, n2, n3;
  n2.rotate((2 * pi) / 3.0);
  n3.rotate((4 * pi) / 3.0);
  repeat(8)
  {
    n1.forward(80); n2.forward(80); n3.forward(80);
    n1.right(45); n2.right(45); n3.right(45);
    wait(1);
  }
  wait(60);
}
