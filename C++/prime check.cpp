#include <simplecpp>
main_program
{
  int n;
  printf("Enter a no. to check prime or not : \n")
  scanf("%d", &n);
  if (n == 2)
    printf("2 Is a prime number");
  else
    goto f;
 f: for (int i = 2; i < n; i++)

    if (n % i != 0)
      {
        printf("Entered no. is a prime no. \n");
      }
    else
      {
        printf("Entered no. is not a prime no. \n");
        break;
      }
}
