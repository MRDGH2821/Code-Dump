//WAP to perform following operations on any Database: 1. Add. 2. Delete. 3. Modify. 4. Display. 5. Search.
//Div:C RollNo.:42 GR No.:11811150
//Name: Mihir Rabade

#include <stdio.h>

#include <string.h>

#include <stdlib.h>

int size = 4;
struct db {
  char name[20];
  int ID;
};

struct db add(struct db k1)
{
  printf("Enter Name:");
  scanf("%s", k1.name);
  printf("Enter ID:");
  scanf("%d", &k1.ID);
  return k1;
};

struct db delete(struct db k2)
{
  char d[] = { '0' };

  strcpy(k2.name, d);
  k2.ID = 0;
  printf("Data deleted");
  return k2;
}
/*
   struct db modify(struct db k3)
   {
        add(k3);
        return k3;
   }
 */
void display(struct db k4)
{
  printf("Name:%s\n", k4.name);
  printf("ID:%d\n", k4.ID);
}


int main()
{
  struct db p[size];
  int c, id, index, flag;

  printf("DB Manager");
 choice: printf("\n1. Add. \n2. Delete. \n3. Modify. \n4. Display. \n5. Search.\n6. Display All.\n(Any no.). Exit \nEnter choice:");
  scanf("%d", &c);
  switch (c)
    {
    case 1:
      printf("Enter data of 4 people:\n");
      for (int i = 0; i < size; i++)
        {
          p[i] = add(p[i]);
        }
      goto choice;
      break;

    case 2:
      printf("Enter ID number to delete:\n");
      scanf("%d", &id);
      for (int i = 0; i < size; i++)
        {
          if (p[i].ID == id)
            {
              p[i] = delete(p[i]);
              flag = 1;
              printf("Data deleted\n");
              break;
            }
          else
            {
              flag = -2;
            }
        }
      if (flag == -2)
        printf("Data not found\n");
      goto choice;
      break;

    case 3:
      printf("Enter ID number to modify:\n");
      scanf("%d", &id);
      for (int i = 0; i < size; i++)
        {
          if (p[i].ID == id)
            {
              p[i] = add(p[i]);
              flag = 1;
              printf("Data modified.\n");
              break;
            }
          else
            {
              flag = -2;
            }
        }
      if (flag == -2)
        printf("Data not found\n");
      goto choice;
      break;

    case 4:
      printf("Enter ID number to display:\n");
      scanf("%d", &id);
      for (int i = 0; i < size; i++)
        {
          if (p[i].ID == id)
            {
              display(p[i]);
              flag = 1;
              break;
            }
          else
            {
              flag = -2;
            }
        }
      if (flag == -2)
        printf("Data not found\n");

      goto choice;
      break;

    case 5:
      printf("Enter ID number to search:\n");
      scanf("%d", &id);
      for (int i = 0; i < size; i++)
        {
          if (p[i].ID == id)
            {
              printf("Data found\n");
              break;
            }
          else
            {
              printf("Data not found\n");
              break;
            }
        }
      goto choice;
      break;

    case 6:
      for (int i = 0; i < size; i++)
        {
          printf("%d:%s , ", p[i].ID, p[i].name);
        }
      goto choice;
      break;

    default:
      exit(0);
    }
}
