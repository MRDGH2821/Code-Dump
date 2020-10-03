#include <simplecpp>
main_program
{
  initCanvas("Moving car", 1420, 720);
  Rectangle r1(200, 200, 300, 150);
  Circle c1(70, 300, 25);
  Circle(330, 300, 25);
  {
    r1.setfill(true);
    r1.setColor(COLOR("green"));
    c1.setfill(true);
    c1.setColor(COLOR("blue"));
    c2.setfill(true);
    c2.setColor(COLOR("blue"));
  }
  wait(40);
  repeat(100)
  {
    r1.move(3, 0);
    c1.move(3, 0);
    c2.move(3, 0);
    wait(0.2);
  }
  wait(10);
}
