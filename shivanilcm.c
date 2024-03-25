#include <stdio.h>
#include<conio.h>
// least common multiple == value that is completly divisible by both numbers
// multiple of 2=2,4,6,8,9,10,12,14,.......
// multiple of 6=6,12,18,24,30.......
// common multiple is  6     it imposible to find highest multiple
int main()
{
    int i,x,y;
    printf("enter two number");
    scanf("%d%d",&x,&y);
    for(i=1;;i++)
    {
        if((i%x)==0 && (i%y)==0 )
        {
            printf("LCM is %d",i);
            break;
        }
    }getch();
}
