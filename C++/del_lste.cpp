#include <iostream.h>
#include <stdlib.h>
#include <process.h> // for Exit()
struct Node
{ int info; Node *next; }
*start, *newptr, *save, *ptr, *rear;
Node * Create_New_Node(int);
void Insert(Node*);
void Display(Node*);
void DelNode();
int main( )
{
  start = rear = NULL;
  int inf; char ch = 'y';
  while (ch == 'y' || ch == 'Y')
    {
      system(" cls ");
      cout << "\n Enter INFOrmation for the new node...";
      cin >> inf;
      newptr = Create_New_Node(inf);
      if (newptr == NULL)
        {
          cout << "\nCannot create new node!!! Aborting!!\n";
          system("pause");
          exit(1);
        }
      Insert(newptr);
      cout << "\n Press Y to enter more nodes, N to exit. \n";
      cin >> ch;
    }
  system(" cls ");
  do
    {
      cout << "\nThe list now is: \n";
      Display(start); system("pause");
      cout << "Want to delete last node ?(y/n)...";
      cin >> ch;
      if (ch == 'y' || ch == 'Y')
        DelNode();
    } while (ch == 'y' || ch == 'Y');
  return 0;
}
Node*Create_New_Node(int n)
{
  ptr = new Node;
  ptr->info = n;
  ptr->next = NULL;
  return ptr;
}
void Insert(Node* np)
{
  if (start == NULL)
    start = rear = np;
  else
    {
      rear->next = np;
      rear = np;
    }
}
void DelNode()
{
  if (rear == NULL)
    cout << "UNDERFLOW !!!\n";
  else
    {
      ptr = rear;
      rear = rear->next;
      delete ptr;
    }
}
void Display(Node* np)   // function to Display list
{
  while (np != NULL)
    {
      cout << np->info << " ->";
      np = np->next;
    }
  cout << "!!!\n";
}
