#include <stdio.h>
#include <conio.h>
int main()
{
    int n,n1,n2,n3;
    printf("enter three digit number:\n");
    scanf("%d",&n);
    n1= n%10;
    n2= (n%100) /10;
    n3= n/100;
    printf("right rotate number %d%d%d",n1,n2,n3);
    getch();
}

