#include <simplecpp>
#include <stdio.h>
main_program
{
  int var[3];
  int i, *ptr;
  printf("Enter 3 array elements\n");
  for (i = 0; i < 3; i++)
    {
      scanf("%d", &var[i]);
    }
  printf("\n\nBy Decrementing Pointer value\n\n");
  ptr = &var[2];

  for (i = 3; i > 0; i--)
    {
      printf("Address of var[%d] = %x\n", i - 1, ptr);
      printf("Value of var[%d] = %d\n", i - 1, *ptr);
      ptr--;
    }

  printf("\n\nBy Incrementing Pointer value\n\n");
  ptr = var;

  for (i = 0; i < 3; i++)
    {
      printf("Address of var[%d] = %x\n", i, ptr);
      printf("Value of var[%d] = %d\n", i, *ptr);
      ptr++;
    }
}
