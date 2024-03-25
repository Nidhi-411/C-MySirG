# include <stdio.h>
# include <conio.h>
 int main()
 {
    int x,i=2;
     printf("enter the number");
     scanf("%d",&x);
   while (i<=x)
   if (x%i==0)
   printf("not prime");
   else
   printf("prime");
   exit(1);
   getch();

   }
