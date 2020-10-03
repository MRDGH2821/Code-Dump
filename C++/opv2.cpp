#include <stdio.h>

int i, j;

int add(int a, int b)
{
  printf("+= %d\n", a + b);
}

int main()
{
  scanf("%d%d", &i, &j);

  {
    add(i, j);
    printf("-= %d\n", i - j);
    printf("/= %f\n", (float)i / (float)j);
    printf("*= %d\n", i * j);
    printf("rem= %f\n", i % j);
  }


  return 0;
}
