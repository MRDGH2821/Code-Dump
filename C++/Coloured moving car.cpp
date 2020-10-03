//Question - How to make a coloured moving car.

#include <simplecpp>
/*
   main_program
   {
   initCanvas("Coloured Moving Car", 1000, 500);
   Rectangle r(300,300,300,50);
   Line l1(175,275,180,260);
   Line l2(180,260,200,260);
   Line l3(200,260,400,275);
   Circle c1(170,335,10);
   Circle c2(430,335,10);
   r.setfill(255,0,0);
   wait(5);
   }
 */

main_program {
  initCanvas("Projectile", 500, 500);
  int start = getClick();
  Circle p(start / 65536, start % 65536, 5); // at click position
/*double vx=1, vy=1, gravity=0.1;
   repeat(100)
   {
   p.move(vx, vy);
   vy += gravity;
   wait(0.1);
   }*/
  getClick(); // wait for the user to click. Only then terminate.
}
// Will show a circle move as if thrown against gravity
// from the click position.

