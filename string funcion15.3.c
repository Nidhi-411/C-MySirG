
//function to capitlize a string
char* capit (char*);
#include<stdio.h>
#include<conio.h>
main()
{
    char str[50];
    printf("Enter a string");
    gets(str);
    printf("\n%s\n",str);
    strcpy(str,capit(str));
    printf("\n%s\n",str);

}
char* capit (char*s)
{   char*p;
    int i,l;
    l=strlen(s);

    for(i=0;i<l;i++)
    {
        if(*(s+i)<='z'&&*(s+i)>='a')
            printf("%c",*(s+i)-32);
        else
            printf("%c",*(s+i));
    }
    return p;

}
