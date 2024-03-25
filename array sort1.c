#include <stdio.h>
#include <conio.h>

main()
{
    int i,a[10];
    printf ("Enter 10 numbers");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    sort(a,10);
}
void sort (int b[],int size)
{
    int i,r,t;
    for (r=1;r<=size-1;r++)
    {
    for(i=0;i<=size-r-1;i++)
   {
       if (b[i]>=b[i+1])
       {
        t=b[i];
        b[i]=b[i+1];
        b[i+1]=t;
       }
   }
    }
    printf ("array after sorting");
    for (i=0;i<=size-1;i++)
    printf ("\n%d",b[i]);

    getch();
}
