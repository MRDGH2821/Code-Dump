#include <simplecpp>
#include <stdio.h>
main_program
{
  int a[5], i, key, found = 0;
  for (i = 0; i < 5; i++)
    {
      scanf("%d", &a[i]);
    }
  printf("Enter search element");
  scanf("%d", &key);
  if (found == 0)
    {
      for (i = 0; i < 5; i++)
        {
          if (a[i] == key)
            {
              printf("Element present");
              printf("position of element is%d", i);
              found = 1;
            }
        }
      if (a[i] != key)
        printf("Element absent");
    }
}



