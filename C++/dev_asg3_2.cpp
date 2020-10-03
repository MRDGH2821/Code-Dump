#include <simplecpp>
main_program
{
  char alphabet;

  repeat(100)
  {
    cout << "\n Enter alphabet to check if its a vowel or not : ";
    cin >> alphabet;

    switch (alphabet)
      {
      case 'a':
      case 'A':
      case 'e':
      case 'E':
      case 'i':
      case 'I':
      case 'o':
      case 'O':
      case 'u':
      case 'U': cout << "\n Entered alphabet is a vowel ";
        break;

      default: cout << "\n Entered alphabet is not a vowel ";
      }
  }
}
