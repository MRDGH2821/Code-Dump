#include <simplecpp>
main_program
{
  initCanvas();
  Turtle t1, t2, t3, t4, t5, t6, t7, t8, t9, t10;
  t2.left(36);
  t3.left(72);
  t4.left(108);
  t5.left(144);
  t6.left(180);
  t7.left(216);
  t8.left(252);
  t9.left(288);
  t10.left(324);
  repeat(360)
  {
    t1.forward(1);
    t2.forward(1);
    t3.forward(1);
    t2.left(1);
    t1.left(1);
    t3.left(1);
    t4.forward(1);
    t5.forward(1);
    t6.forward(1);
    t4.left(1);
    t5.left(1);
    t6.left(1);
    t7.forward(1);
    t8.forward(1);
    t9.forward(1);
    t7.left(1);
    t8.left(1);
    t9.left(1);
    t10.forward(1);
    t10.left(1);
  }

  wait(50);
}

