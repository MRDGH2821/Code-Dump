#include <simplecpp>
#include <stdio.h>

int main()
{
  char s[1];

  cout << "Enter The String" << endl;
  gets(s);

  if (s[0] == '    ')
    cout << "tab Space";
  return 0;
}
