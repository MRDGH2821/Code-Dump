#include <stdio.h>
int main()
{
  double i, j;

  scanf("%lf%lf", &i, &j);
  printf("+= %lf\n", i + j);
  printf("-= %lf\n", i - j);
  printf("/= %lf\n", i / j);
  printf("*= %lf\n", i * j);
//printf("rem= %f\n",i%j);
}
