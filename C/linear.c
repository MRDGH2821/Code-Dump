#include <stdio.h>
int main()
{
  int array[10];
  int i, num, keynum;

  printf("Enter the number of elements\n");
  scanf("%d", &num);
  printf("Enter the number one by one\n");

  for (i = 0; i < num; i++)
    {
      scanf("%d", &array[i]);
    }
  printf("Enter the elements to be searched\n");
  scanf("%d", &keynum);

  for (i = 0; i < num; i++)
    {
      if (keynum == array[i])
        {
          printf("Location of the elenent is %d", i + 1);
          break;
        }
    }
}
