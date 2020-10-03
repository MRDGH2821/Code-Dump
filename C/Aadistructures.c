//name, id, dept, salary. o/p - whose details you want. - 4 names as options. display details.

#include <stdio.h>

struct employee {
  int id, salary;
  char name[40], dept[40];
};

int main()
{
  struct employee e1, e2, e3, e0;

  printf("Enter details of Employee %d", 1);
  printf("Name:");
  scanf("%s", e0.name);
  printf("Depatment:");
  scanf("%s", e0.dept);
  printf("ID:");
  scanf("%d", &e0.id);
  printf("Salay:");
  scanf("%s", &e0.salary);
}
