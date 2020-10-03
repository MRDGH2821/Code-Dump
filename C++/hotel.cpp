#include <iostream.h>
#include <fstream.h>
#include <string.h>

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
int cnt = 0, sno = 0;
class hotel
{
public:
int choice, x, y, m, m1, a, b, i, dr, rno, s, d, j, k;
int sr;
char p1[25], r[25], r1[25], temp[28], ar, rc, n[25], n1[25], o[25], o1[25], p[25];
char p4[25], p5[25], r4[25], r5[25], vchoice, mf, n4[25], n5[25], o4[25], o5[25];
hotel()
{
  sr = 0;
  dr = 0;
}
int ret_single();
int ret_double();
void wel();
void menu();
void enquiry();
void reser();
void re_single();
void re_double();
void status();
void st_single();
void st_double();
void modifi();
void mo_single();
void mo_double();
void deletion();
void de_single();
void de_double();
};

int hotel::ret_single()
{
  cnt = 0;
  fstream f1;
  f1.open("one.dat", ios::in | ios::binary);
  f1.seekg(0, ios::beg);
  while (f1.read((char*)this, sizeof(hotel)))
    {
      cnt = cnt + 1;
    }
  return cnt;
}
int hotel::ret_double()
{
  cnt = 0;
  fstream f1;
  f1.open("double.dat", ios::in | ios::binary);
  f1.seekg(0, ios::beg);
  while (f1.read((char*)this, sizeof(hotel)))
    {
      cnt = cnt + 1;
    }
  return cnt;
}
//WELCOME//
void hotel:: wel()
{
  for (x = 5; x < 77; x++)
    {
      gotoxy(x, 3);
      delay(15);
      textcolor(WHITE);
      cprintf("*");
    }
  for (x = 76; x >= 5; x--)
    {
      gotoxy(x, 48);
      delay(15);
      textcolor(WHITE);
      cprintf("*");
    }
  for (y = 3; y <= 48; y++)
    {
      gotoxy(5, y);
      delay(15);
      textcolor(WHITE);
      cprintf("*");
    }
  for (y = 47; y >= 3; y--)
    {
      gotoxy(76, y);
      delay(15);
      textcolor(WHITE);
      cprintf("*");
    }
  gotoxy(35, 22);
  textcolor(RED);
  cprintf("WELCOME");
  gotoxy(36, 26);
  textcolor(WHITE);
  cprintf(" TO");
  gotoxy(33, 30);
  textcolor(GREEN);
  cprintf(" HOTEL BOSS");
  gotoxy(26, 48);
  textcolor(YELLOW);
  cprintf(" Press Any Key To Continue... ");
  getch();
  menu();
}

// MENU FUNCTION //

void hotel::menu()
{
  clrscr();
  gotoxy(33, 16);
  textcolor(BROWN);
  cprintf("1 :- ENQUIRY");
  gotoxy(33, 19);
  textcolor(LIGHTMAGENTA);
  cprintf("2 :- RESERVATION ");
  gotoxy(33, 22);
  textcolor(LIGHTBLUE);
  cprintf("3 :- STATUS");
  gotoxy(33, 25);
  textcolor(LIGHTRED);
  cprintf("4 :- MODIFICATION");
  gotoxy(33, 28);
  textcolor(WHITE);
  cprintf("5 :- DELETION");
  gotoxy(33, 31);
  textcolor(RED);
  cprintf("6 :- EXIT");
  gotoxy(33, 34);
  textcolor(WHITE);
  gotoxy(18, 47);
  cprintf("Press the Corresponding Keys for the desired ACTION");
  for (j = 33; j < 47; j++)
    {
      gotoxy(j, 36);
      delay(20);
      textcolor(WHITE);
      cprintf("<");
    }
  for (j = 46; j >= 33; j--)
    {
      gotoxy(j, 43);
      delay(20);
      textcolor(WHITE);
      cprintf(">");
    }
  for (k = 37; k <= 42; k++)
    {
      gotoxy(33, k);
      delay(20);
      textcolor(WHITE);
      cprintf("<>");
    }
  for (k = 42; k >= 37; k--)
    {
      gotoxy(45, k);
      delay(20);

      textcolor(WHITE);
      cprintf("<>");
    }
  gotoxy(39, 39);
  cin >> choice;
  switch (choice)
    {
    case 1:
      enquiry();

    case 2:
      reser();

    case 3:
      status();

    case 4:
      modifi();

    case 5:
      deletion();

    case 6:
      exit(0);
      break;

    default:
    {
      gotoxy(33, 48);
      cprintf("\n\nIllegal Choice ");
      getch();
      menu();
    }
    }
}

