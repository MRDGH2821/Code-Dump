#include <iostream>
#include <process.h> // for Exit()
using namespace std;
struct Node
{ int info; Node *next; }
*start, *newptr, *save, *ptr;
Node * Create_New_Node(int);
void Insert_Beg(Node*);
void Display(Node*);

int main( )
{
  start = NULL;
  int inf; char ch = 'y';
  while (ch == 'y' || ch == 'Y')
    {
      system(" cls ");
      cout << "\n Enter INFOrmation for the new node...";
      cin >> inf;
      cout << "\n Creating New Node!! Press Enter to continue...";
      system("pause");
      newptr = Create_New_Node(inf);
      if (newptr != NULL)

        {
          cout << "\n\nNew Node Created Successfully. Press Enter to continue...";
          system("pause ");
        }
      else
        {
          cout << "\nCannot create new node!!! Aborting!!\n";
          system("pause");
          exit(1);
        }
      cout << "\n\nNow inserting this node in the beginning of list...\n";
      cout << "Press Enter to continue...\n";
      system("pause");
      Insert_Beg(newptr);
      cout << "\nNow the list is :\n";

      Display(start);
      cout << "\n Press Y to enter more nodes, N to exit. \n";
      cin >> ch;
    }
  return 0;
}

Node*Create_New_Node(int n)

{
  ptr = new Node;
  ptr->info = n;
  ptr->next = NULL;
  return ptr;
}

void lnsert_Beg(Node* np)

{
  if (start == NULL)
    start = np;
  else
    {
      save = start;
      start = np;
      np->next = save;
    }
}
void Dispiay(Node* np)   // function to Display list

{
  while (np != NULL)
    {
      cout << np->info << " ->";
      np = np->next;
    }
  cout << "!!!\n";
}
