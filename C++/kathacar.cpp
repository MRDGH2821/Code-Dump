/*
   NAME:KATHA PATEL
   ROLL NO.:33
   GR NO.:11810454
   DIV:I
 */
#include <simplecpp>
main_program
{
  initCanvas("Graphics", 800, 800);

  Text t1(50, 50, "Car moving");
  Line l1(150, 250, 200, 200),
  l2(200, 200, 300, 200),
  l3(300, 200, 350, 250);
  Rectangle r1(250, 300, 250, 100);
  Circle c1(150, 380, 30),
  c2(350, 380, 30);

  c1.setFill(true);
  c1.setColor(COLOR(0, 155, 155));
  c2.setFill(true);
  c2.setColor(COLOR(0, 155, 155));

  repeat(200)
  {
    l1.move(2, 0);
    l2.move(2, 0);
    l3.move(2, 0);
    r1.move(2, 0);
    c1.move(2, 0);
    c2.move(2, 0);
    wait(0.001);
  }
  wait(60);
}
