/**     Name : Salas Dongaonkar
        Division : B
        Roll no : 16
        GR No. : 11810429
        Program : To Draw A Rainbow */
#include <simplecpp>
main_program
{
  initCanvas("Rainbow", 800, 800);
  Circle c8(400, 720, 200),
  c7(400, 720, 175),
  c6(400, 720, 150),
  c5(400, 720, 125),
  c4(400, 720, 100),
  c3(400, 720, 75),
  c2(400, 720, 50),
  c1(400, 720, 25);
  c8.setFill(true);
  c8.setColor(COLOR("violet"));
  c7.setFill(true);
  c7.setColor(COLOR("indigo"));
  c6.setFill(true);
  c6.setColor(COLOR("blue"));
  c5.setFill(true);
  c5.setColor(COLOR("green"));
  c4.setFill(true);
  c4.setColor(COLOR("yellow"));
  c3.setFill(true);
  c3.setColor(COLOR("orange"));
  c2.setFill(true);
  c2.setColor(COLOR("red"));
  c1.setFill(true);
  c1.setColor(COLOR("white"));
  wait(20);
}

