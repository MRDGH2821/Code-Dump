#include <simplecpp>
#include <stdio.h>
main_program
{
  int var;
  int *ptr;
  int **pptr;
  printf("Enter a value\n");
  scanf("%d", &var);

  ptr = &var;
  pptr = &ptr;
  printf("Value of var = %d\n\n", var);
  printf("Value available at *ptr = %d\n", *ptr);
  printf("Value available at ptr = %d\n\n", ptr);
  printf("Value available at **pptr = %d\n", **pptr);
  printf("Value available at pptr = %d\n", pptr);
  printf("Value available at *pptr = %d\n\n", *pptr);
  printf("Pointer Operations\n");
  printf("Addition = %d\n", *ptr + **pptr);
  printf("Subtraction = %d\n", *ptr - **pptr);
  printf("Division = %d\n", *ptr / **pptr);
  printf("\nValue of var after operations = %d\n", var);
}
