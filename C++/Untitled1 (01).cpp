#include <simplecpp>

main_program
{
  int n;
  initCanvas();
  Turtle t1, t2, t3;
  cout << "Enter The Number Of Sides" << endl;
  cin >> n;
  t1.left(120);
  t2.left(240);



  repeat(n)
  {
    t1.forward(20);
    t2.forward(20);
    t3.forward(20);
    t1.left(360 / n);
    t2.left(360 / n);
    t3.left(360 / n);
  }

  wait(5);
}
