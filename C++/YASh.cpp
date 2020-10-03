/*             **************************************
 # Computer Science Project Work #
 ***************************************
       A software program for  the use of Canteen Department

   /// introduction ///
   /////////////////////////////////////
   // name: - YASH AGRAWAL //
   /////////////////////////////////////
   // class : - XII "d" //
   /////////////////////////////////////
 ******************
 # CANTEEN MANAGEMENT#
 ******************       */
/*    ### HEADER FILES ###  */
#include <iostream.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <process.h>
#include <iomanip.h>
#include <dos.h>
int main()
{
  clrscr( );
  unsigned int sum, add, d, i, j, e, f, g, h, k, l, w, x, y, z;
  unsigned int bir = 10, per = 36, der = 110, mur = 8, par = 110, cor = 90, twr = 1199, lur = 17, tir = 107, rer = 1499;
  int qubis = 1000, abis = 0, qupep = 1000, apep = 0, quden = 110, aden = 0,
      qumun = 1000, amun = 0, quperk = 500, aperk = 0, qucoc = 400, acoc = 0,
      qutit = 100, atit = 0, qulux = 1000, alux = 0, qutid = 1000, atid = 0, quree = 300,
      aree = 0;
  unsigned int m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, s = 0, t = 0, u = 0, v = 0;
  char name[50], rank[10], pu, c[20], a[15], b[15], ok;
  clrscr( );
  printf("\n++++++++++++++++++++++++++++*++++++++++++++++++++++++++++");
  printf("\n+                          ***                          +");
  printf("\n+                         *****                         +");
  printf("\n+                        *******                        +");
  printf("\n+                       *********                       +");
  printf("\n+                      ***********                      +");
  printf("\n+                     *************                     +");
  printf("\n+                    ***************                    +");
  printf("\n+                   *****************                   +");
  printf("\n+                  *******************                  +");
  printf("\n+                 *******Welcome*******                 +");
  printf("\n+                  *******************                  +");
  printf("\n+                   *****************                   +");
  printf("\n+                    ***************                    +");
  printf("\n+                     *************                     +");
  printf("\n+                      ***********                      +");
  printf("\n+                       *********                       +");
  printf("\n+                        *******                        +");
  printf("\n+                         *****                         +");
  printf("\n+                          ***         By:- Yash Agrawal+");
  printf("\n++++++++++++++++++++++++++++*++++++++++++++++++++++++++++");
  getch( );
  clrscr( );
 main:;
  cout << "\n\n\n\t\t\t CANTEEN MANAGEMENT ";
  cout << "\n\n\n CONSUMER INFORMATION ";
  cout << "\n\n\n\n NAME:";
  gets(name);
  cout << "\n RANK:";
  gets(rank);
  cout << "\n SERVICE NO.:";
  cin >> a;
  cout << "\n SMART CARD NO.:";
  cin >> b;
  cout << "\n PHONE NO.:";
  cin >> c;
  cout << "\n ENTER BILL NO.:";
  cin >> i;
 again:;
  clrscr();
  cout << "\n\n\n 1.MENU & PURCHASE";
  cout << "\n\n\n 2.DETAILS";
  cout << "\n\n\n 3.NEW CUSTOMER";
  cout << "\n\n\n 4.QUANTITY AVAILABLE";
  cout << "\n\n\n 5.EXIT";
  cout << "\n\n\n  ENTER YOUR CHOICE:";
  cin >> d;
  clrscr();
  switch (d)
    {
    case 1:
      cout << "\nITEMS\t\t\t\t\t\t\t RATE(RS)";
      cout << "\n\n\nBISCUTE\t\t\t\t\t\t\t\t10 ";
      cout << "\n\nPEPSODENT\t\t\t\t\t\t\t36";
      cout << "\n\nDENIM POWDER\t\t\t\t\t\t\t110 ";
      cout << "\n\nMUNCH\t\t\t\t\t\t\t\t8 ";
      cout << "\n\nPARK AVENUE PERFUME\t\t\t\t\t\t110 ";
      cout << "\n\nCOCONUT HAIR OIL\t\t\t\t\t\t90 ";
      cout << "\n\nTITAN WATCH\t\t\t\t\t\t\t1199 ";
      cout << "\n\nLUX SOAP\t\t\t\t\t\t\t17 ";
      cout << "\n\nTIDE\t\t\t\t\t\t\t\t107 ";
      cout << "\n\nREEBOK SHOES\t\t\t\t\t\t\t1499 ";
 start:
      cout << "\n\n\nDO YOU WANT TO PURCHASE(Y/N):\n";
      cin >> pu;
      if (pu == 'Y' || pu == 'y')
        {
          switch (pu)
          case 1:
            clrscr();
          cout << "\n\n\n\t\t\t\tPURCHASE LIST";
 bis:;
          cout << "\nBISCUIT(MAX 30): ";
          cin >> m;
          if (m > 30)
            {
              cout << "Enter Quantity Smaller than 30";
              getch();
              goto bis;
            }
          else
            abis = qubis - m;
 pep:;
          cout << "\nPEPSODENT(MAX 2): ";
          cin >> n;
          if (n > 2)
            {
              cout << "Enter Quantity Smaller than 2";
              getch();
              goto pep;
            }
          else
            apep = qupep - n;
 den:;
          cout << "\nDENIM POWDER(MAX 2): ";
          cin >> o;
          if (o > 2)
            {
              cout << "Enter Quantity Smaller then 2";
              getch();
              goto den;
            }
          else
            aden = quden - o;
 mun:;
          cout << "\nMUNCH(MAX 50): ";
          cin >> p;
          if (p > 50)
            {
              cout << "Enter Quantity Smaller then 50";
              getch();
              goto mun;
            }
          else
            amun = qumun - p;
 park:;
          cout << "\nPARK AVENUE PERFUME(MAX 2): ";
          cin >> q;
          if (q > 2)
            {
              cout << "Enter Quantity Smaller then 2";
              getch();
              goto park;
            }
          else
            aperk = quperk - q;
 coco:;
          cout << "\nCOCONUT HAIR OIL(MAX 2): ";
          cin >> r;
          if (r > 2)
            {
              cout << "Enter Quantity Smaller then 2";
              getch();
              goto coco;
            }
          else
            acoc = qucoc - r;
 titan:;
          cout << "\nTITAN WATCH(MAX 2): ";
          cin >> s;
          if (s > 2)
            {
              cout << "Enter Quantity Smaller then 2";
              getch();
              goto titan;
            }
          else
            atit = qutit - s;
 lux:;
          cout << "\nLUX SOAP(MAX 10): ";
          cin >> t;
          if (t > 10)
            {
              cout << "Enter Quantity Smaller then 10";
              getch();
              goto lux;
            }
          else
            alux = qulux - t;
 tid:;
          cout << "\nTIDE(MAX 2): ";
          cin >> u;
          if (u > 2)
            {
              cout << "Enter Quantity Smaller then 2";
              getch();
              goto tid;
            }
          else
            atid = qutid - u;
 ree:;
          cout << "\nREEBOK SHOES(MAX 4): ";
          cin >> v;
          if (v > 4)
            {
              cout << "Enter Quantity Smaller then 4";
              getch();
              goto ree;
            }
          else
            aree = quree - v;
          cout << "\n";
          clrscr();
          cout << "\n\n\n\n\n\n\t\t\t\t YASH CANTEEN\n";
          cout << "\n\n\t\t\t\t CASH MEMO\n";
          cout << "\n\nBILL NO. :-" << i;
          cout << "\n\nNAME:";
          cout << name;
          cout << "\n\n rank:";
          cout << "\n\n service no. :- " << a;
          cout << "\n\n smart card no.:" << b;
          cout << "\n\n phone  no.:" << c;
          cout << "\n\n\n\n\n";
          cout << "================================================";
          cout << "\n ITEMS" << setw(40) << "quantity" << setw(35) << "price(rs.)";
          cout << "=================================================";
          if (m > 0)
            cout << "\n\n BISCUITE" << setw(38) << m << setw(28) << "Rs." << m * bir;
          if (n > 0)
            cout << "\n\n Pepsodent" << setw(36) << n << setw(28) << "Rs." << n * bir;
          if (o > 0)
            cout << "\n\n Denim Powder" << setw(33) << o << setw(28) << "Rs." << o * bir;
          if (p > 0)
            cout << "\n\n Munch" << setw(40) << p << setw(28) << "Rs." << p * bir;
          if (q > 0)
            cout << "\n\n Park Avenue Perfume" << setw(26) << q << setw(28) << "Rs." << q * bir;
          if (r > 0)
            cout << "\n\n Coconut Hair Oil" << setw(29) << r << setw(28) << "Rs." << r * bir;
          if (s > 0)
            cout << "\n\n Titan Watch " << setw(34) << s << setw(28) << "Rs." << s * bir;
          if (t > 0)
            cout << "\n\n Lux Soap" << setw(37) << t << setw(28) << "Rs." << t * bir;
          if (u > 0)
            cout << "\n\n Tide" << setw(41) << u << setw(28) << "Rs." << u * bir;
          if (v > 0)
            cout << "\n\n Reebok Shoes" << setw(33) << v << setw(28) << "Rs." << v * bir;
          e = m * bir;
          f = n * per;
          g = o * der;
          h = p * mur;
          k = q * par;
          l = r * cor;
          w = s * twr;
          x = t * lur;
          y = u * tir;
          z = v * rer;
          sum = e + f + g + h + k + l + w + x + y + z;
          add = m + n + o + p + q + r + s + t + u + v;
          cout << "\n===============================================";
          cout << "\nTOTAL:" << setw(40) << add << setw(27) << "Rs." << sum;
          cout << "\n\n   thank you  for buying.      \t\t\t=" " visit   us    again\n";
          getch();
          clrscr();
          goto again;
        }
      else
        {
          goto again;
        }

    case 2:
      cout << "\n\n\n\n\t\t\t\t  CANTEEN INFORMATION  ";
      cout << "\n\n # TIMING:\n\n 11 AM TO 2 PM \n 03 PM TO 05 PM";
      cout << "\n\n # CANTEEN WILL CLOSED ON TUESDAY ";
      cout << "\n\n # GOODS ONCE SOLD WILL NOT BE EXCHANGED /REPLACED ";
      cout << "\n\n # TAKE YOUR SMART CARD WITH YOU";
      cout << "\n\n # COLLECT YOUR SMART CARD & BILL AFTER PAYMENT";
      cout << "\n\n # DO NOT BREAK ANY CANTEEN ITEMS";
      getch();
      clrscr();
      goto again;

    case 3:
      goto main;

    case 4:
      if (m > 0 || n > 0 || o > 0 || p > 0 || q > 0 || r > 0 || s > 0 || t > 0 || u > 0 || v > 0)
        {
          cout << "\n\t\t Items Available in Canteen\n\n";
          cout << "#################################################";
          cout << "\n Items " << setw(40) << "quantity";
          cout << "#################################################";
          cout << "\n\n\n BISCUIT" << setw(38) << abis;
          cout << "\n\n\n PEPSODENT" << setw(36) << apep;
          cout << "\n\n\n DENIM POWDER" << setw(33) << aden;
          cout << "\n\n\n MUNCH" << setw(40) << amun;
          cout << "\n\n\n Park avenue perfume" << setw(26) << aperk;
          cout << "\n\n\n Coconut hair oil" << setw(29) << acoc;
          cout << "\n\n\n Titan watch" << setw(34) << atit;
          cout << "\n\n\n Lux soap" << setw(37) << alux;
          cout << "\n\n\n Tide " << setw(41) << atid;
          cout << "\n\n\n Reebok shoes" << setw(33) << aree;
          cout << "\n***********************************************";
          getch();
          goto again;
        }
      else
        {
          cout << "\n\t\t\t Items Available in Canteen.\n\n\n";
          cout << "=================================================";
          cout << "\nITEMS" << setw(40) << "quantity";
          cout << "\n==============================================";
          cout << "\n\n\n BISCUIT" << setw(38) << qubis;
          cout << "\n\n\n PEPSODENT" << setw(36) << qupep;
          cout << "\n\n\n DENIM POWDER" << setw(33) << quden;
          cout << "\n\n\n MUNCH" << setw(40) << qumun;
          cout << "\n\n\N Park avenue perfume" << setw(26) << quperk;
          cout << "\n\n\N Coconut hair oil" << setw(29) << qucoc;
          cout << "\n\n\n Titan watch" << setw(34) << qutit;
          cout << "\n\n\n Lux soap" << setw(37) << qulux;
          cout << "\n\n\n Tide " << setw(41) << qutid;
          cout << "\n\n\n Reebok shoes" << setw(33) << quree;
          cout << "\n\n*********************************************";
          getch();
          goto again;
        }

    case 5:
      cout << "\n\n\n\n\n\n\n\n\n\t\t\t\t THANKS";
      sleep(1);
      clrscr();
      cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANKS";
      sleep(1);
      clrscr();
      cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANKS";
      sleep(1);
      clrscr();
      cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nTHANKS";
      sleep(1);
      clrscr();
      cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANKS";
      sleep(1);
      clrscr();
      cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t THANKS";
      sleep(1);
      clrscr();
      cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\\t\t\t\t THANKS\n\n\n\t\t\t\tPress any key to Exit.......";
      getch();
      exit(0);

    default: cout << "Your choice is wrong";
      getch();
      goto again;
    }
//getch();
//return 0;
}