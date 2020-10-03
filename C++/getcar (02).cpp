/**	Name -- Saloni chipade
        Division -- B
        Roll No. -- 12
        Batch -- B1 */
#include <simplecpp>



main_program
{
  int w, x, y, i;

  cout << "Enter How Many Times";
  cin >> i;
  initCanvas("GetCar", 800, 800);

  repeat(i)
  {
    w = getClick();
    x = w / 65536;
    y = w % 65536;
    {
      Rectangle r1(x, y, 300, 200);
      Line l1((x - 150), (y - 100), (x - 50), (y - 150));
      Line l2((x - 50), (y - 150), (x + 50), (y - 150));
      Line l3((x + 50), (y - 150), (x + 150), (y - 100));
      Circle c1((x - 70), (y + 130), 30);
      Circle c2((x + 70), (y + 130), 30);

      r1.setFill(true);
      r1.setColor(BLUE);
      c1.setFill(true);
      c1.setColor(BLACK);
      c2.setFill(true);
      c2.setColor(BLACK);
      wait(3);
    }
  }

