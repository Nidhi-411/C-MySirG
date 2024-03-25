#include<conio.h>
#include<stdio.h>
int sum(int);
main()
{
    int x,s;
    printf ("Enter the number");
    scanf("%d",&x);
    s=sum(x);
    printf("sum of %d natural number =%d",x,s);
    getch();
}
int sum (int a )
{
    int sum=0,i=1;
    while(i<=a)
    {
        sum+=i;
        i++;
    }
      return sum;
}
