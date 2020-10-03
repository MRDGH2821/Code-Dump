/**	Name -- Brishti Dule
        Division -- B
        Roll No. -- 17
        Batch -- B1 */
#include <simplecpp>

main_program
{
  initCanvas();

  Rectangle r1(100, 25, 200, 50);
  Rectangle r2(100, 75, 200, 50);
  Rectangle r3(100, 125, 200, 50);

  Line l1(100, 100, 100, 50);

  Circle c1(100, 75, 25);

  r1.setFill(true);
  r1.setColor(RED);

  r3.setFill(true);
  r3.setColor(GREEN);

  c1.setFill(false);
  c1.setColor(BLUE);

  l1.setColor(BLUE);

  repeat(12)
  {
    l1.imprint();
    l1.rotate(15);
  }

  wait(5);
}
