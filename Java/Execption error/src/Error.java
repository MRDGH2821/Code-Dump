
public class Error {
public static void main(String[] args)
{
  // TODO Auto-generated method stub

  try {
      int a = 2, b = 0;
      int c = a / b;
      System.out.println(c);
    }

  catch (Exception e)
    {
      System.out.println("You cannot divide by zero!");
    }
}
}
