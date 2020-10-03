/*
   NAME:KATHA PATEL
   ROLL NO.:33
   DIV:I
   GR NO.:11810454
 */
#include <simplecpp>
main_program
{
  initCanvas("flag", 1024, 760);
  Line l1(300, 500, 300, 100);
  Rectangle r1(350, 480, 100, 20);
  Rectangle r2(350, 460, 100, 20);
  Rectangle r3(350, 440, 100, 20);
  Circle c1(350, 460, 10);
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
  wait(50);
}
