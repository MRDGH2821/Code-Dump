#include <ctype.h>
#include <conio.h>
#include <graphics.h>
#include <stdio.h>
#include <simplecpp>
//***************************************************************
//                   Structure USED IN PROJECT
//***************************************************************
struct account {
  int acno;
  char name[50];
  int deposit;
  char type;
} ac;
//***************************************************************
//                   Functions dealing with structures
//***************************************************************
void create_account();
//function to get data from user
void show_account() const;
//function to show data on screen
void modify();
//function to add new data
void dep(int);
//function to accept amount and add to balance amount
void draw(int);
//function to accept amount and subtract from balance amount
void report() const;
//function to show data in tabular format
int retacno() const;
//function to return account number
int retdeposit() const;
//function to return balance amount
char rettype() const;
//function to return type of  account

void create_account()
{
  cout << "\nEnter The account No. :";
  cin >> ac.acno;
  cout << "\n\nEnter The Name of The account Holder : ";
  scanf("%s", ac.name);
  cout << "\nEnter Type of The account (C/S) : ";
  cin >> ac.type;
  ac.type = toupper(ac.type);
  cout << "\nEnter The Initial amount(>=500 for Saving and >=1000 for current ) : ";
  cin >> ac.deposit;
  cout << "\n\n\nAccount Created..";
}
void show_account() const
{
  cout << "\nAccount No. : " << ac.acno;
  cout << "\nAccount Holder Name : ";
  cout << ac.name;
  cout << "\nType of Account : " << type;
  if (type == 's' || type == 'S')
    cout << "\nType of Account : savings ";
  else if (type == 'c' || type == 'C')
    cout << "\nType of Account : current ";
  else
    cout << "wrong option";

  cout << "\nBalance amount : " << ac.deposit;
}

void modify()
{
  cout << "\nAccount No. : " << ac.acno;
  cout << "\nModify Account Holder Name : ";
  scanf("%s", ac.name);
  cout << "\nModify Type of account : ";
  cin >> ac.type;
  ac.type = toupper(ac.type);
  cout << "\nModify Balance amount : ";
  cin >> ac.deposit;
}

void dep(int x)
{
  ac.deposit += x;
}

void draw(int x)
{
  ac.deposit -= x;
}

void report() const
{
  cout << ac.acno << " " << ac.name << " " << ac.type << ac.deposit << endl;
}
int retacno() const
{
  return ac.acno;
}
int retdeposit() const
{
  return ac.deposit;
}
char rettype() const
{
  return ac.type;
}
//***************************************************************
//      function declaration
//****************************************************************
void write_account();
//function to write record in binary file
void display_sp(int);
//function to display account details given by user
void modify_account(int);
//function to modify record of file void delete_account(int);
void delete_account(int);
//function to delete record of file
void display_all();
//function to display all account details
void deposit_withdraw(int, int);
//function to desposit/withdraw amount for given account
void intro();
//introductory screen function

