#include <stdio.h>
#include <simplecpp>
int main()
{
  int const l = 2;

  printf("%d\n", l);
  char s[2];
  printf("Input a character array\n");
//scanf("%s",s);
  gets(s);
  puts(s);

  char f[90];
  printf("Input a character array\n");
  cin >> f;
  cout << f;
}
