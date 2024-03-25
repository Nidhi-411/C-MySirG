#include <stdio.h>
#include <conio.h>
int main()
{
   int number,first digit;
   printf("enter the number=");
   scanf("%d",number);
   first digit = number /100;
   printf("first digit %d ",first digit);
   getch();
}
