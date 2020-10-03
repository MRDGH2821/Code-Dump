#include <simplecpp>
main_program
{
  turtleSim();
  char ch;
  repeat(8)
  {
    cout << "Enter Command (f,l,r)";
    cin >> ch;
    switch (ch)
      {
      case 'f':
        forward(100);
        break;

      case 'r':
        right(90);
        break;

      case 'l':
        left(90);
        break;

      default:
        cout << "Wrong Input";
      }
  }
  wait(5);
}
