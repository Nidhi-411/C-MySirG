# include <stdio.h>
# include <conio.h>
 int main()
{
    int i,n;
    printf("enter a number");
    scanf("%d",&n);
   for (i=2;i<n;i++)

      {
          if(n%i==0)
          {
         printf("%d is not a prime",n);
           exit(1);
          }
       else
       {printf ("%d is  prime",n);
       exit(1);
       }
      }
   getch();
   }
