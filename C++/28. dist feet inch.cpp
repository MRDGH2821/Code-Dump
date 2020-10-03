#include <stdio.h>
#include <simplecpp>
struct Distance {
  int feet;
  float inch;
} d1, d2, sm;

main_program
{
  printf("Enter information for 1st distance\n");
  printf("Enter feet: ");
  scanf("%d", &d1.feet);
  printf("Enter inch: ");
  scanf("%f", &d1.inch);
  printf("\nEnter information for 2nd distance\n");
  printf("Enter feet: ");
  scanf("%d", &d2.feet);
  printf("Enter inch: ");
  scanf("%f", &d2.inch);
  sm.feet = d1.feet + d2.feet;
  sm.inch = d1.inch + d2.inch;
  if (sm.inch > 12.0)
    {
      sm.inch = sm.inch - 12.0;
      ++sm.feet;
    }

  printf("\nSum of distances = %d feet %.1f inch", sm.feet, sm.inch);
  return 0;
}
