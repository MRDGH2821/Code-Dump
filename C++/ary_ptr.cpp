//Program using Arrays and Pointers
#include <conio.h>
#include <iostream.h>
void main()
{
  clrscr();
/*implementing arrays - array is collection of values of same type i.e. int a[5] will hold have values of int type. Also, array indexing start from O i.e. a[5] will start from a[0], a[1], a[2], a[3], a[4] thus having five values with that array*/

  int a[4] = { 10, 20, 30, 40 }; //Simple array with specified size as 4
  cout << "\n\n\t------------------lmplementation of Arrays ------------------\n\n";
  cout << "\n First value of array;" << a[0];

  cout << "\n Second value of array;" << a[1];

  cout << "\n Third value of array;" << a[2];

  cout << "\n Fourth value of array;" << a[3];

  cout << "\n Array of character :\n";

  char ch[4] == { 'A', 'B', 'C' }; // similarly we can have character array
  for (int i = 0; i < 3; i++)

    {
      cout < "\n" << i + 1 << "character" << ch[i];
    }

/*implementing pointers - Pointers hold the address of any variable which is assigned to it. lt is used when we want to get address of any variable */
  cout << "\n\n\t------------------Implementation of Pointers------------------\n\n";
  int n = 10;
  int *ptr = &n; //assigning 'n' to pointer variable ptr. Syntax for pointer is ” datatype

  *ptr_name = &variable_name;
  cout << "Address of 'n';" << ptr; //if we use only 'ptr' then it gives address of 'n' where the value is stored

  cout << "\n Value of 'n':" << *ptr; //lf we use '*ptr' then it gives actual value of 'n'

  getch();
}


