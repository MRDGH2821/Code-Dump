//Question- program to construct a polygon with given length.
#include <simplecpp>
main_program
{
  int sides, length;
  cout << "Enter no. of sides ";
  cin >> sides;
  cout << "Enter length of side ";
  cin >> length;

  turtleSim();

  repeat(sides)
  {
    forward(length);
    left(360 / sides);
  };
  wait(2);
  repeat(sides)
  {
    forward(length);
    right(360 / sides);
  };
  wait(2);
}
