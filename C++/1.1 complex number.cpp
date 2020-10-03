#include <stdio.h>
#include <simplecpp>
struct complex {
  int real, img;
};
main_program
{
  int choice, x, y, z;
  struct complex a, b, c;

  printf("Enter a and b where a + ib is the first complex number.");
  printf("\na = ");
  scanf("%d", &a.real);
  printf("b = ");
  scanf("%d", &a.img);
  printf("Enter c and d where c + id is the second complex number.");
  printf("\nc = ");
  scanf("%d", &b.real);
  printf("d = ");
  scanf("%d", &b.img);

  //Addition
  c.real = a.real + b.real;
  c.img = a.img + b.img;

  //if (c.img >= 0)
  printf("\nSum of the complex numbers = %d + %di\n", c.real, c.img);
  // else
  // printf("\nSum of the complex numbers = %d %di\n", c.real, c.img);

  //substraction
  c.real = a.real - b.real;
  c.img = a.img - b.img;

  // if (c.img >= 0)
  printf("\nDifference of the complex numbers = %d + %di\n", c.real, c.img);
  // else
  //  printf("\nDifference of the complex numbers = %d %di\n", c.real, c.img);

  //multiplication
  c.real = a.real * b.real - a.img * b.img;
  c.img = a.img * b.real + a.real * b.img;

  // if (c.img >= 0)
  printf("\nMultiplication of the complex numbers = %d + %di\n", c.real, c.img);
  // else
  //  printf("\nMultiplication of the complex numbers = %d %di\n", c.real, c.img);

  //division
  if (b.real == 0 && b.img == 0)
    printf("\nDivision by 0 + 0i isn't allowed.\n");
  else
    {
      x = a.real * b.real - a.img * b.img;
      y = a.img * b.real - a.real * b.img;
      z = b.real * b.real + b.img * b.img;

      if (x % z == 0 && y % z == 0)
        {
          if (y / z >= 0)
            printf("\nDivision of the complex numbers = %d + %di\n", x / z, y / z);
        }
      else if (x % z == 0 && y % z != 0)
        {
          if (y / z >= 0)
            printf("\nDivision of two complex numbers = %d + %d/%di\n", x / z, y, z);
        }
      else if (x % z != 0 && y % z == 0)
        {
          if (y / z >= 0)
            printf("\nDivision of two complex numbers = %d/%d + %di\n", x, z, y / z);
        }
      else
        {
          if (y / z >= 0)
            printf("\nDivision of two complex numbers = %d/%d + %d/%di\n", x, z, y, z);
        }
    }
}
