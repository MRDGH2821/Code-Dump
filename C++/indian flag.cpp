
#include <simplecpp>

main_program
{
  initCanvas();

  Rectangle r1(100, 25, 200, 50);
  Rectangle r2(100, 75, 200, 50);
  Rectangle r3(100, 125, 200, 50);

  Line l1(100, 100, 100, 50);

  Circle c1(100, 75, 25);


  r1.setColor(red);



  r3.setColor(green);



  c1.setColor(blue);


  l1.setColor(blue);

  repeat(12)
  {
    l1.imprint();
    l1.rotate(15);
  }

  wait(5);
}
