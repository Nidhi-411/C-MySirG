#include <stdio.h>
#include <conio.h>
main()
{
    int a[10];
    input (a,10);
    display (a,10);
    reverse (a,10);
    display (a,10);

}
void input (int b[],int size)
{
    int i;
    printf ("Enter 10 numbers ");
    for (i=0;i<=size-1;i++)
        scanf ("%d",&b[i]);
}
void display (int b[],int size)
{ int i;
for (i=0;i<=size-1;i++)
    printf ("\n%d",b[i]);
}

void reverse (int b[],int size)
{
    int i,t;
    for (i=0;i<=size/2;i++)
    {
        t=b[i];
        b[i]=b[size-i-1];
        b[size-1-i]=t;
    }
}
