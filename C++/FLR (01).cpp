//control turtle using switch
#include <simplecpp>
main_program
{
  turtleSim();
  char command;
  cout << "you can control turtle using F,L and R commands \n";

  repeat(100)
  {
    cout << "enter the command";
    cin >> command;
    switch (command)
      {
      case 'F': forward(50);
        break;

      case 'R': right(60);
        break;

      case 'L':  left(60);
        break;

      default: exit(0);
      }
  }
}
