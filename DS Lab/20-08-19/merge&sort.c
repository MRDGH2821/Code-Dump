/*
   Name: Mihir Rabade
   Div:C Rollno.:42

   Problem Statement:
   WAP to merge two sorted array and display resultatnt array. Resultant array should be Sorted one.
 */
#include <stdio.h>

void bubble_sort(int a[], int size)
{
  int temp, i, j;

  for (i = 0; i < size; i++)
    {
      for (j = 0; j < size - 1; j++)
        {
          if (a[j] > a[j + 1])
            {
              temp = a[j];
              a[j] = a[j + 1];
              a[j + 1] = temp;
            }
        }
    }
}

int main()
{
  int a[6], b[6], result[12];

  //Inputing Array Elements
  printf("\nEnter array elements for 1st array\n");
  for (int i = 0; i < 6; i++)
    {
      scanf("%d", &a[i]);
    }
  ;
  printf("\nEnter array elements for 2nd array\n");
  for (int i = 0; i < 6; i++)
    {
      scanf("%d", &b[i]);
    }
  ;
  //Sorting arrays
  printf("\nSorting arrays both arrays\n");
  bubble_sort(a, 6);
  bubble_sort(b, 6);

  printf("\nArray 1:\n");
  for (int i = 0; i < 6; i++)
    {
      printf("%d ", a[i]);
    }
  ;

  printf("\nArray 2:\n");
  for (int i = 0; i < 6; i++)
    {
      printf("%d ", b[i]);
    }
  ;

  //Merging arrays into 1 and sorting it
  for (int i = 0; i < 6; i++)
    {
      result[i] = a[i];
      result[6 + i] = b[i];
    }
  ;

  bubble_sort(result, 12);
  printf("\n\nMerged and sorted Array:\n");
  for (int i = 0; i < 12; i++)
    {
      printf("%d ", result[i]);
    }
  ;
  printf("\n");
  return 0;
}
