int occurance_char (char*, char );
int occ_first_ind (char*,char );


#include <stdio.h>
#include <conio.h>
#include <string.h>
 void main()
{
    char str[50],a;
    int O,I;
    printf("Enter the string\n");
    gets(str);
    printf("Enter the charactor\n");
    scanf("%c",&a);
    O=occurance_char(str,a);
    printf("\nthe occurance of charactor %c is %d\n",a,O);
    I=occ_first_ind(str,a);
    printf("\nindex number of first occurance of given charactor is %d\n",I);
    getch();
}
    int occurance_char (char*s , char ch)
    {
        int i ,t=0,l;
        l=strlen(s);
        for (i=0;i<l;i++)
        {
            if(*(s+i)==ch)
                t++;
        }
        return t;
    }
    int occ_first_ind (char*s,char ch)
{
    int i,l,count;
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(*(s+i)==ch)
        {
            count=1;
            break;
        }
    }
    if(count !=0)
        return i;
    else
        return 0;
}
