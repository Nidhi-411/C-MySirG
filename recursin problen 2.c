#include <stdio.h>
#include <conio.h>
int sumis ( int );
main ()
{
    int x,p;
    printf("enter the number");
    p=sumis(x);
    printf ("sum of %d numbers is %d",x,p);
}
int sumis (int n)
{
    int S ;
    if (n==1)
        return 1;
    S=n+sumis(n-1);
    return S;
}
