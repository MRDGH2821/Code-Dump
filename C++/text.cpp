#include <simplecpp>

main_program {
  initCanvas();
  Text t(100, 100, "C++");
  int x, y;
  y = textHeight("C++");
  x = textWidth("C++");
  Rectangle r(100, 100, x, y);

  getClick();
}
