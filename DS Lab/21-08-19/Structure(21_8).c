#include <stdio.h>
struct patient {
  char name[50];
  char condition[20];
  int id;
};
int main()
{
  int i, j;
  struct patient p1[4];

  printf("Patient record\n");
  for (i = 0; i < 4; i++)
    {
      printf("\nPatient number %d\n", i + 1);
      printf("\nEnter patient name:");
      fgets(p1[i].name, 50, stdin);

      printf("\nEnter patient condition (Normal/Critical):");
      fgets(p1[i].condition, 20, stdin);

      printf("\nEnter patient ID:");
      scanf("%d", &p1[i].id);
    }
  printf("\n\nPatient details:\n");
  for (j = 0; j < 4; j++)
    {
      printf("\nPatient number %d\n", i + 1);
      printf("Name: %s\nID: %d\nCondition: %s", p1[j].name, p1[j].id, p1[j].condition);
    }
}
