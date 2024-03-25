#include <conio.h>
#include <stdio.h>
float area (int);
float circumference (int);
main()
{
    int x;
    float s,c;
    printf ("Enter the radius of the circle");
    scanf("%d",&x);
     s=area(x);
     printf ( "Area is %f",s);
     c=circumference(x);
     printf ( "\n the circumference is %f",c);
     getch();
}
float area (int x)
{
    float a;
    a=3.14*x*x;
    return a;
}
float circumference (int x)
{
    float cr;
    cr=3.14*2*x;
    return cr;
}
