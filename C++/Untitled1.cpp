#include <simplecpp>

main_program
{
  char s[10];
  int i;
  char *ch;

  cout << "Enter The String" << endl;
  for (i = 0; i < 10; i++)
    {
      cin >> s[i];
    }

  ch = &s[0];
  for (i = 0; i < 10; i++)
    {
      if ((*ch >= 'a') && (*ch <= 'z'))
        ch = ch + 32;
      else if ((*ch >= 'A') && (*ch <= 'Z'))
        ch = ch - 32;

      ch++;
    }

  for (i = 0; i < 10; i++)
    cout << s[i];
}
