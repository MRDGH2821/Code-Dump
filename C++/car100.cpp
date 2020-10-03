#include <simplecpp>
main_program {
  initCanvas("movingcar", 1000, 1000);
  Rectangle r1(300, 200, 300, 200);
  r1.setColor(COLOR("blue"));
  r1.setFill(true);
  Rectangle r2(300, 300, 500, 200);
  r2.setColor(COLOR("grey"));
  r2.setFill(true);
  Circle c1(150, 400, 50);
  c1.setColor(COLOR("black"));
  c1.setFill(true);
  Circle c2(450, 400, 50);
  c2.setColor(COLOR("black"));
  c2.setFill(true);
  repeat(20)
  {
    r1.move(15, 0);
    r2.move(15, 0);
    c1.move(15, 0);
    c2.move(15, 0);
    wait(1);
  }
  wait(10);
}




