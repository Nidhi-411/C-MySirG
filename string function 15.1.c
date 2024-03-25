// function to compare two strings
#include <stdio.h>
#include<conio.h>
#include<string.h>
void compare (char*,char*);
main()
{
    char str1[50],str2[50];
    printf ("\nEnter first string\n");
    gets(str1);
    printf("Enter second string\n");
    gets(str2);
    compare(str1,str2);
    getch();
}
void compare (  char*s1 ,char*s2)
{
    int i,l,t;
    l=strlen(s1);
    for(i=0;i<l;i++)
    {
        if(*(s1+i)<*(s2+i))
           {
            printf("in dictionay order");
            break;
           }

           if(*(s1+i)>*(s2+i))
           {
            printf("oposite to dictionary order");
            break;
           }

          }
          if(i==l)
            printf("equal strings");

  getch();
}
