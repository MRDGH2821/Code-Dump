#include <iostream.h>
#include <stdlib.h>
#include <process.h> // for Exit()
struct Node
{ int info; Node *next; }
*start, *newptr, *save, *ptr, *rear;
Node * Create_New_Node(int);
void Insert_End(Node*);
void Display(Node*);
int main( )
{
  start = rear = NULL;
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
      cout << "\n\nNow inserting this node in the End of list...\n";
      cout << "Press Enter to continue...\n";
      system("pause");
      Insert_End(newptr);
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
void lnsert_End(Node* np)
{
  if (start == NULL)
    start = rear = np;
  else
    {
      rear->next = np;
      rear = np;
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
