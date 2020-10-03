/**	Name -Soham Kamble
        Division -E
        Roll No. -70
 */

#include <simplecpp>

main_program
{
  initCanvas("moving car", 500, 500);

  Rectangle r1(200, 200, 300, 150);
  Circle c1(70, 300, 25);
  Circle c2(330, 300, 25);
  {
    r1.setFill(true);
    r1.setColor(COLOR("red"));
    c1.setFill(true);
    c1.setColor(COLOR("green"));
    c2.setFill(true);
    c2.setColor(COLOR("green"));
  }
  wait(2);
  repeat(100)
  {
    r1.move(3, 0);
    c1.move(3, 0);
    c2.move(3, 0);
    wait(0.1);
  }
  wait(2);
}
