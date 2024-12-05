#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
class employee  //it should not matter if the class name does not have first character capital
{
private:
    char name;
    int rid;
public:
    void input();
    void display();
}; //this semicolon is very important. or else it will give errors
void employee::input()
{
    cout<<"Enter employee name: ";
    cin>>name;
    cout<<"Enter Registered id (integer): ";
    cin>>rid;
}
void employee::display()
{
    cout<<"Name: "<<name<<endl;
    cout<<"Registered id: "<<rid<<endl;

}
int main()
{
    employee E; // the object can have capital letter
    E.input();
    E.display();
    getch();
    return 0;
}
