public class Dog implements Animals
{
public static void eat()
{
  System.out.println("Chomp!");
}
public static void sound()
{
  System.out.println("Bark");
}
public static void main(String[] args)
{
  Animals a = new Dog();

  Dog.eat();
  Dog.sound();
}
}