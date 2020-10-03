#include <simplecpp>
main_program
{
  initCanvas();
  Rectangle r4(50, 450, 50, 15);
  Rectangle r5(50, 450, 50, 15);
  r4.setColor(COLOR("brown"));
  r4.setFill();
  r5.setColor(COLOR("brown"));
  r5.setFill();
  Line l2(50, 450, 50, 70);

  Rectangle r1(150, 300, 200, 50);
  Rectangle r2(150, 350, 200, 50);
  Rectangle r3(150, 400, 200, 50);
  Circle c1(150, 350, 25);


  r1.setColor(COLOR("orange"));
  r1.setFill();
  r2.setColor(COLOR("white"));
  r2.setFill();
  r3.setColor(COLOR("green"));
  r3.setFill();

  repeat(200)
  {
    r1.move(0, -1);
    r2.move(0, -1);
    r3.move(0, -1);
    c1.move(0, -1);
    wait(0.05);
  }

  Line l1(150, 125, 150, 175);
  repeat(11)
  {
    l1.rotate(3.14 / 12);
    l1.imprint();
    wait(1);
  }
  wait(10);
}
