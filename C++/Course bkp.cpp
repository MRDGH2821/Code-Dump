//**************************************************
//                   HEADER FILES USED IN PROJECT
//**************************************************
#include <stdio.h>
#include <conio.h>
#include <simplecpp>
//**************************************************
//                   STRUCTURE USED IN PROJECT
//**************************************************
struct student {
  int rollno;
  char name[30];
  int p_marks, c_marks, m_marks, e_marks, cs_marks;
  float per;
  char grade;
} clc;
void calculate();               //function to calculate grade
void getdata();        //function to accept data from user
void showdata();                //function to show data on screen
void show_tabular();
int retrollno();

void calculate()
{
  clc.per = (clc.p_marks + clc.c_marks + clc.m_marks + clc.e_marks + clc.cs_marks) / 5.0;
  if (clc.per >= 80)
    clc.grade = 'A';
  else if (clc.per >= 60)
    clc.grade = 'B';
  else if (clc.per >= 40)
    clc.grade = 'C';
  else if (clc.per >= 33)
    clc.grade = 'D';
  else
    clc.grade = 'F';
}
void getdata()
{
  cout << "\nEnter The roll number of student ";
  cin >> clc.rollno;
  cout << "\n\nEnter The Name of student ";
  scanf("%s", clc.name);
  cout << "\nEnter The marks in physics out of 100 : ";
  cin >> clc.p_marks;
  cout << "\nEnter The marks in chemistry out of 100 : ";
  cin >> clc.c_marks;
  cout << "\nEnter The marks in maths out of 100 : ";
  cin >> clc.m_marks;
  cout << "\nEnter The marks in english out of 100 : ";
  cin >> clc.e_marks;
  cout << "\nEnter The marks in computer science out of 100 : ";
  cin >> clc.cs_marks;
  calculate();
}
void showdata()
{
  cout << "\nRoll number of student : " << clc.rollno;
  cout << "\nName of student : " << clc.name;
  cout << "\nMarks in Physics : " << clc.p_marks;
  cout << "\nMarks in Chemistry : " << clc.c_marks;
  cout << "\nMarks in Maths : " << clc.m_marks;
  cout << "\nMarks in English : " << clc.e_marks;
  cout << "\nMarks in Computer Science :" << clc.cs_marks;
  cout << "\nPercentage of student is  :" << clc.per;
  cout << "\nGrade of student is :" << clc.grade;
}
void show_tabular()
{
  cout << clc.rollno << "    " << clc.name << "    " << clc.p_marks << "  " << clc.c_marks << "  " << clc.m_marks << "  " << clc.e_marks << "  " << clc.cs_marks << "  " << clc.per << "  " << clc.grade << endl;
}
int retrollno()
{
  return clc.rollno;
}
//**************************************************
//      function declaration
//**************************************************
void write_student();   //write the record in binary file
void display_all();     //read all records from binary file
void display_sp(int);   /*accept rollno and read record from binary file*/
void modify_student(int);  /*accept rollno and update record of binary file*/
void delete_student(int);       /*accept rollno and delete selected records from binary file*/
void class_result();    /*display all records in tabular format from binary file*/
void result();          //display result menu
void intro();           //display welcome screen
void entry_menu();      //display entry menu on screen
//**************************************************
//      THE MAIN FUNCTION OF PROGRAM
//**************************************************
int main()
{
  char ch;

  cout.setf(ios::fixed | ios::showpoint);

  intro();
  do
    {
      cout << "\n\n\n\tMAIN MENU";
      cout << "\n\n\t01. RESULT MENU";
      cout << "\n\n\t02. ENTRY/EDIT MENU";
      cout << "\n\n\t03. EXIT";
      cout << "\n\n\tPlease Select Your Option (1-3) ";
      cin >> ch;

      switch (ch)
        {
        case '1': result();
          break;

        case '2': entry_menu();
          break;

        case '3':
          break;

        default: cout << "\a";
        }
    } while (ch != '3');
  return 0;
}
//**************************************************
//      function to write in file
//**************************************************
void write_student()
{
  FILE *outFile;

  outFile = fopen("student.dat", "ab+");
  getdata();
  fwrite(&clc, sizeof(student), 1, outFile);
  fclose(outFile);
  cout << "\n\nStudent record Has Been Created ";
}
//**************************************************
//      function to read all records from file
//**************************************************
void display_all()
{
  FILE *inFile;

  inFile = fopen("student.dat", "rb");
  if (!inFile)
    {
      cout << "File could not be open !! Press any Key...";
      _getch();
      return;
    }
  cout << "\n\n\n\t\tDISPLAY ALL RECORD !!!\n\n";
  while (fread(&clc, sizeof(student), 1, inFile))
    {
      showdata();
      cout << "\n\n====================================\n";
    }
  fclose(inFile);
  _getch();
}
//**************************************************
//      function to read specific record from file
//**************************************************
void display_sp(int n)
{
  FILE *inFile;

  inFile = fopen("student.dat", "rb");
  if (!inFile)
    {
      cout << "File could not be open !! Press any Key...";
      _getch();
      return;
    }
  int flag = 0;
  while (fread(&clc, sizeof(student), 1, inFile))
    {
      if (retrollno() == n)
        {
          showdata();
          flag = 1;
        }
    }
  fclose(inFile);
  if (flag == 0)
    cout << "\n\nRecord does not exist";
  _getch();
}
//**************************************************
//      function to modify record of file
//**************************************************
void modify_student(int n)
{
  FILE *inFile;

  inFile = fopen("student.dat", "rb");
  if (!inFile)
    {
      cout << "File could not be open !! Press any Key...";
      _getch();
      return;
    }
  FILE *outFile;
  outFile = fopen("Temp.dat", "wb");
  fseek(inFile, 0, SEEK_SET);
  while (fread(&clc, sizeof(student), 1, inFile))
    {
      if (retrollno() != n)
        {
          fwrite(&clc, sizeof(student), 1, outFile);
        }
    }
  fclose(outFile);
  fclose(inFile);
  remove("student.dat");
  rename("Temp.dat", "student.dat");
  write_student();
}
//**************************************************
//      function to delete record of file
//**************************************************
void delete_student(int n)
{
  FILE *inFile;

  inFile = fopen("student.dat", "rb");
  if (!inFile)
    {
      cout << "File could not be open !! Press any Key...";
      _getch();
      return;
    }
  FILE *outFile;
  outFile = fopen("Temp.dat", "wb");
  fseek(inFile, 0, SEEK_SET);
  while (fread(&clc, sizeof(student), 1, inFile))
    {
      if (retrollno() != n)
        {
          fwrite(&clc, sizeof(student), 1, outFile);
        }
    }
  fclose(outFile);
  fclose(inFile);
  remove("student.dat");
  rename("Temp.dat", "student.dat");
  cout << "\n\n\tRecord Deleted ..";
  _getch();
}
//**************************************************
//      function to display all students grade report
//**************************************************
void class_result()
{
  FILE *inFile;

  inFile = fopen("student.dat", "rb");
  if (!inFile)
    {
      cout << "File could not be open !! Press any Key...";
      _getch();
      return;
    }
  cout << "\n\n\t\tALL STUDENTS RESULT \n\n";
  cout << "==========================================================\n";
  cout << "R.No       Name        P   C   M   E   CS   %age   Grade" << endl;
  cout << "==========================================================\n";
  while (fread(&clc, sizeof(student), 1, inFile))
    {
      show_tabular();
    }
  _getch();
  fclose(inFile);
}
//**************************************************
//      function to display result menu
//**************************************************
void result()
{
  char ch;
  int rno;

  cout << "\n\n\n\tRESULT MENU";
  cout << "\n\n\n\t1. Class Result";
  cout << "\n\n\t2. Student Report Card";
  cout << "\n\n\t3. Back to Main Menu";
  cout << "\n\n\n\tEnter Choice (1/2/3)? ";
  cin >> ch;

  switch (ch)
    {
    case '1': class_result(); break;

    case '2': cout << "\n\n\tEnter Roll Number Of Student : ";
      cin >> rno;
      display_sp(rno); break;

    case '3': break;

    default: cout << "\a";
    }
}
//**************************************************
//      INTRODUCTION FUNCTION
//**************************************************
void intro()
{
  cout << "\n\n\n\t\t  STUDENT";
  cout << "\n\n\t\tREPORT CARD";
  cout << "\n\n\t\t  PROJECT";
  cout << "\n\n\n\tMADE BY : Mihir Rabade, Hushar Singh & Samruddha Kumbhar";
  _getch();
}
//**************************************************
//      ENTRY / EDIT MENU FUNCTION
//**************************************************
void entry_menu()
{
  char ch;
  int num;

  cout << "\n\n\n\tENTRY MENU";
  cout << "\n\n\t1.CREATE STUDENT RECORD";
  cout << "\n\n\t2.DISPLAY ALL STUDENTS RECORDS";
  cout << "\n\n\t3.SEARCH STUDENT RECORD ";
  cout << "\n\n\t4.MODIFY STUDENT RECORD";
  cout << "\n\n\t5.DELETE STUDENT RECORD";
  cout << "\n\n\t6.BACK TO MAIN MENU";
  cout << "\n\n\tPlease Enter Your Choice (1-6) ";
  cin >> ch;

  switch (ch)
    {
    case '1':       write_student(); break;

    case '2':       display_all(); break;

    case '3':       cout << "\n\n\tPlease Enter The roll number "; cin >> num;
      display_sp(num); break;

    case '4':       cout << "\n\n\tPlease Enter The roll number "; cin >> num;
      modify_student(num); break;

    case '5':       cout << "\n\n\tPlease Enter The roll number "; cin >> num;
      delete_student(num); break;

    case '6':       break;

    default:        cout << "\a"; entry_menu();
    }
}
