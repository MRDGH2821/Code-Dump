//NAME:VARUN SURESH GAWALI
//DIVISON:H
//ROLL NO:17
//PROGRAM:SIMPLE CPP PROGRAM USING CANVAS FOR MOVING FLAG
#include <simplecpp>
main_program
{
  initCanvas("Flag", 1000, 1000);
  Rectangle r1(400, 500, 300, 200); //DRAWING RECTANGLES
  Rectangle r2(400, 434, 299, 66.6);
  Rectangle r3(400, 567, 299, 66.6);
  Rectangle r4(250, 350, 40, 700);
  Circle c1(400, 500, 33.3); //DRAWING CIRCLE
  Line l1(400, 466.7, 400, 533.3); //DRAWING LINES FOR ASHOK CHAKRA
  Line l2(400, 466.7, 400, 533.3);
  Line l3(400, 466.7, 400, 533.3);
  Line l4(400, 466.7, 400, 533.3);
  Line l5(400, 466.7, 400, 533.3);
  Line l6(400, 466.7, 400, 533.3);
  Line l7(400, 466.7, 400, 533.3);
  Line l8(400, 466.7, 400, 533.3);
  Line l9(400, 466.7, 400, 533.3);
  Line l10(400, 466.7, 400, 533.3);
  Line l11(400, 466.7, 400, 533.3);
  Line l12(400, 466.7, 400, 533.3);
  l2.rotate(15); //ROTATING LINES AS PER ASHOK CHAKRA
  l3.rotate(30);
  l4.rotate(45);
  l5.rotate(60);
  l6.rotate(75);
  l7.rotate(90);
  l8.rotate(105);
  l9.rotate(120);
  l10.rotate(130);
  l11.rotate(150);
  l12.rotate(165);
  r2.setFill(true);
  r2.setColor(COLOR("Orange")); //FILLING COLOR IN TOPMOST RECTANGLE
  r3.setFill(true);
  r3.setColor(COLOR("Green")); //FILLING COLOR IN  BOTTOMMOST RECTANGLE
  r4.setFill(true);
  r4.setColor(COLOR("Black")); //FILLING COLOR TO THE ROD OF THE FLAG
  c1.setFill(false);
  c1.setColor(COLOR("Blue"));
  l1.setFill(false);
  l1.setColor(COLOR("Blue"));
  l2.setFill(false);
  l2.setColor(COLOR("Blue")); //FILLING COLOR TO THE SPOKES OF CHAKRA
  l3.setFill(false);
  l3.setColor(COLOR("Blue"));
  l4.setFill(false);
  l4.setColor(COLOR("Blue"));
  l5.setFill(false);
  l5.setColor(COLOR("Blue"));
  l6.setFill(false);
  l6.setColor(COLOR("Blue"));
  l7.setFill(false);
  l7.setColor(COLOR("Blue"));
  l8.setFill(false);
  l8.setColor(COLOR("Blue"));
  l9.setFill(false);
  l9.setColor(COLOR("Blue"));
  l10.setFill(false);
  l10.setColor(COLOR("Blue"));
  l10.setFill(false);
  l10.setColor(COLOR("Blue"));
  l12.setFill(false);
  l12.setColor(COLOR("Blue"));
  repeat(25)
  {
    wait(0.1);
    r1.move(0, -16);   //MOVING RECTANGLES
    r2.move(0, -16);
    r3.move(0, -16);
    c1.move(0, -16);   //MOVING CIRCLE WITH  RECTANGLES
    l1.move(0, -16);
    l2.move(0, -16);   //MOVING LINES OF ASHOK CHAKRA
    l3.move(0, -16);
    l4.move(0, -16);
    l5.move(0, -16);
    l6.move(0, -16);
    l7.move(0, -16);
    l8.move(0, -16);
    l9.move(0, -16);
    l10.move(0, -16);
    l11.move(0, -16);
    l12.move(0, -16);
  }
  wait(100);
}

