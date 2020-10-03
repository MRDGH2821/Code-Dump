#include <iostream.h>
struct Node { //Creating Node Structure
  int data;
  Node *link;
};
Node *head = NULL; /*Function to delete node at the end. creating head pointer and equating to NULL*/
void deleteEnd()
{
  Node *ptr;

  //if list is empty.
  if (head == NULL)
    cout << "EMPTY LIST\n";
  //if list has only one node.
  if (head->link == NULL)
    {
      ptr = head;
      head = NULL;
      delete ptr;
    }
  //Traversing the list.
  else
    {
      Node *prev;
      ptr = head;
      while (ptr->link != NULL)
        {
          prev = ptr;
          ptr = ptr->link;
        }
      prev->link = NULL;
      delete ptr;
    }
}
void insertEnd(int d)  /*Function to insert at the end of linked list*/
{
  Node *ptr = new Node();

  ptr->data = d;
  ptr->link = NULL;
  if (head == NULL)
    head = ptr;
  else
    {
      Node *temp = head;
      while (temp->link != NULL)
        {
          temp = temp->link;
        }
      temp->link = ptr;
    }
} // function to display Linked list
void displayList()
{
  Node *ptr = head;

  if (head == NULL)
    cout << "LIST IS EMPTY\n";
  while (ptr != NULL)
    {
      cout << ptr->data << " ";
      ptr = ptr->link;
    }
  cout << "\n";
}
//Main Function
int main( )
{
  int inf; char ch = 'y';

  while (ch == 'y' || ch == 'Y')
    {
      cout << "\n Enter INFOrmation for the new node...(integer) ";
      cin >> inf;
      insertEnd(inf);
      cout << "\n Press Y to enter more nodes, N to exit: ";
      cin >> ch;
    }
  do
    {
      cout << "\nThe list now is: \n";
      displayList();
      cout << "Want to delete last node ?(y/n)...";
      cin >> ch;
      if (ch == 'y' || ch == 'Y')
        deleteEnd();
    } while (ch == 'y' || ch == 'Y');
  return 0;
}