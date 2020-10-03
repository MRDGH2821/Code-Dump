#include <iostream.h>
#include <stdio.h>
#include <stdlib.h>
struct node
{ char country[20]; node *link; };
class stack
{ node *top;
public:
  stack()
  {
    top = NULL;
  }
  void push();
  void pop();
  void display();
  ~stack(); };
void stack::push()
{
  node *temp = new node;

  gets(temp->country);
  temp->link = top;
  top = temp;
}
void stack::pop()
{
  if (top == NULL)
    cout << "UNDERFLOW !!!";
  else
    {
      node *ptr = top;
      top = top->link;
      delete ptr;
    }
}
void stack::display()
{
  node * temp = top;

  while (temp != NULL)
    {
      cout << temp->country << "->";
      temp = temp->link;
    }
  cout << "!!!\n";
}
stack::~stack()
{
  node *temp; while (top != NULL)

    ;

  { temp = top;
    top = top->link;
    delete temp; }
}
void main()
{
  stack st;
  int ch;

  while (1)
    {
      cout << "Menu: \n 1) push \n 2) pop \n 3) display \n 4) Exit\n";
      cout << "Enter your choice: ";
      cin >> ch;
      switch (ch)
        {
        case 1: st.push(); break;

        case 2: st.pop(); break;

        case 3: st.display(); break;

        case 4: exit(0);

        default: cout << "Wrong choice entered";
        }
    }
}