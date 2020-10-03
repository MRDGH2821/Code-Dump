// Car using graphics
#include <simplecpp>
main_program
{
  initCanvas("Demo", 800, 800);
  Line l1(150, 250, 200, 200);
  Line l2(200, 200, 300, 200);
  Line l3(300, 200, 350, 250);
  Rectangle r1(250, 300, 400, 100);
  Circle c1(150, 380, 30);
  Circle c2(350, 380, 30);
  c1.setColor(COLOR("red"));
  c1.setFill(true);
  c2.setColor(COLOR("red"));
  c2.setFill(true);
  r1.setColor(COLOR("green"));
  r1.setFill(true);
  wait(5);
}
