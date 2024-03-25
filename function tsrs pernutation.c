#include <stdio.h>
#include <conio.h>
int permutation (int ,int);
// number of possible arrangements of things in a set npr=n!/(n-r)!
// n = total number of objects   r= number of objects selected
main()
{
    int n,r,P;
    printf ("Enter the  toatal number of objects " );
    scanf ( "%d", &n);
    printf ("Enter the  objects selected ");
     scanf ("%d",&r);
     P= permutation(n,r);
     printf ("permutation is = %d",P);
     getch();
    }
int permutation (int x, int y)
{
    int fac1=1, fac2=1, p,m;
    while (x>=1)
    {
        fac1*=x;
        x--;
    }
    m=x-y;
    while(m>=1)
    {
        fac2*=m;
        m--;
    }
    p = fac1/fac2;
    return p;
}
