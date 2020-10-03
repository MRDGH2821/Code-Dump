#include <iostream.h>
#include <conio.h>
#include <string.h>
class bank
{
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

    cout << "Enter amount: " << endl;
    cin >> amt;
    bal = bal + amt;
    return bal;
  }
  float withdraw()
  {
    float amt;

    cout << "How many Rupees withdraw: " << endl;
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
    cout << "After Withdraw Amount balnace: " << withdraw() << endl;
  }
};
void main()
{
  int n;
  char nm[20], t[20];
  float a;
  bank bk;

  clrscr();
  cout << "Enter Account no.: " << endl;
  cin >> n;
  cout << "Enter Name: " << endl;
  cin >> nm;
  cout << "Enter account type: " << endl;
  cin >> t;
  cout << "Enter balance amount: " << endl;
  cin >> a;
  bk.get(n, nm, t, a);
  bk.display();
  getch();
}