#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//using namespace std;

int main()
{
  clrscr();
  char pass[100] = "bhaichup";
  char check[100];
  char name[100];
  int l = strlen(pass);
  char a;
  scanf("%s", name);

  for (int i = 0; i <= l; i++)
    {
      a = getch();
      check[i] = a;
      a = '*';
      printf("%c", a);
    }

  if (strcmp(pass, check) == 0)
    {
      printf("access granted");
    }
  else
    {
      printf("bhad mai jaa");
    }
  getch();
  return 0;
}