// ENQUIRY //

void hotel::enquiry()
{
  int a, d, tmp;
  char ch, c, n;

  clrscr();
  cout << "\n\t\t\t\tENQUIRY SESSION" << endl;
  cout << "  \t\t\t\t------- -------" << endl;
  cout << "\n\tROOM DETAILS" << endl;
  cout << "\n\tSingle Room(S)" << endl;
  cout << "\n\tDouble Room(D)" << endl;
  cout << "\n\t\tENTER YOUR CHOICE" << endl;
  gotoxy(20, 13);
  cin >> n;
  switch (n)
    {
    case 'S':
      tmp = ret_single();
      d = 50 - tmp;
      tmp = 0;
      cout << "\nRemaining Single Room is:" << d << endl;
      getch();
      menu();
      break;

    case 'D':
      tmp = ret_double();
      a = 50 - tmp;
      tmp = 0;
      cout << "Remaining Double Room is:" << a << endl;
      getch();
      menu();
    }
  if (ch == 'N')
    {
      menu();
    }
  else
    gotoxy(30, 48);
  cout << "Illegal Choice or make sure CAPS Lock is ON";
  getch();
  menu();
}
//RESERVATION//

void hotel::reser()
{
  char a, b;

  clrscr();
  cout << "\n\t\t\tRESERVATION";
  cout << "\n\t\t\t-----------\n\n" << endl;
  cout << "\nDo You Want To Reserve a Room? (Y/N) \n";
  cin >> a;
  if (a == 'Y')
    {
      cout << "\n\nEnter R for Single Room or T for Double Room\n\n";
      cin >> b;
      switch (b)
        {
        case 'R':
          re_single();
          break;

        case 'T':
          re_double();
          break;
        }
    }
  else if (a == 'N')
    menu();
  else
    cout << "\n\nIllegal Choice or make sure CAPS Lock is ON";
  getch();
  menu();
}
//RESERVATION_SINGLE ROOM//

void hotel::re_single()
{
  int ltno;
  char ch;
  fstream f;

  clrscr();
  f.open("one.dat", ios::in | ios::app | ios::binary);
  f.seekg(0, ios::end);
  if (f.tellg() == 0)
    ltno = 1;
  else
    {
      f.seekg(f.tellg() - sizeof(hotel), ios::beg);
      f.read((char*)this, sizeof(hotel));
      ltno = sr + 1;
    }
  f.seekp(0, ios::end);
  sr = ltno;
  cout << "\n\t\t\tRESERVATION";
  cout << "\n\t\t\t------------\n\n" << endl;
  cout << "\n\nRoom No:" << sr << " is available For Reservation";
  cout << "\n\nEnter the following details";
  cout << "\n\n Customer's Name   :";
  gets(n);
  cout << "\n\n Address           :";
  gets(r);
  cout << "\n\n Check In Date     :";
  gets(o);
  cout << "\n\n Check Out Date    :";
  gets(p);
  f.write((char*)this, sizeof(hotel));
  f.close();
  cout << "\n\nRoom Number :" << sr << " is Reserved\n\n";
  cout << "\n\n\n\nDo You Want To Reserve Another Room? Y/N";
  cin >> ch;
  if (ch == 'Y')
    {
      reser();
    }
  if (ch == 'N')
    {
      menu();
    }
  else
    gotoxy(30, 48);
  cout << "\n\nIllegal Choice or make sure CAPS Lock is ON";
  getch();
  menu();
}
//RESERVATION_DOUBLE ROOM//