//***************************************************************
//      THE MAIN FUNCTION OF PROGRAM
//****************************************************************
int main()
{
  char ch;
  int num;

  intro();
  do
    {
      cout << "\n\n\n\tMAIN MENU";
      cout << "\n\n\t01. NEW ACCOUNT";
      cout << "\n\n\t02. DEPOSIT AMOUNT";
      cout << "\n\n\t03. WITHDRAW AMOUNT";
      cout << "\n\n\t04. BALANCE ENQUIRY";
      cout << "\n\n\t05. ALL ACCOUNT HOLDER LIST";
      cout << "\n\n\t06. CLOSE AN ACCOUNT";
      cout << "\n\n\t07. MODIFY AN ACCOUNT";
      cout << "\n\n\t08. EXIT";
      cout << "\n\n\tSelect Your Option (1-8) ";
      cin >> ch;

      switch (ch)
        {
        case '1': write_account();
          break;

        case '2': cout << "\n\n\tEnter The account No. : ";
          cin >> num;
          deposit_withdraw(num, 1);
          break;

        case '3': cout << "\n\n\tEnter The account No. : ";
          cin >> num;
          deposit_withdraw(num, 2);
          break;

        case '4': cout << "\n\n\tEnter The account No. : ";
          cin >> num;
          display_sp(num);
          break;

        case '5': display_all();
          break;

        case '6': cout << "\n\n\tEnter The account No. : ";
          cin >> num;
          delete_account(num);
          break;

        case '7': cout << "\n\n\tEnter The account No. : ";
          cin >> num;
          modify_account(num);
          break;

        case '8': cout << "\n\n\tThanks for using bank managemnt system";
          break;

        default: cout << "\a INVALID CHOICE!!!!";
        }
      getch();
    } while (ch != '8');
  return 0;
}
//***************************************************************
//      function to write in file
//****************************************************************
void write_account()
{
  FILE *outFile;

  outFile = fopen("account.dat", "ab+");
  ac.create_account();
  fwrite ((&ac, sizeof(account), 1, outFile);
          fclose(outFile);
          }
//***************************************************************
//      function to read specific record from file
//****************************************************************
          void display_sp(int n)
          {
            int flag = 0;
            FILE *inFile;

            inFile = fopen("account.dat", "rb");
            if (!inFile)
            {
              cout << "File could not be open !! Press any Key...";
              return;
            }
            cout << "\nBALANCE DETAILS\n";
            while (fread(&ac, sizeof(account), 1, inFile))
            {
              if (ac.retacno() == n)
              {
                ac.show_account();
                flag = 1;
              }
            }
            fclose(inFile);
            if (flag == 0)
              cout << "\n\nAccount number does not exist";
          }
//***************************************************************
//      function to modify record of file
//****************************************************************
          void modify_account(int n)
          {
            /*int found=0;
               fstream *File;
               File=fopen("account.dat","rb+");
               if(!File)
               {
                cout<<"File could not be open !! Press any Key...";
                return;
               }
               while(!File.eof() && found==0)
               {
                File.read((char *)&ac, sizeof(account));
                if(ac.retacno()==n)
                  {
                    ac.show_account();
                    cout<<"\n\nEnter The New Details of account"<<endl;
                    ac.modify();
                    int pos=(-1*sizeof(account));
                    File.seekp(pos,ios::cur);
                    File.write((char *)&ac,
                    sizeof(account));
                    cout<<"\n\n\t Record Updated";
                    found=1;
                  }
               }
                File.close();
                if(found==0)
                cout<<"\n\n Record Not Found ";
               }*/
            FILE *inFile;
            FILE *outFile;

            inFile = fopen("account.dat", "rb");
            if (!inFile)
            {
              cout << "File could not be open !! Press any Key...";
              return;
            }
            outFile = fopen("Temp.dat", "rb");
            fseek(inFile, n * sizeof(account), SEEK_SET);
            while (fread(&ac, sizeof(account), 1, inFile))
            {
              if (ac.retacno() != n)
              {
                fwrite(&ac, sizeof(account), 1, outFile);
              }
            }
            fclose(inFile);
            fclose(outFile);
            remove("account.dat");
            rename("Temp.dat", "account.dat");
            write_account();
          }
//***************************************************************
//      function to delete record of file
//****************************************************************
          void delete_account(int n)
          {
            FILE *inFile;
            FILE *outFile;

            inFile = fopen("account.dat", "rb");
            if (!inFile)
            {
              cout << "File could not be open !! Press any Key...";
              return;
            }
            outFile = fopen("Temp.dat", "rb");
            fseek(inFile, n * sizeof(account), SEEK_SET);
            while (fread(&ac, sizeof(account), 1, inFile))
            {
              if (ac.retacno() != n)
              {
                fwrite(&ac, sizeof(account), 1, outFile);
              }
            }
            fclose(inFile);
            fclose(outFile);
            remove("account.dat");
            rename("Temp.dat", "account.dat");
            cout << "\n\n\tRecord Deleted ..";
          }
//***************************************************************
//      function to display all accounts deposit list
//****************************************************************
          void display_all()
          {
            FILE *inFile;

            inFile = fopen("account.dat", "rb");
            if (!inFile)
            {
              cout << "File could not be open !! Press any Key...";
              return;
            }
            cout << "\n\n\t\tACCOUNT HOLDER LIST\n\n";
            cout << "====================================================\n";
            cout << "A/c no.     NAME           Type  Balance\n";
            cout << "====================================================\n";
            while (fread(&ac, sizeof(account), 1, inFile))
            {
              ac.report();
            }
            fclose(inFile);
          }
//***************************************************************
//      function to deposit and withdraw amounts
//****************************************************************
          void deposit_withdraw(int n, int option)
          {
            int amt;
            int found = 0;
            FILE File;

            File = fopen("account.dat", "rb+");
            if (!File)
            {
              cout << "File could not be open !! Press any Key...";
              return;
            }
            while (!File.eof() && found == 0)
            {
              fread(&ac, sizeof(account), 1, File);
              if (ac.retacno() == n)
              {
                ac.show_account();
                if (option == 1)
                {
                  cout << "\n\n\tTO DEPOSITE AMOUNT ";
                  cout << "\n\nEnter The amount to be deposited";
                  cin >> amt;
                  ac.dep(amt);
                }
                if (option == 2)
                {
                  cout << "\n\n\tTO WITHDRAW AMOUNT ";
                  cout << "\n\nEnter The amount to be withdraw";
                  cin >> amt;
                  int bal = ac.retdeposit() - amt;
                  if ((bal < 500 && ac.rettype() == 'S') || (bal < 1000 && ac.rettype() == 'C'))
                    cout << "Insufficience balance";
                  else
                    ac.draw(amt);
                }
                int pos = (-1 * sizeof(ac));
                fseek(File, pos, SEEK_CUR);
                fwrite(&ac, sizeof(account), 1, File);
                cout << "\n\n\t Record Updated";
                found = 1;           
              }
                   
            }
            fclose(File);
            if (found == 0)
              cout << "\n\n Record Not Found ";
          }
//***************************************************************
//      INTRODUCTION FUNCTION
//****************************************************************
          void intro()
          {
            cout << "\n\n\n\tSKS bank ";
            cout << "\n\n\n\nMADE BY: Snehal Verne";
            cout << "\n\nCollege: V.I.T. Pune;
cin.get();
 }
//***************************************************************
//          END OF PROJECT
//***************************************************************
