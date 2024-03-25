# include <stdio.h>
# include <conio.h>
 main()
{
    int n;
    printf("Enter a number");
    scanf("%d",&n);
    printf("reverse digit of a number %d%d%d",n%10,(n%100)/10,n/100);
    getch();
    }

