#include <stdio.h>
struct vector
{ int x, y, z; } v1, v2, vs, vd, vp, vp1, vp2;

vector sum(vector v1, vector v2)
{
  vs.x = v1.x + v2.x;
  vs.y = v1.y + v2.y;
  vs.z = v1.z + v2.z;
  return vs;
}

vector dot(vector v1, vector v2)
{
  vs.x = v1.x * v2.x;
  vs.y = v1.y * v2.y;
  vs.z = v1.z * v2.z;
  return vs;
}

vector is_perpend(vector vp1, vector vp2)
{
  vp = dot(vp1, vp2);
  if (vp.x == 0 && vp.y == 0 && vp.z == 0)
    printf("\nVector Perpendicular\n");
  else
    printf("\nVector not Perpendicular\n");
}

int main()
{
  struct vector u1, u2, u3;

  printf("Enter 1st vector\n");
  printf("x: ");
  scanf("%d", &u1.x);
  printf("y: ");
  scanf("%d", &u1.y);
  printf("z: ");
  scanf("%d", &u1.z);
  printf("Enter 2nd vector\n");
  printf("x: ");
  scanf("%d", &u2.x);
  printf("y: ");
  scanf("%d", &u2.y);
  printf("z: ");
  scanf("%d", &u2.z);

  u3 = sum(u1, u2);
  printf("\nSum = %di + %dj + %dk\n", u3.x, u3.y, u3.z);

  u3 = dot(u1, u2);
  printf("\nDot product = %d\n", u3.x + u3.y + u3.z);

  is_perpend(u1, u2);
}