void hotel::re_double()
{
  int ltno;
  char ch;
  fstream f;

  clrscr();
  f.open("double.dat", ios::in | ios::app | ios::binary);
  f.seekg(0, ios::end);
  if (f.tellg() == 0)
    ltno = 1;
  else
    {
      f.seekg(f.tellg() - sizeof(hotel), ios::beg);
      f.read((char*)this, sizeof(hotel));
      ltno = dr + 1;
    }
  f.seekp(0, ios::end);
  dr = ltno;
  cout << "\n\t\t\tRESERVATION";
  cout << "\n\t\t\t------------\n\n" << endl;
  cout << "\n\nRoom No:" << dr << " Is Available For Reservation";
  cout << "\n\nEnter the following details";
  cout << "\n\n Customer's Name  :";
  gets(n1);
  cout << "\n\n Address          :";
  gets(r1);
  cout << "\n\n Check In Date    :";
  gets(o1);
  cout << "\n\n Check Out Date   :";
  gets(p1);
  f.write((char*)this, sizeof(hotel));
  f.close();
  cout << "\n\n\nRoom Number:" << dr << " is Reserved";
  cout << "\n\n\n\nDo You Want To Reserve Another Room? Y/N";
  cin >> ch;
  if (ch == 'Y')
    {
      reser();
    }
  if (ch == 'N')
    {
      menu();
    }
  else
    gotoxy(30, 48);
  cout << "\n\nIllegal Choice or make sure CAPS Lock is ON";
  getch();
  menu();
}
//MODIFICATION//

void hotel::modifi()
{
  char a, b;

  clrscr();
  cout << "\n\t\t\tMODIFICATION";
  cout << "\n\t\t\t------------\n\n" << endl;
  cout << "Do You Want To Modify A Room? (Y/N)\n";
  cin >> a;
  if (a == 'Y')
    {
      cout << "\n\nEnter R for Single Room or T for Double Room\n\n";
      cin >> b;
      switch (b)
        {
        case 'R':
          mo_single();
          break;

        case 'T':
          mo_double();
          break;
        }
    }
  else if (a == 'N')
    menu();
  else
    gotoxy(30, 48);
  cout << "\n\nIllegal Choice or make sure CAPS Lock is ON";
  getch();
  menu();
}
//MODIFICATION_SINGLE ROOM//

void hotel::mo_single()
{
  clrscr();
  fstream f;
  int no, found, i, j;
  char wish;
  clrscr();
  found = 0;
  cout << "\n\n\t\t\t\tMODIFICATION";
  cout << "\n  \t\t\t\t------------" << endl;
  cout << "\nENTER THE NUMBER TO MODIFY:";
  cin >> no;
  f.open("one.dat", ios::in | ios::out | ios::binary);
  while (f.read((char*)this, sizeof(hotel)))
    {
      if (no == sr)
        {
          found = 1;
          cout << "\n\nCustomers Name             :" << n;
          cout << "\n\nEnter New Customers's Name :";
          gets(n);
          cout << "\n\nAddress                    :" << r;
          cout << "\n\nEnter New Address          :";
          gets(r);
          cout << "\n\nCheck In Date              :" << o;
          cout << "\n\nEnter New Check In Date    :";
          gets(o);
          cout << "\n\nCheck Out Date             :" << p;
          cout << "\n\nEnter New Check Out Date   :";
          gets(p);
          cout << "DETAILS ARE MODIFIED" << endl;
          f.seekg(f.tellg() - sizeof(hotel), ios::beg);
          f.write((char*)this, sizeof(hotel));
        }
    }
  if (!found)
    cout << "\nRoom Is Vacant";
  f.close();
  getch();
  menu();
}
//MODIFICATION_DOUBLE ROOM//

