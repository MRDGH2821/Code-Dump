
public class Parent {
public static void main(String[] args)
{
  System.out.println("Hi!");
}
}

abstract class Animal
{
int n = 0;
abstract void makeSound();
}

class cat extends Animal
{
void makeSound()
{
  System.out.println("Purrrrrr");
}
}

