package oop1;
import java.util.Scanner;
import java.util.ArrayList;
public class oop1
{
public static void main(String[] args)
{
  Scanner input = new Scanner(System.in);
  MyClass var = new MyClass();

  var.simple_print("this is main method");
  var.add(1, 2);
}
}

class MyClass
{
String name = "Hi";
void simple_print(String name)
{
  System.out.println(this.name);
}
int add(int a, int b)
{
  System.out.println(a + b);
  return a + b;
}
}