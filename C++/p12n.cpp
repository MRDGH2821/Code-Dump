#include <iostream.h>
#include <conio.h>
struct node
{ int data;
  node *next; };
class lnkdlst {
private: node *head, *tail;
public:
lnkdlst()
{
  head = NULL;
  tail = NULL;
}
void display()
{
  node *tmp = new node;

  tmp = head;
  while (tmp != NULL)
    {
      cout << "-> " << tmp->data;
      tmp = tmp->next;
    }
}
void ins_beg(int n)
{
  node * tmp = new node;

  tmp->data = n;
  tmp->next = head;
  head = tmp;
}
};
int main( )
{
  lnkdlst l;
  int n;
  char ch = 'y';

  while (ch == 'y' || ch == 'Y')
    {
      clrscr();
      cout << "Enter new data >> ";
      cin >> n;
      cout << "Inserting data to beginning of the list....\n";
      l.ins_beg(n);
      cout << "Done!!\n";
      cout << "Press Enter to continue....";
      getch();
      clrscr();
      cout << "\nNow the list is :\n";
      l.display();
      cout << "\n Press Y to enter more nodes, N to exit. \n";
      cin >> ch;
    }
  return 0;
}