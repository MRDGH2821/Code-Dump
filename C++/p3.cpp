#include <iostream.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
class bank
{
typedef char string;
char name[20];
int amtno;
char actype[20];
float bal;
public:
void get(int no, char *n, char *t, float b)
{
  strcpy(name, n);
  amtno = no;
  strcpy(actype, t);
  bal = b;
}
float deposit()
{
  float amt;

  cout << "Enter amount: ";
  cin >> amt;
  bal = bal + amt;
  return bal;
}
float withdraw()
{
  float amt;

  cout << "How many Rupees withdraw: ";
  cin >> amt;
  bal = bal - amt;
  return bal;
}
void display()
{
  cout << "Account number: " << amtno << endl;
  cout << "Name: " << name << endl;
  cout << "Account type: " << actype << endl;
  cout << "Deposit Amount: " << deposit() << endl;
  cout << "Balance: " << withdraw() << endl;
}
};
int main()
{
  int n;
  char nm[20], t[20];
  float a;
  bank bk;

  cout << "Enter Account no.: ";
  cin >> n;
  cout << "Enter Name: ";
  cin >> nm;
  cout << "Enter account type: ";
  cin >> t;
  cout << "Enter balance amount: ";
  cin >> a;
  system("cls");
  bk.get(n, nm, t, a);
  bk.display();
  getch();
  return 0;
}
