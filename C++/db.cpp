/**	Name -- Brishti Dule
        Division -- B
        Roll No. -- 17
        Batch -- B1 */
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

