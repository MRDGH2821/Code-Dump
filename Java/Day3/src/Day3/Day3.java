package Day3;

public class Day3
{
private int ad = 3;

public int getAd()
{
  return this.ad;
}

public void animals()
{
  System.out.println("Just like animals");
}

public int setAd(int ad)
{
  return this.ad = ad;
}
}

class Child extends Day3
{
void tsuper()
{
  super.animals();
}
}

class Animal()
{
  public void makeSound()
  {
    System.out.println("Grr......");
  }
}

class dog()
{
  public void makeSound()
  {
    System.out.println("Woof");
  }
}

class cat()
{
  public void makeSound()
  {
    System.out.println("Meow");
  }
}
}
