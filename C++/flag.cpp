#include <simplecpp>
main_program
{
  initCanvas("flag", 500, 500);
  Line l1(400, 480, 350, 100);
  Rectangle r1(400, 480, 100, 20);
  Rectangle r2(400, 460, 100, 20);
  Rectangle r3(400, 440, 100, 20);
  Circle c1(400, 460, 10);
  {
    r1.setColor(COLOR("green"));
    r3.setColor(COLOR("orange"));
    r1.setFill(true);
    r3.setFill(true);
  }
  repeat(6)
  {
    r1.move(0, -50);
    r2.move(0, -50);
    r3.move(0, -50);
    c1.move(0, -50);
    wait(1);
  }
  wait(10);
}


