#include <simplecpp>
main_program
{ initCanvas("Graphics", 800, 800);
  Text t(400, 20, "Geometric shapes");
  Circle c1(300, 250, 40);
  Rectangle r1(200, 300, 80, 100);
  wait(2);
  t.moveTo(200, 30);
  wait(2);
  c1.moveTo(300, 50);
  wait(2);
  r1.moveTo(400, 400);
  wait(5); }