void hotel::mo_double()
{
  fstream f1;
  int num, found1;

  clrscr();
  found1 = 0;
  cout << "\n\n\t\t\t\tMODIFICATION";
  cout << "\n  \t\t\t\t------------" << endl;
  cout << "\nENTER THE NUMBER TO MODIFY:";
  cin >> num;
  f1.open("double.dat", ios::in | ios::out | ios::binary);
  while (f1.read((char*)this, sizeof(hotel)))
    {
      if (num == dr)
        {
          found1 = 1;
          cout << "\n\nCustomers Name            :" << n1;
          cout << "\n\nEnter New Customer's Name :";
          gets(n1);
          cout << "\n\nAddress                   :" << r1;
          cout << "\n\nEnter New Address         :";
          gets(r1);
          cout << "\n\nCheck In Date             :" << o1;
          cout << "\n\nEnter New Check In Date   :";
          gets(o1);
          cout << "\n\n Check Out Date           :" << p1;
          cout << "\n\nEnter New Check Out Date  :";
          gets(p1);
          getch();
          cout << "\t\nDETAILS ARE MODIFIED" << endl;
          f1.seekg(f1.tellg() - sizeof(hotel), ios::beg);
          f1.write((char*)this, sizeof(hotel));
        }
    }
  if (!found1)
    cout << "\nRoom Is Vacant";
  f1.close();
  getch();
  menu();
  getch();
}
//STATUS//

void hotel::status()
{
  char a, b;

  clrscr();
  cout << "\n\t\t\tSTATUS\n";
  cout << "  \t\t\t------\n\n";
  cout << "Do You Want To View The Room Details? (Y/N)\n";
  cin >> a;
  if (a == 'Y')
    {
      cout << "\n\nEnter R for Single Room or T for Double Room\n\n";
      cin >> b;
      switch (b)
        {
        case 'R':
          st_single();
          break;

        case 'T':
          st_double();
          break;
        }
    }
  else if (a == 'N')
    menu();
  else
    {
      gotoxy(30, 48);
      cout << "\n\nIllegal Choice or make sure CAPS Lock is ON";
    }
  getch();
  menu();
}
//STATUS_SINGLE ROOM//

void hotel::st_single()
{
  fstream f1;
  int na, found5, q;

  clrscr();
  found5 = 0;
  clrscr();
  f1.open("one.dat", ios::in | ios::binary);
  f1.seekg(0, ios::beg);
  cout << "\n\t\t\tSTATUS\n";
  cout << "  \t\t\t------" << endl;
  cout << "\n\n\n\t\tRESERVATION DETAILS\n\n";
  while (f1.read((char*)this, sizeof(hotel)))
    {
      found5 = 1;
      cout << "\n \tROOM NUMBER\t" << sr; cout << "\tCUSTOMER'S NAME\t" << n << endl;
    }
  if (!found5)
    cout << "ROOM'S ARE NOT RESERVED ";
  cout << "\n\n\n  CUSTOMERS STATUS \n\n" << endl;
  cout << " 1. Details" << endl;
  cout << " 2. Menu" << endl;
  cout << "Enter ur Choice" << endl;
  cin >> q;
  if (q == 1)
    {
      getch();
      f1.close();
      clrscr();
      found5 = 0;
      cout << "\nENTER THE NUMBER TO VIEW:";
      cin >> na;
      f1.open("one.dat", ios::in | ios::binary);
      f1.seekg(0, ios::beg);
      while (f1.read((char*)this, sizeof(hotel)))
        {
          if (na == sr)
            {
              found5 = 1;
              cout << "\n\n\nCustomer's Name:" << n;
              cout << "\n\n\nAddress        :" << r;
              cout << "\n\n\nCheck In Date  :" << o;
              cout << "\n\n\nCheck Out Date :" << p;
            }
        }
      if (!found5)
        cout << "\nROOM IS VACANT";
      f1.close();
      getch();
    }
  if (q == 2)
    ;
  {
    menu();
  }
}
//STATUS_DOUBLE ROOM//

