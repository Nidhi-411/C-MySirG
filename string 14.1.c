#include <stdio.h>
#include<conio.h>
#include<string.h>
main()
{
    char str[50],ch;
    int i,t=0;
    printf("Enter the string");
    gets(str);
    printf("Enter the charactor");
    scanf("%c",&ch);
     for (i=0;i<strlen(str);i++)
        {        if ( str[i] == ch)
                  t++;
        }
printf(" Occurence is %d",t);
getch();
}
