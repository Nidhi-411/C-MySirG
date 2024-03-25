
#include <conio.h>
#include <stdio.h>
main()
{   int a[10];
    input(a,10);
    rotate (a,10);
    printf ("array after roatating");
    display (a,10);
}
void input(int b[],int size)
{
int i;
printf ("Enter 10 numbers");
for (i=0;i<=size-1;i++)
    scanf("%d",&b[i]);
}
void display (int b[],int size)
{
    int i;
    for (i=0;i<=size-1;i++)
        printf( " %d",b[i]);
}
void rotate (int b[],int size)
{
    int t, i=1;
   t=b[size-1];
    for (i=1;i<=size-1;i++)
        b[size-i]=b[size-i-1];
        b[0]=t;
}