void hotel::st_double()
{
  fstream f1;
  int na, found5, q;

  clrscr();
  found5 = 0;
  clrscr();
  f1.open("double.dat", ios::in | ios::binary);
  f1.seekg(0, ios::beg);
  cout << "\n\t\t\t STATUS" << endl;
  cout << "  \t\t\t ------" << endl;
  cout << "\n\n\n\t\tRESERVATION DETAILS\n\n";
  while (f1.read((char*)this, sizeof(hotel)))
    {
      found5 = 1;
      cout << "\n \tROOM NUMBER\t" << dr; cout << "\tCUSTOMER'S NAME\t" << n1 << endl;
    }
  if (!found5)
    cout << "ROOM'S ARE NOT RESERVED ";
  cout << "\n\n\n  CUSTOMERS STATUS \n\n" << endl;
  cout << " 1. Details" << endl;
  cout << " 2. Menu" << endl;
  cout << "Enter ur Choice" << endl;
  cin >> q;
  if (q == 1)
    {
      getch();
      f1.close();
      clrscr();
      found5 = 0;
      cout << "\nENTER THE NUMBER TO VIEW:\n";
      cin >> na;
      f1.open("double.dat", ios::in | ios::binary);
      f1.seekg(0, ios::beg);
      while (f1.read((char*)this, sizeof(hotel)))
        {
          if (na == dr)
            {
              found5 = 1;
              cout << "\n\n\nCustomer's Name:" << n1;
              cout << "\n\n\nAddress        :" << r1;
              cout << "\n\n\nCheck In Date  :" << o1;
              cout << "\n\n\nCheck Out Date :" << p1;
            }
        }
      if (!found5)
        cout << "\nROOM IS VACANT";
      f1.close();
      getch();
    }
  if (q == 2)
    ;
  {
    menu();
  }
}
//DELETION//

void hotel::deletion()
{
  char a, b;
  int cost;

  clrscr();
  cout << "\n\t\t\tVACATING A ROOM" << endl;
  cout << "  \t\t\t---------------" << endl;
  cout << "Do You Want To Vacate A Room? (Y/N)\n";
  cin >> a;
  if (a == 'Y')
    {
      cout << "\n\nEnter R for Single Room or T for Double Room\n\n";
      cin >> b;
      switch (b)
        {
        case 'R':
          de_single();
          break;

        case 'T':
          de_double();
          break;
        }
    }
  else if (a == 'N')
    menu();
  else
    cout << "\n\nIllegal Choice or make sure CAPS Lock is ON";
  getch();
  menu();
}
//DELETION_SINGLE ROOM//

void hotel::de_single()
{
  fstream f1, f2;
  int no, found;

  clrscr();
  found = 0;
  f1.open("one.dat", ios::in | ios::binary);
  f2.open("tp.dat", ios::out);
  cout << "\n\n\t\t\tVACTING A ROOM";
  cout << "\n  \t\t\t--------------\n\n";
  cout << "\nENTER THE SINGLE ROOM NUMBER TO BE VACATED:";
  cin >> no;
  f1.read((char*)this, sizeof(hotel));
  while (!f1.eof())
    {
      if (sr == no)
        found = 1;
      else
        f2.write((char*)this, sizeof(hotel));
      f1.read((char*)this, sizeof(hotel));
    }
  if (!found)
    cout << "\nROOM IS VACANT  ";
  f1.close();
  f2.close();
  remove("one.dat");
  rename("tp.dat", "one.dat");
  if (found == 1)
    cout << "\n ROOM NUMBER " << no << " IS VACATED \n";
}
//DELETION_DOUBLE ROOM//

void hotel::de_double()
{
  fstream f1, f2;
  int no, found;

  clrscr();
  found = 0;
  f1.open("double.dat", ios::in | ios::binary);
  f2.open("tp.dat", ios::out);
  cout << "\n\n\t\t\tVACATING A ROOM";
  cout << "\n  \t\t\t---------------\n\n";
  cout << "\nENTER THE DOUBLE ROOM NUMBER TO BE VACATED:";
  cin >> no;
  f1.read((char*)this, sizeof(hotel));
  while (!f1.eof())
    {
      if (dr == no)
        found = 1;
      else
        f2.write((char*)this, sizeof(hotel));
      f1.read((char*)this, sizeof(hotel));
    }
  if (!found)
    cout << "\nROOM IS VACANT  ";
  f1.close();
  f2.close();
  remove("double.dat");
  rename("tp.dat", "double.dat");
  if (found == 1)
    cout << "\nROOM NUMBER " << no << "IS VACATED \n";
}

//MAIN FUNCTION//

void main()
{
  clrscr();
  hotel a;
  a.wel();
  a.menu();
  getch();
}