//CAR (swapnil m.j30)
#include <simplecpp>
main_program
{
  initCanvas("MOVING CAR", 800, 800);
  Text t1(50, 50, "MOVING CAR");
  Line l1(150, 250, 200, 200);
  Line l2(200, 200, 400, 200);
  Line l3(400, 200, 450, 250);
  Rectangle r1(300, 300, 350, 100);
  Circle c1(200, 380, 30);
  Circle c2(400, 380, 30);
  c1.setFill(true);
  c2.setFill(true);
  c1.setColor(COLOR("blue"));
  c2.setColor(COLOR("blue"));
  repeat(20)
  {
    l1.move(2, 0);
    l2.move(2, 0);
    l3.move(2, 0);
    r1.move(2, 0);
    c1.move(2, 0);
    c2.move(2, 0);
//wait(1);
  }
  wait(10);
}
