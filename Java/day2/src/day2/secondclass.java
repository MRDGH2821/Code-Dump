package day2;
import java.util.Scanner;
public class secondclass {
public static void main(String[] args)
{
  Scanner input = new Scanner(System.in);

  System.out.println("Enter a string");
  String lines = input.nextLine();
  System.out.println("String is " + lines);

  System.out.println("Enter Integer");
  int value = input.nextInt();
  System.out.println("Integer data input is" + value);

  System.out.println("Enter Double");
  double data = input.nextDouble();
  System.out.println("Double Data input is " + data);
}
}