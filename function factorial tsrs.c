#include <conio.h>
#include <stdio.h>
int factorial (int);
main()
{
    int x,s;
    printf ("Enter the number");
    scanf("%d",&x);
    s= factorial (x);
    printf("factorial of %d is =%d",x,s);
    getch();
}
int factorial (int a )
{
    int fac=1;
    while (a>=1)
    {
        fac*=a;
        a--;
    }
    return fac;
}
