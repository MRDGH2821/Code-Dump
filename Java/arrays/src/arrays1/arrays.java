package arrays1;
import java.util.Scanner;
import java.util.ArrayList;
public class arrays
{
public static void main(String[] args)
{
  Scanner input = new Scanner(System.in);
  ArrayList colours = new ArrayList();

  colours.add("Red");
  colours.add("Blue");
  colours.add("Green");
  colours.add("Orange");
  colours.remove("Red");
  Object a = colours.get(2);
  System.out.println(a);
  System.out.println(colours);
  boolean n = colours.contains("green");
  System.out.println(n);
}
}