#include <simplecpp>

main_program {
  turtleSim();

  repeat(1440)
  {
    forward(0.25);
    left(0.25);
  };
}
