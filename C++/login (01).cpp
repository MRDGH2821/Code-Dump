#include <simplecpp>

int main()
{
  char pass[100] = "bhaichup";
  char check[100];
  char name[100];
  int l = strlen(pass);
  char a;

  for (int i = 0; i <= l; i++)
    {
      a = getch();
      check[i] = a;
      a = '*';
      cout << a;
    }

  cin.getline(name, 100);

  if (strcmp(pass, check) == 0)
    {
      cout << "access granted";
    }
  else
    {
      cout << "bhad mai jaa";
    }
}
