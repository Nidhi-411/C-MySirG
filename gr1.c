#include<stdio.h>
#include<conio.h>
int a=10;
int b=20;
void main()
{
    int n,p=23;
    static int s=2;
    printf("%d\n%d",&n,&p);
    printf("\n%d\n%d",&a,&b);
    printf("\n%d",&s);
    n=0;
    getch();
}
