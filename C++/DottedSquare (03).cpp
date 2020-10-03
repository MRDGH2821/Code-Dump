/**	Name -- Salas Dongaonkar
        Division -- B
        Roll No. -- 16
        Batch -- B1
        Program -- To Draw A Dotted Square Using Turtle Simulator */

#include <simplecpp>

main_program
{
  turtleSim();

  repeat(4)
  {
    repeat(2)
    {
      forward(50);
      penUp();
      forward(25);
      penDown();

      wait(2);
    }

    left(90);

    wait(3);
  }

  wait(5);
}

