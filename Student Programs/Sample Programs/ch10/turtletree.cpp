#include <simplecpp>
void tree(int height, float length, float angle, float shrinkage)
// precondition: turtle is at root, pointing up.
// post condition: same
{
  if (height == 0)
    return;
  // 1.  draw the left branch
  left(angle / 2);
  forward(length);
  // 2.  draw the left (sub)tree.
  right(angle / 2);
  tree(height - 1, length * shrinkage, angle * shrinkage, shrinkage);

  // 3.  go back to the root
  left(angle / 2);
  forward(-length);
  // 4.  draw the right branch
  right(angle);
  forward(length);
  // 5.  draw right (sub)tree.
  left(angle / 2);
  tree(height - 1, length * shrinkage, angle * shrinkage, shrinkage);
  // 6.  go back to root
  right(angle / 2);
  forward(-length);
  // 7.  ensure post condition
  left(angle / 2);
}

main_program {
  turtleSim();
  left(90);

  tree(5, 120, 120, 0.68);

  wait(5);
}
