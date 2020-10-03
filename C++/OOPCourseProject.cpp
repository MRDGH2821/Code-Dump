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
        }
      cout << "\n\nDo you want to continue?(y/n):";
      cin >> ans;
    } while (ans == 'y' || ans == 'Y');

  return 0;
}
