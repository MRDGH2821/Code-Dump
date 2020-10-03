#include <simplecpp>
main_program
{
  char f, b, r, l, command;
  turtleSim();

  repeat(100)
  {
    cout << "\n Enter the command to simulate to the turtle sim. 'f' for forward, 'b' for backward, 'r' to move right and 'l' to move left : ";
    cin >> command;

    switch (command)
      {
      case 'f': forward(100);
        break;

      case 'b': forward(-100);
        break;

      case 'r': right(90);
        break;

      case 'l': left(90);
        break;

      default: cout << "Invalid command";
      }
  }
}
