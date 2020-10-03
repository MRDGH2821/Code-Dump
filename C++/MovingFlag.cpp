/* ajinkya chaudhari
   GR NO. 11811261
   DIV B
   ROLL NO- 4
 */
#include <simplecpp>
main_program
{
  initCanvas("flag", 1000, 1000);
  Rectangle r1(300, 100, 400, 100);
  r1.setFill(true);
  r1.setColor(COLOR(255, 165, 0));
  Rectangle r2(300, 200, 400, 100);
  Rectangle r3(300, 300, 400, 100);
  r3.setFill(true);
  r3.setColor(COLOR(0, 255, 0));
  Circle c1(300, 200, 50);
  c1.setColor(COLOR(0, 0, 255));
  Line l1(300, 150, 300, 250);
  l1.setColor(COLOR("Blue"));
  repeat(23)
  {
    l1.rotate(0.2618);
    l1.imprint();
  }


  wait(100);
}
