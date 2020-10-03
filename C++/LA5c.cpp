#include <stdio.h>
int main()
{
  int a[4];
  int i, j, t, z, f;

  printf("Enter Nos..");



  for (i = 0; i < 4; i++)
    {
      scanf("%d", &a[i]);
    }
  /*for(i=0; i<4; i++)
     {

     printf("%d\n",a[i]);
     }*/
  for (z = 0; z < 4; z++)
    {
      for (j = 0; j < 4; j++)
        {
          if (a[j] > a[j + 1])

            {
              t = a[j];
              a[j] = a[j + 1];
              a[j + 1] = t;
            }

//cout<<"Elements After Sorting";
        }
    }

  printf("Type the element u want to seacrch in ascending form...\n");
  scanf("%d", &f);
  switch (f)
    {
    case 1:
      printf("%d", a[0]);
      break;

    case 2:
      printf("%d", a[1]);
      break;

    case 3:
      printf("%d", a[2]);
      break;

    case 4:
      printf("%d", a[3]);
      break;

    default:
      printf("typer proper no");
    }
  return 0;
}