//implement linear search
#include <stdio.h>

int main()
{
  int i, a[10], key;

  printf("Enter 10 elements\n");
  for (i = 0; i < 10; i++)
    {
      scanf("%d", a + i);
    }

  printf("Enter element to be found:");
  scanf("%d", &key);
  i = 0;
  while (key != a[i])
    {
      i++;
    }

  if (i > 9)
    printf("Element not found\n");
  else
    printf("Element found at index %d\n", i);
}
