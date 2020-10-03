#include <stdio.h>
#include <simplecpp>
main_program
{
  float marks[5], average;

  printf("Enter marks obtained in subject 1: ");
  scanf("%f", &marks[0]);
  printf("Enter marks obtained in subject 2: ");
  scanf("%f", &marks[1]);
  printf("Enter marks obtained in subject 3: ");
  scanf("%f", &marks[2]);
  printf("Enter marks obtained in subject 4: ");
  scanf("%f", &marks[3]);
  printf("Enter marks obtained in subject 5: ");
  scanf("%f", &marks[4]);

  average = (marks[0] + marks[1] + marks[2] + marks[3] + marks[4]) / 5;
  printf("Average : %0.2f\n", average);

  if (average >= 90)
    printf("Grade A");

  else if (average >= 80)
    printf("Grade B");

  else if (average >= 70)
    printf("Grade C");

  else if (average >= 60)
    printf("Grade D");

  else
    printf("Grade F");

  return 0;
}
