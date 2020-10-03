#include <simplecpp>
main_program
{
  initCanvas("graphics", 800, 800);
  Text t1(400, 20, "GEOMETRIC SHAPES");
  wait(2);
  t1.moveTo(0, 0);
  Rectangle r1(100, 100, 80, 60);
  wait(2);
  r1.moveTo(200, 200);
  wait(2);
  r1.setFill("true");
  r1.setColor(COLOR("red"));
  wait(2);
  Circle c1(300, 300, 100);
  wait(2);
  c1.moveTo(400, 400);
  wait(2);
  c1.setFill("true");
  c1.setColor(COLOR("blue"));
  wait(2);
  Line l1(10, 20, 400, 400);
  wait(2);
  l1.rotate(90);
  wait(10);
}
