#include <stdio.h>
#include <string.h>
#include <simplecpp>
struct student {
  int id;
  char name[20];
  float percentage;
} gen1;

student entry(struct student gen1)
{
  printf("\nEnter ID of st\n");
  scanf("%d", gen1.id);
  printf("\nEnter name of st\n");
  gets(gen1.name);
  printf("\nEnter percentage of st\n");
  scanf("%d", gen1.percentage);
  return gen1;
}

student stdprnt(struct student gen1)
{
  printf(" Id is: %d \n", gen1.id);
  printf(" Name is: %s \n", gen1.name);
  printf(" Percentage is: %f \n", gen1.percentage);
}
main_program
{
  struct student st1 = { 0 };
  struct student st2 = { 0 };
  printf("\nEnter details of student 1\n");
  entry(st1);
  printf("\nEnter details of student 2\n");
  entry(st2);

  printf("\nDetails of student 1\n");
  stdprnt(st1);
  printf("\nDetails of student 2\n");
  stdprnt(st2);
}
