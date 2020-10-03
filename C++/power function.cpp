//#include<simplecpp>
#include <stdio.h>

int power(int base, int pow)
{
  int ans = 1;

  for (int i = 1; i <= pow; i++)
    {
      ans = ans * base;
    }
  ;
  return ans;
}

int main()
{
  int b, p;

  printf("To calculate a^b, first type value 'a' then 'b'\n");
  scanf("%d %d", &b, &p);
  printf("Answer is - %d", power(b, p));
  return 0;
}
