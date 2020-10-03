#include <simplecpp>
int main()
{
  char ch;

  cout << "enter an alphabet";
  cin >> ch;                                            // enter alpahbet
  if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I'
      || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
      cout << "This is a vowel";
    }
  else
    {
      cout << "This is not a vowel";
    }
}
