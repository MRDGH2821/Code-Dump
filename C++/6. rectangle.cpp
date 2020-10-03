#include <simplecpp>

main_program
{
  initCanvas("Get Rectangle", 800, 800);
  int w, x, y;

  w = getClick();
  x = w / 65536;
  y = w % 65536;

  Rectangle r1(x, y, 200, 300);

  wait(5);
}
