#include <iostream.h>
#include <conio.h>
#define maxq 10
#include <stdio.h>
int Q[10], FRONT = 1, REAR, item, n, i, p, ch;
char choice;
int main()
{
  void insert();
  void del();

  cout << "Enter the number of elements to form the queue:";
  cin >> n;
  cout << endl << "Enter the elements: ";
  for (i = 1; i <= n; i++)
    {
      cin >> Q[i];
    }
  REAR = n;
  cout << "Front is: " << FRONT << "\nRear is: " << REAR;

 start:
  cout << "\n1. Insertion";
  cout << "\n2. Deletion.";
  cout << "\nEnter your choice: ";
  cin >> ch;
  switch (ch)
    {
    case 1:
      insert();
      cout << "\nDo you want to continue (y/n) ?";
      cin >> choice;
      while (choice == 'Y' || choice == 'y')
        goto start;
      break;

    case 2:
      del();
      cout << "\nDo you want to continue (y/n) ?";
      cin >> choice;
      while (choice == 'Y' || choice == 'y')
        goto start;
      break;

    default: cout << "\nEnter right choice";
    }
  getch();
}
void insert()
{
  cout << "\nEnter the element to be inserted: ";
  cin >> item;
  if ((FRONT == 1) && (REAR == maxq))
    {
      cout << "\nOVERFLOW!!";
    }
  else if (FRONT == NULL && REAR == NULL)
    {
      FRONT = 1;
      REAR = 1;
      Q[REAR] = item;
    }
  else
    {
      REAR++;
      Q[REAR] = item;
    }
  cout << "\nThe elements in queue after insertion are: ";
  for (i = 1; i <= REAR; i++)
    {
      cout << endl << Q[i];
    }
  cout << "\nAfter Insertion Front is:" << FRONT << "\nRear is: " << REAR;
}
void del()
{
  if ((FRONT == NULL) && (REAR == NULL))
    {
      cout << "\nUNDERFLOW!!";
    }
  else if (FRONT == REAR)
    {
      FRONT = NULL;
      REAR = NULL;
    }
  else
    {
      FRONT++;
    }
  cout << "\nQueue after deletion is: ";
  for (i = FRONT; i <= REAR; i++)
    {
      cout << endl << Q[i];
    }
  cout << "\nAfter deletion:\nFront is:" << FRONT << "\nRear is: " << REAR;
}