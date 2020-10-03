//chessboard
#include <simplecpp>
main_program
{
  turtleSim();
  //Chessboard
  repeat(4)
  {
    forward(80);
    left(90);
    wait(2);
  };


  repeat(4)
  {
    forward(10);
    left(90);
    wait(2);
    forward(80);
    right(90);
    wait(2);
    forward(10);
    right(90);
    wait(2);
    forward(80);
    left(90);
    wait(2);
  };

  repeat(4)
  {
    left(90);
    wait(2);
    forward(10);
    left(90);
    wait(2);
    forward(80);
    right(90);
    wait(2);
    forward(10);
    right(90);
    wait(2);
    forward(80);
    wait(2);
  };
  wait(5);
}
