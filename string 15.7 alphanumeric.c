void alphanum (char*);
#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
    char str[50];
    printf("Enter a string");
    gets(str);
    alphanum(str);
}
 void alphanum (char*p)
{
    int i,l,t=0,s=0;
    l=strlen(p);
    for(i=0;i<=l-1;i++)
    {
        if(*(p+i)>='0'&&*(p+i)<='9')
            t=1;
        if((*(p+i)>='a'&&*(p+i)<='z')||(*(p+i)>='A'&&*(p+i)<='Z'))
            s=1;
    }

if(t!=0&&s!=0)
printf(" alphanumerical");
else
    printf(" not alphnum..");
    getch();
}
