#include <simplecpp>
main_program
{
  turtleSim();
  { left(75);
    forward(50);
    wait(2);
    right(150);
    forward(50);
    wait(2);
    right(180);
    penUp(); forward(20);
    wait(2);
    left(75);
    penDown();
    forward(13);
    wait(2);
    left(75);
    penUp();
    forward(20);
    left(105);
    forward(50);
    wait(2); //FOR LETTER 'A'
    penDown();
    repeat(90)
    {
      forward(0.4);
      left(2);
    }
    right(10);
    repeat(90)
    {
      forward(0.4);
      right(2);
    }
    penUp();
    forward(30);
    left(100); forward(3);

    right(180);
    forward(48.29);
    wait(1);
    right(180);
    penDown();
    forward(42);
    right(135);
    forward(50);
    left(135);
    forward(42);
    wait(3); }
}

