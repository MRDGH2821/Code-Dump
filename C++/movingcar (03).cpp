#include <simplecpp>
main_program
{
  initCanvas("moving car", 800, 800);
  Line l1(150, 250, 200, 200);
  Line l2(200, 200, 300, 200);
  Line l3(300, 200, 350, 250);
  Rectangle r1(250, 300, 250, 100);
  r1.setColor(COLOR("blue"));
  r1.setFill(true);
  Circle c1(150, 380, 30);
  Circle c2(350, 380, 30);
  c1.setColor(COLOR("red"));
  c1.setFill(true);
  c2.setColor(COLOR("red"));
  c2.setFill(true);
  repeat(200);
  {
    l1.move(2, 0);
    l2.move(2, 0);
    l3.move(2, 0);
    r1.move(2, 0);
    c1.move(2, 0);
    c2.move(2, 0);
    wait(5);
  }
}
