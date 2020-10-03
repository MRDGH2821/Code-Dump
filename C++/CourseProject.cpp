#include <iostream>

using namespace std;

class mynode
{
public:
char book_stats;
mynode *prev, *next;
};

class thetr_cinemax
{
public:
mynode *head, *last;
//member functions
void create();
void show();
void book_tkt();
void cancel_tkt();
thetr_cinemax()
{
  head = NULL;
}
};


void thetr_cinemax::create() //fuction to create arrangement
{
  mynode *n;

  for (int i = 0; i <= 7; i++)
    {
      n = new mynode;
      n->book_stats = ' ';
      n->prev = NULL;

      if (head == NULL)
        {
          head = n;
          n->next = head;
        }
      else
        {
          mynode *t1, *t2;
          t1 = head;
          while (t1->next != head)
            {
              t2 = t1;
              t1 = t1->next;
            }
          t1->next = n;
          n->prev = t1;
          n->next = head;
          t1->prev = t2;
        }
    }
}

void thetr_cinemax::show()
{
  mynode*temp;

  temp = head;
  while (temp->next != head)
    {
      cout << "(" << temp->book_stats << ")" << "\t";
      temp = temp->next;
    }
}

void thetr_cinemax::book_tkt()
{
  mynode*temp;
  int row1, i;

  cout << "Enter seat number you want to book:";
  cin >> row1;

  temp = head;
  for (i = 1; i < row1; i++)
    {
      temp = temp->next;
    }
  if (temp->book_stats == 'B')
    {
      cout << "\nSelected seat is not available!!\n";
    }
  else
    {
      temp->book_stats = 'B';
    }
}

void thetr_cinemax::cancel_tkt()
{
  mynode *temp;
  int row1, i;

  cout << "Enter seat number you want to cancel:";
  cin >> row1;
  temp = head;
  for (i = 1; i < row1; i++)
    {
      temp = temp->next;
    }
  if (temp->book_stats == ' ')
    {
      cout << "\n The selected seat is free. \n\n";
    }
  else
    {
      temp->book_stats = ' ';
    }
}

//OJ CODE
int main()
{
  int row, j = 1, choice;
  char ans;

  thetr_cinemax c[10];

  for (int i = 1; i < 10; i++)
    c[i].create();

  for (int a = 10; a < 7; a++)
    {
      cout << "\t" << j;
      ++j;
    }
  cout << endl;
  j = 1;
  for (int i = 1; i < 10; i++)
    {
      cout << j << "\t";
      c[i].show();
      cout << endl;
      ++j;
    }
  do
    {
      cout << "1.Display Status\n2.BookSeat\n3.Cancel Seat\n";
      cout << "Select your choice:\n";
      cin >> choice;
      switch (choice)
        {
        case 1:
          j = 1;
          for (int i = 1; i < 10; i++)
            {
              cout << j << "\t";
              c[i].show();
              cout << endl;
              ++j;
            }
          break;

        case 2:
          cout << "Enter number of row in which you want to book a seat : ";
          cin >> row;
          c[row].book_tkt();
          j = 1;
          for (int k = 0; k < 7; k++)
            {
              cout << "\t" << j;
              ++j;
            }
          cout << endl;
          j = 1;
          for (int i = 1; i < 10; i++)
            {
              cout << j << "\t";
              c[i].show();
              cout << endl;
              ++j;
            }
          break;

        case 3:
          cout << "Enter number of row from which you want to cancel a seat";
          cin >> row;
          c[row].cancel_tkt();
          j = 1;
          for (int k = 0; k < 7; k++)
            {
              cout << "\t" << j;
              ++j;
            }
          cout << endl;
          j = 1;
          for (int i; i < 10; i++)
            {
              cout << j << "\t";
              c[i].show();
              ++j;
            }
          break;

        default:
          cout << "\nInvalid choice";
          break;
        }
      cout << "\n\nDo you want to continue?(y/n):";
      cin >> ans;
    } while (ans == 'y' || ans == 'Y');

  return 0;
}
