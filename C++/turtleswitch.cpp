#include <simplecpp>
main_program
{
  char f, l, r, command;
  turtleSim();

  repeat(500)
  {
    cout << "\n Enter 'f' to move turtle forward,'r' to turn turle right,'l' to turn turtle left";
    cin >> command;

    switch (command)
      {
      case 'f': forward(100);
        break;

      case 'r': right(90);
        break;

      case 'l': left(90);
        break;

      default: cout << "Invalid";
      }
  }
}
