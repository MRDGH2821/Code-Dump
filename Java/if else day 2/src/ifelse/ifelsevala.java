package ifelse;
import java.util.Scanner;
public class ifelsevala
{
public static void main(String[] args)
{
  /*	Scanner input=new Scanner(System.in);
     }
     }*/
  Scanner input = new Scanner(System.in);
  int arr[] = new int[10];
  int sm = 0;

  System.out.println("Enter 10 numbers");
  for (int k1 : arr)
    {
      arr[k1] = input.nextInt();

      sm = sm + arr[k1];
    }
  System.out.println(sm);
}
}
/*int sum=0,r;
   }
   int n=1276;
   int c=n;
                while(n>0)
                {
                        r=n%10;
                        sum=sum*10+r;
                        n=n/10;
   }
   if(sum==c)
   System.out.println("palindrome no");
   else
        System.out.println("not a palindrome no");
 */
/*String a="2891";
   int flag=0;
   int i=0, j=a.length()-1;
   while (i<a.length())
   {
        char ch=a.charAt(i);
        char ln=a.charAt(j);
        if(ch==ln)
        { i++;
          j--;
        }
        else
        {
                flag=1;
                break;
        }
   }
   if (flag==1)
   {System.out.println("Not palindrome");
   }
   else
        System.out.println("Palindrome");

   }

   }*/


