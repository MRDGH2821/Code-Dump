
#include <simplecpp>
main_program
{
  initCanvas();
  Rectangle r1(287.5, 250, 175, 50);
  Circle c1(250, 300, 25);
  Circle c2(325, 300, 25);
  r1.setFill(true);
  r1.setColor(COLOR("Red"));
  c1.setFill(true);
  c1.setColor(COLOR("Black"));
  c2.setFill(true);
  c2.setColor(COLOR("Black"));
  wait(2);
  repeat(100)
  {
    r1.move(1, 0);
    c1.move(1, 0);
    c2.move(1, 0);
  }
  wait(60);
}
