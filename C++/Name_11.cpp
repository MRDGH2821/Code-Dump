#include <simplecpp>
main_program
{
  turtleSim();

  left(180);
  penUp();
  forward(200);
  right(90);
  penDown();
  forward(200);
  right(90);
  repeat(180)
  {
    forward(0.879);
    right(1);
  }
  right(180);
  penUp();
  forward(100);
  penDown();
  repeat(180)
  {
    forward(0.879);
    right(1);
  }
  penUp();
  repeat(180)
  {
    forward(0.879);
    right(1);
  }
  forward(20);
  right(180);
  penDown();
  repeat(180)
  {
    forward(0.879);
    right(1);
  }
  penUp();
  forward(150);
  right(180);
  penDown();
  repeat(180)
  {
    forward(1.6);
    left(1);
  }


  wait(30);
}


